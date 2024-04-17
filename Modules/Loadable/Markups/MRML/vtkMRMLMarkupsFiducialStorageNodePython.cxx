// python wrapper for vtkMRMLMarkupsFiducialStorageNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMarkupsFiducialStorageNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsFiducialStorageNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsFiducialStorageNode_ClassNew(); }


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsFiducialStorageNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsFiducialStorageNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsFiducialStorageNode *tempr = vtkMRMLMarkupsFiducialStorageNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsFiducialStorageNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsFiducialStorageNode::NewInstance());

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
PyvtkMRMLMarkupsFiducialStorageNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsFiducialStorageNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsFiducialStorageNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLMarkupsFiducialStorageNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLMarkupsFiducialStorageNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

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
      op->vtkMRMLMarkupsFiducialStorageNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_CanReadInReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadInReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadInReferenceNode(temp0) :
      op->vtkMRMLMarkupsFiducialStorageNode::CanReadInReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_SetPointFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->SetPointFromString(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsFiducialStorageNode::SetPointFromString(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_GetPointAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetPointAsString(temp0, temp1) :
      op->vtkMRMLMarkupsFiducialStorageNode::GetPointAsString(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_SetFieldDelimiterCharacters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDelimiterCharacters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDelimiterCharacters(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsFiducialStorageNode::SetFieldDelimiterCharacters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_GetFieldDelimiterCharacters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDelimiterCharacters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFieldDelimiterCharacters() :
      op->vtkMRMLMarkupsFiducialStorageNode::GetFieldDelimiterCharacters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_ConvertStringToStorageFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStringToStorageFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->ConvertStringToStorageFormat(temp0) :
      op->vtkMRMLMarkupsFiducialStorageNode::ConvertStringToStorageFormat(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_ConvertStringFromStorageFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertStringFromStorageFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsFiducialStorageNode *op = static_cast<vtkMRMLMarkupsFiducialStorageNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->ConvertStringFromStorageFormat(temp0) :
      op->vtkMRMLMarkupsFiducialStorageNode::ConvertStringFromStorageFormat(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsFiducialStorageNode_GetMaximumLineLength(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMaximumLineLength");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMRMLMarkupsFiducialStorageNode::GetMaximumLineLength();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsFiducialStorageNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsFiducialStorageNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsFiducialStorageNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsFiducialStorageNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsFiducialStorageNode\nC++: static vtkMRMLMarkupsFiducialStorageNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsFiducialStorageNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsFiducialStorageNode\nC++: vtkMRMLMarkupsFiducialStorageNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsFiducialStorageNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsFiducialStorageNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLMarkupsFiducialStorageNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"GetNodeTagName", PyvtkMRMLMarkupsFiducialStorageNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Storage, Model)\n"},
  {"Copy", PyvtkMRMLMarkupsFiducialStorageNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"CanReadInReferenceNode", PyvtkMRMLMarkupsFiducialStorageNode_CanReadInReferenceNode, METH_VARARGS,
   "CanReadInReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanReadInReferenceNode(vtkMRMLNode *refNode) override;\n\nReturn true if the node can be read in. Used by ReadData to know\nif the file can be read into the reference node. Subclasses must\nreimplement the method. Typically it's a check on the node type\n(e.g. the model storage node can only read in model nodes)\n\\sa CanWriteFromReferenceNode, ReadData\n"},
  {"SetPointFromString", PyvtkMRMLMarkupsFiducialStorageNode_SetPointFromString, METH_VARARGS,
   "SetPointFromString(self, markupsNode:vtkMRMLMarkupsNode,\n    pointIndex:int, str:str) -> bool\nC++: virtual bool SetPointFromString(\n    vtkMRMLMarkupsNode *markupsNode, int pointIndex,\n    const char *str)\n\n"},
  {"GetPointAsString", PyvtkMRMLMarkupsFiducialStorageNode_GetPointAsString, METH_VARARGS,
   "GetPointAsString(self, markupsNode:vtkMRMLMarkupsNode,\n    pointIndex:int) -> str\nC++: virtual std::string GetPointAsString(\n    vtkMRMLMarkupsNode *markupsNode, int pointIndex)\n\n"},
  {"SetFieldDelimiterCharacters", PyvtkMRMLMarkupsFiducialStorageNode_SetFieldDelimiterCharacters, METH_VARARGS,
   "SetFieldDelimiterCharacters(self, _arg:str) -> None\nC++: virtual void SetFieldDelimiterCharacters(std::string _arg)\n\nCharacters that separate between fields in the written file.\nComma by default. Currently, only the first character of the\nstring is used.\n"},
  {"GetFieldDelimiterCharacters", PyvtkMRMLMarkupsFiducialStorageNode_GetFieldDelimiterCharacters, METH_VARARGS,
   "GetFieldDelimiterCharacters(self) -> str\nC++: virtual std::string GetFieldDelimiterCharacters()\n\n"},
  {"ConvertStringToStorageFormat", PyvtkMRMLMarkupsFiducialStorageNode_ConvertStringToStorageFormat, METH_VARARGS,
   "ConvertStringToStorageFormat(self, input:str) -> str\nC++: std::string ConvertStringToStorageFormat(std::string input)\n\nConvert between user input strings and strings safe to be written\nto the storage file. Since the current storage node file format\nis CSV, puts double quotes around strings if there there are\ncommas or double quotes in them, and replace occurrences of\ndouble quotes with two double quotes\n"},
  {"ConvertStringFromStorageFormat", PyvtkMRMLMarkupsFiducialStorageNode_ConvertStringFromStorageFormat, METH_VARARGS,
   "ConvertStringFromStorageFormat(self, input:str) -> str\nC++: std::string ConvertStringFromStorageFormat(std::string input)\n\n"},
  {"GetMaximumLineLength", PyvtkMRMLMarkupsFiducialStorageNode_GetMaximumLineLength, METH_VARARGS,
   "GetMaximumLineLength() -> int\nC++: static int GetMaximumLineLength()\n\nBuffer size for parsing files during read.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsFiducialStorageNode_Doc =
  "vtkMRMLMarkupsFiducialStorageNode - no description provided.\n\n"
  "Superclass: vtkMRMLMarkupsStorageNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsFiducialStorageNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsFiducialStorageNode", // tp_name
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
  PyvtkMRMLMarkupsFiducialStorageNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsFiducialStorageNode_StaticNew()
{
  return vtkMRMLMarkupsFiducialStorageNode::New();
}

PyObject *PyvtkMRMLMarkupsFiducialStorageNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsFiducialStorageNode_Type, PyvtkMRMLMarkupsFiducialStorageNode_Methods,
    "vtkMRMLMarkupsFiducialStorageNode",
 &PyvtkMRMLMarkupsFiducialStorageNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLMarkupsStorageNode");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMarkupsFiducialStorageNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsFiducialStorageNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsFiducialStorageNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

