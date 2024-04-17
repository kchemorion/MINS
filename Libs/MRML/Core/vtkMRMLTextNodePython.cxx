// python wrapper for vtkMRMLTextNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLTextNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLTextNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLTextNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorableNode_ClassNew
#endif

static PyObject *
PyvtkMRMLTextNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTextNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLTextNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLTextNode *tempr = vtkMRMLTextNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTextNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLTextNode::NewInstance());

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
PyvtkMRMLTextNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLTextNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLTextNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLTextNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

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
      op->vtkMRMLTextNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLTextNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLTextNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  std::string temp0;
  int temp1 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetText(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTextNode::SetText(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetText() :
      op->vtkMRMLTextNode::GetText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_SetEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEncoding(temp0);
    }
    else
    {
      op->vtkMRMLTextNode::SetEncoding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_GetEncoding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncoding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEncoding() :
      op->vtkMRMLTextNode::GetEncoding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_GetEncodingAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodingAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetEncodingAsString() :
      op->vtkMRMLTextNode::GetEncodingAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_SetForceCreateStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceCreateStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceCreateStorageNode(temp0);
    }
    else
    {
      op->vtkMRMLTextNode::SetForceCreateStorageNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_GetForceCreateStorageNodeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceCreateStorageNodeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceCreateStorageNodeMinValue() :
      op->vtkMRMLTextNode::GetForceCreateStorageNodeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_GetForceCreateStorageNodeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceCreateStorageNodeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceCreateStorageNodeMaxValue() :
      op->vtkMRMLTextNode::GetForceCreateStorageNodeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_GetForceCreateStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceCreateStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceCreateStorageNode() :
      op->vtkMRMLTextNode::GetForceCreateStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLTextNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTextNode_GetDefaultStorageNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultStorageNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTextNode *op = static_cast<vtkMRMLTextNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDefaultStorageNodeClassName(temp0) :
      op->vtkMRMLTextNode::GetDefaultStorageNodeClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTextNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLTextNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLTextNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLTextNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLTextNode\nC++: static vtkMRMLTextNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLTextNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLTextNode\nC++: vtkMRMLTextNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLTextNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLTextNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLTextNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"CopyContent", PyvtkMRMLTextNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLTextNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLTextNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"SetText", PyvtkMRMLTextNode_SetText, METH_VARARGS,
   "SetText(self, text:str, encoding:int=-1) -> None\nC++: void SetText(const std::string &text, int encoding=-1)\n\nSet text node contents and encoding. If the encoding is not\nspecified, then it will not be changed from the current value.\n\\sa SetEncoding()\n"},
  {"GetText", PyvtkMRMLTextNode_GetText, METH_VARARGS,
   "GetText(self) -> str\nC++: virtual std::string GetText()\n\n"},
  {"SetEncoding", PyvtkMRMLTextNode_SetEncoding, METH_VARARGS,
   "SetEncoding(self, encoding:int) -> None\nC++: void SetEncoding(int encoding)\n\nSet encoding of the text For character encoding, please refer\nIANA Character Sets\n(https://www.iana.org/assignments/character-sets/character-sets.xh\ntml) Default is VTK_ENCODING_US_ASCII\n"},
  {"GetEncoding", PyvtkMRMLTextNode_GetEncoding, METH_VARARGS,
   "GetEncoding(self) -> int\nC++: virtual int GetEncoding()\n\n"},
  {"GetEncodingAsString", PyvtkMRMLTextNode_GetEncodingAsString, METH_VARARGS,
   "GetEncodingAsString(self) -> str\nC++: std::string GetEncodingAsString()\n\n"},
  {"SetForceCreateStorageNode", PyvtkMRMLTextNode_SetForceCreateStorageNode, METH_VARARGS,
   "SetForceCreateStorageNode(self, _arg:int) -> None\nC++: virtual void SetForceCreateStorageNode(int _arg)\n\nForce the use of a storage node, regardless of text length. By\ndefault, a storage node will only be used for nodes that have\nbeen read from file (drag and drop), or for nodes that have text\nlonger than 250 characters. This option should be also be enabled\nfor nodes with highly structured text (such as XML) that would\nnot be good to have in the MRML.\n"},
  {"GetForceCreateStorageNodeMinValue", PyvtkMRMLTextNode_GetForceCreateStorageNodeMinValue, METH_VARARGS,
   "GetForceCreateStorageNodeMinValue(self) -> int\nC++: virtual int GetForceCreateStorageNodeMinValue()\n\n"},
  {"GetForceCreateStorageNodeMaxValue", PyvtkMRMLTextNode_GetForceCreateStorageNodeMaxValue, METH_VARARGS,
   "GetForceCreateStorageNodeMaxValue(self) -> int\nC++: virtual int GetForceCreateStorageNodeMaxValue()\n\n"},
  {"GetForceCreateStorageNode", PyvtkMRMLTextNode_GetForceCreateStorageNode, METH_VARARGS,
   "GetForceCreateStorageNode(self) -> int\nC++: virtual int GetForceCreateStorageNode()\n\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLTextNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate a storage node for this node type. If it returns nullptr\nthen it means the node can be stored in the scene (in XML),\nwithout using a storage node.\n"},
  {"GetDefaultStorageNodeClassName", PyvtkMRMLTextNode_GetDefaultStorageNodeClassName, METH_VARARGS,
   "GetDefaultStorageNodeClassName(self, filename:str=...) -> str\nC++: std::string GetDefaultStorageNodeClassName(\n    const char *filename=nullptr) override;\n\nDetermines the most appropriate storage node class for the\nprovided file name and node content.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLTextNode_Doc =
  "vtkMRMLTextNode - no description provided.\n\n"
  "Superclass: vtkMRMLStorableNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLTextNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLTextNode", // tp_name
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
  PyvtkMRMLTextNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLTextNode_StaticNew()
{
  return vtkMRMLTextNode::New();
}

PyObject *PyvtkMRMLTextNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLTextNode_Type, PyvtkMRMLTextNode_Methods,
    "vtkMRMLTextNode",
 &PyvtkMRMLTextNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorableNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "CreateStorageNodeAuto", vtkMRMLTextNode::CreateStorageNodeAuto },
        { "CreateStorageNodeAlways", vtkMRMLTextNode::CreateStorageNodeAlways },
        { "CreateStorageNodeNever", vtkMRMLTextNode::CreateStorageNodeNever },
        { "TextModifiedEvent", vtkMRMLTextNode::TextModifiedEvent },
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

void PyVTKAddFile_vtkMRMLTextNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLTextNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLTextNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

