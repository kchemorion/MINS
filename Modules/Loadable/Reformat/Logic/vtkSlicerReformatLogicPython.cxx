// python wrapper for vtkSlicerReformatLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerReformatLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerReformatLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerReformatLogic_ClassNew(); }


static PyObject *
PyvtkSlicerReformatLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerReformatLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerReformatLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerReformatLogic *op = static_cast<vtkSlicerReformatLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerReformatLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerReformatLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerReformatLogic *tempr = vtkSlicerReformatLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerReformatLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerReformatLogic *op = static_cast<vtkSlicerReformatLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerReformatLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerReformatLogic::NewInstance());

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
PyvtkSlicerReformatLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerReformatLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerReformatLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerReformatLogic *op = static_cast<vtkSlicerReformatLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerReformatLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerReformatLogic_SetSliceOrigin_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetSliceOrigin");

  vtkMRMLSliceNode *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkSlicerReformatLogic::SetSliceOrigin(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerReformatLogic_SetSliceOrigin_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetSliceOrigin");

  vtkMRMLSliceNode *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkSlicerReformatLogic::SetSliceOrigin(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerReformatLogic_SetSliceOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkSlicerReformatLogic_SetSliceOrigin_s1(self, args);
    case 2:
      return PyvtkSlicerReformatLogic_SetSliceOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceOrigin");
  return nullptr;
}


static PyObject *
PyvtkSlicerReformatLogic_SetSliceNormal_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetSliceNormal");

  vtkMRMLSliceNode *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkSlicerReformatLogic::SetSliceNormal(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerReformatLogic_SetSliceNormal_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetSliceNormal");

  vtkMRMLSliceNode *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkSlicerReformatLogic::SetSliceNormal(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerReformatLogic_SetSliceNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkSlicerReformatLogic_SetSliceNormal_s1(self, args);
    case 2:
      return PyvtkSlicerReformatLogic_SetSliceNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceNormal");
  return nullptr;
}


static PyObject *
PyvtkSlicerReformatLogic_GetVolumeBounds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVolumeBounds");

  vtkMRMLSliceNode *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkSlicerReformatLogic::GetVolumeBounds(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerReformatLogic_GetCenterFromBounds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCenterFromBounds");

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkSlicerReformatLogic::GetCenterFromBounds(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerReformatLogic_RotateSlice(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RotateSlice");

  vtkMRMLSliceNode *temp0 = nullptr;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkSlicerReformatLogic::RotateSlice(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerReformatLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerReformatLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerReformatLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerReformatLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerReformatLogic\nC++: static vtkSlicerReformatLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerReformatLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerReformatLogic\nC++: vtkSlicerReformatLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerReformatLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerReformatLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSliceOrigin", PyvtkSlicerReformatLogic_SetSliceOrigin, METH_VARARGS,
   "SetSliceOrigin(node:vtkMRMLSliceNode, x:float, y:float, z:float)\n    -> None\nC++: static void SetSliceOrigin(vtkMRMLSliceNode *node, double x,\n    double y, double z)\nSetSliceOrigin(node:vtkMRMLSliceNode, position:[float, float,\n    float]) -> None\nC++: static void SetSliceOrigin(vtkMRMLSliceNode *node,\n    double position[3])\n\nSet the world coordinate origin position\n"},
  {"SetSliceNormal", PyvtkSlicerReformatLogic_SetSliceNormal, METH_VARARGS,
   "SetSliceNormal(node:vtkMRMLSliceNode, x:float, y:float, z:float)\n    -> None\nC++: static void SetSliceNormal(vtkMRMLSliceNode *node, double x,\n    double y, double z)\nSetSliceNormal(node:vtkMRMLSliceNode, normal:[float, float,\n    float]) -> None\nC++: static void SetSliceNormal(vtkMRMLSliceNode *node,\n    double normal[3])\n\nSet the normal to the plane of the slice node.\n"},
  {"GetVolumeBounds", PyvtkSlicerReformatLogic_GetVolumeBounds, METH_VARARGS,
   "GetVolumeBounds(node:vtkMRMLSliceNode, bounds:[float, float,\n    float, float, float, float]) -> None\nC++: static void GetVolumeBounds(vtkMRMLSliceNode *node,\n    double bounds[6])\n\nCompute and return the volume bounding box\n"},
  {"GetCenterFromBounds", PyvtkSlicerReformatLogic_GetCenterFromBounds, METH_VARARGS,
   "GetCenterFromBounds(bounds:[float, float, float, float, float,\n    float], center:[float, float, float]) -> None\nC++: static void GetCenterFromBounds(double bounds[6],\n    double center[3])\n\nCompute the center from a bounds\n"},
  {"RotateSlice", PyvtkSlicerReformatLogic_RotateSlice, METH_VARARGS,
   "RotateSlice(node:vtkMRMLSliceNode, axisIndex:int,\n    rotationAngleDeg:float) -> None\nC++: static void RotateSlice(vtkMRMLSliceNode *node,\n    int axisIndex, double rotationAngleDeg)\n\nRotate slice along an axis (0 = horizontal, 1 = vertical, 2 =\nslice normal) Flip: axisIndex = 0 (vertical) or 1 (horizontal),\nrotationAngleDeg = 180. In-plane rotation: axisIndex = 2,\nrotationAngleDeg > 0 for clockwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerReformatLogic_Doc =
  "vtkSlicerReformatLogic - slicer logic class for volumes manipulation\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
  "This class manages the logic associated with reading, saving, and\n"
  "changing propertied of the volumes\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerReformatLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerReformatModuleLogicPython.vtkSlicerReformatLogic", // tp_name
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
  PyvtkSlicerReformatLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerReformatLogic_StaticNew()
{
  return vtkSlicerReformatLogic::New();
}

PyObject *PyvtkSlicerReformatLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerReformatLogic_Type, PyvtkSlicerReformatLogic_Methods,
    "vtkSlicerReformatLogic",
 &PyvtkSlicerReformatLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerReformatLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerReformatLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerReformatLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

