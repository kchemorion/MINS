// python wrapper for vtkSegmentationModifier
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSegmentationModifier.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSegmentationModifier(PyObject *dict); }
extern "C" { PyObject *PyvtkSegmentationModifier_ClassNew(); }


static PyObject *
PyvtkSegmentationModifier_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegmentationModifier::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationModifier_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationModifier *op = static_cast<vtkSegmentationModifier *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegmentationModifier::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationModifier_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegmentationModifier *tempr = vtkSegmentationModifier::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationModifier_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationModifier *op = static_cast<vtkSegmentationModifier *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentationModifier *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegmentationModifier::NewInstance());

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
PyvtkSegmentationModifier_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSegmentationModifier::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationModifier_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentationModifier *op = static_cast<vtkSegmentationModifier *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSegmentationModifier::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentationModifier_GetSharedSegmentIDsInMask(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSharedSegmentIDsInMask");

  vtkSegmentation *temp0 = nullptr;
  std::string temp1;
  vtkOrientedImageData *temp2 = nullptr;
  const size_t size3 = 6;
  int temp3[6];
  std::vector<std::string> temp4(ap.GetArgSize(4));
  int temp5 = 0.0;
  bool temp6 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5, 7) &&
      ap.GetVTKObject(temp0, "vtkSegmentation") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkOrientedImageData") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4.data(), temp4.size()) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    bool tempr = vtkSegmentationModifier::GetSharedSegmentIDsInMask(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp4.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp4.data(), temp4.size()));
      ap.SetContents(4, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentationModifier_Methods[] = {
  {"IsTypeOf", PyvtkSegmentationModifier_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegmentationModifier_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegmentationModifier_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSegmentationModifier\nC++: static vtkSegmentationModifier *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegmentationModifier_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSegmentationModifier\nC++: vtkSegmentationModifier *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSegmentationModifier_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSegmentationModifier_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetSharedSegmentIDsInMask", PyvtkSegmentationModifier_GetSharedSegmentIDsInMask, METH_VARARGS,
   "GetSharedSegmentIDsInMask(segmentation:vtkSegmentation,\n    sharedSegmentID:str, mask:vtkOrientedImageData, extent:(int,\n    int, int, int, int, int), segmentIDs:[str, ...],\n    maskThreshold:int=0.0, includeInputSharedSegmentID:bool=False)\n     -> bool\nC++: static bool GetSharedSegmentIDsInMask(\n    vtkSegmentation *segmentation, std::string sharedSegmentID,\n    vtkOrientedImageData *mask, const int extent[6],\n    std::vector<std::string> &segmentIDs, int maskThreshold=0.0,\n    bool includeInputSharedSegmentID=false)\n\nGet the list of segment IDs in the same shared labelmap that are\ncontained within the mask\n\\param segmentationNode Node containing the segmentation\n\\param sharedSegmentID Segment ID of the segment that contains\n    the shared labelmap to be checked\n\\param mask Mask labelmap\n\\param segmentIDs Output list of segment IDs under the mask\n\\param includeInputSharedSegmentID If false, sharedSegmentID will\nnot be added to the list of output segment IDs even if it is\n    within the mask\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSegmentationModifier_Doc =
  "vtkSegmentationModifier - Utility functions for resampling oriented\nimage data\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegmentationModifier_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkSegmentationModifier", // tp_name
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
  PyvtkSegmentationModifier_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSegmentationModifier_StaticNew()
{
  return vtkSegmentationModifier::New();
}

PyObject *PyvtkSegmentationModifier_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSegmentationModifier_Type, PyvtkSegmentationModifier_Methods,
    "vtkSegmentationModifier",
 &PyvtkSegmentationModifier_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "MODE_REPLACE", vtkSegmentationModifier::MODE_REPLACE },
        { "MODE_MERGE_MAX", vtkSegmentationModifier::MODE_MERGE_MAX },
        { "MODE_MERGE_MIN", vtkSegmentationModifier::MODE_MERGE_MIN },
        { "MODE_MERGE_MASK", vtkSegmentationModifier::MODE_MERGE_MASK },
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

void PyVTKAddFile_vtkSegmentationModifier(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSegmentationModifier_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegmentationModifier", o) != 0)
  {
    Py_DECREF(o);
  }

}

