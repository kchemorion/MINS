// python wrapper for vtkMRMLTableStorageNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLTableStorageNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLTableStorageNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLTableStorageNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorageNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorageNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorageNode_ClassNew
#endif

static PyObject *
PyvtkMRMLTableStorageNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTableStorageNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLTableStorageNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLTableStorageNode *tempr = vtkMRMLTableStorageNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTableStorageNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLTableStorageNode::NewInstance());

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
PyvtkMRMLTableStorageNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLTableStorageNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLTableStorageNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLTableStorageNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLTableStorageNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_CanReadInReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadInReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadInReferenceNode(temp0) :
      op->vtkMRMLTableStorageNode::CanReadInReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_SetSchemaFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSchemaFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSchemaFileName(temp0);
    }
    else
    {
      op->vtkMRMLTableStorageNode::SetSchemaFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_GetSchemaFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSchemaFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSchemaFileName() :
      op->vtkMRMLTableStorageNode::GetSchemaFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_FindSchemaFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindSchemaFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->FindSchemaFileName(temp0) :
      op->vtkMRMLTableStorageNode::FindSchemaFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_SetAutoFindSchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoFindSchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoFindSchema(temp0);
    }
    else
    {
      op->vtkMRMLTableStorageNode::SetAutoFindSchema(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_GetAutoFindSchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoFindSchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoFindSchema() :
      op->vtkMRMLTableStorageNode::GetAutoFindSchema());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_AutoFindSchemaOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoFindSchemaOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoFindSchemaOn();
    }
    else
    {
      op->vtkMRMLTableStorageNode::AutoFindSchemaOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_AutoFindSchemaOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoFindSchemaOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoFindSchemaOff();
    }
    else
    {
      op->vtkMRMLTableStorageNode::AutoFindSchemaOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_SetReadLongNameAsTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadLongNameAsTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadLongNameAsTitle(temp0);
    }
    else
    {
      op->vtkMRMLTableStorageNode::SetReadLongNameAsTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_GetReadLongNameAsTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadLongNameAsTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadLongNameAsTitle() :
      op->vtkMRMLTableStorageNode::GetReadLongNameAsTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_ReadLongNameAsTitleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadLongNameAsTitleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadLongNameAsTitleOn();
    }
    else
    {
      op->vtkMRMLTableStorageNode::ReadLongNameAsTitleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTableStorageNode_ReadLongNameAsTitleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadLongNameAsTitleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTableStorageNode *op = static_cast<vtkMRMLTableStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadLongNameAsTitleOff();
    }
    else
    {
      op->vtkMRMLTableStorageNode::ReadLongNameAsTitleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTableStorageNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLTableStorageNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLTableStorageNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLTableStorageNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLTableStorageNode\nC++: static vtkMRMLTableStorageNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLTableStorageNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLTableStorageNode\nC++: vtkMRMLTableStorageNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLTableStorageNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLTableStorageNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLTableStorageNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"GetNodeTagName", PyvtkMRMLTableStorageNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Storage, Model)\n"},
  {"CanReadInReferenceNode", PyvtkMRMLTableStorageNode_CanReadInReferenceNode, METH_VARARGS,
   "CanReadInReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanReadInReferenceNode(vtkMRMLNode *refNode) override;\n\nReturn true if the node can be read in\n"},
  {"SetSchemaFileName", PyvtkMRMLTableStorageNode_SetSchemaFileName, METH_VARARGS,
   "SetSchemaFileName(self, schemaFileName:str) -> None\nC++: virtual void SetSchemaFileName(const char *schemaFileName)\n\nGet/Set schema file name, which contain description of data type\nof each column\n"},
  {"GetSchemaFileName", PyvtkMRMLTableStorageNode_GetSchemaFileName, METH_VARARGS,
   "GetSchemaFileName(self) -> str\nC++: virtual std::string GetSchemaFileName()\n\n"},
  {"FindSchemaFileName", PyvtkMRMLTableStorageNode_FindSchemaFileName, METH_VARARGS,
   "FindSchemaFileName(self, fileName:str) -> str\nC++: std::string FindSchemaFileName(const char *fileName)\n\nFinds schema file corresponding to a table file.\n"},
  {"SetAutoFindSchema", PyvtkMRMLTableStorageNode_SetAutoFindSchema, METH_VARARGS,
   "SetAutoFindSchema(self, _arg:bool) -> None\nC++: virtual void SetAutoFindSchema(bool _arg)\n\nIf enabled and schema filename is not specified then when the\ndata is read, an attempt will be made to find and load a schema\nfile.\n"},
  {"GetAutoFindSchema", PyvtkMRMLTableStorageNode_GetAutoFindSchema, METH_VARARGS,
   "GetAutoFindSchema(self) -> bool\nC++: virtual bool GetAutoFindSchema()\n\n"},
  {"AutoFindSchemaOn", PyvtkMRMLTableStorageNode_AutoFindSchemaOn, METH_VARARGS,
   "AutoFindSchemaOn(self) -> None\nC++: virtual void AutoFindSchemaOn()\n\n"},
  {"AutoFindSchemaOff", PyvtkMRMLTableStorageNode_AutoFindSchemaOff, METH_VARARGS,
   "AutoFindSchemaOff(self) -> None\nC++: virtual void AutoFindSchemaOff()\n\n"},
  {"SetReadLongNameAsTitle", PyvtkMRMLTableStorageNode_SetReadLongNameAsTitle, METH_VARARGS,
   "SetReadLongNameAsTitle(self, _arg:bool) -> None\nC++: virtual void SetReadLongNameAsTitle(bool _arg)\n\nLoad legacy \"longName\" property as \"title\". Enable for loading an\nold table file that used \"longName\" property to store column\ntitle. Disabled by default, as \"longName\" is often too long to be\nused as title.\n"},
  {"GetReadLongNameAsTitle", PyvtkMRMLTableStorageNode_GetReadLongNameAsTitle, METH_VARARGS,
   "GetReadLongNameAsTitle(self) -> bool\nC++: virtual bool GetReadLongNameAsTitle()\n\n"},
  {"ReadLongNameAsTitleOn", PyvtkMRMLTableStorageNode_ReadLongNameAsTitleOn, METH_VARARGS,
   "ReadLongNameAsTitleOn(self) -> None\nC++: virtual void ReadLongNameAsTitleOn()\n\n"},
  {"ReadLongNameAsTitleOff", PyvtkMRMLTableStorageNode_ReadLongNameAsTitleOff, METH_VARARGS,
   "ReadLongNameAsTitleOff(self) -> None\nC++: virtual void ReadLongNameAsTitleOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLTableStorageNode_Doc =
  "vtkMRMLTableStorageNode - MRML node for handling Table node storage\n\n"
  "Superclass: vtkMRMLStorageNode\n\n"
  "vtkMRMLTableStorageNode allows reading/writing of table node from to\n"
  "comma or tab-separated files.\n\n"
  "If the file extension is .tsv or .txt then it is assumed to be\n"
  "tab-separated. Values in tab-separated files may not contain tabs but\n"
  "may contain any other characters (including commas and quotation\n"
  "marks).\n\n"
  "If the file extension is .csv then it is assumed to be\n"
  "comma-separated. Values in comma-separated files may not contain\n"
  "quotation marks but may contain any other characters (including\n"
  "commas and tabs).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLTableStorageNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLTableStorageNode", // tp_name
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
  PyvtkMRMLTableStorageNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLTableStorageNode_StaticNew()
{
  return vtkMRMLTableStorageNode::New();
}

PyObject *PyvtkMRMLTableStorageNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLTableStorageNode_Type, PyvtkMRMLTableStorageNode_Methods,
    "vtkMRMLTableStorageNode",
 &PyvtkMRMLTableStorageNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorageNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLTableStorageNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLTableStorageNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLTableStorageNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

