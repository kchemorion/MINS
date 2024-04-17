// python wrapper for vtkMRMLClipModelsNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLClipModelsNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLClipModelsNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLClipModelsNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLNode_ClassNew
extern "C" { PyObject *PyvtkMRMLNode_ClassNew(); }
#define DECLARED_PyvtkMRMLNode_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLClipModelsNode_ClippingMethodType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLClipModelsNode.ClippingMethodType", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkMRMLClipModelsNode_ClippingMethodType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLClipModelsNode_ClippingMethodType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLClipModelsNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLClipModelsNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLClipModelsNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLClipModelsNode *tempr = vtkMRMLClipModelsNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLClipModelsNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLClipModelsNode::NewInstance());

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
PyvtkMRMLClipModelsNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLClipModelsNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLClipModelsNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLClipModelsNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

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
      op->vtkMRMLClipModelsNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLClipModelsNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLClipModelsNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_GetClipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipType() :
      op->vtkMRMLClipModelsNode::GetClipType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_SetClipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClipType(temp0);
    }
    else
    {
      op->vtkMRMLClipModelsNode::SetClipType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_GetRedSliceClipState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedSliceClipState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRedSliceClipState() :
      op->vtkMRMLClipModelsNode::GetRedSliceClipState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_SetRedSliceClipState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRedSliceClipState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRedSliceClipState(temp0);
    }
    else
    {
      op->vtkMRMLClipModelsNode::SetRedSliceClipState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_GetYellowSliceClipState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYellowSliceClipState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYellowSliceClipState() :
      op->vtkMRMLClipModelsNode::GetYellowSliceClipState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_SetYellowSliceClipState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYellowSliceClipState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYellowSliceClipState(temp0);
    }
    else
    {
      op->vtkMRMLClipModelsNode::SetYellowSliceClipState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_GetGreenSliceClipState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenSliceClipState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGreenSliceClipState() :
      op->vtkMRMLClipModelsNode::GetGreenSliceClipState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_SetGreenSliceClipState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGreenSliceClipState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGreenSliceClipState(temp0);
    }
    else
    {
      op->vtkMRMLClipModelsNode::SetGreenSliceClipState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_GetClippingMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkMRMLClipModelsNode::ClippingMethodType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetClippingMethod() :
      op->vtkMRMLClipModelsNode::GetClippingMethod());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkMRMLClipModelsNode_ClippingMethodType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_SetClippingMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLClipModelsNode *op = static_cast<vtkMRMLClipModelsNode *>(vp);

  typedef vtkMRMLClipModelsNode::ClippingMethodType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMRMLClipModelsNode.ClippingMethodType"))
  {
    if (ap.IsBound())
    {
      op->SetClippingMethod(temp0);
    }
    else
    {
      op->vtkMRMLClipModelsNode::SetClippingMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_GetClippingMethodFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetClippingMethodFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLClipModelsNode::GetClippingMethodFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLClipModelsNode_GetClippingMethodAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetClippingMethodAsString");

  typedef vtkMRMLClipModelsNode::ClippingMethodType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMRMLClipModelsNode.ClippingMethodType"))
  {
    const char *tempr = vtkMRMLClipModelsNode::GetClippingMethodAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLClipModelsNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLClipModelsNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLClipModelsNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLClipModelsNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLClipModelsNode\nC++: static vtkMRMLClipModelsNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLClipModelsNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLClipModelsNode\nC++: vtkMRMLClipModelsNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLClipModelsNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLClipModelsNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLClipModelsNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"CopyContent", PyvtkMRMLClipModelsNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLClipModelsNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLClipModelsNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetClipType", PyvtkMRMLClipModelsNode_GetClipType, METH_VARARGS,
   "GetClipType(self) -> int\nC++: virtual int GetClipType()\n\nIndicates the type of clipping \"Intersection\" or \"Union\"\n"},
  {"SetClipType", PyvtkMRMLClipModelsNode_SetClipType, METH_VARARGS,
   "SetClipType(self, _arg:int) -> None\nC++: virtual void SetClipType(int _arg)\n\n"},
  {"GetRedSliceClipState", PyvtkMRMLClipModelsNode_GetRedSliceClipState, METH_VARARGS,
   "GetRedSliceClipState(self) -> int\nC++: virtual int GetRedSliceClipState()\n\nIndicates if the Red slice clipping is Off, Positive space, or\nNegative space\n"},
  {"SetRedSliceClipState", PyvtkMRMLClipModelsNode_SetRedSliceClipState, METH_VARARGS,
   "SetRedSliceClipState(self, _arg:int) -> None\nC++: virtual void SetRedSliceClipState(int _arg)\n\n"},
  {"GetYellowSliceClipState", PyvtkMRMLClipModelsNode_GetYellowSliceClipState, METH_VARARGS,
   "GetYellowSliceClipState(self) -> int\nC++: virtual int GetYellowSliceClipState()\n\nIndicates if the Yellow slice clipping is Off, Positive space, or\nNegative space\n"},
  {"SetYellowSliceClipState", PyvtkMRMLClipModelsNode_SetYellowSliceClipState, METH_VARARGS,
   "SetYellowSliceClipState(self, _arg:int) -> None\nC++: virtual void SetYellowSliceClipState(int _arg)\n\n"},
  {"GetGreenSliceClipState", PyvtkMRMLClipModelsNode_GetGreenSliceClipState, METH_VARARGS,
   "GetGreenSliceClipState(self) -> int\nC++: virtual int GetGreenSliceClipState()\n\nIndicates if the Green slice clipping is Off, Positive space, or\nNegative space\n"},
  {"SetGreenSliceClipState", PyvtkMRMLClipModelsNode_SetGreenSliceClipState, METH_VARARGS,
   "SetGreenSliceClipState(self, _arg:int) -> None\nC++: virtual void SetGreenSliceClipState(int _arg)\n\n"},
  {"GetClippingMethod", PyvtkMRMLClipModelsNode_GetClippingMethod, METH_VARARGS,
   "GetClippingMethod(self) -> ClippingMethodType\nC++: virtual ClippingMethodType GetClippingMethod()\n\n"},
  {"SetClippingMethod", PyvtkMRMLClipModelsNode_SetClippingMethod, METH_VARARGS,
   "SetClippingMethod(self, _arg:ClippingMethodType) -> None\nC++: virtual void SetClippingMethod(ClippingMethodType _arg)\n\n"},
  {"GetClippingMethodFromString", PyvtkMRMLClipModelsNode_GetClippingMethodFromString, METH_VARARGS,
   "GetClippingMethodFromString(name:str) -> int\nC++: static int GetClippingMethodFromString(const char *name)\n\n"},
  {"GetClippingMethodAsString", PyvtkMRMLClipModelsNode_GetClippingMethodAsString, METH_VARARGS,
   "GetClippingMethodAsString(id:ClippingMethodType) -> str\nC++: static const char *GetClippingMethodAsString(\n    ClippingMethodType id)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLClipModelsNode_Doc =
  "vtkMRMLClipModelsNode - MRML node to represent three clipping planes.\n\n"
  "Superclass: vtkMRMLNode\n\n"
  "The vtkMRMLClipModelsNode MRML node stores the direction of clipping\n"
  "for each of the three clipping planes. It also stores the type of\n"
  "combined clipping operation as either an intersection or union.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLClipModelsNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLClipModelsNode", // tp_name
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
  PyvtkMRMLClipModelsNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLClipModelsNode_StaticNew()
{
  return vtkMRMLClipModelsNode::New();
}

PyObject *PyvtkMRMLClipModelsNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLClipModelsNode_Type, PyvtkMRMLClipModelsNode_Methods,
    "vtkMRMLClipModelsNode",
 &PyvtkMRMLClipModelsNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLClipModelsNode_ClippingMethodType_Type);
  PyVTKEnum_Add(&PyvtkMRMLClipModelsNode_ClippingMethodType_Type, "vtkMRMLClipModelsNode.ClippingMethodType");

  o = (PyObject *)&PyvtkMRMLClipModelsNode_ClippingMethodType_Type;
  if (PyDict_SetItemString(d, "ClippingMethodType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "ClipIntersection", vtkMRMLClipModelsNode::ClipIntersection },
        { "ClipUnion", vtkMRMLClipModelsNode::ClipUnion },
        { "ClipOff", vtkMRMLClipModelsNode::ClipOff },
        { "ClipPositiveSpace", vtkMRMLClipModelsNode::ClipPositiveSpace },
        { "ClipNegativeSpace", vtkMRMLClipModelsNode::ClipNegativeSpace },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLClipModelsNode::ClippingMethodType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "Straight", vtkMRMLClipModelsNode::Straight },
        { "WholeCells", vtkMRMLClipModelsNode::WholeCells },
        { "WholeCellsWithBoundary", vtkMRMLClipModelsNode::WholeCellsWithBoundary },
      };

    o = PyvtkMRMLClipModelsNode_ClippingMethodType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLClipModelsNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLClipModelsNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLClipModelsNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

