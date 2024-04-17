// python wrapper for vtkMRMLSubjectHierarchyLegacyNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSubjectHierarchyLegacyNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSubjectHierarchyLegacyNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSubjectHierarchyLegacyNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLHierarchyNode_ClassNew
extern "C" { PyObject *PyvtkMRMLHierarchyNode_ClassNew(); }
#define DECLARED_PyvtkMRMLHierarchyNode_ClassNew
#endif

static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSubjectHierarchyLegacyNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyLegacyNode *op = static_cast<vtkMRMLSubjectHierarchyLegacyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSubjectHierarchyLegacyNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSubjectHierarchyLegacyNode *tempr = vtkMRMLSubjectHierarchyLegacyNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyLegacyNode *op = static_cast<vtkMRMLSubjectHierarchyLegacyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSubjectHierarchyLegacyNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSubjectHierarchyLegacyNode::NewInstance());

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
PyvtkMRMLSubjectHierarchyLegacyNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSubjectHierarchyLegacyNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyLegacyNode *op = static_cast<vtkMRMLSubjectHierarchyLegacyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSubjectHierarchyLegacyNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyLegacyNode *op = static_cast<vtkMRMLSubjectHierarchyLegacyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSubjectHierarchyLegacyNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyLegacyNode *op = static_cast<vtkMRMLSubjectHierarchyLegacyNode *>(vp);

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
      op->vtkMRMLSubjectHierarchyLegacyNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyLegacyNode *op = static_cast<vtkMRMLSubjectHierarchyLegacyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSubjectHierarchyLegacyNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_GetSubjectHierarchyLegacyNodeByUID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSubjectHierarchyLegacyNodeByUID");

  vtkMRMLScene *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkMRMLSubjectHierarchyLegacyNode *tempr = vtkMRMLSubjectHierarchyLegacyNode::GetSubjectHierarchyLegacyNodeByUID(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_GetSubjectHierarchyLegacyNodeByUIDList(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSubjectHierarchyLegacyNodeByUIDList");

  vtkMRMLScene *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkMRMLSubjectHierarchyLegacyNode *tempr = vtkMRMLSubjectHierarchyLegacyNode::GetSubjectHierarchyLegacyNodeByUIDList(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_DeserializeUIDList(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeserializeUIDList");

  std::string temp0;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    vtkMRMLSubjectHierarchyLegacyNode::DeserializeUIDList(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyLegacyNode *op = static_cast<vtkMRMLSubjectHierarchyLegacyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyLegacyNode::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyLegacyNode *op = static_cast<vtkMRMLSubjectHierarchyLegacyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkMRMLSubjectHierarchyLegacyNode::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_SetOwnerPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOwnerPluginName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyLegacyNode *op = static_cast<vtkMRMLSubjectHierarchyLegacyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOwnerPluginName(temp0);
    }
    else
    {
      op->vtkMRMLSubjectHierarchyLegacyNode::SetOwnerPluginName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_GetOwnerPluginName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOwnerPluginName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyLegacyNode *op = static_cast<vtkMRMLSubjectHierarchyLegacyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOwnerPluginName() :
      op->vtkMRMLSubjectHierarchyLegacyNode::GetOwnerPluginName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyLegacyNode_GetUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSubjectHierarchyLegacyNode *op = static_cast<vtkMRMLSubjectHierarchyLegacyNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetUID(temp0) :
      op->vtkMRMLSubjectHierarchyLegacyNode::GetUID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSubjectHierarchyLegacyNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSubjectHierarchyLegacyNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSubjectHierarchyLegacyNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSubjectHierarchyLegacyNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSubjectHierarchyLegacyNode\nC++: static vtkMRMLSubjectHierarchyLegacyNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSubjectHierarchyLegacyNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSubjectHierarchyLegacyNode\nC++: vtkMRMLSubjectHierarchyLegacyNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSubjectHierarchyLegacyNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSubjectHierarchyLegacyNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSubjectHierarchyLegacyNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLSubjectHierarchyLegacyNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLSubjectHierarchyLegacyNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Contour)\n"},
  {"GetSubjectHierarchyLegacyNodeByUID", PyvtkMRMLSubjectHierarchyLegacyNode_GetSubjectHierarchyLegacyNodeByUID, METH_VARARGS,
   "GetSubjectHierarchyLegacyNodeByUID(scene:vtkMRMLScene,\n    uidName:str, uidValue:str)\n    -> vtkMRMLSubjectHierarchyLegacyNode\nC++: static vtkMRMLSubjectHierarchyLegacyNode *GetSubjectHierarchyLegacyNodeByUID(\n    vtkMRMLScene *scene, const char *uidName,\n    const char *uidValue)\n\nFind subject hierarchy node according to a UID (by exact match)\n\\param scene MRML scene\n\\param uidName UID string to lookup\n\\param uidValue UID string that needs to _exactly match_ the UID\n    string of the subject hierarchy node\n\\sa GetUID()\n"},
  {"GetSubjectHierarchyLegacyNodeByUIDList", PyvtkMRMLSubjectHierarchyLegacyNode_GetSubjectHierarchyLegacyNodeByUIDList, METH_VARARGS,
   "GetSubjectHierarchyLegacyNodeByUIDList(scene:vtkMRMLScene,\n    uidName:str, uidValue:str)\n    -> vtkMRMLSubjectHierarchyLegacyNode\nC++: static vtkMRMLSubjectHierarchyLegacyNode *GetSubjectHierarchyLegacyNodeByUIDList(\n    vtkMRMLScene *scene, const char *uidName,\n    const char *uidValue)\n\nFind subject hierarchy node according to a UID (by containing).\nFor example find UID in instance UID list\n\\param scene MRML scene\n\\param uidName UID string to lookup\n\\param uidValue UID string that needs to be _contained_ in the\n    UID string of the subject hierarchy node\n\\return First match\n\\sa GetUID()\n"},
  {"DeserializeUIDList", PyvtkMRMLSubjectHierarchyLegacyNode_DeserializeUIDList, METH_VARARGS,
   "DeserializeUIDList(uidListString:str, deserializedUIDList:[str,\n    ...]) -> None\nC++: static void DeserializeUIDList(std::string uidListString,\n    std::vector<std::string> &deserializedUIDList)\n\nDeserialize a UID list string (stored in the UID map) into a\nvector of UID strings\n"},
  {"SetLevel", PyvtkMRMLSubjectHierarchyLegacyNode_SetLevel, METH_VARARGS,
   "SetLevel(self, _arg:str) -> None\nC++: virtual void SetLevel(const char *_arg)\n\nSet level\n"},
  {"GetLevel", PyvtkMRMLSubjectHierarchyLegacyNode_GetLevel, METH_VARARGS,
   "GetLevel(self) -> str\nC++: virtual char *GetLevel()\n\nGet level\n"},
  {"SetOwnerPluginName", PyvtkMRMLSubjectHierarchyLegacyNode_SetOwnerPluginName, METH_VARARGS,
   "SetOwnerPluginName(self, _arg:str) -> None\nC++: virtual void SetOwnerPluginName(const char *_arg)\n\nSet owner plugin name\n"},
  {"GetOwnerPluginName", PyvtkMRMLSubjectHierarchyLegacyNode_GetOwnerPluginName, METH_VARARGS,
   "GetOwnerPluginName(self) -> str\nC++: virtual char *GetOwnerPluginName()\n\nGet owner plugin name\n"},
  {"GetUID", PyvtkMRMLSubjectHierarchyLegacyNode_GetUID, METH_VARARGS,
   "GetUID(self, uidName:str) -> str\nC++: std::string GetUID(std::string uidName)\n\nGet a UID with a known name\n\\return The UID value if exists, empty string if does not\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSubjectHierarchyLegacyNode_Doc =
  "vtkMRMLSubjectHierarchyLegacyNode\n\n:\n\nMRML node to represent legacy subject hierarchy node\n\n"
  "Superclass: vtkMRMLHierarchyNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSubjectHierarchyLegacyNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSubjectHierarchyLegacyNode", // tp_name
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
  PyvtkMRMLSubjectHierarchyLegacyNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSubjectHierarchyLegacyNode_StaticNew()
{
  return vtkMRMLSubjectHierarchyLegacyNode::New();
}

PyObject *PyvtkMRMLSubjectHierarchyLegacyNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSubjectHierarchyLegacyNode_Type, PyvtkMRMLSubjectHierarchyLegacyNode_Methods,
    "vtkMRMLSubjectHierarchyLegacyNode",
 &PyvtkMRMLSubjectHierarchyLegacyNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLHierarchyNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSubjectHierarchyLegacyNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSubjectHierarchyLegacyNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSubjectHierarchyLegacyNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

