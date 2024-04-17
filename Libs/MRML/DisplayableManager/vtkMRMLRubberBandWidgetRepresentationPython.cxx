// python wrapper for vtkMRMLRubberBandWidgetRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLRubberBandWidgetRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLRubberBandWidgetRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLRubberBandWidgetRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLRubberBandWidgetRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLRubberBandWidgetRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLRubberBandWidgetRepresentation *tempr = vtkMRMLRubberBandWidgetRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLRubberBandWidgetRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLRubberBandWidgetRepresentation::NewInstance());

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
PyvtkMRMLRubberBandWidgetRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLRubberBandWidgetRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLRubberBandWidgetRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_GetCornerPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCornerPoint1() :
      op->vtkMRMLRubberBandWidgetRepresentation::GetCornerPoint1());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCornerPoint1(temp0, temp1);
    }
    else
    {
      op->vtkMRMLRubberBandWidgetRepresentation::SetCornerPoint1(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCornerPoint1(temp0);
    }
    else
    {
      op->vtkMRMLRubberBandWidgetRepresentation::SetCornerPoint1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint1_s1(self, args);
    case 1:
      return PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCornerPoint1");
  return nullptr;
}


static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_GetCornerPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCornerPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCornerPoint2() :
      op->vtkMRMLRubberBandWidgetRepresentation::GetCornerPoint2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCornerPoint2(temp0, temp1);
    }
    else
    {
      op->vtkMRMLRubberBandWidgetRepresentation::SetCornerPoint2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCornerPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCornerPoint2(temp0);
    }
    else
    {
      op->vtkMRMLRubberBandWidgetRepresentation::SetCornerPoint2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint2_s1(self, args);
    case 1:
      return PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCornerPoint2");
  return nullptr;
}


static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkMRMLRubberBandWidgetRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkMRMLRubberBandWidgetRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLRubberBandWidgetRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLRubberBandWidgetRepresentation *op = static_cast<vtkMRMLRubberBandWidgetRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkMRMLRubberBandWidgetRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLRubberBandWidgetRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkMRMLRubberBandWidgetRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkMRMLRubberBandWidgetRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkMRMLRubberBandWidgetRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLRubberBandWidgetRepresentation\nC++: static vtkMRMLRubberBandWidgetRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkMRMLRubberBandWidgetRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLRubberBandWidgetRepresentation\nC++: vtkMRMLRubberBandWidgetRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLRubberBandWidgetRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nStandard methods for instances of this class.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLRubberBandWidgetRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nStandard methods for instances of this class.\n"},
  {"GetCornerPoint1", PyvtkMRMLRubberBandWidgetRepresentation_GetCornerPoint1, METH_VARARGS,
   "GetCornerPoint1(self) -> (int, int)\nC++: virtual int *GetCornerPoint1()\n\nTop-left point position in display coordinates\n"},
  {"SetCornerPoint1", PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint1, METH_VARARGS,
   "SetCornerPoint1(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetCornerPoint1(int _arg1, int _arg2)\nSetCornerPoint1(self, _arg:(int, int)) -> None\nC++: void SetCornerPoint1(const int _arg[2])\n\n"},
  {"GetCornerPoint2", PyvtkMRMLRubberBandWidgetRepresentation_GetCornerPoint2, METH_VARARGS,
   "GetCornerPoint2(self) -> (int, int)\nC++: virtual int *GetCornerPoint2()\n\n"},
  {"SetCornerPoint2", PyvtkMRMLRubberBandWidgetRepresentation_SetCornerPoint2, METH_VARARGS,
   "SetCornerPoint2(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetCornerPoint2(int _arg1, int _arg2)\nSetCornerPoint2(self, _arg:(int, int)) -> None\nC++: void SetCornerPoint2(const int _arg[2])\n\n"},
  {"GetActors2D", PyvtkMRMLRubberBandWidgetRepresentation_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkMRMLRubberBandWidgetRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOverlay", PyvtkMRMLRubberBandWidgetRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLRubberBandWidgetRepresentation_Doc =
  "vtkMRMLRubberBandWidgetRepresentation - represent intersections of\nother slice views in the current slice view\n\n"
  "Superclass: vtkMRMLAbstractWidgetRepresentation\n\n"
  "@sa\n"
  "vtkSliceIntersectionWidget vtkWidgetRepresentation vtkAbstractWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLRubberBandWidgetRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLRubberBandWidgetRepresentation", // tp_name
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
  PyvtkMRMLRubberBandWidgetRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLRubberBandWidgetRepresentation_StaticNew()
{
  return vtkMRMLRubberBandWidgetRepresentation::New();
}

PyObject *PyvtkMRMLRubberBandWidgetRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLRubberBandWidgetRepresentation_Type, PyvtkMRMLRubberBandWidgetRepresentation_Methods,
    "vtkMRMLRubberBandWidgetRepresentation",
 &PyvtkMRMLRubberBandWidgetRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractWidgetRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLRubberBandWidgetRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLRubberBandWidgetRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLRubberBandWidgetRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

