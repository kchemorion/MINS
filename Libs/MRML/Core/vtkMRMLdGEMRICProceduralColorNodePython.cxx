// python wrapper for vtkMRMLdGEMRICProceduralColorNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLdGEMRICProceduralColorNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLdGEMRICProceduralColorNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLdGEMRICProceduralColorNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLProceduralColorNode_ClassNew
extern "C" { PyObject *PyvtkMRMLProceduralColorNode_ClassNew(); }
#define DECLARED_PyvtkMRMLProceduralColorNode_ClassNew
#endif

static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLdGEMRICProceduralColorNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLdGEMRICProceduralColorNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLdGEMRICProceduralColorNode *tempr = vtkMRMLdGEMRICProceduralColorNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLdGEMRICProceduralColorNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLdGEMRICProceduralColorNode::NewInstance());

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
PyvtkMRMLdGEMRICProceduralColorNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLdGEMRICProceduralColorNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLdGEMRICProceduralColorNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLdGEMRICProceduralColorNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

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
      op->vtkMRMLdGEMRICProceduralColorNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLdGEMRICProceduralColorNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->UpdateScene(temp0);
    }
    else
    {
      op->vtkMRMLdGEMRICProceduralColorNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetType(temp0);
    }
    else
    {
      op->vtkMRMLdGEMRICProceduralColorNode::SetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->ProcessMRMLEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLdGEMRICProceduralColorNode::ProcessMRMLEvents(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLdGEMRICProceduralColorNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_GetFirstType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFirstType() :
      op->vtkMRMLdGEMRICProceduralColorNode::GetFirstType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_GetLastType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastType() :
      op->vtkMRMLdGEMRICProceduralColorNode::GetLastType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_GetTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeAsString() :
      op->vtkMRMLdGEMRICProceduralColorNode::GetTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_SetTypeTo15T(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeTo15T");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeTo15T();
    }
    else
    {
      op->vtkMRMLdGEMRICProceduralColorNode::SetTypeTo15T();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLdGEMRICProceduralColorNode_SetTypeTo3T(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeTo3T");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLdGEMRICProceduralColorNode *op = static_cast<vtkMRMLdGEMRICProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeTo3T();
    }
    else
    {
      op->vtkMRMLdGEMRICProceduralColorNode::SetTypeTo3T();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLdGEMRICProceduralColorNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLdGEMRICProceduralColorNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLdGEMRICProceduralColorNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLdGEMRICProceduralColorNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLdGEMRICProceduralColorNode\nC++: static vtkMRMLdGEMRICProceduralColorNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLdGEMRICProceduralColorNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLdGEMRICProceduralColorNode\nC++: vtkMRMLdGEMRICProceduralColorNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLdGEMRICProceduralColorNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLdGEMRICProceduralColorNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLdGEMRICProceduralColorNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLdGEMRICProceduralColorNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLdGEMRICProceduralColorNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"UpdateScene", PyvtkMRMLdGEMRICProceduralColorNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\n\n"},
  {"SetType", PyvtkMRMLdGEMRICProceduralColorNode_SetType, METH_VARARGS,
   "SetType(self, type:int) -> None\nC++: void SetType(int type) override;\n\nGet/Set for Type. In SetType, set up the custom color options for\nthis set of colors\n"},
  {"ProcessMRMLEvents", PyvtkMRMLdGEMRICProceduralColorNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nalternative method to propagate events generated in Storage nodes\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLdGEMRICProceduralColorNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"GetFirstType", PyvtkMRMLdGEMRICProceduralColorNode_GetFirstType, METH_VARARGS,
   "GetFirstType(self) -> int\nC++: int GetFirstType() override;\n\nReturn the lowest and the highest integers, for use in looping\n"},
  {"GetLastType", PyvtkMRMLdGEMRICProceduralColorNode_GetLastType, METH_VARARGS,
   "GetLastType(self) -> int\nC++: int GetLastType() override;\n\n"},
  {"GetTypeAsString", PyvtkMRMLdGEMRICProceduralColorNode_GetTypeAsString, METH_VARARGS,
   "GetTypeAsString(self) -> str\nC++: const char *GetTypeAsString() override;\n\nreturn a text string describing the color look up table type\n"},
  {"SetTypeTo15T", PyvtkMRMLdGEMRICProceduralColorNode_SetTypeTo15T, METH_VARARGS,
   "SetTypeTo15T(self) -> None\nC++: void SetTypeTo15T()\n\n"},
  {"SetTypeTo3T", PyvtkMRMLdGEMRICProceduralColorNode_SetTypeTo3T, METH_VARARGS,
   "SetTypeTo3T(self) -> None\nC++: void SetTypeTo3T()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLdGEMRICProceduralColorNode_Doc =
  "vtkMRMLdGEMRICProceduralColorNode - MRML node to represent\nprocedurally defined color information.\n\n"
  "Superclass: vtkMRMLProceduralColorNode\n\n"
  "Procedural nodes define methods that are used to map colors to scalar\n"
  "values. Usually they will incorporate a custom subclass of a\n"
  "vtkLookupTable, or a vtkColorTransferFunction.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLdGEMRICProceduralColorNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLdGEMRICProceduralColorNode", // tp_name
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
  PyvtkMRMLdGEMRICProceduralColorNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLdGEMRICProceduralColorNode_StaticNew()
{
  return vtkMRMLdGEMRICProceduralColorNode::New();
}

PyObject *PyvtkMRMLdGEMRICProceduralColorNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLdGEMRICProceduralColorNode_Type, PyvtkMRMLdGEMRICProceduralColorNode_Methods,
    "vtkMRMLdGEMRICProceduralColorNode",
 &PyvtkMRMLdGEMRICProceduralColorNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLProceduralColorNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "DisplayModifiedEvent", vtkMRMLdGEMRICProceduralColorNode::DisplayModifiedEvent },
        { "dGEMRIC15T", vtkMRMLdGEMRICProceduralColorNode::dGEMRIC15T },
        { "dGEMRIC3T", vtkMRMLdGEMRICProceduralColorNode::dGEMRIC3T },
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

void PyVTKAddFile_vtkMRMLdGEMRICProceduralColorNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLdGEMRICProceduralColorNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLdGEMRICProceduralColorNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

