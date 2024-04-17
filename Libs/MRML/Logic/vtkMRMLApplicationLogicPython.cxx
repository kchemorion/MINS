// python wrapper for vtkMRMLApplicationLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLApplicationLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLApplicationLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLApplicationLogic_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractLogic_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractLogic_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractLogic_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLApplicationLogic_Layers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLApplicationLogic.Layers", // tp_name
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
PyObject *PyvtkMRMLApplicationLogic_Layers_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLApplicationLogic_Layers_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLApplicationLogic_Events_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLApplicationLogic.Events", // tp_name
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
PyObject *PyvtkMRMLApplicationLogic_Events_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLApplicationLogic_Events_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLApplicationLogic_IntersectingSlicesOperation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLApplicationLogic.IntersectingSlicesOperation", // tp_name
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
PyObject *PyvtkMRMLApplicationLogic_IntersectingSlicesOperation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLApplicationLogic_IntersectingSlicesOperation_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLApplicationLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLApplicationLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLApplicationLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLApplicationLogic *tempr = vtkMRMLApplicationLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLApplicationLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLApplicationLogic::NewInstance());

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
PyvtkMRMLApplicationLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLApplicationLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLApplicationLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetSelectionNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSelectionNode *tempr = (ap.IsBound() ?
      op->GetSelectionNode() :
      op->vtkMRMLApplicationLogic::GetSelectionNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetInteractionNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLInteractionNode *tempr = (ap.IsBound() ?
      op->GetInteractionNode() :
      op->vtkMRMLApplicationLogic::GetInteractionNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SetSliceLogics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceLogics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->SetSliceLogics(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::SetSliceLogics(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetSliceLogics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceLogics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetSliceLogics() :
      op->vtkMRMLApplicationLogic::GetSliceLogics());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetSliceLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  vtkMRMLSliceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode"))
  {
    vtkMRMLSliceLogic *tempr = (ap.IsBound() ?
      op->GetSliceLogic(temp0) :
      op->vtkMRMLApplicationLogic::GetSliceLogic(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetSliceLogicByLayoutName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceLogicByLayoutName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLSliceLogic *tempr = (ap.IsBound() ?
      op->GetSliceLogicByLayoutName(temp0) :
      op->vtkMRMLApplicationLogic::GetSliceLogicByLayoutName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetSliceLogicByModelDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceLogicByModelDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  vtkMRMLModelDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLModelDisplayNode"))
  {
    vtkMRMLSliceLogic *tempr = (ap.IsBound() ?
      op->GetSliceLogicByModelDisplayNode(temp0) :
      op->vtkMRMLApplicationLogic::GetSliceLogicByModelDisplayNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SetViewLogics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewLogics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->SetViewLogics(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::SetViewLogics(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetViewLogics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewLogics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetViewLogics() :
      op->vtkMRMLApplicationLogic::GetViewLogics());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetViewLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  vtkMRMLViewNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLViewNode"))
  {
    vtkMRMLViewLogic *tempr = (ap.IsBound() ?
      op->GetViewLogic(temp0) :
      op->vtkMRMLApplicationLogic::GetViewLogic(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetViewLogicByLayoutName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewLogicByLayoutName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLViewLogic *tempr = (ap.IsBound() ?
      op->GetViewLogicByLayoutName(temp0) :
      op->vtkMRMLApplicationLogic::GetViewLogicByLayoutName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SetColorLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  vtkMRMLColorLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLColorLogic"))
  {
    if (ap.IsBound())
    {
      op->SetColorLogic(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::SetColorLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetColorLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLColorLogic *tempr = (ap.IsBound() ?
      op->GetColorLogic() :
      op->vtkMRMLApplicationLogic::GetColorLogic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_PropagateVolumeSelection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateVolumeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  int temp0 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->PropagateVolumeSelection(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::PropagateVolumeSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLApplicationLogic_PropagateVolumeSelection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateVolumeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->PropagateVolumeSelection(temp0, temp1);
    }
    else
    {
      op->vtkMRMLApplicationLogic::PropagateVolumeSelection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLApplicationLogic_PropagateVolumeSelection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
    case 1:
      return PyvtkMRMLApplicationLogic_PropagateVolumeSelection_s1(self, args);
    case 2:
      return PyvtkMRMLApplicationLogic_PropagateVolumeSelection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PropagateVolumeSelection");
  return nullptr;
}


static PyObject *
PyvtkMRMLApplicationLogic_PropagateBackgroundVolumeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateBackgroundVolumeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  int temp0 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->PropagateBackgroundVolumeSelection(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::PropagateBackgroundVolumeSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_PropagateForegroundVolumeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateForegroundVolumeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  int temp0 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->PropagateForegroundVolumeSelection(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::PropagateForegroundVolumeSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_PropagateLabelVolumeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateLabelVolumeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  int temp0 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->PropagateLabelVolumeSelection(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::PropagateLabelVolumeSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_FitSliceToAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FitSliceToAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  bool temp0 = false;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->FitSliceToAll(temp0, temp1);
    }
    else
    {
      op->vtkMRMLApplicationLogic::FitSliceToAll(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_PropagateTableSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateTableSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PropagateTableSelection();
    }
    else
    {
      op->vtkMRMLApplicationLogic::PropagateTableSelection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_PropagatePlotChartSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagatePlotChartSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PropagatePlotChartSelection();
    }
    else
    {
      op->vtkMRMLApplicationLogic::PropagatePlotChartSelection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_Zip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->Zip(temp0, temp1) :
      op->vtkMRMLApplicationLogic::Zip(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_Unzip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unzip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->Unzip(temp0, temp1) :
      op->vtkMRMLApplicationLogic::Unzip(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_PercentEncode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PercentEncode");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkMRMLApplicationLogic::PercentEncode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SaveSceneToSlicerDataBundleDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveSceneToSlicerDataBundleDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkImageData")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    bool tempr = (ap.IsBound() ?
      op->SaveSceneToSlicerDataBundleDirectory(temp0, temp1, temp2) :
      op->vtkMRMLApplicationLogic::SaveSceneToSlicerDataBundleDirectory(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_OpenSlicerDataBundle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenSlicerDataBundle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    bool tempr = (ap.IsBound() ?
      op->OpenSlicerDataBundle(temp0, temp1, temp2) :
      op->vtkMRMLApplicationLogic::OpenSlicerDataBundle(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_UnpackSlicerDataBundle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnpackSlicerDataBundle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->UnpackSlicerDataBundle(temp0, temp1) :
      op->vtkMRMLApplicationLogic::UnpackSlicerDataBundle(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_LoadDefaultParameterSets(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LoadDefaultParameterSets");

  vtkMRMLScene *temp0 = nullptr;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    int tempr = vtkMRMLApplicationLogic::LoadDefaultParameterSets(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_CreateUniqueFileName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateUniqueFileName");

  std::string temp0;
  std::string temp1 = "";
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    std::string tempr = vtkMRMLApplicationLogic::CreateUniqueFileName(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_InvokeEventWithDelay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeEventWithDelay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  unsigned int temp0;
  vtkObject *temp1 = nullptr;
  unsigned long temp2 = vtkCommand::ModifiedEvent;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetBuffer(temp3, &pbuf3)))
  {
    if (ap.IsBound())
    {
      op->InvokeEventWithDelay(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLApplicationLogic::InvokeEventWithDelay(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetTemporaryPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTemporaryPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTemporaryPath() :
      op->vtkMRMLApplicationLogic::GetTemporaryPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SetTemporaryPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTemporaryPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTemporaryPath(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::SetTemporaryPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SaveSceneScreenshot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveSceneScreenshot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SaveSceneScreenshot(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::SaveSceneScreenshot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_PauseRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PauseRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PauseRender();
    }
    else
    {
      op->vtkMRMLApplicationLogic::PauseRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_ResumeRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResumeRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResumeRender();
    }
    else
    {
      op->vtkMRMLApplicationLogic::ResumeRender();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_EditNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EditNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->EditNode(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::EditNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SetModuleLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModuleLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  vtkMRMLAbstractLogic *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLAbstractLogic"))
  {
    if (ap.IsBound())
    {
      op->SetModuleLogic(temp0, temp1);
    }
    else
    {
      op->vtkMRMLApplicationLogic::SetModuleLogic(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetModuleLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModuleLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLAbstractLogic *tempr = (ap.IsBound() ?
      op->GetModuleLogic(temp0) :
      op->vtkMRMLApplicationLogic::GetModuleLogic(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SetIntersectingSlicesEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingSlicesEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  typedef vtkMRMLApplicationLogic::IntersectingSlicesOperation temp0_type;
  temp0_type temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkMRMLApplicationLogic.IntersectingSlicesOperation") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingSlicesEnabled(temp0, temp1);
    }
    else
    {
      op->vtkMRMLApplicationLogic::SetIntersectingSlicesEnabled(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetIntersectingSlicesEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingSlicesEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  typedef vtkMRMLApplicationLogic::IntersectingSlicesOperation temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMRMLApplicationLogic.IntersectingSlicesOperation"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIntersectingSlicesEnabled(temp0) :
      op->vtkMRMLApplicationLogic::GetIntersectingSlicesEnabled(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SetIntersectingSlicesIntersectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingSlicesIntersectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingSlicesIntersectionMode(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::SetIntersectingSlicesIntersectionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetIntersectingSlicesIntersectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingSlicesIntersectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntersectingSlicesIntersectionMode() :
      op->vtkMRMLApplicationLogic::GetIntersectingSlicesIntersectionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SetIntersectingSlicesLineThicknessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntersectingSlicesLineThicknessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntersectingSlicesLineThicknessMode(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::SetIntersectingSlicesLineThicknessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetIntersectingSlicesLineThicknessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectingSlicesLineThicknessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntersectingSlicesLineThicknessMode() :
      op->vtkMRMLApplicationLogic::GetIntersectingSlicesLineThicknessMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_SetFontFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFontFileName(temp0, temp1);
    }
    else
    {
      op->vtkMRMLApplicationLogic::SetFontFileName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetFontFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFontFileName(temp0) :
      op->vtkMRMLApplicationLogic::GetFontFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetFontFilePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFilePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFontFilePath(temp0) :
      op->vtkMRMLApplicationLogic::GetFontFilePath(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_GetFontsDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontsDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetFontsDirectory() :
      op->vtkMRMLApplicationLogic::GetFontsDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLApplicationLogic_UseCustomFontFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomFontFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLApplicationLogic *op = static_cast<vtkMRMLApplicationLogic *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->UseCustomFontFile(temp0);
    }
    else
    {
      op->vtkMRMLApplicationLogic::UseCustomFontFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLApplicationLogic_Methods[] = {
  {"IsTypeOf", PyvtkMRMLApplicationLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLApplicationLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLApplicationLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLApplicationLogic\nC++: static vtkMRMLApplicationLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLApplicationLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLApplicationLogic\nC++: vtkMRMLApplicationLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLApplicationLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLApplicationLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetSelectionNode", PyvtkMRMLApplicationLogic_GetSelectionNode, METH_VARARGS,
   "GetSelectionNode(self) -> vtkMRMLSelectionNode\nC++: vtkMRMLSelectionNode *GetSelectionNode()\n\nGet default Selection node\n"},
  {"GetInteractionNode", PyvtkMRMLApplicationLogic_GetInteractionNode, METH_VARARGS,
   "GetInteractionNode(self) -> vtkMRMLInteractionNode\nC++: vtkMRMLInteractionNode *GetInteractionNode()\n\nGet default Interaction node\n"},
  {"SetSliceLogics", PyvtkMRMLApplicationLogic_SetSliceLogics, METH_VARARGS,
   "SetSliceLogics(self, sliceLogics:vtkCollection) -> None\nC++: void SetSliceLogics(vtkCollection *sliceLogics)\n\nAll the slice logics in the application\n"},
  {"GetSliceLogics", PyvtkMRMLApplicationLogic_GetSliceLogics, METH_VARARGS,
   "GetSliceLogics(self) -> vtkCollection\nC++: vtkCollection *GetSliceLogics()\n\n"},
  {"GetSliceLogic", PyvtkMRMLApplicationLogic_GetSliceLogic, METH_VARARGS,
   "GetSliceLogic(self, sliceNode:vtkMRMLSliceNode)\n    -> vtkMRMLSliceLogic\nC++: vtkMRMLSliceLogic *GetSliceLogic(vtkMRMLSliceNode *sliceNode)\n\n"},
  {"GetSliceLogicByLayoutName", PyvtkMRMLApplicationLogic_GetSliceLogicByLayoutName, METH_VARARGS,
   "GetSliceLogicByLayoutName(self, layoutName:str)\n    -> vtkMRMLSliceLogic\nC++: vtkMRMLSliceLogic *GetSliceLogicByLayoutName(\n    const char *layoutName)\n\n"},
  {"GetSliceLogicByModelDisplayNode", PyvtkMRMLApplicationLogic_GetSliceLogicByModelDisplayNode, METH_VARARGS,
   "GetSliceLogicByModelDisplayNode(self,\n    displayNode:vtkMRMLModelDisplayNode) -> vtkMRMLSliceLogic\nC++: vtkMRMLSliceLogic *GetSliceLogicByModelDisplayNode(\n    vtkMRMLModelDisplayNode *displayNode)\n\nGet slice logic from slice model display node\n"},
  {"SetViewLogics", PyvtkMRMLApplicationLogic_SetViewLogics, METH_VARARGS,
   "SetViewLogics(self, viewLogics:vtkCollection) -> None\nC++: void SetViewLogics(vtkCollection *viewLogics)\n\nAll the view logics in the application\n"},
  {"GetViewLogics", PyvtkMRMLApplicationLogic_GetViewLogics, METH_VARARGS,
   "GetViewLogics(self) -> vtkCollection\nC++: vtkCollection *GetViewLogics()\n\n"},
  {"GetViewLogic", PyvtkMRMLApplicationLogic_GetViewLogic, METH_VARARGS,
   "GetViewLogic(self, viewNode:vtkMRMLViewNode) -> vtkMRMLViewLogic\nC++: vtkMRMLViewLogic *GetViewLogic(vtkMRMLViewNode *viewNode)\n\n"},
  {"GetViewLogicByLayoutName", PyvtkMRMLApplicationLogic_GetViewLogicByLayoutName, METH_VARARGS,
   "GetViewLogicByLayoutName(self, layoutName:str) -> vtkMRMLViewLogic\nC++: vtkMRMLViewLogic *GetViewLogicByLayoutName(\n    const char *layoutName)\n\n"},
  {"SetColorLogic", PyvtkMRMLApplicationLogic_SetColorLogic, METH_VARARGS,
   "SetColorLogic(self, newColorLogic:vtkMRMLColorLogic) -> None\nC++: void SetColorLogic(vtkMRMLColorLogic *newColorLogic)\n\nSet/Get color logic. The application typically sets a custom\ncolor logic (i.e. vtkSlicerColorLogic) that contains default\ncolor nodes. By default, a vtkMRMLColorLogic is instantiated.\n"},
  {"GetColorLogic", PyvtkMRMLApplicationLogic_GetColorLogic, METH_VARARGS,
   "GetColorLogic(self) -> vtkMRMLColorLogic\nC++: vtkMRMLColorLogic *GetColorLogic()\n\n"},
  {"PropagateVolumeSelection", PyvtkMRMLApplicationLogic_PropagateVolumeSelection, METH_VARARGS,
   "PropagateVolumeSelection(self, fit:int=1) -> None\nC++: void PropagateVolumeSelection(int fit=1)\nPropagateVolumeSelection(self, layer:int, fit:int) -> None\nC++: void PropagateVolumeSelection(int layer, int fit)\n\nApply the active volumes in the SelectionNode to the slice\ncomposite nodes Perform the default behavior related to selecting\na volume (in this case, making it the background for all\nSliceCompositeNodes)\n\\sa vtkInternal::PropagateVolumeSelection()\n\\sa FitSliceToAll()\n\\sa vtkMRMLSelectionNode::SetActiveVolumeID()\n\\sa vtkMRMLSelectionNode::SetSecondaryVolumeID()\n\\sa vtkMRMLSelectionNode::SetActiveLabelVolumeID()\n"},
  {"PropagateBackgroundVolumeSelection", PyvtkMRMLApplicationLogic_PropagateBackgroundVolumeSelection, METH_VARARGS,
   "PropagateBackgroundVolumeSelection(self, fit:int=1) -> None\nC++: void PropagateBackgroundVolumeSelection(int fit=1)\n\nPropagate only active background volume in the SelectionNode to\nslice composite nodes\n\\sa FitSliceToAll()\n\\sa vtkMRMLSelectionNode::SetActiveVolumeID()\n\\sa Layers::BackgroundLayer\n"},
  {"PropagateForegroundVolumeSelection", PyvtkMRMLApplicationLogic_PropagateForegroundVolumeSelection, METH_VARARGS,
   "PropagateForegroundVolumeSelection(self, fit:int=1) -> None\nC++: void PropagateForegroundVolumeSelection(int fit=1)\n\nPropagate only active foreground volume in the SelectionNode to\nslice composite nodes\n\\sa FitSliceToAll()\n\\sa vtkMRMLSelectionNode::SetSecondaryVolumeID()\n\\sa Layers::ForegroundLayer\n"},
  {"PropagateLabelVolumeSelection", PyvtkMRMLApplicationLogic_PropagateLabelVolumeSelection, METH_VARARGS,
   "PropagateLabelVolumeSelection(self, fit:int=1) -> None\nC++: void PropagateLabelVolumeSelection(int fit=1)\n\nPropagate only active label volume in the SelectionNode to slice\ncomposite nodes\n\\sa FitSliceToAll()\n\\sa vtkMRMLSelectionNode::SetActiveLabelVolumeID()\n\\sa Layers::LabelLayer\n"},
  {"FitSliceToAll", PyvtkMRMLApplicationLogic_FitSliceToAll, METH_VARARGS,
   "FitSliceToAll(self,\n    onlyIfPropagateVolumeSelectionAllowed:bool=False,\n    resetOrientation:bool=True) -> None\nC++: void FitSliceToAll(\n    bool onlyIfPropagateVolumeSelectionAllowed=false,\n    bool resetOrientation=true)\n\nFit all the volumes into their views If\nonlyIfPropagateVolumeSelectionAllowed is true then field of view\nwill be reset on only those slices where propagate volume\nselection is allowed If resetOrientation is true then slice\norientation can be modified during function call\n"},
  {"PropagateTableSelection", PyvtkMRMLApplicationLogic_PropagateTableSelection, METH_VARARGS,
   "PropagateTableSelection(self) -> None\nC++: void PropagateTableSelection()\n\nPropagate selected table in the SelectionNode to table view\nnodes.\n"},
  {"PropagatePlotChartSelection", PyvtkMRMLApplicationLogic_PropagatePlotChartSelection, METH_VARARGS,
   "PropagatePlotChartSelection(self) -> None\nC++: void PropagatePlotChartSelection()\n\nPropagate selected PlotChart in the SelectionNode to Plot view\nnodes.\n"},
  {"Zip", PyvtkMRMLApplicationLogic_Zip, METH_VARARGS,
   "Zip(self, zipFileName:str, directoryToZip:str) -> bool\nC++: bool Zip(const char *zipFileName, const char *directoryToZip)\n\nzip the directory into a zip file Returns success or failure.\n"},
  {"Unzip", PyvtkMRMLApplicationLogic_Unzip, METH_VARARGS,
   "Unzip(self, zipFileName:str, destinationDirectory:str) -> bool\nC++: bool Unzip(const char *zipFileName,\n    const char *destinationDirectory)\n\nunzip the zip file to the current working directory Returns\nsuccess or failure.\n"},
  {"PercentEncode", PyvtkMRMLApplicationLogic_PercentEncode, METH_VARARGS,
   "PercentEncode(s:str) -> str\nC++: static std::string PercentEncode(std::string s)\n\nConvert reserved characters into percent notation to avoid issues\nwith filenames containing things that might be mistaken, for\nexample, for windows drive letters.  Used internally by\nSaveSceneToSlicerDataBundleDirectory. This is not a general\npurpose implementation; it preserves commonly used characters for\nfilenames but avoids known issue like slashes or colons. Ideally\na version from vtksys or similar should be used, but nothing\nseems to be available.\nhttps://en.wikipedia.org/wiki/Percent-encoding See\nhttps://github.com/Slicer/Slicer/issues/2605\n"},
  {"SaveSceneToSlicerDataBundleDirectory", PyvtkMRMLApplicationLogic_SaveSceneToSlicerDataBundleDirectory, METH_VARARGS,
   "SaveSceneToSlicerDataBundleDirectory(self, sdbDir:str,\n    screenShot:vtkImageData=...,\n    userMessages:vtkMRMLMessageCollection=...) -> bool\nC++: bool SaveSceneToSlicerDataBundleDirectory(const char *sdbDir,\n     vtkImageData *screenShot=nullptr,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nSave the scene into a self contained directory, sdbDir Called by\nthe qSlicerSceneWriter, which can be accessed via\n\\sa qSlicerCoreIOManager::saveScene\nIf screenShot is not null, use it as the screen shot for a scene\nview Returns false if the save failed\n"},
  {"OpenSlicerDataBundle", PyvtkMRMLApplicationLogic_OpenSlicerDataBundle, METH_VARARGS,
   "OpenSlicerDataBundle(self, sdbFilePath:str,\n    temporaryDirectory:str,\n    userMessages:vtkMRMLMessageCollection=...) -> bool\nC++: bool OpenSlicerDataBundle(const char *sdbFilePath,\n    const char *temporaryDirectory,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nOpen the file into a temp directory and load the scene file\ninside.  Note that the first mrml file found in the extracted\ndirectory will be used.\n"},
  {"UnpackSlicerDataBundle", PyvtkMRMLApplicationLogic_UnpackSlicerDataBundle, METH_VARARGS,
   "UnpackSlicerDataBundle(self, sdbFilePath:str,\n    temporaryDirectory:str) -> str\nC++: std::string UnpackSlicerDataBundle(const char *sdbFilePath,\n    const char *temporaryDirectory)\n\nUnpack the file into a temp directory and return the scene file\ninside.  Note that the first mrml file found in the extracted\ndirectory will be used.\n"},
  {"LoadDefaultParameterSets", PyvtkMRMLApplicationLogic_LoadDefaultParameterSets, METH_VARARGS,
   "LoadDefaultParameterSets(scene:vtkMRMLScene, directories:(str,\n    ...)) -> int\nC++: static int LoadDefaultParameterSets(vtkMRMLScene *scene,\n    const std::vector<std::string> &directories)\n\nLoad any default parameter sets into the specified scene Returns\nthe total number of loaded parameter sets\n"},
  {"CreateUniqueFileName", PyvtkMRMLApplicationLogic_CreateUniqueFileName, METH_VARARGS,
   "CreateUniqueFileName(filename:str, knownExtension:str=...) -> str\nC++: static std::string CreateUniqueFileName(\n    const std::string &filename,\n    const std::string &knownExtension=\"\")\n\nCreates a unique (non-existent) file name by adding an index\nafter base file name. knownExtension specifies the extension the\nindex should be inserted before. It is necessary to provide\nextension, because there is no reliable way of correctly\ndetermining extension automatically (for example, file extension\nof some.file.nii.gz could be gz, nii.gz, or file.nii.gz and only\none of them is correct).\n"},
  {"InvokeEventWithDelay", PyvtkMRMLApplicationLogic_InvokeEventWithDelay, METH_VARARGS,
   "InvokeEventWithDelay(self, delayInMs:int, caller:vtkObject,\n    eventID:int=..., callData:Pointer=...) -> None\nC++: void InvokeEventWithDelay(unsigned int delayInMs,\n    vtkObject *caller,\n    unsigned long eventID=vtkCommand::ModifiedEvent,\n    void *callData=nullptr)\n\nConveniently calls an InvokeEvent on an object with a delay.\n"},
  {"GetTemporaryPath", PyvtkMRMLApplicationLogic_GetTemporaryPath, METH_VARARGS,
   "GetTemporaryPath(self) -> str\nC++: const char *GetTemporaryPath()\n\nReturn the temporary path that was set by the application\n"},
  {"SetTemporaryPath", PyvtkMRMLApplicationLogic_SetTemporaryPath, METH_VARARGS,
   "SetTemporaryPath(self, path:str) -> None\nC++: void SetTemporaryPath(const char *path)\n\nSet the temporary path the logics can use. The path should be set\nby the application\n"},
  {"SaveSceneScreenshot", PyvtkMRMLApplicationLogic_SaveSceneScreenshot, METH_VARARGS,
   "SaveSceneScreenshot(self, screenshot:vtkImageData) -> None\nC++: void SaveSceneScreenshot(vtkImageData *screenshot)\n\nSaves the provided image as screenshot of the scene (same\nfilepath as the scene URL but extension is .png instead of\n.mrml). Uses current scene's URL property, so the URL must be\nup-to-date when calling this method.\n"},
  {"PauseRender", PyvtkMRMLApplicationLogic_PauseRender, METH_VARARGS,
   "PauseRender(self) -> None\nC++: virtual void PauseRender()\n\nPauses rendering for all views in the current layout. It should\nbe used in situations where multiple nodes are modified, and it\nis undesirable to display an intermediate state. The caller is\nresponsible for making sure that each PauseRender() is paired\nwith ResumeRender().\n\\sa vtkMRMLApplicationLogic::ResumeRender()\n\\sa qSlicerApplication::setRenderPaused()\n"},
  {"ResumeRender", PyvtkMRMLApplicationLogic_ResumeRender, METH_VARARGS,
   "ResumeRender(self) -> None\nC++: virtual void ResumeRender()\n\nResumes rendering for all views in the current layout.\n\\sa vtkMRMLApplicationLogic::PauseRender()\n\\sa qSlicerApplication::setRenderPaused()\n"},
  {"EditNode", PyvtkMRMLApplicationLogic_EditNode, METH_VARARGS,
   "EditNode(self, node:vtkMRMLNode) -> None\nC++: virtual void EditNode(vtkMRMLNode *node)\n\nRequests the application to show user interface for editing a\nnode.\n"},
  {"SetModuleLogic", PyvtkMRMLApplicationLogic_SetModuleLogic, METH_VARARGS,
   "SetModuleLogic(self, moduleName:str,\n    moduleLogic:vtkMRMLAbstractLogic) -> None\nC++: void SetModuleLogic(const char *moduleName,\n    vtkMRMLAbstractLogic *moduleLogic)\n\nSets a module with its corresponding logic to the application\nlogic.\n\\param moduleName name of the module.\n\\param moduleLogic pointer to logic to be associated to the\n    module. If this\nparameter is nullptr, then the module logic will be removed from\nthe application logic.\n"},
  {"GetModuleLogic", PyvtkMRMLApplicationLogic_GetModuleLogic, METH_VARARGS,
   "GetModuleLogic(self, moduleName:str) -> vtkMRMLAbstractLogic\nC++: vtkMRMLAbstractLogic *GetModuleLogic(const char *moduleName)\n\nGets a constant pointer to module logic associated with a given\nmodule\n\\param moduleName name of the module associated to the logic\n\\return constant pointer to vtkMRMLAbstractLogic corresponding to\nthe\nlogic associated to th logic\n"},
  {"SetIntersectingSlicesEnabled", PyvtkMRMLApplicationLogic_SetIntersectingSlicesEnabled, METH_VARARGS,
   "SetIntersectingSlicesEnabled(self,\n    operation:IntersectingSlicesOperation, enabled:bool) -> None\nC++: void SetIntersectingSlicesEnabled(\n    IntersectingSlicesOperation operation, bool enabled)\n\n"},
  {"GetIntersectingSlicesEnabled", PyvtkMRMLApplicationLogic_GetIntersectingSlicesEnabled, METH_VARARGS,
   "GetIntersectingSlicesEnabled(self,\n    operation:IntersectingSlicesOperation) -> bool\nC++: bool GetIntersectingSlicesEnabled(\n    IntersectingSlicesOperation operation)\n\n"},
  {"SetIntersectingSlicesIntersectionMode", PyvtkMRMLApplicationLogic_SetIntersectingSlicesIntersectionMode, METH_VARARGS,
   "SetIntersectingSlicesIntersectionMode(self, mode:int) -> None\nC++: void SetIntersectingSlicesIntersectionMode(int mode)\n\n"},
  {"GetIntersectingSlicesIntersectionMode", PyvtkMRMLApplicationLogic_GetIntersectingSlicesIntersectionMode, METH_VARARGS,
   "GetIntersectingSlicesIntersectionMode(self) -> int\nC++: int GetIntersectingSlicesIntersectionMode()\n\n"},
  {"SetIntersectingSlicesLineThicknessMode", PyvtkMRMLApplicationLogic_SetIntersectingSlicesLineThicknessMode, METH_VARARGS,
   "SetIntersectingSlicesLineThicknessMode(self, mode:int) -> None\nC++: void SetIntersectingSlicesLineThicknessMode(int mode)\n\n"},
  {"GetIntersectingSlicesLineThicknessMode", PyvtkMRMLApplicationLogic_GetIntersectingSlicesLineThicknessMode, METH_VARARGS,
   "GetIntersectingSlicesLineThicknessMode(self) -> int\nC++: int GetIntersectingSlicesLineThicknessMode()\n\n"},
  {"SetFontFileName", PyvtkMRMLApplicationLogic_SetFontFileName, METH_VARARGS,
   "SetFontFileName(self, fontFamily:int, fontFileName:str) -> None\nC++: void SetFontFileName(int fontFamily,\n    const std::string &fontFileName)\n\nSet custom font file name for rendering views. fontFamily can be\nVTK_ARIAL, VTK_COURIER, VTK_TIMES. Font file must be in\nGetFontsDirectory().\n"},
  {"GetFontFileName", PyvtkMRMLApplicationLogic_GetFontFileName, METH_VARARGS,
   "GetFontFileName(self, fontFamily:int) -> str\nC++: std::string GetFontFileName(int fontFamily)\n\n"},
  {"GetFontFilePath", PyvtkMRMLApplicationLogic_GetFontFilePath, METH_VARARGS,
   "GetFontFilePath(self, fontFileName:str) -> str\nC++: std::string GetFontFilePath(const std::string &fontFileName)\n\nGet full path to custom font file for rendering views from font\nfile name.\n"},
  {"GetFontsDirectory", PyvtkMRMLApplicationLogic_GetFontsDirectory, METH_VARARGS,
   "GetFontsDirectory(self) -> str\nC++: std::string GetFontsDirectory()\n\nGet folder where font files are stored (\"Fonts\" subfolder in\napplication share folder).\n"},
  {"UseCustomFontFile", PyvtkMRMLApplicationLogic_UseCustomFontFile, METH_VARARGS,
   "UseCustomFontFile(self, textProperty:vtkTextProperty) -> None\nC++: void UseCustomFontFile(vtkTextProperty *textProperty)\n\nUpdate text property to use custom font file. Font family is set\nfrom arial/courier/times font family to custom fontfile. Font\nfile path is set to the one specified in FontFileName property in\nthis object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLApplicationLogic_Doc =
  "vtkMRMLApplicationLogic - no description provided.\n\n"
  "Superclass: vtkMRMLAbstractLogic\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLApplicationLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLApplicationLogic", // tp_name
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
  PyvtkMRMLApplicationLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLApplicationLogic_StaticNew()
{
  return vtkMRMLApplicationLogic::New();
}

PyObject *PyvtkMRMLApplicationLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLApplicationLogic_Type, PyvtkMRMLApplicationLogic_Methods,
    "vtkMRMLApplicationLogic",
 &PyvtkMRMLApplicationLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractLogic_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLApplicationLogic_Layers_Type);
  PyVTKEnum_Add(&PyvtkMRMLApplicationLogic_Layers_Type, "vtkMRMLApplicationLogic.Layers");

  o = (PyObject *)&PyvtkMRMLApplicationLogic_Layers_Type;
  if (PyDict_SetItemString(d, "Layers", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLApplicationLogic_Events_Type);
  PyVTKEnum_Add(&PyvtkMRMLApplicationLogic_Events_Type, "vtkMRMLApplicationLogic.Events");

  o = (PyObject *)&PyvtkMRMLApplicationLogic_Events_Type;
  if (PyDict_SetItemString(d, "Events", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLApplicationLogic_IntersectingSlicesOperation_Type);
  PyVTKEnum_Add(&PyvtkMRMLApplicationLogic_IntersectingSlicesOperation_Type, "vtkMRMLApplicationLogic.IntersectingSlicesOperation");

  o = (PyObject *)&PyvtkMRMLApplicationLogic_IntersectingSlicesOperation_Type;
  if (PyDict_SetItemString(d, "IntersectingSlicesOperation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMRMLApplicationLogic::Layers cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "LabelLayer", vtkMRMLApplicationLogic::LabelLayer },
        { "ForegroundLayer", vtkMRMLApplicationLogic::ForegroundLayer },
        { "BackgroundLayer", vtkMRMLApplicationLogic::BackgroundLayer },
        { "AllLayers", vtkMRMLApplicationLogic::AllLayers },
      };

    o = PyvtkMRMLApplicationLogic_Layers_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkMRMLApplicationLogic::Events cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "RequestInvokeEvent", vtkMRMLApplicationLogic::RequestInvokeEvent },
        { "PauseRenderEvent", vtkMRMLApplicationLogic::PauseRenderEvent },
        { "ResumeRenderEvent", vtkMRMLApplicationLogic::ResumeRenderEvent },
        { "EditNodeEvent", vtkMRMLApplicationLogic::EditNodeEvent },
        { "ShowViewContextMenuEvent", vtkMRMLApplicationLogic::ShowViewContextMenuEvent },
      };

    o = PyvtkMRMLApplicationLogic_Events_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkMRMLApplicationLogic::IntersectingSlicesOperation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "IntersectingSlicesVisibility", vtkMRMLApplicationLogic::IntersectingSlicesVisibility },
        { "IntersectingSlicesInteractive", vtkMRMLApplicationLogic::IntersectingSlicesInteractive },
        { "IntersectingSlicesTranslation", vtkMRMLApplicationLogic::IntersectingSlicesTranslation },
        { "IntersectingSlicesRotation", vtkMRMLApplicationLogic::IntersectingSlicesRotation },
        { "IntersectingSlicesThickSlabInteractive", vtkMRMLApplicationLogic::IntersectingSlicesThickSlabInteractive },
      };

    o = PyvtkMRMLApplicationLogic_IntersectingSlicesOperation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLApplicationLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLApplicationLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLApplicationLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

