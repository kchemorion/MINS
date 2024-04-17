// python wrapper for vtkMRMLDisplayableHierarchyLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMRMLDisplayableHierarchyLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDisplayableHierarchyLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDisplayableHierarchyLogic_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractLogic_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractLogic_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractLogic_ClassNew
#endif

static PyObject *
PyvtkMRMLDisplayableHierarchyLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDisplayableHierarchyLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyLogic *op = static_cast<vtkMRMLDisplayableHierarchyLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDisplayableHierarchyLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDisplayableHierarchyLogic *tempr = vtkMRMLDisplayableHierarchyLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyLogic *op = static_cast<vtkMRMLDisplayableHierarchyLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayableHierarchyLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDisplayableHierarchyLogic::NewInstance());

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
PyvtkMRMLDisplayableHierarchyLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDisplayableHierarchyLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyLogic *op = static_cast<vtkMRMLDisplayableHierarchyLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDisplayableHierarchyLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyLogic_AddDisplayableHierarchyNodeForNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDisplayableHierarchyNodeForNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyLogic *op = static_cast<vtkMRMLDisplayableHierarchyLogic *>(vp);

  vtkMRMLDisplayableNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode"))
  {
    char *tempr = (ap.IsBound() ?
      op->AddDisplayableHierarchyNodeForNode(temp0) :
      op->vtkMRMLDisplayableHierarchyLogic::AddDisplayableHierarchyNodeForNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyLogic_AddChildToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddChildToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyLogic *op = static_cast<vtkMRMLDisplayableHierarchyLogic *>(vp);

  vtkMRMLDisplayableNode *temp0 = nullptr;
  vtkMRMLDisplayableNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLDisplayableNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->AddChildToParent(temp0, temp1) :
      op->vtkMRMLDisplayableHierarchyLogic::AddChildToParent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDisplayableHierarchyLogic_DeleteHierarchyNodeAndChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteHierarchyNodeAndChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDisplayableHierarchyLogic *op = static_cast<vtkMRMLDisplayableHierarchyLogic *>(vp);

  vtkMRMLDisplayableHierarchyNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableHierarchyNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->DeleteHierarchyNodeAndChildren(temp0) :
      op->vtkMRMLDisplayableHierarchyLogic::DeleteHierarchyNodeAndChildren(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDisplayableHierarchyLogic_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDisplayableHierarchyLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDisplayableHierarchyLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDisplayableHierarchyLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLDisplayableHierarchyLogic\nC++: static vtkMRMLDisplayableHierarchyLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDisplayableHierarchyLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDisplayableHierarchyLogic\nC++: vtkMRMLDisplayableHierarchyLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDisplayableHierarchyLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDisplayableHierarchyLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddDisplayableHierarchyNodeForNode", PyvtkMRMLDisplayableHierarchyLogic_AddDisplayableHierarchyNodeForNode, METH_VARARGS,
   "AddDisplayableHierarchyNodeForNode(self,\n    node:vtkMRMLDisplayableNode) -> str\nC++: char *AddDisplayableHierarchyNodeForNode(\n    vtkMRMLDisplayableNode *node)\n\nCreate a 1:1 displayable hierarchy node for this node, add it to\nthe scene and return the id, null on failure\n"},
  {"AddChildToParent", PyvtkMRMLDisplayableHierarchyLogic_AddChildToParent, METH_VARARGS,
   "AddChildToParent(self, child:vtkMRMLDisplayableNode,\n    parent:vtkMRMLDisplayableNode) -> bool\nC++: bool AddChildToParent(vtkMRMLDisplayableNode *child,\n    vtkMRMLDisplayableNode *parent)\n\nCreate displayable hierarchy nodes as needed to make the child\nnode a child of the parent node (may need to add 1:1 hierarchy\nnodes for both parent and child). Return true on success, false\non failure.\n"},
  {"DeleteHierarchyNodeAndChildren", PyvtkMRMLDisplayableHierarchyLogic_DeleteHierarchyNodeAndChildren, METH_VARARGS,
   "DeleteHierarchyNodeAndChildren(self,\n    hnode:vtkMRMLDisplayableHierarchyNode) -> bool\nC++: bool DeleteHierarchyNodeAndChildren(\n    vtkMRMLDisplayableHierarchyNode *hnode)\n\nDelete the passed hierarchy node and all children hierarchy nodes\nand the associated nodes to which they point. Return true on\nsuccess, false on failure. Gets the mrml scene from the node.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDisplayableHierarchyLogic_Doc =
  "vtkMRMLDisplayableHierarchyLogic - Slicer logic class for hierarchy\nmanipulation.\n\n"
  "Superclass: vtkMRMLAbstractLogic\n\n"
  "This class manages the logic associated with displayable hierarchy\n"
  "nodes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDisplayableHierarchyLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLDisplayableHierarchyLogic", // tp_name
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
  PyvtkMRMLDisplayableHierarchyLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLDisplayableHierarchyLogic_StaticNew()
{
  return vtkMRMLDisplayableHierarchyLogic::New();
}

PyObject *PyvtkMRMLDisplayableHierarchyLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDisplayableHierarchyLogic_Type, PyvtkMRMLDisplayableHierarchyLogic_Methods,
    "vtkMRMLDisplayableHierarchyLogic",
 &PyvtkMRMLDisplayableHierarchyLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractLogic_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLDisplayableHierarchyLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDisplayableHierarchyLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDisplayableHierarchyLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

