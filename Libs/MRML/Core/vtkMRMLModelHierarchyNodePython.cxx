// python wrapper for vtkMRMLModelHierarchyNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLModelHierarchyNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLModelHierarchyNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLModelHierarchyNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDisplayableHierarchyNode_ClassNew
extern "C" { PyObject *PyvtkMRMLDisplayableHierarchyNode_ClassNew(); }
#define DECLARED_PyvtkMRMLDisplayableHierarchyNode_ClassNew
#endif

static PyObject *
PyvtkMRMLModelHierarchyNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLModelHierarchyNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLModelHierarchyNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLModelHierarchyNode *tempr = vtkMRMLModelHierarchyNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelHierarchyNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLModelHierarchyNode::NewInstance());

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
PyvtkMRMLModelHierarchyNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLModelHierarchyNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLModelHierarchyNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLModelHierarchyNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

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
      op->vtkMRMLModelHierarchyNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLModelHierarchyNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLModelHierarchyNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

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
      op->vtkMRMLModelHierarchyNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateReferenceID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLModelHierarchyNode::UpdateReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_SetModelNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModelNodeID(temp0);
    }
    else
    {
      op->vtkMRMLModelHierarchyNode::SetModelNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_GetModelNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetModelNodeID() :
      op->vtkMRMLModelHierarchyNode::GetModelNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_SetModelNodeIDReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelNodeIDReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModelNodeIDReference(temp0);
    }
    else
    {
      op->vtkMRMLModelHierarchyNode::SetModelNodeIDReference(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_GetModelNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelNode *tempr = (ap.IsBound() ?
      op->GetModelNode() :
      op->vtkMRMLModelHierarchyNode::GetModelNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_GetModelDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelDisplayNode *tempr = (ap.IsBound() ?
      op->GetModelDisplayNode() :
      op->vtkMRMLModelHierarchyNode::GetModelDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_GetCollapsedParentNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollapsedParentNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelHierarchyNode *tempr = (ap.IsBound() ?
      op->GetCollapsedParentNode() :
      op->vtkMRMLModelHierarchyNode::GetCollapsedParentNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_GetChildrenModelNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildrenModelNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->GetChildrenModelNodes(temp0);
    }
    else
    {
      op->vtkMRMLModelHierarchyNode::GetChildrenModelNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLModelHierarchyNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLModelHierarchyNode *op = static_cast<vtkMRMLModelHierarchyNode *>(vp);

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
      op->vtkMRMLModelHierarchyNode::ProcessMRMLEvents(temp0, temp1, temp2);
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

static PyMethodDef PyvtkMRMLModelHierarchyNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLModelHierarchyNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLModelHierarchyNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLModelHierarchyNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLModelHierarchyNode\nC++: static vtkMRMLModelHierarchyNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLModelHierarchyNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLModelHierarchyNode\nC++: vtkMRMLModelHierarchyNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLModelHierarchyNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLModelHierarchyNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLModelHierarchyNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLModelHierarchyNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLModelHierarchyNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, ModelHierarchy)\n"},
  {"UpdateReferences", PyvtkMRMLModelHierarchyNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nUpdates this node if it depends on other nodes when the node is\ndeleted in the scene\n"},
  {"UpdateScene", PyvtkMRMLModelHierarchyNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the model node and read the data\n"},
  {"UpdateReferenceID", PyvtkMRMLModelHierarchyNode_UpdateReferenceID, METH_VARARGS,
   "UpdateReferenceID(self, oldID:str, newID:str) -> None\nC++: void UpdateReferenceID(const char *oldID, const char *newID)\n    override;\n\nUpdate the stored reference to another node in the scene\n"},
  {"SetModelNodeID", PyvtkMRMLModelHierarchyNode_SetModelNodeID, METH_VARARGS,
   "SetModelNodeID(self, id:str) -> None\nC++: void SetModelNodeID(const char *id)\n\nString ID of the model MRML node\n"},
  {"GetModelNodeID", PyvtkMRMLModelHierarchyNode_GetModelNodeID, METH_VARARGS,
   "GetModelNodeID(self) -> str\nC++: char *GetModelNodeID()\n\n"},
  {"SetModelNodeIDReference", PyvtkMRMLModelHierarchyNode_SetModelNodeIDReference, METH_VARARGS,
   "SetModelNodeIDReference(self, ref:str) -> None\nC++: void SetModelNodeIDReference(const char *ref)\n\nNeed this for tcl wrapping to call ReferenceStringMacro methods\n"},
  {"GetModelNode", PyvtkMRMLModelHierarchyNode_GetModelNode, METH_VARARGS,
   "GetModelNode(self) -> vtkMRMLModelNode\nC++: vtkMRMLModelNode *GetModelNode()\n\nGet associated model MRML node\n"},
  {"GetModelDisplayNode", PyvtkMRMLModelHierarchyNode_GetModelDisplayNode, METH_VARARGS,
   "GetModelDisplayNode(self) -> vtkMRMLModelDisplayNode\nC++: vtkMRMLModelDisplayNode *GetModelDisplayNode()\n\nGet associated display MRML node\n"},
  {"GetCollapsedParentNode", PyvtkMRMLModelHierarchyNode_GetCollapsedParentNode, METH_VARARGS,
   "GetCollapsedParentNode(self) -> vtkMRMLModelHierarchyNode\nC++: vtkMRMLModelHierarchyNode *GetCollapsedParentNode()\n\nGet the first parent node in hierarchy which is not expanded\n"},
  {"GetChildrenModelNodes", PyvtkMRMLModelHierarchyNode_GetChildrenModelNodes, METH_VARARGS,
   "GetChildrenModelNodes(self, models:vtkCollection) -> None\nC++: void GetChildrenModelNodes(vtkCollection *models)\n\nFind all child model nodes in the hierarchy\n"},
  {"ProcessMRMLEvents", PyvtkMRMLModelHierarchyNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLModelHierarchyNode_Doc =
  "vtkMRMLModelHierarchyNode - MRML node to represent a hierarchy of\nmodels.\n\n"
  "Superclass: vtkMRMLDisplayableHierarchyNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLModelHierarchyNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLModelHierarchyNode", // tp_name
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
  PyvtkMRMLModelHierarchyNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLModelHierarchyNode_StaticNew()
{
  return vtkMRMLModelHierarchyNode::New();
}

PyObject *PyvtkMRMLModelHierarchyNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLModelHierarchyNode_Type, PyvtkMRMLModelHierarchyNode_Methods,
    "vtkMRMLModelHierarchyNode",
 &PyvtkMRMLModelHierarchyNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDisplayableHierarchyNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLModelHierarchyNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLModelHierarchyNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLModelHierarchyNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

