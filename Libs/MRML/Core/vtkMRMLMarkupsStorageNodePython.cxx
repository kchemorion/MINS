// python wrapper for vtkMRMLMarkupsStorageNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMarkupsStorageNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsStorageNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsStorageNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorageNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorageNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorageNode_ClassNew
#endif

static PyObject *
PyvtkMRMLMarkupsStorageNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsStorageNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsStorageNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsStorageNode *tempr = vtkMRMLMarkupsStorageNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsStorageNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsStorageNode::NewInstance());

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
PyvtkMRMLMarkupsStorageNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsStorageNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsStorageNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

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
      op->vtkMRMLMarkupsStorageNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_CanReadInReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadInReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadInReferenceNode(temp0) :
      op->vtkMRMLMarkupsStorageNode::CanReadInReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_SetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystem(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsStorageNode::SetCoordinateSystem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystemMinValue() :
      op->vtkMRMLMarkupsStorageNode::GetCoordinateSystemMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystemMaxValue() :
      op->vtkMRMLMarkupsStorageNode::GetCoordinateSystemMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_GetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystem() :
      op->vtkMRMLMarkupsStorageNode::GetCoordinateSystem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCoordinateSystemAsString() :
      op->vtkMRMLMarkupsStorageNode::GetCoordinateSystemAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemAsString_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCoordinateSystemAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLMarkupsStorageNode::GetCoordinateSystemAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemAsString_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCoordinateSystemAsString");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCoordinateSystemFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsStorageNode::GetCoordinateSystemFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_UseRASOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRASOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRASOn();
    }
    else
    {
      op->vtkMRMLMarkupsStorageNode::UseRASOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_GetUseRAS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRAS() :
      op->vtkMRMLMarkupsStorageNode::GetUseRAS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_UseLPSOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLPSOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLPSOn();
    }
    else
    {
      op->vtkMRMLMarkupsStorageNode::UseLPSOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsStorageNode_GetUseLPS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLPS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsStorageNode *op = static_cast<vtkMRMLMarkupsStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseLPS() :
      op->vtkMRMLMarkupsStorageNode::GetUseLPS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsStorageNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsStorageNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsStorageNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsStorageNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsStorageNode\nC++: static vtkMRMLMarkupsStorageNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsStorageNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsStorageNode\nC++: vtkMRMLMarkupsStorageNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsStorageNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsStorageNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Copy", PyvtkMRMLMarkupsStorageNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"CanReadInReferenceNode", PyvtkMRMLMarkupsStorageNode_CanReadInReferenceNode, METH_VARARGS,
   "CanReadInReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanReadInReferenceNode(vtkMRMLNode *refNode) override;\n\nReturn true if the node can be read in. Used by ReadData to know\nif the file can be read into the reference node. Subclasses must\nreimplement the method. Typically it's a check on the node type\n(e.g. the model storage node can only read in model nodes)\n\\sa CanWriteFromReferenceNode, ReadData\n"},
  {"SetCoordinateSystem", PyvtkMRMLMarkupsStorageNode_SetCoordinateSystem, METH_VARARGS,
   "SetCoordinateSystem(self, _arg:int) -> None\nC++: virtual void SetCoordinateSystem(int _arg)\n\nGet/Set flag that controls if points are to be written in various\ncoordinate systems\n"},
  {"GetCoordinateSystemMinValue", PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemMinValue, METH_VARARGS,
   "GetCoordinateSystemMinValue(self) -> int\nC++: virtual int GetCoordinateSystemMinValue()\n\n"},
  {"GetCoordinateSystemMaxValue", PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemMaxValue, METH_VARARGS,
   "GetCoordinateSystemMaxValue(self) -> int\nC++: virtual int GetCoordinateSystemMaxValue()\n\n"},
  {"GetCoordinateSystem", PyvtkMRMLMarkupsStorageNode_GetCoordinateSystem, METH_VARARGS,
   "GetCoordinateSystem(self) -> int\nC++: virtual int GetCoordinateSystem()\n\n"},
  {"GetCoordinateSystemAsString", PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemAsString, METH_VARARGS,
   "GetCoordinateSystemAsString(self) -> str\nC++: std::string GetCoordinateSystemAsString()\nGetCoordinateSystemAsString(id:int) -> str\nC++: static const char *GetCoordinateSystemAsString(int id)\n\n"},
  {"GetCoordinateSystemFromString", PyvtkMRMLMarkupsStorageNode_GetCoordinateSystemFromString, METH_VARARGS,
   "GetCoordinateSystemFromString(name:str) -> int\nC++: static int GetCoordinateSystemFromString(const char *name)\n\n"},
  {"UseRASOn", PyvtkMRMLMarkupsStorageNode_UseRASOn, METH_VARARGS,
   "UseRASOn(self) -> None\nC++: void UseRASOn()\n\nConvenience methods to get/set various coordinate system values\n\\sa SetCoordinateSystem, GetCoordinateSystem\n"},
  {"GetUseRAS", PyvtkMRMLMarkupsStorageNode_GetUseRAS, METH_VARARGS,
   "GetUseRAS(self) -> bool\nC++: bool GetUseRAS()\n\n"},
  {"UseLPSOn", PyvtkMRMLMarkupsStorageNode_UseLPSOn, METH_VARARGS,
   "UseLPSOn(self) -> None\nC++: void UseLPSOn()\n\n"},
  {"GetUseLPS", PyvtkMRMLMarkupsStorageNode_GetUseLPS, METH_VARARGS,
   "GetUseLPS(self) -> bool\nC++: bool GetUseLPS()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsStorageNode_Doc =
  "vtkMRMLMarkupsStorageNode - Abstract base class for markups storage\nnodes.\n\n"
  "Superclass: vtkMRMLStorageNode\n\n"
  "This class is the base of all markups storage nodes and it allows\n"
  "specifying the coordinate system that is used in files.\n\n"
  "This interface class is defined in MRML core to allow CLI modules to\n"
  "read/write markups in a specific coordinate system.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsStorageNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLMarkupsStorageNode", // tp_name
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
  PyvtkMRMLMarkupsStorageNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLMarkupsStorageNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsStorageNode_Type, PyvtkMRMLMarkupsStorageNode_Methods,
    "vtkMRMLMarkupsStorageNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorageNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMarkupsStorageNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsStorageNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsStorageNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

