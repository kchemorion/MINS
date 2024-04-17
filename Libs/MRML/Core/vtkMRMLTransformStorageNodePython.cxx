// python wrapper for vtkMRMLTransformStorageNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLTransformStorageNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLTransformStorageNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLTransformStorageNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorageNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorageNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorageNode_ClassNew
#endif

static PyObject *
PyvtkMRMLTransformStorageNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTransformStorageNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLTransformStorageNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLTransformStorageNode *tempr = vtkMRMLTransformStorageNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTransformStorageNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLTransformStorageNode::NewInstance());

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
PyvtkMRMLTransformStorageNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLTransformStorageNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLTransformStorageNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLTransformStorageNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLTransformStorageNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

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
      op->vtkMRMLTransformStorageNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_InitializeSupportedWriteFileTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSupportedWriteFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSupportedWriteFileTypes();
    }
    else
    {
      op->vtkMRMLTransformStorageNode::InitializeSupportedWriteFileTypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_CanReadInReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadInReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadInReferenceNode(temp0) :
      op->vtkMRMLTransformStorageNode::CanReadInReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_GetPreferITKv3CompatibleTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferITKv3CompatibleTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreferITKv3CompatibleTransforms() :
      op->vtkMRMLTransformStorageNode::GetPreferITKv3CompatibleTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_SetPreferITKv3CompatibleTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferITKv3CompatibleTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreferITKv3CompatibleTransforms(temp0);
    }
    else
    {
      op->vtkMRMLTransformStorageNode::SetPreferITKv3CompatibleTransforms(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_PreferITKv3CompatibleTransformsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreferITKv3CompatibleTransformsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreferITKv3CompatibleTransformsOn();
    }
    else
    {
      op->vtkMRMLTransformStorageNode::PreferITKv3CompatibleTransformsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformStorageNode_PreferITKv3CompatibleTransformsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreferITKv3CompatibleTransformsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformStorageNode *op = static_cast<vtkMRMLTransformStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreferITKv3CompatibleTransformsOff();
    }
    else
    {
      op->vtkMRMLTransformStorageNode::PreferITKv3CompatibleTransformsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTransformStorageNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLTransformStorageNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLTransformStorageNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLTransformStorageNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLTransformStorageNode\nC++: static vtkMRMLTransformStorageNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLTransformStorageNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLTransformStorageNode\nC++: vtkMRMLTransformStorageNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLTransformStorageNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLTransformStorageNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLTransformStorageNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"GetNodeTagName", PyvtkMRMLTransformStorageNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Storage, Transform)\n"},
  {"Copy", PyvtkMRMLTransformStorageNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"InitializeSupportedWriteFileTypes", PyvtkMRMLTransformStorageNode_InitializeSupportedWriteFileTypes, METH_VARARGS,
   "InitializeSupportedWriteFileTypes(self) -> None\nC++: void InitializeSupportedWriteFileTypes() override;\n\nInitialize all the supported write file types\n"},
  {"CanReadInReferenceNode", PyvtkMRMLTransformStorageNode_CanReadInReferenceNode, METH_VARARGS,
   "CanReadInReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanReadInReferenceNode(vtkMRMLNode *refNode) override;\n\nSupport only transform nodes\n"},
  {"GetPreferITKv3CompatibleTransforms", PyvtkMRMLTransformStorageNode_GetPreferITKv3CompatibleTransforms, METH_VARARGS,
   "GetPreferITKv3CompatibleTransforms(self) -> int\nC++: virtual int GetPreferITKv3CompatibleTransforms()\n\nIf true then BSpline transforms will be written as deprecated but\nITKv3-compatible itk::BSplineDeformableTransform (instead of\ncurrent itk::BSplineTransform). If a transform cannot be written\nto ITKv3 format, then this flag is ignored and the transform is\nwritten in ITKv4 format.\n"},
  {"SetPreferITKv3CompatibleTransforms", PyvtkMRMLTransformStorageNode_SetPreferITKv3CompatibleTransforms, METH_VARARGS,
   "SetPreferITKv3CompatibleTransforms(self, _arg:int) -> None\nC++: virtual void SetPreferITKv3CompatibleTransforms(int _arg)\n\n"},
  {"PreferITKv3CompatibleTransformsOn", PyvtkMRMLTransformStorageNode_PreferITKv3CompatibleTransformsOn, METH_VARARGS,
   "PreferITKv3CompatibleTransformsOn(self) -> None\nC++: virtual void PreferITKv3CompatibleTransformsOn()\n\n"},
  {"PreferITKv3CompatibleTransformsOff", PyvtkMRMLTransformStorageNode_PreferITKv3CompatibleTransformsOff, METH_VARARGS,
   "PreferITKv3CompatibleTransformsOff(self) -> None\nC++: virtual void PreferITKv3CompatibleTransformsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLTransformStorageNode_Doc =
  "vtkMRMLTransformStorageNode - MRML node for transform storage on disk.\n\n"
  "Superclass: vtkMRMLStorageNode\n\n"
  "Storage nodes has methods to read/write transforms to/from disk.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLTransformStorageNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLTransformStorageNode", // tp_name
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
  PyvtkMRMLTransformStorageNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLTransformStorageNode_StaticNew()
{
  return vtkMRMLTransformStorageNode::New();
}

PyObject *PyvtkMRMLTransformStorageNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLTransformStorageNode_Type, PyvtkMRMLTransformStorageNode_Methods,
    "vtkMRMLTransformStorageNode",
 &PyvtkMRMLTransformStorageNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorageNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLTransformStorageNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLTransformStorageNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLTransformStorageNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

