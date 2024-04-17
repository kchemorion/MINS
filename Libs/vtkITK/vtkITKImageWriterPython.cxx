// python wrapper for vtkITKImageWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkITKImageWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkITKImageWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkITKImageWriter_ClassNew(); }


static PyObject *
PyvtkITKImageWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkITKImageWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkITKImageWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkITKImageWriter *tempr = vtkITKImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkITKImageWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkITKImageWriter::NewInstance());

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
PyvtkITKImageWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkITKImageWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkITKImageWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkITKImageWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkITKImageWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_GetUseCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCompression() :
      op->vtkITKImageWriter::GetUseCompression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_SetUseCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCompression(temp0);
    }
    else
    {
      op->vtkITKImageWriter::SetUseCompression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_UseCompressionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCompressionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCompressionOn();
    }
    else
    {
      op->vtkITKImageWriter::UseCompressionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_UseCompressionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCompressionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCompressionOff();
    }
    else
    {
      op->vtkITKImageWriter::UseCompressionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_GetImageIOClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageIOClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetImageIOClassName() :
      op->vtkITKImageWriter::GetImageIOClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_SetImageIOClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageIOClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageIOClassName(temp0);
    }
    else
    {
      op->vtkITKImageWriter::SetImageIOClassName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkITKImageWriter::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_SetRasToIJKMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRasToIJKMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetRasToIJKMatrix(temp0);
    }
    else
    {
      op->vtkITKImageWriter::SetRasToIJKMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_SetMeasurementFrameMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetMeasurementFrameMatrix(temp0);
    }
    else
    {
      op->vtkITKImageWriter::SetMeasurementFrameMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_SetVoxelVectorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoxelVectorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVoxelVectorType(temp0);
    }
    else
    {
      op->vtkITKImageWriter::SetVoxelVectorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKImageWriter_GetVoxelVectorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelVectorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKImageWriter *op = static_cast<vtkITKImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVoxelVectorType() :
      op->vtkITKImageWriter::GetVoxelVectorType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkITKImageWriter_Methods[] = {
  {"IsTypeOf", PyvtkITKImageWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkITKImageWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkITKImageWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkITKImageWriter\nC++: static vtkITKImageWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkITKImageWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkITKImageWriter\nC++: vtkITKImageWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkITKImageWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkITKImageWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkITKImageWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, __a:str) -> None\nC++: void SetFileName(const char *)\n\nSpecify file name for the image file. You should specify either a\nFileName or a FilePrefix. Use FilePrefix if the data is stored in\nmultiple files.\n"},
  {"GetFileName", PyvtkITKImageWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: char *GetFileName()\n\n"},
  {"GetUseCompression", PyvtkITKImageWriter_GetUseCompression, METH_VARARGS,
   "GetUseCompression(self) -> int\nC++: virtual int GetUseCompression()\n\nuse compression if possible\n"},
  {"SetUseCompression", PyvtkITKImageWriter_SetUseCompression, METH_VARARGS,
   "SetUseCompression(self, _arg:int) -> None\nC++: virtual void SetUseCompression(int _arg)\n\n"},
  {"UseCompressionOn", PyvtkITKImageWriter_UseCompressionOn, METH_VARARGS,
   "UseCompressionOn(self) -> None\nC++: virtual void UseCompressionOn()\n\n"},
  {"UseCompressionOff", PyvtkITKImageWriter_UseCompressionOff, METH_VARARGS,
   "UseCompressionOff(self) -> None\nC++: virtual void UseCompressionOff()\n\n"},
  {"GetImageIOClassName", PyvtkITKImageWriter_GetImageIOClassName, METH_VARARGS,
   "GetImageIOClassName(self) -> str\nC++: virtual char *GetImageIOClassName()\n\nSet/Get the ImageIO class name.\n"},
  {"SetImageIOClassName", PyvtkITKImageWriter_SetImageIOClassName, METH_VARARGS,
   "SetImageIOClassName(self, _arg:str) -> None\nC++: virtual void SetImageIOClassName(const char *_arg)\n\n"},
  {"Write", PyvtkITKImageWriter_Write, METH_VARARGS,
   "Write(self) -> None\nC++: void Write()\n\nThe main interface which triggers the writer to start.\n"},
  {"SetRasToIJKMatrix", PyvtkITKImageWriter_SetRasToIJKMatrix, METH_VARARGS,
   "SetRasToIJKMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void SetRasToIJKMatrix(vtkMatrix4x4 *mat)\n\nSet orientation matrix\n"},
  {"SetMeasurementFrameMatrix", PyvtkITKImageWriter_SetMeasurementFrameMatrix, METH_VARARGS,
   "SetMeasurementFrameMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void SetMeasurementFrameMatrix(vtkMatrix4x4 *mat)\n\nSet orientation matrix\n"},
  {"SetVoxelVectorType", PyvtkITKImageWriter_SetVoxelVectorType, METH_VARARGS,
   "SetVoxelVectorType(self, _arg:int) -> None\nC++: virtual void SetVoxelVectorType(int _arg)\n\nDefines how to interpret voxel components\n"},
  {"GetVoxelVectorType", PyvtkITKImageWriter_GetVoxelVectorType, METH_VARARGS,
   "GetVoxelVectorType(self) -> int\nC++: virtual int GetVoxelVectorType()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkITKImageWriter_Doc =
  "vtkITKImageWriter - no description provided.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKImageWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKImageWriter", // tp_name
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
  PyvtkITKImageWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkITKImageWriter_StaticNew()
{
  return vtkITKImageWriter::New();
}

PyObject *PyvtkITKImageWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkITKImageWriter_Type, PyvtkITKImageWriter_Methods,
    "vtkITKImageWriter",
 &PyvtkITKImageWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VoxelVectorTypeUndefined", vtkITKImageWriter::VoxelVectorTypeUndefined },
        { "VoxelVectorTypeSpatial", vtkITKImageWriter::VoxelVectorTypeSpatial },
        { "VoxelVectorTypeColorRGB", vtkITKImageWriter::VoxelVectorTypeColorRGB },
        { "VoxelVectorTypeColorRGBA", vtkITKImageWriter::VoxelVectorTypeColorRGBA },
        { "VoxelVectorType_Last", vtkITKImageWriter::VoxelVectorType_Last },
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

void PyVTKAddFile_vtkITKImageWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkITKImageWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkITKImageWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

