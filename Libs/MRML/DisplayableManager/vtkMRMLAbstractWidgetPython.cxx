// python wrapper for vtkMRMLAbstractWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAbstractWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAbstractWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAbstractWidget_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractWidget_WidgetEvents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLAbstractWidget.WidgetEvents", // tp_name
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
PyObject *PyvtkMRMLAbstractWidget_WidgetEvents_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLAbstractWidget_WidgetEvents_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLAbstractWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAbstractWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAbstractWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAbstractWidget *tempr = vtkMRMLAbstractWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAbstractWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAbstractWidget::NewInstance());

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
PyvtkMRMLAbstractWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAbstractWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAbstractWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_SetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  vtkMRMLApplicationLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLApplicationLogic"))
  {
    if (ap.IsBound())
    {
      op->SetMRMLApplicationLogic(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidget::SetMRMLApplicationLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLApplicationLogic *tempr = (ap.IsBound() ?
      op->GetMRMLApplicationLogic() :
      op->vtkMRMLAbstractWidget::GetMRMLApplicationLogic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  vtkMRMLAbstractWidgetRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLAbstractWidgetRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAbstractWidgetRepresentation *tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkMRMLAbstractWidget::GetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_UpdateFromMRML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFromMRML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetBuffer(temp2, &pbuf2)))
  {
    if (ap.IsBound())
    {
      op->UpdateFromMRML(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLAbstractWidget::UpdateFromMRML(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_SetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetState(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidget::SetWidgetState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidgetState() :
      op->vtkMRMLAbstractWidget::GetWidgetState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_CanProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProcessInteractionEvent(temp0, temp1) :
      op->vtkMRMLAbstractWidget::CanProcessInteractionEvent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_ProcessInteractionEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInteractionEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->ProcessInteractionEvent(temp0) :
      op->vtkMRMLAbstractWidget::ProcessInteractionEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_SetEventTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  int temp0;
  unsigned long temp1;
  int temp2;
  unsigned long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetEventTranslation(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLAbstractWidget::SetEventTranslation(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractWidget_SetEventTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  unsigned long temp0;
  int temp1;
  unsigned long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetEventTranslation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLAbstractWidget::SetEventTranslation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractWidget_SetEventTranslation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMRMLAbstractWidget_SetEventTranslation_s1(self, args);
    case 3:
      return PyvtkMRMLAbstractWidget_SetEventTranslation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEventTranslation");
  return nullptr;
}


static PyObject *
PyvtkMRMLAbstractWidget_SetEventTranslationClickAndDrag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventTranslationClickAndDrag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  int temp0;
  unsigned long temp1;
  int temp2;
  int temp3;
  unsigned long temp4;
  unsigned long temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetEventTranslationClickAndDrag(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkMRMLAbstractWidget::SetEventTranslationClickAndDrag(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_SetKeyboardEventTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyboardEventTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  int temp0;
  char temp1;
  int temp2;
  const char *temp3 = nullptr;
  unsigned long temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetKeyboardEventTranslation(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkMRMLAbstractWidget::SetKeyboardEventTranslation(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractWidget_SetKeyboardEventTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyboardEventTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  int temp0;
  int temp1;
  char temp2;
  int temp3;
  const char *temp4 = nullptr;
  unsigned long temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetKeyboardEventTranslation(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkMRMLAbstractWidget::SetKeyboardEventTranslation(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractWidget_SetKeyboardEventTranslation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkMRMLAbstractWidget_SetKeyboardEventTranslation_s1(self, args);
    case 6:
      return PyvtkMRMLAbstractWidget_SetKeyboardEventTranslation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetKeyboardEventTranslation");
  return nullptr;
}


static PyObject *
PyvtkMRMLAbstractWidget_TranslateInteractionEventToWidgetEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateInteractionEventToWidgetEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->TranslateInteractionEventToWidgetEvent(temp0) :
      op->vtkMRMLAbstractWidget::TranslateInteractionEventToWidgetEvent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_Leave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Leave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    if (ap.IsBound())
    {
      op->Leave(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidget::Leave(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkMRMLAbstractWidget::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkMRMLAbstractWidget::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetInteractionNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLInteractionNode *tempr = (ap.IsBound() ?
      op->GetInteractionNode() :
      op->vtkMRMLAbstractWidget::GetInteractionNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetMouseCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMouseCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMouseCursor() :
      op->vtkMRMLAbstractWidget::GetMouseCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetGrabFocus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrabFocus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGrabFocus() :
      op->vtkMRMLAbstractWidget::GetGrabFocus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInteractive() :
      op->vtkMRMLAbstractWidget::GetInteractive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetNeedToRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeedToRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNeedToRender() :
      op->vtkMRMLAbstractWidget::GetNeedToRender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_NeedToRenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToRenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NeedToRenderOff();
    }
    else
    {
      op->vtkMRMLAbstractWidget::NeedToRenderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetEventTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkWidgetEventTranslator *tempr = (ap.IsBound() ?
      op->GetEventTranslator(temp0) :
      op->vtkMRMLAbstractWidget::GetEventTranslator(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractWidget_GetNumberOfEventTranslators(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEventTranslators");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractWidget *op = static_cast<vtkMRMLAbstractWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEventTranslators() :
      op->vtkMRMLAbstractWidget::GetNumberOfEventTranslators());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAbstractWidget_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAbstractWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAbstractWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAbstractWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAbstractWidget\nC++: static vtkMRMLAbstractWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAbstractWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAbstractWidget\nC++: vtkMRMLAbstractWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAbstractWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAbstractWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMRMLApplicationLogic", PyvtkMRMLAbstractWidget_SetMRMLApplicationLogic, METH_VARARGS,
   "SetMRMLApplicationLogic(self,\n    applicationLogic:vtkMRMLApplicationLogic) -> None\nC++: virtual void SetMRMLApplicationLogic(\n    vtkMRMLApplicationLogic *applicationLogic)\n\n"},
  {"GetMRMLApplicationLogic", PyvtkMRMLAbstractWidget_GetMRMLApplicationLogic, METH_VARARGS,
   "GetMRMLApplicationLogic(self) -> vtkMRMLApplicationLogic\nC++: vtkMRMLApplicationLogic *GetMRMLApplicationLogic()\n\n"},
  {"SetRepresentation", PyvtkMRMLAbstractWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkMRMLAbstractWidgetRepresentation)\n    -> None\nC++: virtual void SetRepresentation(\n    vtkMRMLAbstractWidgetRepresentation *r)\n\nSet the representation. The widget takes over the ownership of\nthis actor.\n"},
  {"GetRepresentation", PyvtkMRMLAbstractWidget_GetRepresentation, METH_VARARGS,
   "GetRepresentation(self) -> vtkMRMLAbstractWidgetRepresentation\nC++: virtual vtkMRMLAbstractWidgetRepresentation *GetRepresentation(\n    )\n\nGet the representation\n"},
  {"UpdateFromMRML", PyvtkMRMLAbstractWidget_UpdateFromMRML, METH_VARARGS,
   "UpdateFromMRML(self, caller:vtkMRMLNode, event:int,\n    callData:Pointer=...) -> None\nC++: virtual void UpdateFromMRML(vtkMRMLNode *caller,\n    unsigned long event, void *callData=nullptr)\n\nBuild the actors of the representation with the info stored in\nthe MRML scene\n"},
  {"SetWidgetState", PyvtkMRMLAbstractWidget_SetWidgetState, METH_VARARGS,
   "SetWidgetState(self, _arg:int) -> None\nC++: virtual void SetWidgetState(int _arg)\n\nConvenient method to change what state the widget is in.\n"},
  {"GetWidgetState", PyvtkMRMLAbstractWidget_GetWidgetState, METH_VARARGS,
   "GetWidgetState(self) -> int\nC++: virtual int GetWidgetState()\n\nConvenient method to determine the state of the method\n"},
  {"CanProcessInteractionEvent", PyvtkMRMLAbstractWidget_CanProcessInteractionEvent, METH_VARARGS,
   "CanProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData, distance2:float)\n    -> bool\nC++: virtual bool CanProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData, double &distance2)\n\nReturn true if the widget can process the event. Distance2 is the\nsquared distance in display coordinates from the closest\ninteraction position. The displayable manager with the closest\ndistance will get the chance to process the interaction event.\n"},
  {"ProcessInteractionEvent", PyvtkMRMLAbstractWidget_ProcessInteractionEvent, METH_VARARGS,
   "ProcessInteractionEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: virtual bool ProcessInteractionEvent(\n    vtkMRMLInteractionEventData *eventData)\n\nAllows injecting interaction events for processing, without\ndirectly observing window interactor events. Return true if the\nwidget processed the event.\n"},
  {"SetEventTranslation", PyvtkMRMLAbstractWidget_SetEventTranslation, METH_VARARGS,
   "SetEventTranslation(self, widgetState:int, interactionEvent:int,\n    modifiers:int, widgetEvent:int) -> None\nC++: void SetEventTranslation(int widgetState,\n    unsigned long interactionEvent, int modifiers,\n    unsigned long widgetEvent)\nSetEventTranslation(self, interactionEvent:int, modifiers:int,\n    widgetEvent:int) -> None\nC++: void SetEventTranslation(unsigned long interactionEvent,\n    int modifiers, unsigned long widgetEvent)\n\nDefine interaction event to widget event translation for mouse\nand other controller events Used in the specified widget state\nonly.\n"},
  {"SetEventTranslationClickAndDrag", PyvtkMRMLAbstractWidget_SetEventTranslationClickAndDrag, METH_VARARGS,
   "SetEventTranslationClickAndDrag(self, widgetState:int,\n    startInteractionEvent:int, modifiers:int,\n    widgetStateDragging:int, widgetStartEvent:int,\n    widgetEndEvent:int) -> None\nC++: void SetEventTranslationClickAndDrag(int widgetState,\n    unsigned long startInteractionEvent, int modifiers,\n    int widgetStateDragging, unsigned long widgetStartEvent,\n    unsigned long widgetEndEvent)\n\n"},
  {"SetKeyboardEventTranslation", PyvtkMRMLAbstractWidget_SetKeyboardEventTranslation, METH_VARARGS,
   "SetKeyboardEventTranslation(self, modifier:int, keyCode:str,\n    repeatCount:int, keySym:str, widgetEvent:int) -> None\nC++: void SetKeyboardEventTranslation(int modifier, char keyCode,\n    int repeatCount, const char *keySym,\n    unsigned long widgetEvent)\nSetKeyboardEventTranslation(self, widgetState:int, modifier:int,\n    keyCode:str, repeatCount:int, keySym:str, widgetEvent:int)\n    -> None\nC++: void SetKeyboardEventTranslation(int widgetState,\n    int modifier, char keyCode, int repeatCount,\n    const char *keySym, unsigned long widgetEvent)\n\nDefine interaction event to widget event translation for keyboard\nevents. Used in any widget state.\n"},
  {"TranslateInteractionEventToWidgetEvent", PyvtkMRMLAbstractWidget_TranslateInteractionEventToWidgetEvent, METH_VARARGS,
   "TranslateInteractionEventToWidgetEvent(self,\n    eventData:vtkMRMLInteractionEventData) -> int\nC++: virtual unsigned long TranslateInteractionEventToWidgetEvent(\n    vtkMRMLInteractionEventData *eventData)\n\nGet widget event from translation event\n"},
  {"Leave", PyvtkMRMLAbstractWidget_Leave, METH_VARARGS,
   "Leave(self, eventData:vtkMRMLInteractionEventData) -> None\nC++: virtual void Leave(vtkMRMLInteractionEventData *eventData)\n\nCalled when the the widget loses the focus.\n"},
  {"SetRenderer", PyvtkMRMLAbstractWidget_SetRenderer, METH_VARARGS,
   "SetRenderer(self, renderer:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *renderer)\n\n"},
  {"GetRenderer", PyvtkMRMLAbstractWidget_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\n"},
  {"GetInteractionNode", PyvtkMRMLAbstractWidget_GetInteractionNode, METH_VARARGS,
   "GetInteractionNode(self) -> vtkMRMLInteractionNode\nC++: vtkMRMLInteractionNode *GetInteractionNode()\n\n"},
  {"GetMouseCursor", PyvtkMRMLAbstractWidget_GetMouseCursor, METH_VARARGS,
   "GetMouseCursor(self) -> int\nC++: virtual int GetMouseCursor()\n\n"},
  {"GetGrabFocus", PyvtkMRMLAbstractWidget_GetGrabFocus, METH_VARARGS,
   "GetGrabFocus(self) -> bool\nC++: virtual bool GetGrabFocus()\n\n"},
  {"GetInteractive", PyvtkMRMLAbstractWidget_GetInteractive, METH_VARARGS,
   "GetInteractive(self) -> bool\nC++: virtual bool GetInteractive()\n\n"},
  {"GetNeedToRender", PyvtkMRMLAbstractWidget_GetNeedToRender, METH_VARARGS,
   "GetNeedToRender(self) -> bool\nC++: virtual bool GetNeedToRender()\n\n"},
  {"NeedToRenderOff", PyvtkMRMLAbstractWidget_NeedToRenderOff, METH_VARARGS,
   "NeedToRenderOff(self) -> None\nC++: virtual void NeedToRenderOff()\n\n"},
  {"GetEventTranslator", PyvtkMRMLAbstractWidget_GetEventTranslator, METH_VARARGS,
   "GetEventTranslator(self, widgetState:int)\n    -> vtkWidgetEventTranslator\nC++: virtual vtkWidgetEventTranslator *GetEventTranslator(\n    int widgetState)\n\n"},
  {"GetNumberOfEventTranslators", PyvtkMRMLAbstractWidget_GetNumberOfEventTranslators, METH_VARARGS,
   "GetNumberOfEventTranslators(self) -> int\nC++: virtual int GetNumberOfEventTranslators()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAbstractWidget_Doc =
  "vtkMRMLAbstractWidget - Process interaction events to update state of\nMRML widget nodes\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMRMLAbstractWidget is the abstract class that handles interaction\n"
  "events received from the displayable manager. To decide which widget\n"
  "gets the chance to process an interaction event, this class does not\n"
  "use VTK picking manager, but interactor style class queries\n"
  "displayable managers about what events they can process, displayable\n"
  "manager queries its widgets, and based on the returned information,\n"
  "interactor style selects a displayable manager and the displayable\n"
  "manager selects a widget.\n\n"
  "vtkAbstractWidget uses vtkSlicerWidgetEventTranslator to translate\n"
  "VTK interaction events (defined in vtkCommand.h) into widget events\n"
  "(defined in vtkMRMLAbstractWidget.h and subclasses). This class\n"
  "allows modification of event bindings.\n\n"
  "@sa\n"
  "vtkSlicerWidgetRepresentation vtkSlicerWidgetEventTranslator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLAbstractWidget", // tp_name
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
  PyvtkMRMLAbstractWidget_Doc, // tp_doc
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

PyObject *PyvtkMRMLAbstractWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAbstractWidget_Type, PyvtkMRMLAbstractWidget_Methods,
    "vtkMRMLAbstractWidget",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLAbstractWidget_WidgetEvents_Type);
  PyVTKEnum_Add(&PyvtkMRMLAbstractWidget_WidgetEvents_Type, "vtkMRMLAbstractWidget.WidgetEvents");

  o = (PyObject *)&PyvtkMRMLAbstractWidget_WidgetEvents_Type;
  if (PyDict_SetItemString(d, "WidgetEvents", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "WidgetStateAny", vtkMRMLAbstractWidget::WidgetStateAny },
        { "WidgetStateIdle", vtkMRMLAbstractWidget::WidgetStateIdle },
        { "WidgetStateOnWidget", vtkMRMLAbstractWidget::WidgetStateOnWidget },
        { "WidgetStateTranslate", vtkMRMLAbstractWidget::WidgetStateTranslate },
        { "WidgetStateRotate", vtkMRMLAbstractWidget::WidgetStateRotate },
        { "WidgetStateScale", vtkMRMLAbstractWidget::WidgetStateScale },
        { "WidgetStateUser", vtkMRMLAbstractWidget::WidgetStateUser },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 23; c++)
  {
    typedef vtkMRMLAbstractWidget::WidgetEvents cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[23] = {
        { "WidgetEventNone", vtkMRMLAbstractWidget::WidgetEventNone },
        { "WidgetEventMouseMove", vtkMRMLAbstractWidget::WidgetEventMouseMove },
        { "WidgetEventTranslateStart", vtkMRMLAbstractWidget::WidgetEventTranslateStart },
        { "WidgetEventTranslateEnd", vtkMRMLAbstractWidget::WidgetEventTranslateEnd },
        { "WidgetEventRotateStart", vtkMRMLAbstractWidget::WidgetEventRotateStart },
        { "WidgetEventRotateEnd", vtkMRMLAbstractWidget::WidgetEventRotateEnd },
        { "WidgetEventScaleStart", vtkMRMLAbstractWidget::WidgetEventScaleStart },
        { "WidgetEventScaleEnd", vtkMRMLAbstractWidget::WidgetEventScaleEnd },
        { "WidgetEventPick", vtkMRMLAbstractWidget::WidgetEventPick },
        { "WidgetEventJumpCursor", vtkMRMLAbstractWidget::WidgetEventJumpCursor },
        { "WidgetEventAction", vtkMRMLAbstractWidget::WidgetEventAction },
        { "WidgetEventCustomAction1", vtkMRMLAbstractWidget::WidgetEventCustomAction1 },
        { "WidgetEventCustomAction2", vtkMRMLAbstractWidget::WidgetEventCustomAction2 },
        { "WidgetEventCustomAction3", vtkMRMLAbstractWidget::WidgetEventCustomAction3 },
        { "WidgetEventCustomAction4", vtkMRMLAbstractWidget::WidgetEventCustomAction4 },
        { "WidgetEventCustomAction5", vtkMRMLAbstractWidget::WidgetEventCustomAction5 },
        { "WidgetEventCustomAction6", vtkMRMLAbstractWidget::WidgetEventCustomAction6 },
        { "WidgetEventSelect", vtkMRMLAbstractWidget::WidgetEventSelect },
        { "WidgetEventUnselect", vtkMRMLAbstractWidget::WidgetEventUnselect },
        { "WidgetEventToggleSelect", vtkMRMLAbstractWidget::WidgetEventToggleSelect },
        { "WidgetEventMenu", vtkMRMLAbstractWidget::WidgetEventMenu },
        { "WidgetEventReset", vtkMRMLAbstractWidget::WidgetEventReset },
        { "WidgetEventUser", vtkMRMLAbstractWidget::WidgetEventUser },
      };

    o = PyvtkMRMLAbstractWidget_WidgetEvents_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAbstractWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAbstractWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAbstractWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

