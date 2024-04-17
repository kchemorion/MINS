// python wrapper for vtkMRMLAnnotationSnapshotNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStdString.h"
#include "vtkMRMLAnnotationSnapshotNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAnnotationSnapshotNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAnnotationSnapshotNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAnnotationNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAnnotationNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAnnotationNode_ClassNew
#endif

static PyObject *
PyvtkMRMLAnnotationSnapshotNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAnnotationSnapshotNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAnnotationSnapshotNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAnnotationSnapshotNode *tempr = vtkMRMLAnnotationSnapshotNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationSnapshotNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAnnotationSnapshotNode::NewInstance());

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
PyvtkMRMLAnnotationSnapshotNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAnnotationSnapshotNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAnnotationSnapshotNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLAnnotationSnapshotNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLAnnotationSnapshotNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLAnnotationSnapshotNode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_SetSnapshotDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapshotDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapshotDescription(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationSnapshotNode::SetSnapshotDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_GetSnapshotDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapshotDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetSnapshotDescription() :
      op->vtkMRMLAnnotationSnapshotNode::GetSnapshotDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_SetScreenShot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenShot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetScreenShot(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationSnapshotNode::SetScreenShot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_GetScreenShot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenShot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetScreenShot() :
      op->vtkMRMLAnnotationSnapshotNode::GetScreenShot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkMRMLAnnotationSnapshotNode::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationSnapshotNode::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_SetScreenShotType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenShotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScreenShotType(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationSnapshotNode::SetScreenShotType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_GetScreenShotType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenShotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScreenShotType() :
      op->vtkMRMLAnnotationSnapshotNode::GetScreenShotType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationSnapshotNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationSnapshotNode *op = static_cast<vtkMRMLAnnotationSnapshotNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLAnnotationSnapshotNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAnnotationSnapshotNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAnnotationSnapshotNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAnnotationSnapshotNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAnnotationSnapshotNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAnnotationSnapshotNode\nC++: static vtkMRMLAnnotationSnapshotNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAnnotationSnapshotNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAnnotationSnapshotNode\nC++: vtkMRMLAnnotationSnapshotNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAnnotationSnapshotNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAnnotationSnapshotNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLAnnotationSnapshotNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLAnnotationSnapshotNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetIcon", PyvtkMRMLAnnotationSnapshotNode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: const char *GetIcon() override;\n\n"},
  {"SetSnapshotDescription", PyvtkMRMLAnnotationSnapshotNode_SetSnapshotDescription, METH_VARARGS,
   "SetSnapshotDescription(self, newDescription:str) -> None\nC++: void SetSnapshotDescription(\n    const vtkStdString &newDescription)\n\n"},
  {"GetSnapshotDescription", PyvtkMRMLAnnotationSnapshotNode_GetSnapshotDescription, METH_VARARGS,
   "GetSnapshotDescription(self) -> str\nC++: virtual vtkStdString GetSnapshotDescription()\n\n"},
  {"SetScreenShot", PyvtkMRMLAnnotationSnapshotNode_SetScreenShot, METH_VARARGS,
   "SetScreenShot(self, __a:vtkImageData) -> None\nC++: virtual void SetScreenShot(vtkImageData *)\n\nThe attached screenshot\n"},
  {"GetScreenShot", PyvtkMRMLAnnotationSnapshotNode_GetScreenShot, METH_VARARGS,
   "GetScreenShot(self) -> vtkImageData\nC++: virtual vtkImageData *GetScreenShot()\n\n"},
  {"GetScaleFactor", PyvtkMRMLAnnotationSnapshotNode_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\nThe ScaleFactor of the Screenshot\n"},
  {"SetScaleFactor", PyvtkMRMLAnnotationSnapshotNode_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\n"},
  {"SetScreenShotType", PyvtkMRMLAnnotationSnapshotNode_SetScreenShotType, METH_VARARGS,
   "SetScreenShotType(self, type:int) -> None\nC++: void SetScreenShotType(int type)\n\nThe screenshot type 0: 3D View 1: Red Slice View 2: Yellow Slice\nView 3: Green Slice View 4: Full layout\n"},
  {"GetScreenShotType", PyvtkMRMLAnnotationSnapshotNode_GetScreenShotType, METH_VARARGS,
   "GetScreenShotType(self) -> int\nC++: virtual int GetScreenShotType()\n\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLAnnotationSnapshotNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAnnotationSnapshotNode_Doc =
  "vtkMRMLAnnotationSnapshotNode - MRML node to represent scene snapshot\nincluding description and screenshot\n\n"
  "Superclass: vtkMRMLAnnotationNode\n\n"
  "n/A\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationSnapshotNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationSnapshotNode", // tp_name
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
  PyvtkMRMLAnnotationSnapshotNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAnnotationSnapshotNode_StaticNew()
{
  return vtkMRMLAnnotationSnapshotNode::New();
}

PyObject *PyvtkMRMLAnnotationSnapshotNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAnnotationSnapshotNode_Type, PyvtkMRMLAnnotationSnapshotNode_Methods,
    "vtkMRMLAnnotationSnapshotNode",
 &PyvtkMRMLAnnotationSnapshotNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAnnotationNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "SnapshotNodeAddedEvent", vtkMRMLAnnotationSnapshotNode::SnapshotNodeAddedEvent },
        { "ValueModifiedEvent", vtkMRMLAnnotationSnapshotNode::ValueModifiedEvent },
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

void PyVTKAddFile_vtkMRMLAnnotationSnapshotNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAnnotationSnapshotNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAnnotationSnapshotNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

