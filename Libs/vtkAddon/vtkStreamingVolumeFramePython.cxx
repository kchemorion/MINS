// python wrapper for vtkStreamingVolumeFrame
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStreamingVolumeFrame.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStreamingVolumeFrame(PyObject *dict); }
extern "C" { PyObject *PyvtkStreamingVolumeFrame_ClassNew(); }


static PyObject *
PyvtkStreamingVolumeFrame_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStreamingVolumeFrame::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamingVolumeFrame::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStreamingVolumeFrame *tempr = vtkStreamingVolumeFrame::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamingVolumeFrame *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamingVolumeFrame::NewInstance());

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
PyvtkStreamingVolumeFrame_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStreamingVolumeFrame::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStreamingVolumeFrame::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_SetFrameType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrameType(temp0);
    }
    else
    {
      op->vtkStreamingVolumeFrame::SetFrameType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_GetFrameType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrameType() :
      op->vtkStreamingVolumeFrame::GetFrameType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_SetFrameData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->SetFrameData(temp0);
    }
    else
    {
      op->vtkStreamingVolumeFrame::SetFrameData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_GetFrameData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetFrameData() :
      op->vtkStreamingVolumeFrame::GetFrameData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_SetPreviousFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreviousFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  vtkStreamingVolumeFrame *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStreamingVolumeFrame"))
  {
    if (ap.IsBound())
    {
      op->SetPreviousFrame(temp0);
    }
    else
    {
      op->vtkStreamingVolumeFrame::SetPreviousFrame(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_GetPreviousFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreviousFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamingVolumeFrame *tempr = (ap.IsBound() ?
      op->GetPreviousFrame() :
      op->vtkStreamingVolumeFrame::GetPreviousFrame());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStreamingVolumeFrame::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStreamingVolumeFrame_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkStreamingVolumeFrame::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStreamingVolumeFrame_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStreamingVolumeFrame_SetDimensions_s1(self, args);
    case 1:
      return PyvtkStreamingVolumeFrame_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkStreamingVolumeFrame_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkStreamingVolumeFrame::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkStreamingVolumeFrame::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkStreamingVolumeFrame::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_SetVTKScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVTKScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVTKScalarType(temp0);
    }
    else
    {
      op->vtkStreamingVolumeFrame::SetVTKScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_GetVTKScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVTKScalarType() :
      op->vtkStreamingVolumeFrame::GetVTKScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_SetCodecFourCC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCodecFourCC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCodecFourCC(temp0);
    }
    else
    {
      op->vtkStreamingVolumeFrame::SetCodecFourCC(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_GetCodecFourCC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCodecFourCC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCodecFourCC() :
      op->vtkStreamingVolumeFrame::GetCodecFourCC());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeFrame_IsKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeFrame *op = static_cast<vtkStreamingVolumeFrame *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsKeyFrame() :
      op->vtkStreamingVolumeFrame::IsKeyFrame());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStreamingVolumeFrame_Methods[] = {
  {"IsTypeOf", PyvtkStreamingVolumeFrame_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStreamingVolumeFrame_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStreamingVolumeFrame_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStreamingVolumeFrame\nC++: static vtkStreamingVolumeFrame *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStreamingVolumeFrame_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStreamingVolumeFrame\nC++: vtkStreamingVolumeFrame *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStreamingVolumeFrame_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStreamingVolumeFrame_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFrameType", PyvtkStreamingVolumeFrame_SetFrameType, METH_VARARGS,
   "SetFrameType(self, _arg:int) -> None\nC++: virtual void SetFrameType(int _arg)\n\nReflects the type of the frame (I-Frame, P-Frame, B-Frame)\n"},
  {"GetFrameType", PyvtkStreamingVolumeFrame_GetFrameType, METH_VARARGS,
   "GetFrameType(self) -> int\nC++: virtual int GetFrameType()\n\n"},
  {"SetFrameData", PyvtkStreamingVolumeFrame_SetFrameData, METH_VARARGS,
   "SetFrameData(self, frameData:vtkUnsignedCharArray) -> None\nC++: void SetFrameData(vtkUnsignedCharArray *frameData)\n\nPointer to the contents of the frame in a compressed codec format\n"},
  {"GetFrameData", PyvtkStreamingVolumeFrame_GetFrameData, METH_VARARGS,
   "GetFrameData(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetFrameData()\n\n"},
  {"SetPreviousFrame", PyvtkStreamingVolumeFrame_SetPreviousFrame, METH_VARARGS,
   "SetPreviousFrame(self, previousFrame:vtkStreamingVolumeFrame)\n    -> None\nC++: void SetPreviousFrame(vtkStreamingVolumeFrame *previousFrame)\n\nPointer to the last frame that must be decoded before this one\nThe pointer of each frame to the previous frame forms a linked\nlist back to the originating keyframe this ensures that each\nframe provides access the information neccesary to be able to\ndecode it. PreviousFrame does not refer to the frame that should\nbe displayed before the this frame, but the frame that should be\ndecoded immediately before this frame\n"},
  {"GetPreviousFrame", PyvtkStreamingVolumeFrame_GetPreviousFrame, METH_VARARGS,
   "GetPreviousFrame(self) -> vtkStreamingVolumeFrame\nC++: vtkStreamingVolumeFrame *GetPreviousFrame()\n\n"},
  {"SetDimensions", PyvtkStreamingVolumeFrame_SetDimensions, METH_VARARGS,
   "SetDimensions(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetDimensions(int _arg1, int _arg2, int _arg3)\nSetDimensions(self, _arg:(int, int, int)) -> None\nC++: virtual void SetDimensions(const int _arg[3])\n\nDimensions of the decoded frame\n"},
  {"GetDimensions", PyvtkStreamingVolumeFrame_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> (int, int, int)\nC++: virtual int *GetDimensions()\n\n"},
  {"SetNumberOfComponents", PyvtkStreamingVolumeFrame_SetNumberOfComponents, METH_VARARGS,
   "SetNumberOfComponents(self, _arg:int) -> None\nC++: virtual void SetNumberOfComponents(int _arg)\n\nNumber of components for the decoded image\n"},
  {"GetNumberOfComponents", PyvtkStreamingVolumeFrame_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: virtual int GetNumberOfComponents()\n\n"},
  {"SetVTKScalarType", PyvtkStreamingVolumeFrame_SetVTKScalarType, METH_VARARGS,
   "SetVTKScalarType(self, _arg:int) -> None\nC++: virtual void SetVTKScalarType(int _arg)\n\nVTK scalar type of the decoded image\n"},
  {"GetVTKScalarType", PyvtkStreamingVolumeFrame_GetVTKScalarType, METH_VARARGS,
   "GetVTKScalarType(self) -> int\nC++: virtual int GetVTKScalarType()\n\n"},
  {"SetCodecFourCC", PyvtkStreamingVolumeFrame_SetCodecFourCC, METH_VARARGS,
   "SetCodecFourCC(self, _arg:str) -> None\nC++: virtual void SetCodecFourCC(std::string _arg)\n\nFourCC of the codec for the frame\n"},
  {"GetCodecFourCC", PyvtkStreamingVolumeFrame_GetCodecFourCC, METH_VARARGS,
   "GetCodecFourCC(self) -> str\nC++: virtual std::string GetCodecFourCC()\n\n"},
  {"IsKeyFrame", PyvtkStreamingVolumeFrame_IsKeyFrame, METH_VARARGS,
   "IsKeyFrame(self) -> bool\nC++: bool IsKeyFrame()\n\nReturns true if the frame is a \"Keyframe\", aka \"I-Frame\"\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStreamingVolumeFrame_Doc =
  "vtkStreamingVolumeFrame - VTK object containing a single compressed\nframe\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStreamingVolumeFrame_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkStreamingVolumeFrame", // tp_name
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
  PyvtkStreamingVolumeFrame_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStreamingVolumeFrame_StaticNew()
{
  return vtkStreamingVolumeFrame::New();
}

PyObject *PyvtkStreamingVolumeFrame_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStreamingVolumeFrame_Type, PyvtkStreamingVolumeFrame_Methods,
    "vtkStreamingVolumeFrame",
 &PyvtkStreamingVolumeFrame_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "IFrame", vtkStreamingVolumeFrame::IFrame },
        { "PFrame", vtkStreamingVolumeFrame::PFrame },
        { "BFrame", vtkStreamingVolumeFrame::BFrame },
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

void PyVTKAddFile_vtkStreamingVolumeFrame(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStreamingVolumeFrame_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStreamingVolumeFrame", o) != 0)
  {
    Py_DECREF(o);
  }

}

