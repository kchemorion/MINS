// python wrapper for vtkMRMLScriptedModuleNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLScriptedModuleNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLScriptedModuleNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLScriptedModuleNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif

static PyObject *
PyvtkMRMLScriptedModuleNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLScriptedModuleNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLScriptedModuleNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLScriptedModuleNode *tempr = vtkMRMLScriptedModuleNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScriptedModuleNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLScriptedModuleNode::NewInstance());

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
PyvtkMRMLScriptedModuleNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLScriptedModuleNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLScriptedModuleNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLScriptedModuleNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

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
      op->vtkMRMLScriptedModuleNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLScriptedModuleNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLScriptedModuleNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_GetModuleName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModuleName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetModuleName() :
      op->vtkMRMLScriptedModuleNode::GetModuleName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_SetModuleName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModuleName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModuleName(temp0);
    }
    else
    {
      op->vtkMRMLScriptedModuleNode::SetModuleName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_HasParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasParameter(temp0) :
      op->vtkMRMLScriptedModuleNode::HasParameter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParameter(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScriptedModuleNode::SetParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_UnsetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnsetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnsetParameter(temp0);
    }
    else
    {
      op->vtkMRMLScriptedModuleNode::UnsetParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_UnsetAllParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnsetAllParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnsetAllParameters();
    }
    else
    {
      op->vtkMRMLScriptedModuleNode::UnsetAllParameters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_GetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameter(temp0) :
      op->vtkMRMLScriptedModuleNode::GetParameter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_GetParameterCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParameterCount() :
      op->vtkMRMLScriptedModuleNode::GetParameterCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_GetParameterNamesAsCommaSeparatedList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterNamesAsCommaSeparatedList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterNamesAsCommaSeparatedList() :
      op->vtkMRMLScriptedModuleNode::GetParameterNamesAsCommaSeparatedList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScriptedModuleNode_GetParameterNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScriptedModuleNode *op = static_cast<vtkMRMLScriptedModuleNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetParameterNames() :
      op->vtkMRMLScriptedModuleNode::GetParameterNames());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLScriptedModuleNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLScriptedModuleNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLScriptedModuleNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLScriptedModuleNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLScriptedModuleNode\nC++: static vtkMRMLScriptedModuleNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLScriptedModuleNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLScriptedModuleNode\nC++: vtkMRMLScriptedModuleNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLScriptedModuleNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLScriptedModuleNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLScriptedModuleNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"CopyContent", PyvtkMRMLScriptedModuleNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLScriptedModuleNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLScriptedModuleNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetModuleName", PyvtkMRMLScriptedModuleNode_GetModuleName, METH_VARARGS,
   "GetModuleName(self) -> str\nC++: virtual char *GetModuleName()\n\nThe name of the Module - this is used to customize the node\nselectors and other things\n"},
  {"SetModuleName", PyvtkMRMLScriptedModuleNode_SetModuleName, METH_VARARGS,
   "SetModuleName(self, _arg:str) -> None\nC++: virtual void SetModuleName(const char *_arg)\n\n"},
  {"HasParameter", PyvtkMRMLScriptedModuleNode_HasParameter, METH_VARARGS,
   "HasParameter(self, name:str) -> bool\nC++: bool HasParameter(const std::string &name)\n\nWhether the parameter has been set.\n\nIf the parameter has been set and then unset, this will return\nfalse.\n"},
  {"SetParameter", PyvtkMRMLScriptedModuleNode_SetParameter, METH_VARARGS,
   "SetParameter(self, name:str, value:str) -> None\nC++: void SetParameter(const std::string &name,\n    const std::string &value)\n\nSet module parameter\n"},
  {"UnsetParameter", PyvtkMRMLScriptedModuleNode_UnsetParameter, METH_VARARGS,
   "UnsetParameter(self, name:str) -> None\nC++: void UnsetParameter(const std::string &name)\n\nUnset the parameter identified by name\n"},
  {"UnsetAllParameters", PyvtkMRMLScriptedModuleNode_UnsetAllParameters, METH_VARARGS,
   "UnsetAllParameters(self) -> None\nC++: void UnsetAllParameters()\n\nUnset all parameters\n\\sa UnsetParameter\n"},
  {"GetParameter", PyvtkMRMLScriptedModuleNode_GetParameter, METH_VARARGS,
   "GetParameter(self, name:str) -> str\nC++: std::string GetParameter(const std::string &name)\n\nGet module parameter identified by name\n"},
  {"GetParameterCount", PyvtkMRMLScriptedModuleNode_GetParameterCount, METH_VARARGS,
   "GetParameterCount(self) -> int\nC++: int GetParameterCount()\n\nGet number of parameters\n"},
  {"GetParameterNamesAsCommaSeparatedList", PyvtkMRMLScriptedModuleNode_GetParameterNamesAsCommaSeparatedList, METH_VARARGS,
   "GetParameterNamesAsCommaSeparatedList(self) -> str\nC++: std::string GetParameterNamesAsCommaSeparatedList()\n\nGet list of parameter names separated by a comma\n\\sa GetParameterNames\n"},
  {"GetParameterNames", PyvtkMRMLScriptedModuleNode_GetParameterNames, METH_VARARGS,
   "GetParameterNames(self) -> (str, ...)\nC++: std::vector<std::string> GetParameterNames()\n\nGet list of parameter names\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLScriptedModuleNode_Doc =
  "vtkMRMLScriptedModuleNode - The scripted module node is simply a\nMRMLNode container for an arbitrary keyword value pair map\n\n"
  "Superclass: vtkMRMLNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLScriptedModuleNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLScriptedModuleNode", // tp_name
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
  PyvtkMRMLScriptedModuleNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLScriptedModuleNode_StaticNew()
{
  return vtkMRMLScriptedModuleNode::New();
}

PyObject *PyvtkMRMLScriptedModuleNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLScriptedModuleNode_Type, PyvtkMRMLScriptedModuleNode_Methods,
    "vtkMRMLScriptedModuleNode",
 &PyvtkMRMLScriptedModuleNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLScriptedModuleNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLScriptedModuleNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLScriptedModuleNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

