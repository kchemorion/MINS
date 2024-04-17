// python wrapper for vtkMRMLSegmentationsDisplayableManager2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSegmentationsDisplayableManager2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSegmentationsDisplayableManager2D(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSegmentationsDisplayableManager2D_ClassNew(); }


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSegmentationsDisplayableManager2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationsDisplayableManager2D *op = static_cast<vtkMRMLSegmentationsDisplayableManager2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSegmentationsDisplayableManager2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSegmentationsDisplayableManager2D *tempr = vtkMRMLSegmentationsDisplayableManager2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationsDisplayableManager2D *op = static_cast<vtkMRMLSegmentationsDisplayableManager2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSegmentationsDisplayableManager2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSegmentationsDisplayableManager2D::NewInstance());

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
PyvtkMRMLSegmentationsDisplayableManager2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSegmentationsDisplayableManager2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationsDisplayableManager2D *op = static_cast<vtkMRMLSegmentationsDisplayableManager2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSegmentationsDisplayableManager2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager2D_GetDataProbeInfoStringForPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataProbeInfoStringForPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationsDisplayableManager2D *op = static_cast<vtkMRMLSegmentationsDisplayableManager2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    std::string tempr = (ap.IsBound() ?
      op->GetDataProbeInfoStringForPosition(temp0) :
      op->vtkMRMLSegmentationsDisplayableManager2D::GetDataProbeInfoStringForPosition(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager2D_GetVisibleSegmentsForPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleSegmentsForPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationsDisplayableManager2D *op = static_cast<vtkMRMLSegmentationsDisplayableManager2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkMRMLSegmentationDisplayNode *temp1 = nullptr;
  vtkStringArray *temp2 = nullptr;
  vtkDoubleArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationDisplayNode") &&
      ap.GetVTKObject(temp2, "vtkStringArray") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkDoubleArray")))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetVisibleSegmentsForPosition(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLSegmentationsDisplayableManager2D::GetVisibleSegmentsForPosition(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSegmentationsDisplayableManager2D_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSegmentationsDisplayableManager2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSegmentationsDisplayableManager2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSegmentationsDisplayableManager2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLSegmentationsDisplayableManager2D\nC++: static vtkMRMLSegmentationsDisplayableManager2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSegmentationsDisplayableManager2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSegmentationsDisplayableManager2D\nC++: vtkMRMLSegmentationsDisplayableManager2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSegmentationsDisplayableManager2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSegmentationsDisplayableManager2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataProbeInfoStringForPosition", PyvtkMRMLSegmentationsDisplayableManager2D_GetDataProbeInfoStringForPosition, METH_VARARGS,
   "GetDataProbeInfoStringForPosition(self, xyz:[float, float, float])\n     -> str\nC++: std::string GetDataProbeInfoStringForPosition(double xyz[3])\n    override;\n\nAssemble and return info string to display in Data probe for a\ngiven viewer XYZ position.\n\\return Invalid string by default, meaning no information to\n    display.\n"},
  {"GetVisibleSegmentsForPosition", PyvtkMRMLSegmentationsDisplayableManager2D_GetVisibleSegmentsForPosition, METH_VARARGS,
   "GetVisibleSegmentsForPosition(self, ras:[float, float, float],\n    displayNode:vtkMRMLSegmentationDisplayNode,\n    segmentIDs:vtkStringArray, segmentValues:vtkDoubleArray=...)\n    -> None\nC++: virtual void GetVisibleSegmentsForPosition(double ras[3],\n    vtkMRMLSegmentationDisplayNode *displayNode,\n    vtkStringArray *segmentIDs,\n    vtkDoubleArray *segmentValues=nullptr)\n\nGet list of segments visible at selected display position.\nsegmentValues is optional, if not nullptr then it returns value\nfor each segment for fractional representations\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSegmentationsDisplayableManager2D_Doc =
  "vtkMRMLSegmentationsDisplayableManager2D - Displayable manager for\nshowing segmentations in slice (2D) views.\n\n"
  "Superclass: vtkMRMLAbstractSliceViewDisplayableManager\n\n"
  "Displays segmentations in slice viewers as labelmaps or contour lines\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSegmentationsDisplayableManager2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSegmentationsModuleMRMLDisplayableManagerPython.vtkMRMLSegmentationsDisplayableManager2D", // tp_name
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
  PyvtkMRMLSegmentationsDisplayableManager2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSegmentationsDisplayableManager2D_StaticNew()
{
  return vtkMRMLSegmentationsDisplayableManager2D::New();
}

PyObject *PyvtkMRMLSegmentationsDisplayableManager2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSegmentationsDisplayableManager2D_Type, PyvtkMRMLSegmentationsDisplayableManager2D_Methods,
    "vtkMRMLSegmentationsDisplayableManager2D",
 &PyvtkMRMLSegmentationsDisplayableManager2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLAbstractSliceViewDisplayableManager");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSegmentationsDisplayableManager2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSegmentationsDisplayableManager2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSegmentationsDisplayableManager2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

