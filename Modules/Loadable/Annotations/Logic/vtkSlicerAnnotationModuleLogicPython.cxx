// python wrapper for vtkSlicerAnnotationModuleLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSlicerAnnotationModuleLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerAnnotationModuleLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerAnnotationModuleLogic_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerAnnotationModuleLogic_Events_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleLogicPython.vtkSlicerAnnotationModuleLogic.Events", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkSlicerAnnotationModuleLogic_Events_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSlicerAnnotationModuleLogic_Events_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerAnnotationModuleLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerAnnotationModuleLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerAnnotationModuleLogic *tempr = vtkSlicerAnnotationModuleLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerAnnotationModuleLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerAnnotationModuleLogic::NewInstance());

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
PyvtkSlicerAnnotationModuleLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerAnnotationModuleLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerAnnotationModuleLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_RegisterNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterNodes();
    }
    else
    {
      op->vtkSlicerAnnotationModuleLogic::RegisterNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_CreateSnapShot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSnapShot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  double temp3;
  vtkImageData *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->CreateSnapShot(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkSlicerAnnotationModuleLogic::CreateSnapShot(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_ModifySnapShot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ModifySnapShot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  vtkStdString temp0;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  int temp3;
  double temp4;
  vtkImageData *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetVTKObject(temp5, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->ModifySnapShot(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSlicerAnnotationModuleLogic::ModifySnapShot(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_GetSnapShotName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapShotName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetSnapShotName(temp0) :
      op->vtkSlicerAnnotationModuleLogic::GetSnapShotName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_GetSnapShotDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapShotDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetSnapShotDescription(temp0) :
      op->vtkSlicerAnnotationModuleLogic::GetSnapShotDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_GetSnapShotScreenshotType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapShotScreenshotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSnapShotScreenshotType(temp0) :
      op->vtkSlicerAnnotationModuleLogic::GetSnapShotScreenshotType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_GetSnapShotScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapShotScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSnapShotScaleFactor(temp0) :
      op->vtkSlicerAnnotationModuleLogic::GetSnapShotScaleFactor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_GetSnapShotScreenshot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapShotScreenshot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetSnapShotScreenshot(temp0) :
      op->vtkSlicerAnnotationModuleLogic::GetSnapShotScreenshot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAnnotationModuleLogic_IsSnapshotNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSnapshotNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAnnotationModuleLogic *op = static_cast<vtkSlicerAnnotationModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSnapshotNode(temp0) :
      op->vtkSlicerAnnotationModuleLogic::IsSnapshotNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerAnnotationModuleLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerAnnotationModuleLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerAnnotationModuleLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerAnnotationModuleLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerAnnotationModuleLogic\nC++: static vtkSlicerAnnotationModuleLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerAnnotationModuleLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerAnnotationModuleLogic\nC++: vtkSlicerAnnotationModuleLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerAnnotationModuleLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerAnnotationModuleLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RegisterNodes", PyvtkSlicerAnnotationModuleLogic_RegisterNodes, METH_VARARGS,
   "RegisterNodes(self) -> None\nC++: void RegisterNodes() override;\n\nRegister MRML Node classes to Scene. Gets called automatically\nwhen the MRMLScene is attached to this logic class.\n"},
  {"CreateSnapShot", PyvtkSlicerAnnotationModuleLogic_CreateSnapShot, METH_VARARGS,
   "CreateSnapShot(self, name:str, description:str,\n    screenshotType:int, scaleFactor:float,\n    screenshot:vtkImageData) -> None\nC++: void CreateSnapShot(const char *name,\n    const char *description, int screenshotType,\n    double scaleFactor, vtkImageData *screenshot)\n\nCreate a snapShot.\n"},
  {"ModifySnapShot", PyvtkSlicerAnnotationModuleLogic_ModifySnapShot, METH_VARARGS,
   "ModifySnapShot(self, id:str, name:str, description:str,\n    screenshotType:int, scaleFactor:float,\n    screenshot:vtkImageData) -> None\nC++: void ModifySnapShot(vtkStdString id, const char *name,\n    const char *description, int screenshotType,\n    double scaleFactor, vtkImageData *screenshot)\n\nModify an existing snapShot.\n"},
  {"GetSnapShotName", PyvtkSlicerAnnotationModuleLogic_GetSnapShotName, METH_VARARGS,
   "GetSnapShotName(self, id:str) -> str\nC++: vtkStdString GetSnapShotName(const char *id)\n\nReturn the name of an existing annotation snapShot.\n"},
  {"GetSnapShotDescription", PyvtkSlicerAnnotationModuleLogic_GetSnapShotDescription, METH_VARARGS,
   "GetSnapShotDescription(self, id:str) -> str\nC++: vtkStdString GetSnapShotDescription(const char *id)\n\nReturn the description of an existing annotation snapShot.\n"},
  {"GetSnapShotScreenshotType", PyvtkSlicerAnnotationModuleLogic_GetSnapShotScreenshotType, METH_VARARGS,
   "GetSnapShotScreenshotType(self, id:str) -> int\nC++: int GetSnapShotScreenshotType(const char *id)\n\nReturn the screenshotType of an existing annotation snapShot.\n"},
  {"GetSnapShotScaleFactor", PyvtkSlicerAnnotationModuleLogic_GetSnapShotScaleFactor, METH_VARARGS,
   "GetSnapShotScaleFactor(self, id:str) -> float\nC++: double GetSnapShotScaleFactor(const char *id)\n\nReturn the scaleFactor of an existing annotation snapShot.\n"},
  {"GetSnapShotScreenshot", PyvtkSlicerAnnotationModuleLogic_GetSnapShotScreenshot, METH_VARARGS,
   "GetSnapShotScreenshot(self, id:str) -> vtkImageData\nC++: vtkImageData *GetSnapShotScreenshot(const char *id)\n\nReturn the screenshot of an existing annotation snapShot.\n"},
  {"IsSnapshotNode", PyvtkSlicerAnnotationModuleLogic_IsSnapshotNode, METH_VARARGS,
   "IsSnapshotNode(self, id:str) -> bool\nC++: bool IsSnapshotNode(const char *id)\n\nCheck if node id corresponds to a snapShot node\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerAnnotationModuleLogic_Doc =
  "vtkSlicerAnnotationModuleLogic - no description provided.\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerAnnotationModuleLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleLogicPython.vtkSlicerAnnotationModuleLogic", // tp_name
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
  PyvtkSlicerAnnotationModuleLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerAnnotationModuleLogic_StaticNew()
{
  return vtkSlicerAnnotationModuleLogic::New();
}

PyObject *PyvtkSlicerAnnotationModuleLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerAnnotationModuleLogic_Type, PyvtkSlicerAnnotationModuleLogic_Methods,
    "vtkSlicerAnnotationModuleLogic",
 &PyvtkSlicerAnnotationModuleLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSlicerAnnotationModuleLogic_Events_Type);
  PyVTKEnum_Add(&PyvtkSlicerAnnotationModuleLogic_Events_Type, "vtkSlicerAnnotationModuleLogic.Events");

  o = (PyObject *)&PyvtkSlicerAnnotationModuleLogic_Events_Type;
  if (PyDict_SetItemString(d, "Events", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSlicerAnnotationModuleLogic::Events cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "RefreshRequestEvent", vtkSlicerAnnotationModuleLogic::RefreshRequestEvent },
        { "HierarchyNodeAddedEvent", vtkSlicerAnnotationModuleLogic::HierarchyNodeAddedEvent },
      };

    o = PyvtkSlicerAnnotationModuleLogic_Events_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerAnnotationModuleLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerAnnotationModuleLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerAnnotationModuleLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

