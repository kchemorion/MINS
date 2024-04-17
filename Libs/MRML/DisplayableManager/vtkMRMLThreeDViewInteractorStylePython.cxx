// python wrapper for vtkMRMLThreeDViewInteractorStyle
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLThreeDViewInteractorStyle.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLThreeDViewInteractorStyle(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLThreeDViewInteractorStyle_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLViewInteractorStyle_ClassNew
extern "C" { PyObject *PyvtkMRMLViewInteractorStyle_ClassNew(); }
#define DECLARED_PyvtkMRMLViewInteractorStyle_ClassNew
#endif

static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLThreeDViewInteractorStyle::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewInteractorStyle *op = static_cast<vtkMRMLThreeDViewInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLThreeDViewInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLThreeDViewInteractorStyle *tempr = vtkMRMLThreeDViewInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewInteractorStyle *op = static_cast<vtkMRMLThreeDViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLThreeDViewInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLThreeDViewInteractorStyle::NewInstance());

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
PyvtkMRMLThreeDViewInteractorStyle_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLThreeDViewInteractorStyle::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewInteractorStyle *op = static_cast<vtkMRMLThreeDViewInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLThreeDViewInteractorStyle::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_SetDisplayableManagers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayableManagers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewInteractorStyle *op = static_cast<vtkMRMLThreeDViewInteractorStyle *>(vp);

  vtkMRMLDisplayableManagerGroup *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableManagerGroup"))
  {
    if (ap.IsBound())
    {
      op->SetDisplayableManagers(temp0);
    }
    else
    {
      op->vtkMRMLThreeDViewInteractorStyle::SetDisplayableManagers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_OnLeave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewInteractorStyle *op = static_cast<vtkMRMLThreeDViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeave();
    }
    else
    {
      op->vtkMRMLThreeDViewInteractorStyle::OnLeave();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegateInteractionEventToDisplayableManagers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewInteractorStyle *op = static_cast<vtkMRMLThreeDViewInteractorStyle *>(vp);

  vtkEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->DelegateInteractionEventToDisplayableManagers(temp0) :
      op->vtkMRMLThreeDViewInteractorStyle::DelegateInteractionEventToDisplayableManagers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegateInteractionEventToDisplayableManagers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewInteractorStyle *op = static_cast<vtkMRMLThreeDViewInteractorStyle *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->DelegateInteractionEventToDisplayableManagers(temp0) :
      op->vtkMRMLThreeDViewInteractorStyle::DelegateInteractionEventToDisplayableManagers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLThreeDViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_Methods[] = {
  {"DelegateInteractionEventToDisplayableManagers", PyvtkMRMLThreeDViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s1, METH_VARARGS,
   "@V *vtkEventData"},
  {"DelegateInteractionEventToDisplayableManagers", PyvtkMRMLThreeDViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s2, METH_VARARGS,
   "@L"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_DelegateInteractionEventToDisplayableManagers(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLThreeDViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DelegateInteractionEventToDisplayableManagers");
  return nullptr;
}


static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_GetCameraNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewInteractorStyle *op = static_cast<vtkMRMLThreeDViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCameraNode *tempr = (ap.IsBound() ?
      op->GetCameraNode() :
      op->vtkMRMLThreeDViewInteractorStyle::GetCameraNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_SetCameraNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewInteractorStyle *op = static_cast<vtkMRMLThreeDViewInteractorStyle *>(vp);

  vtkMRMLCameraNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLCameraNode"))
  {
    if (ap.IsBound())
    {
      op->SetCameraNode(temp0);
    }
    else
    {
      op->vtkMRMLThreeDViewInteractorStyle::SetCameraNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLThreeDViewInteractorStyle_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLThreeDViewInteractorStyle *op = static_cast<vtkMRMLThreeDViewInteractorStyle *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkMRMLThreeDViewInteractorStyle::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLThreeDViewInteractorStyle_Methods[] = {
  {"IsTypeOf", PyvtkMRMLThreeDViewInteractorStyle_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLThreeDViewInteractorStyle_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLThreeDViewInteractorStyle_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLThreeDViewInteractorStyle\nC++: static vtkMRMLThreeDViewInteractorStyle *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLThreeDViewInteractorStyle_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLThreeDViewInteractorStyle\nC++: vtkMRMLThreeDViewInteractorStyle *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLThreeDViewInteractorStyle_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLThreeDViewInteractorStyle_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDisplayableManagers", PyvtkMRMLThreeDViewInteractorStyle_SetDisplayableManagers, METH_VARARGS,
   "SetDisplayableManagers(self,\n    displayableManagers:vtkMRMLDisplayableManagerGroup) -> None\nC++: void SetDisplayableManagers(\n    vtkMRMLDisplayableManagerGroup *displayableManagers) override;\n\n"},
  {"OnLeave", PyvtkMRMLThreeDViewInteractorStyle_OnLeave, METH_VARARGS,
   "OnLeave(self) -> None\nC++: void OnLeave() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"DelegateInteractionEventToDisplayableManagers", PyvtkMRMLThreeDViewInteractorStyle_DelegateInteractionEventToDisplayableManagers, METH_VARARGS,
   "DelegateInteractionEventToDisplayableManagers(self,\n    inputEventData:vtkEventData) -> bool\nC++: bool DelegateInteractionEventToDisplayableManagers(\n    vtkEventData *inputEventData) override;\nDelegateInteractionEventToDisplayableManagers(self, event:int)\n    -> bool\nC++: virtual bool DelegateInteractionEventToDisplayableManagers(\n    unsigned long event)\n\nGive a chance to displayable managers to process the event. It\njust creates vtkMRMLInteractionEventData and calls\nDelegateInteractionEventDataToDisplayableManagers. Return true if\nthe event is processed.\n"},
  {"GetCameraNode", PyvtkMRMLThreeDViewInteractorStyle_GetCameraNode, METH_VARARGS,
   "GetCameraNode(self) -> vtkMRMLCameraNode\nC++: virtual vtkMRMLCameraNode *GetCameraNode()\n\nGet/Set the CameraNode\n"},
  {"SetCameraNode", PyvtkMRMLThreeDViewInteractorStyle_SetCameraNode, METH_VARARGS,
   "SetCameraNode(self, _arg:vtkMRMLCameraNode) -> None\nC++: virtual void SetCameraNode(vtkMRMLCameraNode *_arg)\n\n"},
  {"SetInteractor", PyvtkMRMLThreeDViewInteractorStyle_SetInteractor, METH_VARARGS,
   "SetInteractor(self, interactor:vtkRenderWindowInteractor) -> None\nC++: void SetInteractor(vtkRenderWindowInteractor *interactor)\n    override;\n\nReimplemented to set the default interactive update rate\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLThreeDViewInteractorStyle_Doc =
  "vtkMRMLThreeDViewInteractorStyle - Interactive manipulation of the\ncamera.\n\n"
  "Superclass: vtkMRMLViewInteractorStyle\n\n"
  "This class is based on vtkInteractorStyleTrackballCamera, but\n"
  "includes extra features and event invocations to support extra\n"
  "features of slicer.\n\n"
  "vtkInteractorStyleTrackballCamera allows the user to interactively\n"
  "manipulate (rotate, pan, etc.) the camera, the viewpoint of the\n"
  "scene.  In trackball interaction, the magnitude of the mouse motion\n"
  "is proportional to the camera motion associated with a particular\n"
  "mouse binding. For example, small left-button motions cause small\n"
  "changes in the rotation of the camera around its focal point. For a\n"
  "3-button mouse, the left button is for rotation, the right button for\n"
  "zooming, the middle button for panning, and ctrl + left button for\n"
  "spinning.  (With fewer mouse buttons, ctrl + shift + left button is\n"
  "for zooming, and shift + left button is for panning.)\n"
  "\\sa vtkInteractorStyleTrackballActor\n"
  "\\sa vtkInteractorStyleJoystickCamera\n"
  "\\sa vtkInteractorStyleJoystickActor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLThreeDViewInteractorStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLThreeDViewInteractorStyle", // tp_name
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
  PyvtkMRMLThreeDViewInteractorStyle_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLThreeDViewInteractorStyle_StaticNew()
{
  return vtkMRMLThreeDViewInteractorStyle::New();
}

PyObject *PyvtkMRMLThreeDViewInteractorStyle_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLThreeDViewInteractorStyle_Type, PyvtkMRMLThreeDViewInteractorStyle_Methods,
    "vtkMRMLThreeDViewInteractorStyle",
 &PyvtkMRMLThreeDViewInteractorStyle_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLViewInteractorStyle_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLThreeDViewInteractorStyle(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLThreeDViewInteractorStyle_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLThreeDViewInteractorStyle", o) != 0)
  {
    Py_DECREF(o);
  }

}

