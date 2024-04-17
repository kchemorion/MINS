// python wrapper for vtkITKGrowCut
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkITKGrowCut.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkITKGrowCut(PyObject *dict); }
extern "C" { PyObject *PyvtkITKGrowCut_ClassNew(); }


static PyObject *
PyvtkITKGrowCut_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkITKGrowCut::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGrowCut_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGrowCut *op = static_cast<vtkITKGrowCut *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkITKGrowCut::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGrowCut_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkITKGrowCut *tempr = vtkITKGrowCut::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGrowCut_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGrowCut *op = static_cast<vtkITKGrowCut *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkITKGrowCut *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkITKGrowCut::NewInstance());

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
PyvtkITKGrowCut_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkITKGrowCut::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGrowCut_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGrowCut *op = static_cast<vtkITKGrowCut *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkITKGrowCut::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGrowCut_SetIntensityVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntensityVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGrowCut *op = static_cast<vtkITKGrowCut *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetIntensityVolume(temp0);
    }
    else
    {
      op->vtkITKGrowCut::SetIntensityVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKGrowCut_SetSeedLabelVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeedLabelVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGrowCut *op = static_cast<vtkITKGrowCut *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetSeedLabelVolume(temp0);
    }
    else
    {
      op->vtkITKGrowCut::SetSeedLabelVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKGrowCut_SetMaskVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGrowCut *op = static_cast<vtkITKGrowCut *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetMaskVolume(temp0);
    }
    else
    {
      op->vtkITKGrowCut::SetMaskVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKGrowCut_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGrowCut *op = static_cast<vtkITKGrowCut *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkITKGrowCut::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKGrowCut_GetDistancePenalty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistancePenalty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGrowCut *op = static_cast<vtkITKGrowCut *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistancePenalty() :
      op->vtkITKGrowCut::GetDistancePenalty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKGrowCut_SetDistancePenalty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistancePenalty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKGrowCut *op = static_cast<vtkITKGrowCut *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistancePenalty(temp0);
    }
    else
    {
      op->vtkITKGrowCut::SetDistancePenalty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkITKGrowCut_Methods[] = {
  {"IsTypeOf", PyvtkITKGrowCut_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkITKGrowCut_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkITKGrowCut_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkITKGrowCut\nC++: static vtkITKGrowCut *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkITKGrowCut_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkITKGrowCut\nC++: vtkITKGrowCut *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkITKGrowCut_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkITKGrowCut_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetIntensityVolume", PyvtkITKGrowCut_SetIntensityVolume, METH_VARARGS,
   "SetIntensityVolume(self, intensityVolume:vtkImageData) -> None\nC++: void SetIntensityVolume(vtkImageData *intensityVolume)\n\nSet input grayscale volume (input 0)\n"},
  {"SetSeedLabelVolume", PyvtkITKGrowCut_SetSeedLabelVolume, METH_VARARGS,
   "SetSeedLabelVolume(self, labelImage:vtkImageData) -> None\nC++: void SetSeedLabelVolume(vtkImageData *labelImage)\n\nSet input seed label volume (input 1)\n"},
  {"SetMaskVolume", PyvtkITKGrowCut_SetMaskVolume, METH_VARARGS,
   "SetMaskVolume(self, labelImage:vtkImageData) -> None\nC++: void SetMaskVolume(vtkImageData *labelImage)\n\nSet mask volume (input 2). Optional. If this volume is specified\nthen only those regions outside the mask (where mask has zero\nvalue) will be included in the segmentation result. Regions\noutside the mask will not be used for region growing either\n(growing will not start from or cross through masked region).\n"},
  {"Reset", PyvtkITKGrowCut_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nReset to initial state. This forces full recomputation of the\nresult label volume. This method has to be called if intensity\nvolume changes or if seeds are deleted after initial computation.\n"},
  {"GetDistancePenalty", PyvtkITKGrowCut_GetDistancePenalty, METH_VARARGS,
   "GetDistancePenalty(self) -> float\nC++: virtual double GetDistancePenalty()\n\nSpatial regularization factor, which can force growing in nearby\nregions. For each physical unit distance, this much intensity\nlevel difference is simulated. By default = 0, which means\nspatial distance does not play a role in the region growing, only\nintensity value similarity.\n"},
  {"SetDistancePenalty", PyvtkITKGrowCut_SetDistancePenalty, METH_VARARGS,
   "SetDistancePenalty(self, distancePenalty:float) -> None\nC++: void SetDistancePenalty(double distancePenalty)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkITKGrowCut_Doc =
  "vtkITKGrowCut - ITK-based utilities for manipulating connected\nregions in label maps.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "Limitation: The filter does not work correctly with input volume that\n"
  "has unsigned long scalar type on Linux and macOS.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKGrowCut_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKGrowCut", // tp_name
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
  PyvtkITKGrowCut_Doc, // tp_doc
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

static vtkObjectBase *PyvtkITKGrowCut_StaticNew()
{
  return vtkITKGrowCut::New();
}

PyObject *PyvtkITKGrowCut_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkITKGrowCut_Type, PyvtkITKGrowCut_Methods,
    "vtkITKGrowCut",
 &PyvtkITKGrowCut_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkITKGrowCut(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkITKGrowCut_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkITKGrowCut", o) != 0)
  {
    Py_DECREF(o);
  }

}

