// python wrapper for vtkITKLevelTracingImageFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkITKLevelTracingImageFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkITKLevelTracingImageFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkITKLevelTracingImageFilter_ClassNew(); }


static PyObject *
PyvtkITKLevelTracingImageFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkITKLevelTracingImageFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLevelTracingImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLevelTracingImageFilter *op = static_cast<vtkITKLevelTracingImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkITKLevelTracingImageFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLevelTracingImageFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkITKLevelTracingImageFilter *tempr = vtkITKLevelTracingImageFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLevelTracingImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLevelTracingImageFilter *op = static_cast<vtkITKLevelTracingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkITKLevelTracingImageFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkITKLevelTracingImageFilter::NewInstance());

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
PyvtkITKLevelTracingImageFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkITKLevelTracingImageFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLevelTracingImageFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLevelTracingImageFilter *op = static_cast<vtkITKLevelTracingImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkITKLevelTracingImageFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLevelTracingImageFilter_SetSeed_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLevelTracingImageFilter *op = static_cast<vtkITKLevelTracingImageFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSeed(temp0, temp1, temp2);
    }
    else
    {
      op->vtkITKLevelTracingImageFilter::SetSeed(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkITKLevelTracingImageFilter_SetSeed_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLevelTracingImageFilter *op = static_cast<vtkITKLevelTracingImageFilter *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSeed(temp0);
    }
    else
    {
      op->vtkITKLevelTracingImageFilter::SetSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkITKLevelTracingImageFilter_SetSeed(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkITKLevelTracingImageFilter_SetSeed_s1(self, args);
    case 1:
      return PyvtkITKLevelTracingImageFilter_SetSeed_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSeed");
  return nullptr;
}


static PyObject *
PyvtkITKLevelTracingImageFilter_GetSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLevelTracingImageFilter *op = static_cast<vtkITKLevelTracingImageFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSeed() :
      op->vtkITKLevelTracingImageFilter::GetSeed());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLevelTracingImageFilter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLevelTracingImageFilter *op = static_cast<vtkITKLevelTracingImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkITKLevelTracingImageFilter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKLevelTracingImageFilter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLevelTracingImageFilter *op = static_cast<vtkITKLevelTracingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkITKLevelTracingImageFilter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKLevelTracingImageFilter_SetPlaneToIJ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToIJ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLevelTracingImageFilter *op = static_cast<vtkITKLevelTracingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToIJ();
    }
    else
    {
      op->vtkITKLevelTracingImageFilter::SetPlaneToIJ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKLevelTracingImageFilter_SetPlaneToIK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToIK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLevelTracingImageFilter *op = static_cast<vtkITKLevelTracingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToIK();
    }
    else
    {
      op->vtkITKLevelTracingImageFilter::SetPlaneToIK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKLevelTracingImageFilter_SetPlaneToJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKLevelTracingImageFilter *op = static_cast<vtkITKLevelTracingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToJK();
    }
    else
    {
      op->vtkITKLevelTracingImageFilter::SetPlaneToJK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkITKLevelTracingImageFilter_Methods[] = {
  {"IsTypeOf", PyvtkITKLevelTracingImageFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkITKLevelTracingImageFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkITKLevelTracingImageFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkITKLevelTracingImageFilter\nC++: static vtkITKLevelTracingImageFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkITKLevelTracingImageFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkITKLevelTracingImageFilter\nC++: vtkITKLevelTracingImageFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkITKLevelTracingImageFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkITKLevelTracingImageFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSeed", PyvtkITKLevelTracingImageFilter_SetSeed, METH_VARARGS,
   "SetSeed(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetSeed(int _arg1, int _arg2, int _arg3)\nSetSeed(self, _arg:(int, int, int)) -> None\nC++: virtual void SetSeed(const int _arg[3])\n\nMethods to set/get seeds.  Seeds are specified in IJK (not XYZ).\n"},
  {"GetSeed", PyvtkITKLevelTracingImageFilter_GetSeed, METH_VARARGS,
   "GetSeed(self) -> (int, int, int)\nC++: virtual int *GetSeed()\n\n"},
  {"SetPlane", PyvtkITKLevelTracingImageFilter_SetPlane, METH_VARARGS,
   "SetPlane(self, _arg:int) -> None\nC++: virtual void SetPlane(int _arg)\n\nMethod to set the plane (IJ=2, IK=1, JK=0)\n"},
  {"GetPlane", PyvtkITKLevelTracingImageFilter_GetPlane, METH_VARARGS,
   "GetPlane(self) -> int\nC++: virtual int GetPlane()\n\n"},
  {"SetPlaneToIJ", PyvtkITKLevelTracingImageFilter_SetPlaneToIJ, METH_VARARGS,
   "SetPlaneToIJ(self) -> None\nC++: void SetPlaneToIJ()\n\n"},
  {"SetPlaneToIK", PyvtkITKLevelTracingImageFilter_SetPlaneToIK, METH_VARARGS,
   "SetPlaneToIK(self) -> None\nC++: void SetPlaneToIK()\n\n"},
  {"SetPlaneToJK", PyvtkITKLevelTracingImageFilter_SetPlaneToJK, METH_VARARGS,
   "SetPlaneToJK(self) -> None\nC++: void SetPlaneToJK()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkITKLevelTracingImageFilter_Doc =
  "vtkITKLevelTracingImageFilter - Wrapper class around\nitk::LevelTracingImageFilterImageFilter.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "itk::LevelTracingImageFilter LevelTracingImageFilter traces a level\n"
  "curve (or surface) from a seed point.  The pixels on this level curve\n"
  "\"boundary\" are labeled as 1. Does nothing if seed is in uniform area.\n\n"
  "This filter is specialized to volumes. If you are interested in\n"
  "contouring other types of data, use the general vtkContourFilter. If\n"
  "you want to contour an image (i.e., a volume slice), use\n"
  "vtkMarchingSquares.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKLevelTracingImageFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKLevelTracingImageFilter", // tp_name
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
  PyvtkITKLevelTracingImageFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkITKLevelTracingImageFilter_StaticNew()
{
  return vtkITKLevelTracingImageFilter::New();
}

PyObject *PyvtkITKLevelTracingImageFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkITKLevelTracingImageFilter_Type, PyvtkITKLevelTracingImageFilter_Methods,
    "vtkITKLevelTracingImageFilter",
 &PyvtkITKLevelTracingImageFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkITKLevelTracingImageFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkITKLevelTracingImageFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkITKLevelTracingImageFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

