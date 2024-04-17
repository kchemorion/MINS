// python wrapper for vtkMRMLColors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkColor.h"
#include "vtkMRMLColors.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLColors(PyObject *dict); }

static PyObject *
PyvtkMRMLColors_sliceRed(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "sliceRed");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3d tempr = vtkMRMLColors::sliceRed();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColors_sliceYellow(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "sliceYellow");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3d tempr = vtkMRMLColors::sliceYellow();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColors_sliceGreen(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "sliceGreen");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3d tempr = vtkMRMLColors::sliceGreen();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColors_sliceOrange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "sliceOrange");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3d tempr = vtkMRMLColors::sliceOrange();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColors_sliceGray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "sliceGray");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3d tempr = vtkMRMLColors::sliceGray();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColors_threeDViewBlue(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "threeDViewBlue");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkColor3d tempr = vtkMRMLColors::threeDViewBlue();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColors_toRGBColor_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "toRGBColor");

  vtkColor3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor3d") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = vtkMRMLColors::toRGBColor(*temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkMRMLColors_toRGBColor_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "toRGBColor");

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = vtkMRMLColors::toRGBColor(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLColors_toRGBColor_Methods[] = {
  {"toRGBColor", PyvtkMRMLColors_toRGBColor_s1, METH_VARARGS | METH_STATIC,
   "WP vtkColor3d *d"},
  {"toRGBColor", PyvtkMRMLColors_toRGBColor_s2, METH_VARARGS | METH_STATIC,
   "zP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLColors_toRGBColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLColors_toRGBColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "toRGBColor");
  return nullptr;
}

static PyMethodDef PyvtkMRMLColors_Methods[] = {
  {"sliceRed", PyvtkMRMLColors_sliceRed, METH_VARARGS,
   "sliceRed() -> vtkColor3d\nC++: static vtkColor3d sliceRed()\n\n"},
  {"sliceYellow", PyvtkMRMLColors_sliceYellow, METH_VARARGS,
   "sliceYellow() -> vtkColor3d\nC++: static vtkColor3d sliceYellow()\n\n"},
  {"sliceGreen", PyvtkMRMLColors_sliceGreen, METH_VARARGS,
   "sliceGreen() -> vtkColor3d\nC++: static vtkColor3d sliceGreen()\n\n"},
  {"sliceOrange", PyvtkMRMLColors_sliceOrange, METH_VARARGS,
   "sliceOrange() -> vtkColor3d\nC++: static vtkColor3d sliceOrange()\n\n"},
  {"sliceGray", PyvtkMRMLColors_sliceGray, METH_VARARGS,
   "sliceGray() -> vtkColor3d\nC++: static vtkColor3d sliceGray()\n\n"},
  {"threeDViewBlue", PyvtkMRMLColors_threeDViewBlue, METH_VARARGS,
   "threeDViewBlue() -> vtkColor3d\nC++: static vtkColor3d threeDViewBlue()\n\n"},
  {"toRGBColor", PyvtkMRMLColors_toRGBColor, METH_VARARGS,
   "toRGBColor(from_:vtkColor3d, to:[float, float, float]) -> bool\nC++: static bool toRGBColor(const vtkColor3d &from, double to[3])\ntoRGBColor(fromHexadecimal:str, to:[float, float, float]) -> bool\nC++: static bool toRGBColor(const char *fromHexadecimal,\n    double to[3])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMRMLColors_vtkMRMLColors_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMRMLColors");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMRMLColors *op = new vtkMRMLColors();

    result = PyVTKSpecialObject_New("vtkMRMLColors", op);
  }

  return result;
}

static PyObject *
PyvtkMRMLColors_vtkMRMLColors_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMRMLColors");

  vtkMRMLColors *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMRMLColors"))
  {
    vtkMRMLColors *op = new vtkMRMLColors(*temp0);

    result = PyVTKSpecialObject_New("vtkMRMLColors", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMRMLColors_vtkMRMLColors_Methods[] = {
  {"vtkMRMLColors", PyvtkMRMLColors_vtkMRMLColors_s2, METH_VARARGS,
   "@W vtkMRMLColors"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLColors_vtkMRMLColors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLColors_vtkMRMLColors_s1(self, args);
    case 1:
      return PyvtkMRMLColors_vtkMRMLColors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMRMLColors");
  return nullptr;
}


static const char *PyvtkMRMLColors_Doc =

  "vtkMRMLColors() -> vtkMRMLColors\nC++: vtkMRMLColors()\nvtkMRMLColors(__a:vtkMRMLColors) -> vtkMRMLColors\nC++: vtkMRMLColors(const &vtkMRMLColors)\n""\n"
  "vtkMRMLColors - no description provided.\n\n"
;

static PyObject *
PyvtkMRMLColors_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMRMLColors_vtkMRMLColors(nullptr, args);
}

static void PyvtkMRMLColors_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMRMLColors *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMRMLColors_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLColors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLColors", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMRMLColors_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMRMLColors_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMRMLColors_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkMRMLColors_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMRMLColors_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMRMLColors(*static_cast<const vtkMRMLColors*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkMRMLColors_TypeNew
extern "C" { PyObject *PyvtkMRMLColors_TypeNew(); }
#define DECLARED_PyvtkMRMLColors_TypeNew
#endif

PyObject *PyvtkMRMLColors_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkMRMLColors_Type,
    PyvtkMRMLColors_Methods,
    PyvtkMRMLColors_vtkMRMLColors_Methods,
    &PyvtkMRMLColors_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLColors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLColors_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLColors", o) != 0)
  {
    Py_DECREF(o);
  }

}

