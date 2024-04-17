// python wrapper for vtkMRMLSliceViewInteractorStyle
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSliceViewInteractorStyle.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSliceViewInteractorStyle(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSliceViewInteractorStyle_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLViewInteractorStyle_ClassNew
extern "C" { PyObject *PyvtkMRMLViewInteractorStyle_ClassNew(); }
#define DECLARED_PyvtkMRMLViewInteractorStyle_ClassNew
#endif

static PyObject *
PyvtkMRMLSliceViewInteractorStyle_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceViewInteractorStyle::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceViewInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceViewInteractorStyle *op = static_cast<vtkMRMLSliceViewInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSliceViewInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceViewInteractorStyle_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSliceViewInteractorStyle *tempr = vtkMRMLSliceViewInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceViewInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceViewInteractorStyle *op = static_cast<vtkMRMLSliceViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceViewInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSliceViewInteractorStyle::NewInstance());

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
PyvtkMRMLSliceViewInteractorStyle_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSliceViewInteractorStyle::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceViewInteractorStyle_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceViewInteractorStyle *op = static_cast<vtkMRMLSliceViewInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSliceViewInteractorStyle::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegateInteractionEventToDisplayableManagers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceViewInteractorStyle *op = static_cast<vtkMRMLSliceViewInteractorStyle *>(vp);

  vtkEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->DelegateInteractionEventToDisplayableManagers(temp0) :
      op->vtkMRMLSliceViewInteractorStyle::DelegateInteractionEventToDisplayableManagers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegateInteractionEventToDisplayableManagers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceViewInteractorStyle *op = static_cast<vtkMRMLSliceViewInteractorStyle *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->DelegateInteractionEventToDisplayableManagers(temp0) :
      op->vtkMRMLSliceViewInteractorStyle::DelegateInteractionEventToDisplayableManagers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSliceViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_Methods[] = {
  {"DelegateInteractionEventToDisplayableManagers", PyvtkMRMLSliceViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s1, METH_VARARGS,
   "@V *vtkEventData"},
  {"DelegateInteractionEventToDisplayableManagers", PyvtkMRMLSliceViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s2, METH_VARARGS,
   "@L"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLSliceViewInteractorStyle_DelegateInteractionEventToDisplayableManagers(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLSliceViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_Methods;
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
PyvtkMRMLSliceViewInteractorStyle_SetActionEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActionEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceViewInteractorStyle *op = static_cast<vtkMRMLSliceViewInteractorStyle *>(vp);

  int temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetActionEnabled(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceViewInteractorStyle::SetActionEnabled(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceViewInteractorStyle_GetActionEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActionEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceViewInteractorStyle *op = static_cast<vtkMRMLSliceViewInteractorStyle *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetActionEnabled(temp0) :
      op->vtkMRMLSliceViewInteractorStyle::GetActionEnabled(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceViewInteractorStyle_SetSliceLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceViewInteractorStyle *op = static_cast<vtkMRMLSliceViewInteractorStyle *>(vp);

  vtkMRMLSliceLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceLogic"))
  {
    if (ap.IsBound())
    {
      op->SetSliceLogic(temp0);
    }
    else
    {
      op->vtkMRMLSliceViewInteractorStyle::SetSliceLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceViewInteractorStyle_GetSliceLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceViewInteractorStyle *op = static_cast<vtkMRMLSliceViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceLogic *tempr = (ap.IsBound() ?
      op->GetSliceLogic() :
      op->vtkMRMLSliceViewInteractorStyle::GetSliceLogic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceViewInteractorStyle_GetCrosshairDisplayableManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCrosshairDisplayableManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceViewInteractorStyle *op = static_cast<vtkMRMLSliceViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLCrosshairDisplayableManager *tempr = (ap.IsBound() ?
      op->GetCrosshairDisplayableManager() :
      op->vtkMRMLSliceViewInteractorStyle::GetCrosshairDisplayableManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceViewInteractorStyle_GetScalarBarDisplayableManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarDisplayableManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceViewInteractorStyle *op = static_cast<vtkMRMLSliceViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScalarBarDisplayableManager *tempr = (ap.IsBound() ?
      op->GetScalarBarDisplayableManager() :
      op->vtkMRMLSliceViewInteractorStyle::GetScalarBarDisplayableManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSliceViewInteractorStyle_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSliceViewInteractorStyle_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSliceViewInteractorStyle_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSliceViewInteractorStyle_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSliceViewInteractorStyle\nC++: static vtkMRMLSliceViewInteractorStyle *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSliceViewInteractorStyle_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSliceViewInteractorStyle\nC++: vtkMRMLSliceViewInteractorStyle *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSliceViewInteractorStyle_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSliceViewInteractorStyle_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DelegateInteractionEventToDisplayableManagers", PyvtkMRMLSliceViewInteractorStyle_DelegateInteractionEventToDisplayableManagers, METH_VARARGS,
   "DelegateInteractionEventToDisplayableManagers(self,\n    inputEventData:vtkEventData) -> bool\nC++: bool DelegateInteractionEventToDisplayableManagers(\n    vtkEventData *inputEventData) override;\nDelegateInteractionEventToDisplayableManagers(self, event:int)\n    -> bool\nC++: virtual bool DelegateInteractionEventToDisplayableManagers(\n    unsigned long event)\n\nGive a chance to displayable managers to process the event. It\njust creates vtkMRMLInteractionEventData and calls\nDelegateInteractionEventDataToDisplayableManagers. Return true if\nthe event is processed.\n"},
  {"SetActionEnabled", PyvtkMRMLSliceViewInteractorStyle_SetActionEnabled, METH_VARARGS,
   "SetActionEnabled(self, actionsMask:int, enable:bool=True) -> None\nC++: void SetActionEnabled(int actionsMask, bool enable=true)\n\nEnable/disable the specified action (Translate, Zoom, Blend,\netc.). Multiple actions can be specified by providing the sum of\naction ids. Set the value to AllActionsMask to enable/disable all\nactions. All actions are enabled by default.\n"},
  {"GetActionEnabled", PyvtkMRMLSliceViewInteractorStyle_GetActionEnabled, METH_VARARGS,
   "GetActionEnabled(self, actionsMask:int) -> bool\nC++: bool GetActionEnabled(int actionsMask)\n\nReturns true if the specified action is allowed. If multiple\nactions are specified, the return value is true if all actions\nare enabled.\n"},
  {"SetSliceLogic", PyvtkMRMLSliceViewInteractorStyle_SetSliceLogic, METH_VARARGS,
   "SetSliceLogic(self, SliceLogic:vtkMRMLSliceLogic) -> None\nC++: void SetSliceLogic(vtkMRMLSliceLogic *SliceLogic)\n\nGet/Set the SliceLogic\n"},
  {"GetSliceLogic", PyvtkMRMLSliceViewInteractorStyle_GetSliceLogic, METH_VARARGS,
   "GetSliceLogic(self) -> vtkMRMLSliceLogic\nC++: virtual vtkMRMLSliceLogic *GetSliceLogic()\n\n"},
  {"GetCrosshairDisplayableManager", PyvtkMRMLSliceViewInteractorStyle_GetCrosshairDisplayableManager, METH_VARARGS,
   "GetCrosshairDisplayableManager(self)\n    -> vtkMRMLCrosshairDisplayableManager\nC++: vtkMRMLCrosshairDisplayableManager *GetCrosshairDisplayableManager(\n    )\n\n"},
  {"GetScalarBarDisplayableManager", PyvtkMRMLSliceViewInteractorStyle_GetScalarBarDisplayableManager, METH_VARARGS,
   "GetScalarBarDisplayableManager(self)\n    -> vtkMRMLScalarBarDisplayableManager\nC++: vtkMRMLScalarBarDisplayableManager *GetScalarBarDisplayableManager(\n    )\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSliceViewInteractorStyle_Doc =
  "vtkMRMLSliceViewInteractorStyle - Provides customizable interaction\nroutines.\n\n"
  "Superclass: vtkMRMLViewInteractorStyle\n\n"
  "Relies on vtkInteractorStyleUser, but with MouseWheelEvents. and\n"
  "mapping to control the slicer slice logic (manipulates the\n"
  "vtkMRMLSliceNode and vtkMRMLSliceCompositeNode. TODO:\n"
  "* Do we need Rotate Mode?  Probably better to just rely on the\n"
  "  reformat widget\n"
  "* Do we need to set the slice spacing on EnterEvent (I say no,\n"
  "  nothing to do with linked slices should go in here)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceViewInteractorStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLSliceViewInteractorStyle", // tp_name
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
  PyvtkMRMLSliceViewInteractorStyle_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSliceViewInteractorStyle_StaticNew()
{
  return vtkMRMLSliceViewInteractorStyle::New();
}

PyObject *PyvtkMRMLSliceViewInteractorStyle_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSliceViewInteractorStyle_Type, PyvtkMRMLSliceViewInteractorStyle_Methods,
    "vtkMRMLSliceViewInteractorStyle",
 &PyvtkMRMLSliceViewInteractorStyle_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLViewInteractorStyle_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 16; c++)
  {
    static const struct { const char *name; int value; }
      constants[16] = {
        { "None_", vtkMRMLSliceViewInteractorStyle::None },
        { "Translate", vtkMRMLSliceViewInteractorStyle::Translate },
        { "Zoom", vtkMRMLSliceViewInteractorStyle::Zoom },
        { "Rotate", vtkMRMLSliceViewInteractorStyle::Rotate },
        { "Blend", vtkMRMLSliceViewInteractorStyle::Blend },
        { "AdjustWindowLevelBackground", vtkMRMLSliceViewInteractorStyle::AdjustWindowLevelBackground },
        { "AdjustWindowLevelForeground", vtkMRMLSliceViewInteractorStyle::AdjustWindowLevelForeground },
        { "BrowseSlice", vtkMRMLSliceViewInteractorStyle::BrowseSlice },
        { "ShowSlice", vtkMRMLSliceViewInteractorStyle::ShowSlice },
        { "AdjustLightbox", vtkMRMLSliceViewInteractorStyle::AdjustLightbox },
        { "SelectVolume", vtkMRMLSliceViewInteractorStyle::SelectVolume },
        { "SetCursorPosition", vtkMRMLSliceViewInteractorStyle::SetCursorPosition },
        { "SetCrosshairPosition", vtkMRMLSliceViewInteractorStyle::SetCrosshairPosition },
        { "TranslateSliceIntersection", vtkMRMLSliceViewInteractorStyle::TranslateSliceIntersection },
        { "RotateSliceIntersection", vtkMRMLSliceViewInteractorStyle::RotateSliceIntersection },
        { "AllActionsMask", vtkMRMLSliceViewInteractorStyle::AllActionsMask },
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

void PyVTKAddFile_vtkMRMLSliceViewInteractorStyle(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSliceViewInteractorStyle_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSliceViewInteractorStyle", o) != 0)
  {
    Py_DECREF(o);
  }

}

