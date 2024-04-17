// python wrapper for vtkMRMLDiffusionTensorVolumeNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLDiffusionTensorVolumeNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDiffusionTensorVolumeNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDiffusionTensorVolumeNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDiffusionImageVolumeNode_ClassNew
extern "C" { PyObject *PyvtkMRMLDiffusionImageVolumeNode_ClassNew(); }
#define DECLARED_PyvtkMRMLDiffusionImageVolumeNode_ClassNew
#endif

static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDiffusionTensorVolumeNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeNode *op = static_cast<vtkMRMLDiffusionTensorVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDiffusionTensorVolumeNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDiffusionTensorVolumeNode *tempr = vtkMRMLDiffusionTensorVolumeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeNode *op = static_cast<vtkMRMLDiffusionTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDiffusionTensorVolumeNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDiffusionTensorVolumeNode::NewInstance());

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
PyvtkMRMLDiffusionTensorVolumeNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDiffusionTensorVolumeNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeNode *op = static_cast<vtkMRMLDiffusionTensorVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDiffusionTensorVolumeNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeNode *op = static_cast<vtkMRMLDiffusionTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLDiffusionTensorVolumeNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeNode *op = static_cast<vtkMRMLDiffusionTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLDiffusionTensorVolumeNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeNode *op = static_cast<vtkMRMLDiffusionTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLDiffusionTensorVolumeNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_SetAndObserveDisplayNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveDisplayNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeNode *op = static_cast<vtkMRMLDiffusionTensorVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveDisplayNodeID(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeNode::SetAndObserveDisplayNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_GetDiffusionTensorVolumeDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionTensorVolumeDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeNode *op = static_cast<vtkMRMLDiffusionTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDiffusionTensorVolumeDisplayNode *tempr = (ap.IsBound() ?
      op->GetDiffusionTensorVolumeDisplayNode() :
      op->vtkMRMLDiffusionTensorVolumeNode::GetDiffusionTensorVolumeDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeNode *op = static_cast<vtkMRMLDiffusionTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLDiffusionTensorVolumeNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorVolumeNode_CreateDefaultDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorVolumeNode *op = static_cast<vtkMRMLDiffusionTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultDisplayNodes();
    }
    else
    {
      op->vtkMRMLDiffusionTensorVolumeNode::CreateDefaultDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDiffusionTensorVolumeNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDiffusionTensorVolumeNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDiffusionTensorVolumeNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDiffusionTensorVolumeNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLDiffusionTensorVolumeNode\nC++: static vtkMRMLDiffusionTensorVolumeNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDiffusionTensorVolumeNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDiffusionTensorVolumeNode\nC++: vtkMRMLDiffusionTensorVolumeNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDiffusionTensorVolumeNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDiffusionTensorVolumeNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLDiffusionTensorVolumeNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLDiffusionTensorVolumeNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"HasCopyContent", PyvtkMRMLDiffusionTensorVolumeNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"SetAndObserveDisplayNodeID", PyvtkMRMLDiffusionTensorVolumeNode_SetAndObserveDisplayNodeID, METH_VARARGS,
   "SetAndObserveDisplayNodeID(self, DisplayNodeID:str) -> None\nC++: virtual void SetAndObserveDisplayNodeID(\n    const char *DisplayNodeID)\n\nAssociated volume display MRML node\n"},
  {"GetDiffusionTensorVolumeDisplayNode", PyvtkMRMLDiffusionTensorVolumeNode_GetDiffusionTensorVolumeDisplayNode, METH_VARARGS,
   "GetDiffusionTensorVolumeDisplayNode(self)\n    -> vtkMRMLDiffusionTensorVolumeDisplayNode\nC++: virtual vtkMRMLDiffusionTensorVolumeDisplayNode *GetDiffusionTensorVolumeDisplayNode(\n    )\n\nAssociated display MRML node\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLDiffusionTensorVolumeNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"CreateDefaultDisplayNodes", PyvtkMRMLDiffusionTensorVolumeNode_CreateDefaultDisplayNodes, METH_VARARGS,
   "CreateDefaultDisplayNodes(self) -> None\nC++: void CreateDefaultDisplayNodes() override;\n\nCreate and observe default display node\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDiffusionTensorVolumeNode_Doc =
  "vtkMRMLDiffusionTensorVolumeNode - MRML node for representing\ndiffusion weighted MRI volume.\n\n"
  "Superclass: vtkMRMLDiffusionImageVolumeNode\n\n"
  "Diffusion Weighted Volume nodes describe data sets that encode\n"
  "diffusion weighted images. These images are the basis for computing\n"
  "the diffusion tensor. The node is a container for the necessary\n"
  "information to interpret DW images:\n"
  "1. Gradient information.\n"
  "2. B value for each gradient.\n"
  "3. Measurement frame that relates the coordinate system where the\n"
  "   gradients are given to RAS.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDiffusionTensorVolumeNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDiffusionTensorVolumeNode", // tp_name
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
  PyvtkMRMLDiffusionTensorVolumeNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLDiffusionTensorVolumeNode_StaticNew()
{
  return vtkMRMLDiffusionTensorVolumeNode::New();
}

PyObject *PyvtkMRMLDiffusionTensorVolumeNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDiffusionTensorVolumeNode_Type, PyvtkMRMLDiffusionTensorVolumeNode_Methods,
    "vtkMRMLDiffusionTensorVolumeNode",
 &PyvtkMRMLDiffusionTensorVolumeNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDiffusionImageVolumeNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLDiffusionTensorVolumeNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDiffusionTensorVolumeNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDiffusionTensorVolumeNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

