// python wrapper for vtkMRMLSegmentationsDisplayableManager3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSegmentationsDisplayableManager3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSegmentationsDisplayableManager3D(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSegmentationsDisplayableManager3D_ClassNew(); }


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSegmentationsDisplayableManager3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationsDisplayableManager3D *op = static_cast<vtkMRMLSegmentationsDisplayableManager3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSegmentationsDisplayableManager3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSegmentationsDisplayableManager3D *tempr = vtkMRMLSegmentationsDisplayableManager3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationsDisplayableManager3D *op = static_cast<vtkMRMLSegmentationsDisplayableManager3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSegmentationsDisplayableManager3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSegmentationsDisplayableManager3D::NewInstance());

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
PyvtkMRMLSegmentationsDisplayableManager3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSegmentationsDisplayableManager3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationsDisplayableManager3D *op = static_cast<vtkMRMLSegmentationsDisplayableManager3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSegmentationsDisplayableManager3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager3D_Pick3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationsDisplayableManager3D *op = static_cast<vtkMRMLSegmentationsDisplayableManager3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Pick3D(temp0) :
      op->vtkMRMLSegmentationsDisplayableManager3D::Pick3D(temp0));

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
PyvtkMRMLSegmentationsDisplayableManager3D_GetPickedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationsDisplayableManager3D *op = static_cast<vtkMRMLSegmentationsDisplayableManager3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPickedNodeID() :
      op->vtkMRMLSegmentationsDisplayableManager3D::GetPickedNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationsDisplayableManager3D_GetPickedSegmentID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedSegmentID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationsDisplayableManager3D *op = static_cast<vtkMRMLSegmentationsDisplayableManager3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPickedSegmentID() :
      op->vtkMRMLSegmentationsDisplayableManager3D::GetPickedSegmentID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSegmentationsDisplayableManager3D_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSegmentationsDisplayableManager3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSegmentationsDisplayableManager3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSegmentationsDisplayableManager3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLSegmentationsDisplayableManager3D\nC++: static vtkMRMLSegmentationsDisplayableManager3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSegmentationsDisplayableManager3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSegmentationsDisplayableManager3D\nC++: vtkMRMLSegmentationsDisplayableManager3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSegmentationsDisplayableManager3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSegmentationsDisplayableManager3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Pick3D", PyvtkMRMLSegmentationsDisplayableManager3D_Pick3D, METH_VARARGS,
   "Pick3D(self, ras:[float, float, float]) -> int\nC++: int Pick3D(double ras[3]) override;\n\nFind display node managed by the displayable manager at a\nspecified world RAS position.\n\\return Non-zero in case a node is found at the position, 0\n    otherwise\n"},
  {"GetPickedNodeID", PyvtkMRMLSegmentationsDisplayableManager3D_GetPickedNodeID, METH_VARARGS,
   "GetPickedNodeID(self) -> str\nC++: const char *GetPickedNodeID() override;\n\nGet the MRML ID of the picked node, returns empty string if no\npick\n"},
  {"GetPickedSegmentID", PyvtkMRMLSegmentationsDisplayableManager3D_GetPickedSegmentID, METH_VARARGS,
   "GetPickedSegmentID(self) -> str\nC++: virtual const char *GetPickedSegmentID()\n\nGet the ID of the picked segment, returns empty string if no pick\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSegmentationsDisplayableManager3D_Doc =
  "vtkMRMLSegmentationsDisplayableManager3D - Display segmentations in\n3D views\n\n"
  "Superclass: vtkMRMLAbstractThreeDViewDisplayableManager\n\n"
  "Displays poly data representations of segmentations in 3D viewers If\n"
  "source representation is a poly data then show source representation.\n"
  "Otherwise show first poly data representation if any. Otherwise try\n"
  "converting to closed surface representation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSegmentationsDisplayableManager3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSegmentationsModuleMRMLDisplayableManagerPython.vtkMRMLSegmentationsDisplayableManager3D", // tp_name
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
  PyvtkMRMLSegmentationsDisplayableManager3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSegmentationsDisplayableManager3D_StaticNew()
{
  return vtkMRMLSegmentationsDisplayableManager3D::New();
}

PyObject *PyvtkMRMLSegmentationsDisplayableManager3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSegmentationsDisplayableManager3D_Type, PyvtkMRMLSegmentationsDisplayableManager3D_Methods,
    "vtkMRMLSegmentationsDisplayableManager3D",
 &PyvtkMRMLSegmentationsDisplayableManager3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLAbstractThreeDViewDisplayableManager");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSegmentationsDisplayableManager3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSegmentationsDisplayableManager3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSegmentationsDisplayableManager3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

