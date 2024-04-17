// python wrapper for vtkMRMLVolumeSequenceStorageNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMRMLVolumeSequenceStorageNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLVolumeSequenceStorageNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLVolumeSequenceStorageNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNRRDStorageNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNRRDStorageNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNRRDStorageNode_ClassNew
#endif

static PyObject *
PyvtkMRMLVolumeSequenceStorageNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLVolumeSequenceStorageNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeSequenceStorageNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeSequenceStorageNode *op = static_cast<vtkMRMLVolumeSequenceStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLVolumeSequenceStorageNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeSequenceStorageNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLVolumeSequenceStorageNode *tempr = vtkMRMLVolumeSequenceStorageNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeSequenceStorageNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeSequenceStorageNode *op = static_cast<vtkMRMLVolumeSequenceStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeSequenceStorageNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLVolumeSequenceStorageNode::NewInstance());

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
PyvtkMRMLVolumeSequenceStorageNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLVolumeSequenceStorageNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeSequenceStorageNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeSequenceStorageNode *op = static_cast<vtkMRMLVolumeSequenceStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLVolumeSequenceStorageNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeSequenceStorageNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeSequenceStorageNode *op = static_cast<vtkMRMLVolumeSequenceStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLVolumeSequenceStorageNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeSequenceStorageNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeSequenceStorageNode *op = static_cast<vtkMRMLVolumeSequenceStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLVolumeSequenceStorageNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeSequenceStorageNode_CanReadInReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadInReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeSequenceStorageNode *op = static_cast<vtkMRMLVolumeSequenceStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadInReferenceNode(temp0) :
      op->vtkMRMLVolumeSequenceStorageNode::CanReadInReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeSequenceStorageNode_CanWriteFromReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanWriteFromReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeSequenceStorageNode *op = static_cast<vtkMRMLVolumeSequenceStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanWriteFromReferenceNode(temp0) :
      op->vtkMRMLVolumeSequenceStorageNode::CanWriteFromReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeSequenceStorageNode_WriteDataInternal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteDataInternal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeSequenceStorageNode *op = static_cast<vtkMRMLVolumeSequenceStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    int tempr = (ap.IsBound() ?
      op->WriteDataInternal(temp0) :
      op->vtkMRMLVolumeSequenceStorageNode::WriteDataInternal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeSequenceStorageNode_GetDefaultWriteFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultWriteFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeSequenceStorageNode *op = static_cast<vtkMRMLVolumeSequenceStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultWriteFileExtension() :
      op->vtkMRMLVolumeSequenceStorageNode::GetDefaultWriteFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLVolumeSequenceStorageNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLVolumeSequenceStorageNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLVolumeSequenceStorageNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLVolumeSequenceStorageNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLVolumeSequenceStorageNode\nC++: static vtkMRMLVolumeSequenceStorageNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLVolumeSequenceStorageNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLVolumeSequenceStorageNode\nC++: vtkMRMLVolumeSequenceStorageNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLVolumeSequenceStorageNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLVolumeSequenceStorageNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLVolumeSequenceStorageNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"GetNodeTagName", PyvtkMRMLVolumeSequenceStorageNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Storage, Model)\n"},
  {"CanReadInReferenceNode", PyvtkMRMLVolumeSequenceStorageNode_CanReadInReferenceNode, METH_VARARGS,
   "CanReadInReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanReadInReferenceNode(vtkMRMLNode *refNode) override;\n\nReturn true if the node can be read in.\n"},
  {"CanWriteFromReferenceNode", PyvtkMRMLVolumeSequenceStorageNode_CanWriteFromReferenceNode, METH_VARARGS,
   "CanWriteFromReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanWriteFromReferenceNode(vtkMRMLNode *refNode)\n    override;\n\nReturn true if the node can be written by using the writer.\n"},
  {"WriteDataInternal", PyvtkMRMLVolumeSequenceStorageNode_WriteDataInternal, METH_VARARGS,
   "WriteDataInternal(self, refNode:vtkMRMLNode) -> int\nC++: int WriteDataInternal(vtkMRMLNode *refNode) override;\n\nWrite the data. Returns 1 on success, 0 otherwise.\n\nThe nrrd file will be formatted such as: \"kinds: list domain domain\ndomain\"\n"},
  {"GetDefaultWriteFileExtension", PyvtkMRMLVolumeSequenceStorageNode_GetDefaultWriteFileExtension, METH_VARARGS,
   "GetDefaultWriteFileExtension(self) -> str\nC++: const char *GetDefaultWriteFileExtension() override;\n\nReturn a default file extension for writing\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLVolumeSequenceStorageNode_Doc =
  "vtkMRMLVolumeSequenceStorageNode - no description provided.\n\n"
  "Superclass: vtkMRMLNRRDStorageNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLVolumeSequenceStorageNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLVolumeSequenceStorageNode", // tp_name
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
  PyvtkMRMLVolumeSequenceStorageNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLVolumeSequenceStorageNode_StaticNew()
{
  return vtkMRMLVolumeSequenceStorageNode::New();
}

PyObject *PyvtkMRMLVolumeSequenceStorageNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLVolumeSequenceStorageNode_Type, PyvtkMRMLVolumeSequenceStorageNode_Methods,
    "vtkMRMLVolumeSequenceStorageNode",
 &PyvtkMRMLVolumeSequenceStorageNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNRRDStorageNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLVolumeSequenceStorageNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLVolumeSequenceStorageNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLVolumeSequenceStorageNode", o) != 0)
  {
    Py_DECREF(o);
  }

}
