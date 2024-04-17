// python wrapper for vtkParallelTransportFrame
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParallelTransportFrame.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelTransportFrame(PyObject *dict); }
extern "C" { PyObject *PyvtkParallelTransportFrame_ClassNew(); }


static PyObject *
PyvtkParallelTransportFrame_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelTransportFrame::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelTransportFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelTransportFrame *tempr = vtkParallelTransportFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelTransportFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelTransportFrame::NewInstance());

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
PyvtkParallelTransportFrame_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParallelTransportFrame::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParallelTransportFrame::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_SetTangentsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTangentsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTangentsArrayName(temp0);
    }
    else
    {
      op->vtkParallelTransportFrame::SetTangentsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_GetTangentsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTangentsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTangentsArrayName() :
      op->vtkParallelTransportFrame::GetTangentsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_SetNormalsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalsArrayName(temp0);
    }
    else
    {
      op->vtkParallelTransportFrame::SetNormalsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_GetNormalsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetNormalsArrayName() :
      op->vtkParallelTransportFrame::GetNormalsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_SetBinormalsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinormalsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinormalsArrayName(temp0);
    }
    else
    {
      op->vtkParallelTransportFrame::SetBinormalsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_GetBinormalsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinormalsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBinormalsArrayName() :
      op->vtkParallelTransportFrame::GetBinormalsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_SetPreferredInitialNormalVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredInitialNormalVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPreferredInitialNormalVector(temp0);
    }
    else
    {
      op->vtkParallelTransportFrame::SetPreferredInitialNormalVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_GetPreferredInitialNormalVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredInitialNormalVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPreferredInitialNormalVector() :
      op->vtkParallelTransportFrame::GetPreferredInitialNormalVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_SetPreferredInitialBinormalVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredInitialBinormalVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPreferredInitialBinormalVector(temp0);
    }
    else
    {
      op->vtkParallelTransportFrame::SetPreferredInitialBinormalVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelTransportFrame_GetPreferredInitialBinormalVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredInitialBinormalVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelTransportFrame *op = static_cast<vtkParallelTransportFrame *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPreferredInitialBinormalVector() :
      op->vtkParallelTransportFrame::GetPreferredInitialBinormalVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelTransportFrame_Methods[] = {
  {"IsTypeOf", PyvtkParallelTransportFrame_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelTransportFrame_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelTransportFrame_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParallelTransportFrame\nC++: static vtkParallelTransportFrame *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelTransportFrame_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParallelTransportFrame\nC++: vtkParallelTransportFrame *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParallelTransportFrame_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParallelTransportFrame_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTangentsArrayName", PyvtkParallelTransportFrame_SetTangentsArrayName, METH_VARARGS,
   "SetTangentsArrayName(self, _arg:str) -> None\nC++: virtual void SetTangentsArrayName(const char *_arg)\n\nGet/set the point array name that contains the tangent (z) axis.\nDefault value is \"Tangents\"\n"},
  {"GetTangentsArrayName", PyvtkParallelTransportFrame_GetTangentsArrayName, METH_VARARGS,
   "GetTangentsArrayName(self) -> str\nC++: virtual char *GetTangentsArrayName()\n\n"},
  {"SetNormalsArrayName", PyvtkParallelTransportFrame_SetNormalsArrayName, METH_VARARGS,
   "SetNormalsArrayName(self, _arg:str) -> None\nC++: virtual void SetNormalsArrayName(const char *_arg)\n\nGet/set the point array name that contains the normals (x) axis.\nDefault value is \"Normals\"\n"},
  {"GetNormalsArrayName", PyvtkParallelTransportFrame_GetNormalsArrayName, METH_VARARGS,
   "GetNormalsArrayName(self) -> str\nC++: virtual char *GetNormalsArrayName()\n\n"},
  {"SetBinormalsArrayName", PyvtkParallelTransportFrame_SetBinormalsArrayName, METH_VARARGS,
   "SetBinormalsArrayName(self, _arg:str) -> None\nC++: virtual void SetBinormalsArrayName(const char *_arg)\n\nGet/set the point array name that contains the binormal (y) axis.\nDefault value is \"Binormals\"\n"},
  {"GetBinormalsArrayName", PyvtkParallelTransportFrame_GetBinormalsArrayName, METH_VARARGS,
   "GetBinormalsArrayName(self) -> str\nC++: virtual char *GetBinormalsArrayName()\n\n"},
  {"SetPreferredInitialNormalVector", PyvtkParallelTransportFrame_SetPreferredInitialNormalVector, METH_VARARGS,
   "SetPreferredInitialNormalVector(self, data:(float, ...)) -> None\nC++: virtual void SetPreferredInitialNormalVector(\n    const double data[])\n\nDefine the preferred direction of the normal vector at the first\npoint of the curve. It is just \"preferred\" because the direction\nhas to be orhogonal to the tangent, so in general the normal\nvector cannot point into exactly to a required direction. By\ndefault it is (1, 0, 0).\n\\sa PreferredInitialBinormalVector\n"},
  {"GetPreferredInitialNormalVector", PyvtkParallelTransportFrame_GetPreferredInitialNormalVector, METH_VARARGS,
   "GetPreferredInitialNormalVector(self) -> (float, float, float)\nC++: virtual double *GetPreferredInitialNormalVector()\n\n"},
  {"SetPreferredInitialBinormalVector", PyvtkParallelTransportFrame_SetPreferredInitialBinormalVector, METH_VARARGS,
   "SetPreferredInitialBinormalVector(self, data:(float, ...)) -> None\nC++: virtual void SetPreferredInitialBinormalVector(\n    const double data[])\n\nDefine the preferred direction of the binormal vector at the\nfirst point. It is used only if the curve's tangent at the first\npoint is parallel to the preferred initial normal vector. By\ndefault it is (0, 1, 0).\n\\sa PreferredInitialNormalVector\n"},
  {"GetPreferredInitialBinormalVector", PyvtkParallelTransportFrame_GetPreferredInitialBinormalVector, METH_VARARGS,
   "GetPreferredInitialBinormalVector(self) -> (float, float, float)\nC++: virtual double *GetPreferredInitialBinormalVector()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParallelTransportFrame_Doc =
  "vtkParallelTransportFrame - no description provided.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParallelTransportFrame_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkParallelTransportFrame", // tp_name
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
  PyvtkParallelTransportFrame_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParallelTransportFrame_StaticNew()
{
  return vtkParallelTransportFrame::New();
}

PyObject *PyvtkParallelTransportFrame_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParallelTransportFrame_Type, PyvtkParallelTransportFrame_Methods,
    "vtkParallelTransportFrame",
 &PyvtkParallelTransportFrame_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParallelTransportFrame(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelTransportFrame_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelTransportFrame", o) != 0)
  {
    Py_DECREF(o);
  }

}

