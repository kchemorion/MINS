// python wrapper for vtkImageNeighborhoodFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkImageNeighborhoodFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageNeighborhoodFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkImageNeighborhoodFilter_ClassNew(); }


static PyObject *
PyvtkImageNeighborhoodFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageNeighborhoodFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNeighborhoodFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNeighborhoodFilter *op = static_cast<vtkImageNeighborhoodFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageNeighborhoodFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNeighborhoodFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageNeighborhoodFilter *tempr = vtkImageNeighborhoodFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNeighborhoodFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNeighborhoodFilter *op = static_cast<vtkImageNeighborhoodFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageNeighborhoodFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageNeighborhoodFilter::NewInstance());

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
PyvtkImageNeighborhoodFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageNeighborhoodFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNeighborhoodFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNeighborhoodFilter *op = static_cast<vtkImageNeighborhoodFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageNeighborhoodFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNeighborhoodFilter_GetMaskPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNeighborhoodFilter *op = static_cast<vtkImageNeighborhoodFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetMaskPointer() :
      op->vtkImageNeighborhoodFilter::GetMaskPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNeighborhoodFilter_SetNeighborTo8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborTo8");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNeighborhoodFilter *op = static_cast<vtkImageNeighborhoodFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNeighborTo8();
    }
    else
    {
      op->vtkImageNeighborhoodFilter::SetNeighborTo8();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNeighborhoodFilter_SetNeighborTo4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborTo4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNeighborhoodFilter *op = static_cast<vtkImageNeighborhoodFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNeighborTo4();
    }
    else
    {
      op->vtkImageNeighborhoodFilter::SetNeighborTo4();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNeighborhoodFilter_GetNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNeighborhoodFilter *op = static_cast<vtkImageNeighborhoodFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNeighbor() :
      op->vtkImageNeighborhoodFilter::GetNeighbor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNeighborhoodFilter_GetRelativeHoodExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeHoodExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNeighborhoodFilter *op = static_cast<vtkImageNeighborhoodFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->GetRelativeHoodExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageNeighborhoodFilter::GetRelativeHoodExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNeighborhoodFilter_GetMaskIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNeighborhoodFilter *op = static_cast<vtkImageNeighborhoodFilter *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetMaskIncrements(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageNeighborhoodFilter::GetMaskIncrements(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageNeighborhoodFilter_Methods[] = {
  {"IsTypeOf", PyvtkImageNeighborhoodFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageNeighborhoodFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageNeighborhoodFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageNeighborhoodFilter\nC++: static vtkImageNeighborhoodFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageNeighborhoodFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageNeighborhoodFilter\nC++: vtkImageNeighborhoodFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageNeighborhoodFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageNeighborhoodFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMaskPointer", PyvtkImageNeighborhoodFilter_GetMaskPointer, METH_VARARGS,
   "GetMaskPointer(self) -> Pointer\nC++: unsigned char *GetMaskPointer()\n\nMask that defines area of interest in the neighborhood. Value is\n1 for voxels of interest, 0 otherwise. This should be used when\nlooping through neighborhood.\n"},
  {"SetNeighborTo8", PyvtkImageNeighborhoodFilter_SetNeighborTo8, METH_VARARGS,
   "SetNeighborTo8(self) -> None\nC++: void SetNeighborTo8()\n\nUse 4 or 8 neighbor connectivity in neighborhood around pixel\nThis is in 3D\n"},
  {"SetNeighborTo4", PyvtkImageNeighborhoodFilter_SetNeighborTo4, METH_VARARGS,
   "SetNeighborTo4(self) -> None\nC++: void SetNeighborTo4()\n\n"},
  {"GetNeighbor", PyvtkImageNeighborhoodFilter_GetNeighbor, METH_VARARGS,
   "GetNeighbor(self) -> int\nC++: virtual int GetNeighbor()\n\nGet the neighborhood size (for erode class)\n"},
  {"GetRelativeHoodExtent", PyvtkImageNeighborhoodFilter_GetRelativeHoodExtent, METH_VARARGS,
   "GetRelativeHoodExtent(self, hoodMin0:int, hoodMax0:int,\n    hoodMin1:int, hoodMax1:int, hoodMin2:int, hoodMax2:int)\n    -> None\nC++: void GetRelativeHoodExtent(int &hoodMin0, int &hoodMax0,\n    int &hoodMin1, int &hoodMax1, int &hoodMin2, int &hoodMax2)\n\nGet the neighborhood extent, where the max/min numbers are\noffsets from the current voxel.  (So these numbers may be\nnegative.) For use when looping through the neighborhood.\n"},
  {"GetMaskIncrements", PyvtkImageNeighborhoodFilter_GetMaskIncrements, METH_VARARGS,
   "GetMaskIncrements(self, maskInc0:int, maskInc1:int, maskInc2:int)\n    -> None\nC++: void GetMaskIncrements(vtkIdType &maskInc0,\n    vtkIdType &maskInc1, vtkIdType &maskInc2)\n\nGet the increments to use when looping through the mask.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageNeighborhoodFilter_Doc =
  "vtkImageNeighborhoodFilter - Augments vtkImageSpatialFilter with a\nmask to allow neighborhoods of any shape.\n\n"
  "Superclass: vtkImageSpatialAlgorithm\n\n"
  "4 or 8 neighbor connectivity, or subclasses may define their own\n"
  "neighborhood shapes. The mask is basically a binary (0/1) filter\n"
  "kernel to define neighbors of interest.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageNeighborhoodFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkImageNeighborhoodFilter", // tp_name
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
  PyvtkImageNeighborhoodFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageNeighborhoodFilter_StaticNew()
{
  return vtkImageNeighborhoodFilter::New();
}

PyObject *PyvtkImageNeighborhoodFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageNeighborhoodFilter_Type, PyvtkImageNeighborhoodFilter_Methods,
    "vtkImageNeighborhoodFilter",
 &PyvtkImageNeighborhoodFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageSpatialAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageNeighborhoodFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageNeighborhoodFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageNeighborhoodFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

