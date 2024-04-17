// python wrapper for vtkFastSelectVisiblePoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFastSelectVisiblePoints.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFastSelectVisiblePoints(PyObject *dict); }
extern "C" { PyObject *PyvtkFastSelectVisiblePoints_ClassNew(); }


static PyObject *
PyvtkFastSelectVisiblePoints_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFastSelectVisiblePoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSelectVisiblePoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSelectVisiblePoints *op = static_cast<vtkFastSelectVisiblePoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFastSelectVisiblePoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSelectVisiblePoints_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFastSelectVisiblePoints *tempr = vtkFastSelectVisiblePoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSelectVisiblePoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSelectVisiblePoints *op = static_cast<vtkFastSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFastSelectVisiblePoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFastSelectVisiblePoints::NewInstance());

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
PyvtkFastSelectVisiblePoints_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFastSelectVisiblePoints::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSelectVisiblePoints_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSelectVisiblePoints *op = static_cast<vtkFastSelectVisiblePoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFastSelectVisiblePoints::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSelectVisiblePoints_UpdateZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSelectVisiblePoints *op = static_cast<vtkFastSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateZBuffer();
    }
    else
    {
      op->vtkFastSelectVisiblePoints::UpdateZBuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastSelectVisiblePoints_ResetZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSelectVisiblePoints *op = static_cast<vtkFastSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetZBuffer();
    }
    else
    {
      op->vtkFastSelectVisiblePoints::ResetZBuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFastSelectVisiblePoints_GetZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSelectVisiblePoints *op = static_cast<vtkFastSelectVisiblePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetZBuffer() :
      op->vtkFastSelectVisiblePoints::GetZBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFastSelectVisiblePoints_SetZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSelectVisiblePoints *op = static_cast<vtkFastSelectVisiblePoints *>(vp);

  vtkFloatArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->SetZBuffer(temp0);
    }
    else
    {
      op->vtkFastSelectVisiblePoints::SetZBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFastSelectVisiblePoints_Methods[] = {
  {"IsTypeOf", PyvtkFastSelectVisiblePoints_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFastSelectVisiblePoints_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFastSelectVisiblePoints_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFastSelectVisiblePoints\nC++: static vtkFastSelectVisiblePoints *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFastSelectVisiblePoints_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFastSelectVisiblePoints\nC++: vtkFastSelectVisiblePoints *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFastSelectVisiblePoints_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFastSelectVisiblePoints_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"UpdateZBuffer", PyvtkFastSelectVisiblePoints_UpdateZBuffer, METH_VARARGS,
   "UpdateZBuffer(self) -> None\nC++: void UpdateZBuffer()\n\n"},
  {"ResetZBuffer", PyvtkFastSelectVisiblePoints_ResetZBuffer, METH_VARARGS,
   "ResetZBuffer(self) -> None\nC++: void ResetZBuffer()\n\n"},
  {"GetZBuffer", PyvtkFastSelectVisiblePoints_GetZBuffer, METH_VARARGS,
   "GetZBuffer(self) -> vtkFloatArray\nC++: vtkFloatArray *GetZBuffer()\n\n"},
  {"SetZBuffer", PyvtkFastSelectVisiblePoints_SetZBuffer, METH_VARARGS,
   "SetZBuffer(self, zBuffer:vtkFloatArray) -> None\nC++: void SetZBuffer(vtkFloatArray *zBuffer)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFastSelectVisiblePoints_Doc =
  "vtkFastSelectVisiblePoints - extract points that are visible (based\non z-buffer calculation)\n\n"
  "Superclass: vtkSelectVisiblePoints\n\n"
  "vtkFastSelectVisiblePoints is a filter that selects points based on\n"
  "whether they are visible or not. Visibility is determined by\n"
  "accessing the z-buffer of a rendering window. (The position of each\n"
  "input point is converted into display coordinates, and then the\n"
  "z-value at that point is obtained. If within the user-specified\n"
  "tolerance, the point is considered visible.)\n\n"
  "Points that are visible (or if the ivar SelectInvisible is on,\n"
  "invisible points) are passed to the output. Associated data\n"
  "attributes are passed to the output as well.\n\n"
  "This filter also allows you to specify a rectangular window in\n"
  "display (pixel) coordinates in which the visible points must lie.\n"
  "This can be used as a sort of local \"brushing\" operation to select\n"
  "just data within a window.\n\n"
  "@warning\n"
  "You must carefully synchronize the execution of this filter. The\n"
  "filter refers to a renderer, which is modified every time a render\n"
  "occurs. Therefore, the filter is always out of date, and always\n"
  "executes. You may have to perform two rendering passes, or if you are\n"
  "using this filter in conjunction with vtkLabeledDataMapper, things\n"
  "work out because 2D rendering occurs after the 3D rendering.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFastSelectVisiblePoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleVTKWidgetsPython.vtkFastSelectVisiblePoints", // tp_name
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
  PyvtkFastSelectVisiblePoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFastSelectVisiblePoints_StaticNew()
{
  return vtkFastSelectVisiblePoints::New();
}

PyObject *PyvtkFastSelectVisiblePoints_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFastSelectVisiblePoints_Type, PyvtkFastSelectVisiblePoints_Methods,
    "vtkFastSelectVisiblePoints",
 &PyvtkFastSelectVisiblePoints_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSelectVisiblePoints");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFastSelectVisiblePoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFastSelectVisiblePoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFastSelectVisiblePoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

