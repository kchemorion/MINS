// python wrapper for vtkITKIslandMath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkITKIslandMath.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkITKIslandMath(PyObject *dict); }
extern "C" { PyObject *PyvtkITKIslandMath_ClassNew(); }


static PyObject *
PyvtkITKIslandMath_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkITKIslandMath::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkITKIslandMath::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkITKIslandMath *tempr = vtkITKIslandMath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkITKIslandMath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkITKIslandMath::NewInstance());

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
PyvtkITKIslandMath_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkITKIslandMath::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkITKIslandMath::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_GetFullyConnected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFullyConnected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFullyConnected() :
      op->vtkITKIslandMath::GetFullyConnected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_SetFullyConnected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullyConnected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFullyConnected(temp0);
    }
    else
    {
      op->vtkITKIslandMath::SetFullyConnected(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_GetMinimumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMinimumSize() :
      op->vtkITKIslandMath::GetMinimumSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_SetMinimumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumSize(temp0);
    }
    else
    {
      op->vtkITKIslandMath::SetMinimumSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_GetMaximumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaximumSize() :
      op->vtkITKIslandMath::GetMaximumSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_SetMaximumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumSize(temp0);
    }
    else
    {
      op->vtkITKIslandMath::SetMaximumSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_GetSliceBySlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceBySlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceBySlice() :
      op->vtkITKIslandMath::GetSliceBySlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_SetSliceBySlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceBySlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceBySlice(temp0);
    }
    else
    {
      op->vtkITKIslandMath::SetSliceBySlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_SetSliceBySliceToIJ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceBySliceToIJ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceBySliceToIJ();
    }
    else
    {
      op->vtkITKIslandMath::SetSliceBySliceToIJ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_SetSliceBySliceToIK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceBySliceToIK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceBySliceToIK();
    }
    else
    {
      op->vtkITKIslandMath::SetSliceBySliceToIK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_SetSliceBySliceToJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceBySliceToJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceBySliceToJK();
    }
    else
    {
      op->vtkITKIslandMath::SetSliceBySliceToJK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_GetNumberOfIslands(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIslands");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetNumberOfIslands() :
      op->vtkITKIslandMath::GetNumberOfIslands());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_SetNumberOfIslands(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIslands");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIslands(temp0);
    }
    else
    {
      op->vtkITKIslandMath::SetNumberOfIslands(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_GetOriginalNumberOfIslands(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalNumberOfIslands");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetOriginalNumberOfIslands() :
      op->vtkITKIslandMath::GetOriginalNumberOfIslands());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKIslandMath_SetOriginalNumberOfIslands(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalNumberOfIslands");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKIslandMath *op = static_cast<vtkITKIslandMath *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginalNumberOfIslands(temp0);
    }
    else
    {
      op->vtkITKIslandMath::SetOriginalNumberOfIslands(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkITKIslandMath_Methods[] = {
  {"IsTypeOf", PyvtkITKIslandMath_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkITKIslandMath_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkITKIslandMath_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkITKIslandMath\nC++: static vtkITKIslandMath *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkITKIslandMath_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkITKIslandMath\nC++: vtkITKIslandMath *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkITKIslandMath_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkITKIslandMath_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFullyConnected", PyvtkITKIslandMath_GetFullyConnected, METH_VARARGS,
   "GetFullyConnected(self) -> int\nC++: virtual int GetFullyConnected()\n\nIf non-zero, islands are defined by pixels that touch on edges\nand/or vertices. If zero, pixels are only considered part of the\nsame island if their faces/edges touch\n"},
  {"SetFullyConnected", PyvtkITKIslandMath_SetFullyConnected, METH_VARARGS,
   "SetFullyConnected(self, _arg:int) -> None\nC++: virtual void SetFullyConnected(int _arg)\n\n"},
  {"GetMinimumSize", PyvtkITKIslandMath_GetMinimumSize, METH_VARARGS,
   "GetMinimumSize(self) -> int\nC++: virtual vtkIdType GetMinimumSize()\n\nMinimum island size (in pixels).  Islands smaller than this are\nignored.\n"},
  {"SetMinimumSize", PyvtkITKIslandMath_SetMinimumSize, METH_VARARGS,
   "SetMinimumSize(self, _arg:int) -> None\nC++: virtual void SetMinimumSize(vtkIdType _arg)\n\n"},
  {"GetMaximumSize", PyvtkITKIslandMath_GetMaximumSize, METH_VARARGS,
   "GetMaximumSize(self) -> int\nC++: virtual vtkIdType GetMaximumSize()\n\nMaximum island size (in pixels).  Islands larger than this are\nignored.\n"},
  {"SetMaximumSize", PyvtkITKIslandMath_SetMaximumSize, METH_VARARGS,
   "SetMaximumSize(self, _arg:int) -> None\nC++: virtual void SetMaximumSize(vtkIdType _arg)\n\n"},
  {"GetSliceBySlice", PyvtkITKIslandMath_GetSliceBySlice, METH_VARARGS,
   "GetSliceBySlice(self) -> int\nC++: virtual int GetSliceBySlice()\n\nTODO: Not yet implemented If zero, islands are defined by 3D\nconnectivity If non-zero, islands are evaluated in a sequence of\n2D planes (IJ=3, IK=2, JK=1)\n"},
  {"SetSliceBySlice", PyvtkITKIslandMath_SetSliceBySlice, METH_VARARGS,
   "SetSliceBySlice(self, _arg:int) -> None\nC++: virtual void SetSliceBySlice(int _arg)\n\n"},
  {"SetSliceBySliceToIJ", PyvtkITKIslandMath_SetSliceBySliceToIJ, METH_VARARGS,
   "SetSliceBySliceToIJ(self) -> None\nC++: void SetSliceBySliceToIJ()\n\n"},
  {"SetSliceBySliceToIK", PyvtkITKIslandMath_SetSliceBySliceToIK, METH_VARARGS,
   "SetSliceBySliceToIK(self) -> None\nC++: void SetSliceBySliceToIK()\n\n"},
  {"SetSliceBySliceToJK", PyvtkITKIslandMath_SetSliceBySliceToJK, METH_VARARGS,
   "SetSliceBySliceToJK(self) -> None\nC++: void SetSliceBySliceToJK()\n\n"},
  {"GetNumberOfIslands", PyvtkITKIslandMath_GetNumberOfIslands, METH_VARARGS,
   "GetNumberOfIslands(self) -> int\nC++: virtual unsigned long GetNumberOfIslands()\n\nAccessors to describe result of calculations\n"},
  {"SetNumberOfIslands", PyvtkITKIslandMath_SetNumberOfIslands, METH_VARARGS,
   "SetNumberOfIslands(self, _arg:int) -> None\nC++: virtual void SetNumberOfIslands(unsigned long _arg)\n\n"},
  {"GetOriginalNumberOfIslands", PyvtkITKIslandMath_GetOriginalNumberOfIslands, METH_VARARGS,
   "GetOriginalNumberOfIslands(self) -> int\nC++: virtual unsigned long GetOriginalNumberOfIslands()\n\n"},
  {"SetOriginalNumberOfIslands", PyvtkITKIslandMath_SetOriginalNumberOfIslands, METH_VARARGS,
   "SetOriginalNumberOfIslands(self, _arg:int) -> None\nC++: virtual void SetOriginalNumberOfIslands(unsigned long _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkITKIslandMath_Doc =
  "vtkITKIslandMath - ITK-based utilities for manipulating connected\nregions in label maps.\n\n"
  "Superclass: vtkSimpleImageToImageFilter\n\n"
  "Limitation: The filter does not work correctly with input volume that\n"
  "has unsigned long scalar type on Linux and macOS.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKIslandMath_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKIslandMath", // tp_name
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
  PyvtkITKIslandMath_Doc, // tp_doc
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

static vtkObjectBase *PyvtkITKIslandMath_StaticNew()
{
  return vtkITKIslandMath::New();
}

PyObject *PyvtkITKIslandMath_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkITKIslandMath_Type, PyvtkITKIslandMath_Methods,
    "vtkITKIslandMath",
 &PyvtkITKIslandMath_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSimpleImageToImageFilter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkITKIslandMath(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkITKIslandMath_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkITKIslandMath", o) != 0)
  {
    Py_DECREF(o);
  }

}

