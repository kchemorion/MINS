// python wrapper for vtkMRMLViewLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLViewLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLViewLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLViewLogic_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractLogic_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractLogic_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractLogic_ClassNew
#endif

static PyObject *
PyvtkMRMLViewLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLViewLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLViewLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLViewLogic *tempr = vtkMRMLViewLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLViewLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLViewLogic::NewInstance());

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
PyvtkMRMLViewLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLViewLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLViewLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewLogic_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkMRMLViewLogic::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewLogic_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkMRMLViewLogic::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewLogic_GetViewNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLViewNode *tempr = (ap.IsBound() ?
      op->GetViewNode() :
      op->vtkMRMLViewLogic::GetViewNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLViewLogic_GetViewNode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetViewNode");

  vtkMRMLScene *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetValue(temp1))
  {
    vtkMRMLViewNode *tempr = vtkMRMLViewLogic::GetViewNode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLViewLogic_GetViewNode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLViewLogic_GetViewNode_s1(self, args);
    case 2:
      return PyvtkMRMLViewLogic_GetViewNode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetViewNode");
  return nullptr;
}


static PyObject *
PyvtkMRMLViewLogic_GetCameraNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCameraNode *tempr = (ap.IsBound() ?
      op->GetCameraNode() :
      op->vtkMRMLViewLogic::GetCameraNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLViewLogic_GetCameraNode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCameraNode");

  vtkMRMLScene *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetValue(temp1))
  {
    vtkMRMLCameraNode *tempr = vtkMRMLViewLogic::GetCameraNode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLViewLogic_GetCameraNode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLViewLogic_GetCameraNode_s1(self, args);
    case 2:
      return PyvtkMRMLViewLogic_GetCameraNode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCameraNode");
  return nullptr;
}


static PyObject *
PyvtkMRMLViewLogic_StartCameraNodeInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartCameraNodeInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->StartCameraNodeInteraction(temp0);
    }
    else
    {
      op->vtkMRMLViewLogic::StartCameraNodeInteraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewLogic_EndCameraNodeInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndCameraNodeInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndCameraNodeInteraction();
    }
    else
    {
      op->vtkMRMLViewLogic::EndCameraNodeInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewLogic_StartViewNodeInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartViewNodeInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->StartViewNodeInteraction(temp0);
    }
    else
    {
      op->vtkMRMLViewLogic::StartViewNodeInteraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewLogic_EndViewNodeInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndViewNodeInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndViewNodeInteraction();
    }
    else
    {
      op->vtkMRMLViewLogic::EndViewNodeInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewLogic_AddViewNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddViewNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewLogic *op = static_cast<vtkMRMLViewLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLViewNode *tempr = (ap.IsBound() ?
      op->AddViewNode(temp0) :
      op->vtkMRMLViewLogic::AddViewNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLViewLogic_Methods[] = {
  {"IsTypeOf", PyvtkMRMLViewLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLViewLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLViewLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLViewLogic\nC++: static vtkMRMLViewLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLViewLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLViewLogic\nC++: vtkMRMLViewLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLViewLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLViewLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetName", PyvtkMRMLViewLogic_SetName, METH_VARARGS,
   "SetName(self, name:str) -> None\nC++: virtual void SetName(const char *name)\n\nSet/Get layout name. This is used for finding the camera and view\nnode in the scene.\n"},
  {"GetName", PyvtkMRMLViewLogic_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual const char *GetName()\n\n"},
  {"GetViewNode", PyvtkMRMLViewLogic_GetViewNode, METH_VARARGS,
   "GetViewNode(self) -> vtkMRMLViewNode\nC++: virtual vtkMRMLViewNode *GetViewNode()\nGetViewNode(scene:vtkMRMLScene, layoutName:str) -> vtkMRMLViewNode\nC++: static vtkMRMLViewNode *GetViewNode(vtkMRMLScene *scene,\n    const char *layoutName)\n\nThe MRML View node for this View logic\n"},
  {"GetCameraNode", PyvtkMRMLViewLogic_GetCameraNode, METH_VARARGS,
   "GetCameraNode(self) -> vtkMRMLCameraNode\nC++: virtual vtkMRMLCameraNode *GetCameraNode()\nGetCameraNode(scene:vtkMRMLScene, layoutName:str)\n    -> vtkMRMLCameraNode\nC++: static vtkMRMLCameraNode *GetCameraNode(vtkMRMLScene *scene,\n    const char *layoutName)\n\nThe MRML camera node for this View logic\n"},
  {"StartCameraNodeInteraction", PyvtkMRMLViewLogic_StartCameraNodeInteraction, METH_VARARGS,
   "StartCameraNodeInteraction(self, parameters:int) -> None\nC++: void StartCameraNodeInteraction(unsigned int parameters)\n\nIndicate an interaction with the camera node is beginning. The\nparameters of the camera node being manipulated are passed as a\nbitmask. See vtkMRMLViewNode::InteractionFlagType.\n"},
  {"EndCameraNodeInteraction", PyvtkMRMLViewLogic_EndCameraNodeInteraction, METH_VARARGS,
   "EndCameraNodeInteraction(self) -> None\nC++: void EndCameraNodeInteraction()\n\nIndicate an interaction with the slice node has been completed\n"},
  {"StartViewNodeInteraction", PyvtkMRMLViewLogic_StartViewNodeInteraction, METH_VARARGS,
   "StartViewNodeInteraction(self, parameters:int) -> None\nC++: void StartViewNodeInteraction(unsigned int parameters)\n\nIndicate an interaction with the view node is beginning. The\nparameters of the view node being manipulated are passed as a\nbitmask. See vtkMRMLViewNode::InteractionFlagType.\n"},
  {"EndViewNodeInteraction", PyvtkMRMLViewLogic_EndViewNodeInteraction, METH_VARARGS,
   "EndViewNodeInteraction(self) -> None\nC++: void EndViewNodeInteraction()\n\nIndicate an interaction with the view node has been completed\n"},
  {"AddViewNode", PyvtkMRMLViewLogic_AddViewNode, METH_VARARGS,
   "AddViewNode(self, layoutName:str) -> vtkMRMLViewNode\nC++: vtkMRMLViewNode *AddViewNode(const char *layoutName)\n\nConvenience function for adding a view node and setting it in\nthis logic\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLViewLogic_Doc =
  "vtkMRMLViewLogic - Slicer logic class for view manipulation.\n\n"
  "Superclass: vtkMRMLAbstractLogic\n\n"
  "This class manages the logic associated with display of view windows\n"
  "(but not the GUI).  Features of the class include:\n"
  "-- manage the linking of the 3D View linking.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLViewLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLViewLogic", // tp_name
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
  PyvtkMRMLViewLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLViewLogic_StaticNew()
{
  return vtkMRMLViewLogic::New();
}

PyObject *PyvtkMRMLViewLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLViewLogic_Type, PyvtkMRMLViewLogic_Methods,
    "vtkMRMLViewLogic",
 &PyvtkMRMLViewLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractLogic_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLViewLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLViewLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLViewLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

