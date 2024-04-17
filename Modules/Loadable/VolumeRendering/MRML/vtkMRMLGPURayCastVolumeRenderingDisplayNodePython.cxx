// python wrapper for vtkMRMLGPURayCastVolumeRenderingDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLGPURayCastVolumeRenderingDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLGPURayCastVolumeRenderingDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLVolumeRenderingDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLVolumeRenderingDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLVolumeRenderingDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLGPURayCastVolumeRenderingDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGPURayCastVolumeRenderingDisplayNode *op = static_cast<vtkMRMLGPURayCastVolumeRenderingDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLGPURayCastVolumeRenderingDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLGPURayCastVolumeRenderingDisplayNode *tempr = vtkMRMLGPURayCastVolumeRenderingDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGPURayCastVolumeRenderingDisplayNode *op = static_cast<vtkMRMLGPURayCastVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLGPURayCastVolumeRenderingDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLGPURayCastVolumeRenderingDisplayNode::NewInstance());

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
PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLGPURayCastVolumeRenderingDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGPURayCastVolumeRenderingDisplayNode *op = static_cast<vtkMRMLGPURayCastVolumeRenderingDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLGPURayCastVolumeRenderingDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGPURayCastVolumeRenderingDisplayNode *op = static_cast<vtkMRMLGPURayCastVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLGPURayCastVolumeRenderingDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGPURayCastVolumeRenderingDisplayNode *op = static_cast<vtkMRMLGPURayCastVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLGPURayCastVolumeRenderingDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGPURayCastVolumeRenderingDisplayNode *op = static_cast<vtkMRMLGPURayCastVolumeRenderingDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLGPURayCastVolumeRenderingDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLGPURayCastVolumeRenderingDisplayNode\nC++: static vtkMRMLGPURayCastVolumeRenderingDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLGPURayCastVolumeRenderingDisplayNode\nC++: vtkMRMLGPURayCastVolumeRenderingDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"HasCopyContent", PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"GetNodeTagName", PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_Doc =
  "vtkMRMLGPURayCastVolumeRenderingDisplayNode - no description provided.\n\n"
  "Superclass: vtkMRMLVolumeRenderingDisplayNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerVolumeRenderingModuleMRMLPython.vtkMRMLGPURayCastVolumeRenderingDisplayNode", // tp_name
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
  PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_StaticNew()
{
  return vtkMRMLGPURayCastVolumeRenderingDisplayNode::New();
}

PyObject *PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_Type, PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_Methods,
    "vtkMRMLGPURayCastVolumeRenderingDisplayNode",
 &PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLVolumeRenderingDisplayNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLGPURayCastVolumeRenderingDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLGPURayCastVolumeRenderingDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLGPURayCastVolumeRenderingDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

