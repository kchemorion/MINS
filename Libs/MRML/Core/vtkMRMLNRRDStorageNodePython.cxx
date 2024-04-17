// python wrapper for vtkMRMLNRRDStorageNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLNRRDStorageNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLNRRDStorageNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLNRRDStorageNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorageNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorageNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorageNode_ClassNew
#endif

static PyObject *
PyvtkMRMLNRRDStorageNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLNRRDStorageNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLNRRDStorageNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLNRRDStorageNode *tempr = vtkMRMLNRRDStorageNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNRRDStorageNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLNRRDStorageNode::NewInstance());

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
PyvtkMRMLNRRDStorageNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLNRRDStorageNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLNRRDStorageNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLNRRDStorageNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

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
      op->vtkMRMLNRRDStorageNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLNRRDStorageNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_GetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCenterImage() :
      op->vtkMRMLNRRDStorageNode::GetCenterImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_SetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterImage(temp0);
    }
    else
    {
      op->vtkMRMLNRRDStorageNode::SetCenterImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_ParseDiffusionInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParseDiffusionInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  vtkTeemNRRDReader *temp0 = nullptr;
  vtkDoubleArray *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTeemNRRDReader") &&
      ap.GetVTKObject(temp1, "vtkDoubleArray") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray"))
  {
    int tempr = (ap.IsBound() ?
      op->ParseDiffusionInformation(temp0, temp1, temp2) :
      op->vtkMRMLNRRDStorageNode::ParseDiffusionInformation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_CanReadInReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadInReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadInReferenceNode(temp0) :
      op->vtkMRMLNRRDStorageNode::CanReadInReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_ConfigureForDataExchange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureForDataExchange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConfigureForDataExchange();
    }
    else
    {
      op->vtkMRMLNRRDStorageNode::ConfigureForDataExchange();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_GetCompressionParameterFastest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionParameterFastest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCompressionParameterFastest() :
      op->vtkMRMLNRRDStorageNode::GetCompressionParameterFastest());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_GetCompressionParameterNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionParameterNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCompressionParameterNormal() :
      op->vtkMRMLNRRDStorageNode::GetCompressionParameterNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLNRRDStorageNode_GetCompressionParameterMinimumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionParameterMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLNRRDStorageNode *op = static_cast<vtkMRMLNRRDStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCompressionParameterMinimumSize() :
      op->vtkMRMLNRRDStorageNode::GetCompressionParameterMinimumSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLNRRDStorageNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLNRRDStorageNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLNRRDStorageNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLNRRDStorageNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLNRRDStorageNode\nC++: static vtkMRMLNRRDStorageNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLNRRDStorageNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLNRRDStorageNode\nC++: vtkMRMLNRRDStorageNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLNRRDStorageNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLNRRDStorageNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLNRRDStorageNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLNRRDStorageNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLNRRDStorageNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Storage, Model)\n"},
  {"GetCenterImage", PyvtkMRMLNRRDStorageNode_GetCenterImage, METH_VARARGS,
   "GetCenterImage(self) -> int\nC++: virtual int GetCenterImage()\n\nCenter image on read\n"},
  {"SetCenterImage", PyvtkMRMLNRRDStorageNode_SetCenterImage, METH_VARARGS,
   "SetCenterImage(self, _arg:int) -> None\nC++: virtual void SetCenterImage(int _arg)\n\n"},
  {"ParseDiffusionInformation", PyvtkMRMLNRRDStorageNode_ParseDiffusionInformation, METH_VARARGS,
   "ParseDiffusionInformation(self, reader:vtkTeemNRRDReader,\n    grad:vtkDoubleArray, bvalues:vtkDoubleArray) -> int\nC++: int ParseDiffusionInformation(vtkTeemNRRDReader *reader,\n    vtkDoubleArray *grad, vtkDoubleArray *bvalues)\n\nAccess the nrrd header fields to create a diffusion gradient\ntable\n"},
  {"CanReadInReferenceNode", PyvtkMRMLNRRDStorageNode_CanReadInReferenceNode, METH_VARARGS,
   "CanReadInReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanReadInReferenceNode(vtkMRMLNode *refNode) override;\n\nReturn true if the node can be read in.\n"},
  {"ConfigureForDataExchange", PyvtkMRMLNRRDStorageNode_ConfigureForDataExchange, METH_VARARGS,
   "ConfigureForDataExchange(self) -> None\nC++: void ConfigureForDataExchange() override;\n\nConfigure the storage node for data exchange. This is an\nopportunity to optimize the storage node's settings, for instance\nto turn off compression.\n"},
  {"GetCompressionParameterFastest", PyvtkMRMLNRRDStorageNode_GetCompressionParameterFastest, METH_VARARGS,
   "GetCompressionParameterFastest(self) -> str\nC++: std::string GetCompressionParameterFastest()\n\nCompression parameter corresponding to minimum compression (fast)\n"},
  {"GetCompressionParameterNormal", PyvtkMRMLNRRDStorageNode_GetCompressionParameterNormal, METH_VARARGS,
   "GetCompressionParameterNormal(self) -> str\nC++: std::string GetCompressionParameterNormal()\n\nCompression parameter corresponding to normal compression\n"},
  {"GetCompressionParameterMinimumSize", PyvtkMRMLNRRDStorageNode_GetCompressionParameterMinimumSize, METH_VARARGS,
   "GetCompressionParameterMinimumSize(self) -> str\nC++: std::string GetCompressionParameterMinimumSize()\n\nCompression parameter corresponding to maximum compression (slow)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLNRRDStorageNode_Doc =
  "vtkMRMLNRRDStorageNode - MRML node for representing a volume storage.\n\n"
  "Superclass: vtkMRMLStorageNode\n\n"
  "vtkMRMLNRRDStorageNode nodes describe the archetype based volume\n"
  "storage node that allows to read/write volume data from/to file using\n"
  "generic ITK mechanism.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLNRRDStorageNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLNRRDStorageNode", // tp_name
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
  PyvtkMRMLNRRDStorageNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLNRRDStorageNode_StaticNew()
{
  return vtkMRMLNRRDStorageNode::New();
}

PyObject *PyvtkMRMLNRRDStorageNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLNRRDStorageNode_Type, PyvtkMRMLNRRDStorageNode_Methods,
    "vtkMRMLNRRDStorageNode",
 &PyvtkMRMLNRRDStorageNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorageNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLNRRDStorageNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLNRRDStorageNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLNRRDStorageNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

