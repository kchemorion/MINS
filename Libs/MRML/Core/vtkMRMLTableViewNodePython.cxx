// python wrapper for vtkMRMLTableViewNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLTableViewNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLTableViewNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLTableViewNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractViewNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractViewNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractViewNode_ClassNew
#endif

static PyObject *
PyvtkMRMLTableViewNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTableViewNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLTableViewNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLTableViewNode *tempr = vtkMRMLTableViewNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTableViewNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLTableViewNode::NewInstance());

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
PyvtkMRMLTableViewNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLTableViewNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLTableViewNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLTableViewNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

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
      op->vtkMRMLTableViewNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLTableViewNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_SetTableNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTableNodeID(temp0);
    }
    else
    {
      op->vtkMRMLTableViewNode::SetTableNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_GetTableNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTableNodeID() :
      op->vtkMRMLTableViewNode::GetTableNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_GetTableNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTableNode *tempr = (ap.IsBound() ?
      op->GetTableNode() :
      op->vtkMRMLTableViewNode::GetTableNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_SetDoPropagateTableSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDoPropagateTableSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDoPropagateTableSelection(temp0);
    }
    else
    {
      op->vtkMRMLTableViewNode::SetDoPropagateTableSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_GetDoPropagateTableSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoPropagateTableSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDoPropagateTableSelection() :
      op->vtkMRMLTableViewNode::GetDoPropagateTableSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableViewNode_GetTableNodeReferenceRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableNodeReferenceRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableViewNode *op = static_cast<vtkMRMLTableViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTableNodeReferenceRole() :
      op->vtkMRMLTableViewNode::GetTableNodeReferenceRole());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTableViewNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLTableViewNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLTableViewNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLTableViewNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLTableViewNode\nC++: static vtkMRMLTableViewNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLTableViewNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLTableViewNode\nC++: vtkMRMLTableViewNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLTableViewNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLTableViewNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLTableViewNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLTableViewNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLTableViewNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"SetTableNodeID", PyvtkMRMLTableViewNode_SetTableNodeID, METH_VARARGS,
   "SetTableNodeID(self, __a:str) -> None\nC++: void SetTableNodeID(const char *)\n\nSet the Table node id displayed in this Table View\n"},
  {"GetTableNodeID", PyvtkMRMLTableViewNode_GetTableNodeID, METH_VARARGS,
   "GetTableNodeID(self) -> str\nC++: const char *GetTableNodeID()\n\nGet the Table node id displayed in this Table View\n"},
  {"GetTableNode", PyvtkMRMLTableViewNode_GetTableNode, METH_VARARGS,
   "GetTableNode(self) -> vtkMRMLTableNode\nC++: vtkMRMLTableNode *GetTableNode()\n\nGet the Table node displayed in this Table View\n"},
  {"SetDoPropagateTableSelection", PyvtkMRMLTableViewNode_SetDoPropagateTableSelection, METH_VARARGS,
   "SetDoPropagateTableSelection(self, _arg:bool) -> None\nC++: virtual void SetDoPropagateTableSelection(bool _arg)\n\nConfigures the behavior of PropagateTableSelection(). If\nDoPropagateTableSelection set to false then this view will not be\naffected by PropagateTableSelection. Default value is true.\n"},
  {"GetDoPropagateTableSelection", PyvtkMRMLTableViewNode_GetDoPropagateTableSelection, METH_VARARGS,
   "GetDoPropagateTableSelection(self) -> bool\nC++: virtual bool GetDoPropagateTableSelection()\n\n"},
  {"GetTableNodeReferenceRole", PyvtkMRMLTableViewNode_GetTableNodeReferenceRole, METH_VARARGS,
   "GetTableNodeReferenceRole(self) -> str\nC++: virtual const char *GetTableNodeReferenceRole()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLTableViewNode_Doc =
  "vtkMRMLTableViewNode - MRML node to represent table view parameters.\n\n"
  "Superclass: vtkMRMLAbstractViewNode\n\n"
  "TableViewNodes are associated one to one with a TableWidget.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLTableViewNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLTableViewNode", // tp_name
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
  PyvtkMRMLTableViewNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLTableViewNode_StaticNew()
{
  return vtkMRMLTableViewNode::New();
}

PyObject *PyvtkMRMLTableViewNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLTableViewNode_Type, PyvtkMRMLTableViewNode_Methods,
    "vtkMRMLTableViewNode",
 &PyvtkMRMLTableViewNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractViewNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLTableViewNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLTableViewNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLTableViewNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

