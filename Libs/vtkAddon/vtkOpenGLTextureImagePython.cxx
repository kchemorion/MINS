// python wrapper for vtkOpenGLTextureImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLTextureImage.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLTextureImage(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLTextureImage_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLTextureImage_AttachmentPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkOpenGLTextureImage.AttachmentPoints", // tp_name
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
PyObject *PyvtkOpenGLTextureImage_AttachmentPoints_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLTextureImage_AttachmentPoints_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLTextureImage_TextureWrap_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkOpenGLTextureImage.TextureWrap", // tp_name
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
PyObject *PyvtkOpenGLTextureImage_TextureWrap_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLTextureImage_TextureWrap_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOpenGLTextureImage_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLTextureImage::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLTextureImage::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLTextureImage *tempr = vtkOpenGLTextureImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLTextureImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLTextureImage::NewInstance());

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
PyvtkOpenGLTextureImage_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLTextureImage::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLTextureImage::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_GetShaderComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLShaderComputation *tempr = (ap.IsBound() ?
      op->GetShaderComputation() :
      op->vtkOpenGLTextureImage::GetShaderComputation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_SetShaderComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  vtkOpenGLShaderComputation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLShaderComputation"))
  {
    if (ap.IsBound())
    {
      op->SetShaderComputation(temp0);
    }
    else
    {
      op->vtkOpenGLTextureImage::SetShaderComputation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_GetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImageData() :
      op->vtkOpenGLTextureImage::GetImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_SetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetImageData(temp0);
    }
    else
    {
      op->vtkOpenGLTextureImage::SetImageData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_GetTextureName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetTextureName() :
      op->vtkOpenGLTextureImage::GetTextureName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkOpenGLTextureImage::GetInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolate(temp0);
    }
    else
    {
      op->vtkOpenGLTextureImage::SetInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_GetTextureWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureWrap() :
      op->vtkOpenGLTextureImage::GetTextureWrap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_SetTextureWrap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureWrap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureWrap(temp0);
    }
    else
    {
      op->vtkOpenGLTextureImage::SetTextureWrap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_Activate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Activate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Activate(temp0);
    }
    else
    {
      op->vtkOpenGLTextureImage::Activate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_UpdateTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateTexture() :
      op->vtkOpenGLTextureImage::UpdateTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_AttachAsDrawTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttachAsDrawTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  int temp0 = 0;
  int temp1 = 0;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->AttachAsDrawTarget(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLTextureImage::AttachAsDrawTarget(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLTextureImage_ReadBack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadBack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLTextureImage *op = static_cast<vtkOpenGLTextureImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadBack();
    }
    else
    {
      op->vtkOpenGLTextureImage::ReadBack();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLTextureImage_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLTextureImage_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLTextureImage_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLTextureImage_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLTextureImage\nC++: static vtkOpenGLTextureImage *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLTextureImage_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLTextureImage\nC++: vtkOpenGLTextureImage *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLTextureImage_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLTextureImage_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetShaderComputation", PyvtkOpenGLTextureImage_GetShaderComputation, METH_VARARGS,
   "GetShaderComputation(self) -> vtkOpenGLShaderComputation\nC++: virtual vtkOpenGLShaderComputation *GetShaderComputation()\n\nThe ShaderComputation used to manage the OpenGL context and\nshaders\n"},
  {"SetShaderComputation", PyvtkOpenGLTextureImage_SetShaderComputation, METH_VARARGS,
   "SetShaderComputation(self, _arg:vtkOpenGLShaderComputation)\n    -> None\nC++: virtual void SetShaderComputation(\n    vtkOpenGLShaderComputation *_arg)\n\nThe ShaderComputation used to manage the OpenGL context and\nshaders\n"},
  {"GetImageData", PyvtkOpenGLTextureImage_GetImageData, METH_VARARGS,
   "GetImageData(self) -> vtkImageData\nC++: virtual vtkImageData *GetImageData()\n\nThe image data that corresponds to the texture. Not all sizes and\ntypes of image data are supported, only those that map cleanly to\ntextures.  All are treated as 3D textures no matter the\ndimensions.\n"},
  {"SetImageData", PyvtkOpenGLTextureImage_SetImageData, METH_VARARGS,
   "SetImageData(self, _arg:vtkImageData) -> None\nC++: virtual void SetImageData(vtkImageData *_arg)\n\nThe image data that corresponds to the texture. Not all sizes and\ntypes of image data are supported, only those that map cleanly to\ntextures.  All are treated as 3D textures no matter the\ndimensions.\n"},
  {"GetTextureName", PyvtkOpenGLTextureImage_GetTextureName, METH_VARARGS,
   "GetTextureName(self) -> int\nC++: virtual vtkTypeUInt32 GetTextureName()\n\nThe id provided by glGenTextures. It is actually in integer that\nis an opaque mapping to a hardware structure. Non-zero means the\ntexture has been generated. Exposed here for introspection.\n"},
  {"GetInterpolate", PyvtkOpenGLTextureImage_GetInterpolate, METH_VARARGS,
   "GetInterpolate(self) -> int\nC++: virtual int GetInterpolate()\n\nTrue (default) to interpolate samples\n"},
  {"SetInterpolate", PyvtkOpenGLTextureImage_SetInterpolate, METH_VARARGS,
   "SetInterpolate(self, _arg:int) -> None\nC++: virtual void SetInterpolate(int _arg)\n\nTrue (default) to interpolate samples\n"},
  {"GetTextureWrap", PyvtkOpenGLTextureImage_GetTextureWrap, METH_VARARGS,
   "GetTextureWrap(self) -> int\nC++: virtual int GetTextureWrap()\n\nTexture wrap mode (ClampToEdge, MirroredRepeat)\n"},
  {"SetTextureWrap", PyvtkOpenGLTextureImage_SetTextureWrap, METH_VARARGS,
   "SetTextureWrap(self, _arg:int) -> None\nC++: virtual void SetTextureWrap(int _arg)\n\nTexture wrap mode (ClampToEdge, MirroredRepeat)\n"},
  {"Activate", PyvtkOpenGLTextureImage_Activate, METH_VARARGS,
   "Activate(self, unit:int) -> None\nC++: void Activate(vtkTypeUInt32 unit)\n\nMake the image data available as GL_TEXTUREn where n is the\ntexture unit.  There are at least\nGL_MAX_COMBINED_TEXTURE_IMAGE_UNITS, which is variable by driver\nbut must be at least 48. This method also checks the modification\ntime of the image data to ensure the texture up to date and\ninitiates the transfer if not.\n"},
  {"UpdateTexture", PyvtkOpenGLTextureImage_UpdateTexture, METH_VARARGS,
   "UpdateTexture(self) -> bool\nC++: bool UpdateTexture()\n\nCreates/transfers image data to texture if needed.\n"},
  {"AttachAsDrawTarget", PyvtkOpenGLTextureImage_AttachAsDrawTarget, METH_VARARGS,
   "AttachAsDrawTarget(self, layer:int=0, attachement:int=0,\n    attachmentIndex:int=0) -> None\nC++: void AttachAsDrawTarget(int layer=0, int attachement=0,\n    int attachmentIndex=0)\n\nMake the specified layer (slice) be the draw target. This is used\nto direct the output of the shading into the specified slice of\nthe texture and can be used to implement volumetric algorithms. \nIterated algorithms can be done fully on the GPU by swapping\ntextures between active units and draw targets. Parameters:\nattachmentIndex is which color attachment to use (only valid for\ncolor) level is z slice to target attachment is 0 (color), 1\n(depth), 2 (stencil), 3 (depth-stencil)\n"},
  {"ReadBack", PyvtkOpenGLTextureImage_ReadBack, METH_VARARGS,
   "ReadBack(self) -> None\nC++: void ReadBack()\n\nRead the texture data back into the image data (assumes it has\nbeen written as a target) Warning: probably best to only use this\nto read back into the same buffer that was used when the data was\nuploaded (i.e. this will assume that the vtkImageData buffer\npointer is the right size for the data).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLTextureImage_Doc =
  "vtkOpenGLTextureImage - OpenGL actor\n\n"
  "Superclass: vtkObject\n\n"
  "vtkOpenGLTextureImage is an interface between an vtkImageData and and\n"
  "an OpenGL 3D texture object. This is a work in progress, but when\n"
  "complete it should be possible to easily move data back and forth\n"
  "between C++/Python and GLSL to support volume rendering and\n"
  "computation when used with the vtkOpenGLShaderComputation class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLTextureImage_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkOpenGLTextureImage", // tp_name
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
  PyvtkOpenGLTextureImage_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLTextureImage_StaticNew()
{
  return vtkOpenGLTextureImage::New();
}

PyObject *PyvtkOpenGLTextureImage_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLTextureImage_Type, PyvtkOpenGLTextureImage_Methods,
    "vtkOpenGLTextureImage",
 &PyvtkOpenGLTextureImage_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLTextureImage_AttachmentPoints_Type);
  PyVTKEnum_Add(&PyvtkOpenGLTextureImage_AttachmentPoints_Type, "vtkOpenGLTextureImage.AttachmentPoints");

  o = (PyObject *)&PyvtkOpenGLTextureImage_AttachmentPoints_Type;
  if (PyDict_SetItemString(d, "AttachmentPoints", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkOpenGLTextureImage_TextureWrap_Type);
  PyVTKEnum_Add(&PyvtkOpenGLTextureImage_TextureWrap_Type, "vtkOpenGLTextureImage.TextureWrap");

  o = (PyObject *)&PyvtkOpenGLTextureImage_TextureWrap_Type;
  if (PyDict_SetItemString(d, "TextureWrap", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkOpenGLTextureImage::AttachmentPoints cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "ColorAttachmentPoint", vtkOpenGLTextureImage::ColorAttachmentPoint },
        { "DepthAttachmentPoint", vtkOpenGLTextureImage::DepthAttachmentPoint },
        { "StencilAttachmentPoint", vtkOpenGLTextureImage::StencilAttachmentPoint },
        { "DepthStencilAttachmentPoint", vtkOpenGLTextureImage::DepthStencilAttachmentPoint },
      };

    o = PyvtkOpenGLTextureImage_AttachmentPoints_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "ClampToEdge", vtkOpenGLTextureImage::ClampToEdge },
        { "MirroredRepeat", vtkOpenGLTextureImage::MirroredRepeat },
      };

    o = PyvtkOpenGLTextureImage_TextureWrap_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLTextureImage(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLTextureImage_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLTextureImage", o) != 0)
  {
    Py_DECREF(o);
  }

}

