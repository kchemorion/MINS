// python wrapper for vtkMarkupsGlyphSource2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMarkupsGlyphSource2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMarkupsGlyphSource2D(PyObject *dict); }
extern "C" { PyObject *PyvtkMarkupsGlyphSource2D_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMarkupsGlyphSource2D_GlyphTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleVTKWidgetsPython.vtkMarkupsGlyphSource2D.GlyphTypes", // tp_name
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
PyObject *PyvtkMarkupsGlyphSource2D_GlyphTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMarkupsGlyphSource2D_GlyphTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMarkupsGlyphSource2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMarkupsGlyphSource2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMarkupsGlyphSource2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMarkupsGlyphSource2D *tempr = vtkMarkupsGlyphSource2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMarkupsGlyphSource2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMarkupsGlyphSource2D::NewInstance());

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
PyvtkMarkupsGlyphSource2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMarkupsGlyphSource2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMarkupsGlyphSource2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMarkupsGlyphSource2D_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMarkupsGlyphSource2D_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMarkupsGlyphSource2D_SetCenter_s1(self, args);
    case 1:
      return PyvtkMarkupsGlyphSource2D_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkMarkupsGlyphSource2D::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetScaleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleMinValue() :
      op->vtkMarkupsGlyphSource2D::GetScaleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetScaleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleMaxValue() :
      op->vtkMarkupsGlyphSource2D::GetScaleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkMarkupsGlyphSource2D::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetScale2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale2(temp0);
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetScale2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetScale2MinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2MinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale2MinValue() :
      op->vtkMarkupsGlyphSource2D::GetScale2MinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetScale2MaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2MaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale2MaxValue() :
      op->vtkMarkupsGlyphSource2D::GetScale2MaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetScale2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale2() :
      op->vtkMarkupsGlyphSource2D::GetScale2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMarkupsGlyphSource2D_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMarkupsGlyphSource2D_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMarkupsGlyphSource2D_SetColor_s1(self, args);
    case 1:
      return PyvtkMarkupsGlyphSource2D_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkMarkupsGlyphSource2D::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilled(temp0);
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetFilled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFilled() :
      op->vtkMarkupsGlyphSource2D::GetFilled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_FilledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilledOn();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::FilledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_FilledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilledOff();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::FilledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDash(temp0);
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetDash(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDash() :
      op->vtkMarkupsGlyphSource2D::GetDash());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_DashOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DashOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DashOn();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::DashOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_DashOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DashOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DashOff();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::DashOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCross(temp0);
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetCross(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCross() :
      op->vtkMarkupsGlyphSource2D::GetCross());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_CrossOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CrossOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CrossOn();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::CrossOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_CrossOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CrossOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CrossOff();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::CrossOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAngle(temp0);
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetRotationAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetRotationAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationAngle() :
      op->vtkMarkupsGlyphSource2D::GetRotationAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphType(temp0);
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetGlyphTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphTypeMinValue() :
      op->vtkMarkupsGlyphSource2D::GetGlyphTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetGlyphTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphTypeMaxValue() :
      op->vtkMarkupsGlyphSource2D::GetGlyphTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphType() :
      op->vtkMarkupsGlyphSource2D::GetGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToNone();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToStarBurst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToStarBurst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToStarBurst();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToStarBurst();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToCross();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToCross();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToCrossDot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToCrossDot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToCrossDot();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToCrossDot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToThickCross(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToThickCross");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToThickCross();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToThickCross();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToVertex();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToVertex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToDash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToDash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToDash();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToDash();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToTriangle();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToSquare(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToSquare");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToSquare();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToSquare();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToCircle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToCircle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToCircle();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToCircle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToDiamond(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToDiamond");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToDiamond();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToDiamond();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToArrow();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToArrow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToThickArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToThickArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToThickArrow();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToThickArrow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetGlyphTypeToHookedArrow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeToHookedArrow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeToHookedArrow();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetGlyphTypeToHookedArrow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkupsGlyphSource2D_SetNextGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkupsGlyphSource2D *op = static_cast<vtkMarkupsGlyphSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNextGlyphType();
    }
    else
    {
      op->vtkMarkupsGlyphSource2D::SetNextGlyphType();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMarkupsGlyphSource2D_Methods[] = {
  {"IsTypeOf", PyvtkMarkupsGlyphSource2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMarkupsGlyphSource2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMarkupsGlyphSource2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMarkupsGlyphSource2D\nC++: static vtkMarkupsGlyphSource2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMarkupsGlyphSource2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMarkupsGlyphSource2D\nC++: vtkMarkupsGlyphSource2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMarkupsGlyphSource2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMarkupsGlyphSource2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCenter", PyvtkMarkupsGlyphSource2D_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSet the center of the glyph. By default the center is (0,0,0).\n"},
  {"GetCenter", PyvtkMarkupsGlyphSource2D_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetScale", PyvtkMarkupsGlyphSource2D_SetScale, METH_VARARGS,
   "SetScale(self, _arg:float) -> None\nC++: virtual void SetScale(double _arg)\n\nSet the scale of the glyph. Note that the glyphs are designed to\nfit in the (1,1) rectangle.\n"},
  {"GetScaleMinValue", PyvtkMarkupsGlyphSource2D_GetScaleMinValue, METH_VARARGS,
   "GetScaleMinValue(self) -> float\nC++: virtual double GetScaleMinValue()\n\n"},
  {"GetScaleMaxValue", PyvtkMarkupsGlyphSource2D_GetScaleMaxValue, METH_VARARGS,
   "GetScaleMaxValue(self) -> float\nC++: virtual double GetScaleMaxValue()\n\n"},
  {"GetScale", PyvtkMarkupsGlyphSource2D_GetScale, METH_VARARGS,
   "GetScale(self) -> float\nC++: virtual double GetScale()\n\n"},
  {"SetScale2", PyvtkMarkupsGlyphSource2D_SetScale2, METH_VARARGS,
   "SetScale2(self, _arg:float) -> None\nC++: virtual void SetScale2(double _arg)\n\nSet the scale of optional portions of the glyph (e.g., the dash\nand cross is DashOn() and CrossOn()).\n"},
  {"GetScale2MinValue", PyvtkMarkupsGlyphSource2D_GetScale2MinValue, METH_VARARGS,
   "GetScale2MinValue(self) -> float\nC++: virtual double GetScale2MinValue()\n\n"},
  {"GetScale2MaxValue", PyvtkMarkupsGlyphSource2D_GetScale2MaxValue, METH_VARARGS,
   "GetScale2MaxValue(self) -> float\nC++: virtual double GetScale2MaxValue()\n\n"},
  {"GetScale2", PyvtkMarkupsGlyphSource2D_GetScale2, METH_VARARGS,
   "GetScale2(self) -> float\nC++: virtual double GetScale2()\n\n"},
  {"SetColor", PyvtkMarkupsGlyphSource2D_SetColor, METH_VARARGS,
   "SetColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetColor(double _arg1, double _arg2,\n    double _arg3)\nSetColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetColor(const double _arg[3])\n\nSet the color of the glyph. The default color is white.\n"},
  {"GetColor", PyvtkMarkupsGlyphSource2D_GetColor, METH_VARARGS,
   "GetColor(self) -> (float, float, float)\nC++: virtual double *GetColor()\n\n"},
  {"SetFilled", PyvtkMarkupsGlyphSource2D_SetFilled, METH_VARARGS,
   "SetFilled(self, _arg:int) -> None\nC++: virtual void SetFilled(int _arg)\n\nSpecify whether the glyph is filled (a polygon) or not (a closed\npolygon defined by line segments). This only applies to 2D closed\nglyphs.\n"},
  {"GetFilled", PyvtkMarkupsGlyphSource2D_GetFilled, METH_VARARGS,
   "GetFilled(self) -> int\nC++: virtual int GetFilled()\n\n"},
  {"FilledOn", PyvtkMarkupsGlyphSource2D_FilledOn, METH_VARARGS,
   "FilledOn(self) -> None\nC++: virtual void FilledOn()\n\n"},
  {"FilledOff", PyvtkMarkupsGlyphSource2D_FilledOff, METH_VARARGS,
   "FilledOff(self) -> None\nC++: virtual void FilledOff()\n\n"},
  {"SetDash", PyvtkMarkupsGlyphSource2D_SetDash, METH_VARARGS,
   "SetDash(self, _arg:int) -> None\nC++: virtual void SetDash(int _arg)\n\nSpecify whether a short line segment is drawn through the glyph.\n(This is in addition to the glyph. If the glyph type is set to\n\"Dash\" there is no need to enable this flag.)\n"},
  {"GetDash", PyvtkMarkupsGlyphSource2D_GetDash, METH_VARARGS,
   "GetDash(self) -> int\nC++: virtual int GetDash()\n\n"},
  {"DashOn", PyvtkMarkupsGlyphSource2D_DashOn, METH_VARARGS,
   "DashOn(self) -> None\nC++: virtual void DashOn()\n\n"},
  {"DashOff", PyvtkMarkupsGlyphSource2D_DashOff, METH_VARARGS,
   "DashOff(self) -> None\nC++: virtual void DashOff()\n\n"},
  {"SetCross", PyvtkMarkupsGlyphSource2D_SetCross, METH_VARARGS,
   "SetCross(self, _arg:int) -> None\nC++: virtual void SetCross(int _arg)\n\nSpecify whether a cross is drawn as part of the glyph. (This is\nin addition to the glyph. If the glyph type is set to \"Cross\"\nthere is no need to enable this flag.)\n"},
  {"GetCross", PyvtkMarkupsGlyphSource2D_GetCross, METH_VARARGS,
   "GetCross(self) -> int\nC++: virtual int GetCross()\n\n"},
  {"CrossOn", PyvtkMarkupsGlyphSource2D_CrossOn, METH_VARARGS,
   "CrossOn(self) -> None\nC++: virtual void CrossOn()\n\n"},
  {"CrossOff", PyvtkMarkupsGlyphSource2D_CrossOff, METH_VARARGS,
   "CrossOff(self) -> None\nC++: virtual void CrossOff()\n\n"},
  {"SetRotationAngle", PyvtkMarkupsGlyphSource2D_SetRotationAngle, METH_VARARGS,
   "SetRotationAngle(self, _arg:float) -> None\nC++: virtual void SetRotationAngle(double _arg)\n\nSpecify an angle (in degrees) to rotate the glyph around the\nz-axis. Using this ivar, it is possible to generate rotated\nglyphs (e.g., crosses, arrows, etc.)\n"},
  {"GetRotationAngle", PyvtkMarkupsGlyphSource2D_GetRotationAngle, METH_VARARGS,
   "GetRotationAngle(self) -> float\nC++: virtual double GetRotationAngle()\n\n"},
  {"SetGlyphType", PyvtkMarkupsGlyphSource2D_SetGlyphType, METH_VARARGS,
   "SetGlyphType(self, _arg:int) -> None\nC++: virtual void SetGlyphType(int _arg)\n\nSpecify the type of glyph to generate.\n"},
  {"GetGlyphTypeMinValue", PyvtkMarkupsGlyphSource2D_GetGlyphTypeMinValue, METH_VARARGS,
   "GetGlyphTypeMinValue(self) -> int\nC++: virtual int GetGlyphTypeMinValue()\n\n"},
  {"GetGlyphTypeMaxValue", PyvtkMarkupsGlyphSource2D_GetGlyphTypeMaxValue, METH_VARARGS,
   "GetGlyphTypeMaxValue(self) -> int\nC++: virtual int GetGlyphTypeMaxValue()\n\n"},
  {"GetGlyphType", PyvtkMarkupsGlyphSource2D_GetGlyphType, METH_VARARGS,
   "GetGlyphType(self) -> int\nC++: virtual int GetGlyphType()\n\n"},
  {"SetGlyphTypeToNone", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToNone, METH_VARARGS,
   "SetGlyphTypeToNone(self) -> None\nC++: void SetGlyphTypeToNone()\n\n"},
  {"SetGlyphTypeToStarBurst", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToStarBurst, METH_VARARGS,
   "SetGlyphTypeToStarBurst(self) -> None\nC++: void SetGlyphTypeToStarBurst()\n\n"},
  {"SetGlyphTypeToCross", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToCross, METH_VARARGS,
   "SetGlyphTypeToCross(self) -> None\nC++: void SetGlyphTypeToCross()\n\n"},
  {"SetGlyphTypeToCrossDot", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToCrossDot, METH_VARARGS,
   "SetGlyphTypeToCrossDot(self) -> None\nC++: void SetGlyphTypeToCrossDot()\n\n"},
  {"SetGlyphTypeToThickCross", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToThickCross, METH_VARARGS,
   "SetGlyphTypeToThickCross(self) -> None\nC++: void SetGlyphTypeToThickCross()\n\n"},
  {"SetGlyphTypeToVertex", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToVertex, METH_VARARGS,
   "SetGlyphTypeToVertex(self) -> None\nC++: void SetGlyphTypeToVertex()\n\n"},
  {"SetGlyphTypeToDash", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToDash, METH_VARARGS,
   "SetGlyphTypeToDash(self) -> None\nC++: void SetGlyphTypeToDash()\n\n"},
  {"SetGlyphTypeToTriangle", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToTriangle, METH_VARARGS,
   "SetGlyphTypeToTriangle(self) -> None\nC++: void SetGlyphTypeToTriangle()\n\n"},
  {"SetGlyphTypeToSquare", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToSquare, METH_VARARGS,
   "SetGlyphTypeToSquare(self) -> None\nC++: void SetGlyphTypeToSquare()\n\n"},
  {"SetGlyphTypeToCircle", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToCircle, METH_VARARGS,
   "SetGlyphTypeToCircle(self) -> None\nC++: void SetGlyphTypeToCircle()\n\n"},
  {"SetGlyphTypeToDiamond", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToDiamond, METH_VARARGS,
   "SetGlyphTypeToDiamond(self) -> None\nC++: void SetGlyphTypeToDiamond()\n\n"},
  {"SetGlyphTypeToArrow", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToArrow, METH_VARARGS,
   "SetGlyphTypeToArrow(self) -> None\nC++: void SetGlyphTypeToArrow()\n\n"},
  {"SetGlyphTypeToThickArrow", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToThickArrow, METH_VARARGS,
   "SetGlyphTypeToThickArrow(self) -> None\nC++: void SetGlyphTypeToThickArrow()\n\n"},
  {"SetGlyphTypeToHookedArrow", PyvtkMarkupsGlyphSource2D_SetGlyphTypeToHookedArrow, METH_VARARGS,
   "SetGlyphTypeToHookedArrow(self) -> None\nC++: void SetGlyphTypeToHookedArrow()\n\n"},
  {"SetNextGlyphType", PyvtkMarkupsGlyphSource2D_SetNextGlyphType, METH_VARARGS,
   "SetNextGlyphType(self) -> None\nC++: void SetNextGlyphType()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMarkupsGlyphSource2D_Doc =
  "vtkMarkupsGlyphSource2D - no description provided.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMarkupsGlyphSource2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleVTKWidgetsPython.vtkMarkupsGlyphSource2D", // tp_name
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
  PyvtkMarkupsGlyphSource2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMarkupsGlyphSource2D_StaticNew()
{
  return vtkMarkupsGlyphSource2D::New();
}

PyObject *PyvtkMarkupsGlyphSource2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMarkupsGlyphSource2D_Type, PyvtkMarkupsGlyphSource2D_Methods,
    "vtkMarkupsGlyphSource2D",
 &PyvtkMarkupsGlyphSource2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMarkupsGlyphSource2D_GlyphTypes_Type);
  PyVTKEnum_Add(&PyvtkMarkupsGlyphSource2D_GlyphTypes_Type, "vtkMarkupsGlyphSource2D.GlyphTypes");

  o = (PyObject *)&PyvtkMarkupsGlyphSource2D_GlyphTypes_Type;
  if (PyDict_SetItemString(d, "GlyphTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 15; c++)
  {
    typedef vtkMarkupsGlyphSource2D::GlyphTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[15] = {
        { "GlyphNone", vtkMarkupsGlyphSource2D::GlyphNone },
        { "GlyphStarBurst", vtkMarkupsGlyphSource2D::GlyphStarBurst },
        { "GlyphCross", vtkMarkupsGlyphSource2D::GlyphCross },
        { "GlyphCrossDot", vtkMarkupsGlyphSource2D::GlyphCrossDot },
        { "GlyphThickCross", vtkMarkupsGlyphSource2D::GlyphThickCross },
        { "GlyphVertex", vtkMarkupsGlyphSource2D::GlyphVertex },
        { "GlyphDash", vtkMarkupsGlyphSource2D::GlyphDash },
        { "GlyphTriangle", vtkMarkupsGlyphSource2D::GlyphTriangle },
        { "GlyphSquare", vtkMarkupsGlyphSource2D::GlyphSquare },
        { "GlyphCircle", vtkMarkupsGlyphSource2D::GlyphCircle },
        { "GlyphDiamond", vtkMarkupsGlyphSource2D::GlyphDiamond },
        { "GlyphArrow", vtkMarkupsGlyphSource2D::GlyphArrow },
        { "GlyphThickArrow", vtkMarkupsGlyphSource2D::GlyphThickArrow },
        { "GlyphHookedArrow", vtkMarkupsGlyphSource2D::GlyphHookedArrow },
        { "GlyphType_Last", vtkMarkupsGlyphSource2D::GlyphType_Last },
      };

    o = PyvtkMarkupsGlyphSource2D_GlyphTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMarkupsGlyphSource2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMarkupsGlyphSource2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMarkupsGlyphSource2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

