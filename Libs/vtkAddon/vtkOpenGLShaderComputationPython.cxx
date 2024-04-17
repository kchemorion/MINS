// python wrapper for vtkOpenGLShaderComputation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLShaderComputation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLShaderComputation(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLShaderComputation_ClassNew(); }


static PyObject *
PyvtkOpenGLShaderComputation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLShaderComputation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLShaderComputation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLShaderComputation *tempr = vtkOpenGLShaderComputation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLShaderComputation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLShaderComputation::NewInstance());

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
PyvtkOpenGLShaderComputation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLShaderComputation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLShaderComputation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkOpenGLShaderComputation::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_FramebufferComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FramebufferComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->FramebufferComplete() :
      op->vtkOpenGLShaderComputation::FramebufferComplete());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MakeCurrent();
    }
    else
    {
      op->vtkOpenGLShaderComputation::MakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_UpdateProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateProgram() :
      op->vtkOpenGLShaderComputation::UpdateProgram());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_AcquireResultRenderbuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AcquireResultRenderbuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->AcquireResultRenderbuffer() :
      op->vtkOpenGLShaderComputation::AcquireResultRenderbuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_ReleaseResultRenderbuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseResultRenderbuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseResultRenderbuffer();
    }
    else
    {
      op->vtkOpenGLShaderComputation::ReleaseResultRenderbuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  float temp0 = 0.;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->Compute(temp0);
    }
    else
    {
      op->vtkOpenGLShaderComputation::Compute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_SetUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  std::string temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUniform(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLShaderComputation::SetUniform(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_ReadResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadResult();
    }
    else
    {
      op->vtkOpenGLShaderComputation::ReadResult();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_GetVertexShaderSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexShaderSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexShaderSource() :
      op->vtkOpenGLShaderComputation::GetVertexShaderSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_SetVertexShaderSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexShaderSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexShaderSource(temp0);
    }
    else
    {
      op->vtkOpenGLShaderComputation::SetVertexShaderSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_GetFragmentShaderSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFragmentShaderSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFragmentShaderSource() :
      op->vtkOpenGLShaderComputation::GetFragmentShaderSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_SetFragmentShaderSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFragmentShaderSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFragmentShaderSource(temp0);
    }
    else
    {
      op->vtkOpenGLShaderComputation::SetFragmentShaderSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_GetResultImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetResultImageData() :
      op->vtkOpenGLShaderComputation::GetResultImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_SetResultImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetResultImageData(temp0);
    }
    else
    {
      op->vtkOpenGLShaderComputation::SetResultImageData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_GetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetRenderWindow() :
      op->vtkOpenGLShaderComputation::GetRenderWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_SetRenderWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWindow(temp0);
    }
    else
    {
      op->vtkOpenGLShaderComputation::SetRenderWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_GetInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInitialized() :
      op->vtkOpenGLShaderComputation::GetInitialized());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderComputation_GetErrorOccurred(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorOccurred");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderComputation *op = static_cast<vtkOpenGLShaderComputation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetErrorOccurred() :
      op->vtkOpenGLShaderComputation::GetErrorOccurred());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLShaderComputation_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLShaderComputation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLShaderComputation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLShaderComputation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLShaderComputation\nC++: static vtkOpenGLShaderComputation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLShaderComputation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLShaderComputation\nC++: vtkOpenGLShaderComputation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLShaderComputation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLShaderComputation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkOpenGLShaderComputation_Initialize, METH_VARARGS,
   "Initialize(self, renderWindow:vtkRenderWindow) -> None\nC++: void Initialize(vtkRenderWindow *renderWindow)\n\nLoads the required extensions\n"},
  {"FramebufferComplete", PyvtkOpenGLShaderComputation_FramebufferComplete, METH_VARARGS,
   "FramebufferComplete(self) -> bool\nC++: bool FramebufferComplete()\n\nChecks the framebuffer and prints error if bad. Return true if\nframebuffer is complete.\n"},
  {"MakeCurrent", PyvtkOpenGLShaderComputation_MakeCurrent, METH_VARARGS,
   "MakeCurrent(self) -> None\nC++: void MakeCurrent()\n\nMake this the target for OpenGL operations\n"},
  {"UpdateProgram", PyvtkOpenGLShaderComputation_UpdateProgram, METH_VARARGS,
   "UpdateProgram(self) -> bool\nC++: bool UpdateProgram()\n\nRebuild the shader program if needed\n"},
  {"AcquireResultRenderbuffer", PyvtkOpenGLShaderComputation_AcquireResultRenderbuffer, METH_VARARGS,
   "AcquireResultRenderbuffer(self) -> bool\nC++: bool AcquireResultRenderbuffer()\n\nManage the OpenGL offscreen rendering framebuffer for computing\nSelect this mode to render into a buffer that matches the\nResultImageData and can be read back with ReadResult.  Otherwise\nuse vtkOpenGLTextureImage::AttachAsDrawTarget to set a texture as\nthe draw target.\n"},
  {"ReleaseResultRenderbuffer", PyvtkOpenGLShaderComputation_ReleaseResultRenderbuffer, METH_VARARGS,
   "ReleaseResultRenderbuffer(self) -> None\nC++: void ReleaseResultRenderbuffer()\n\nManage the OpenGL offscreen rendering framebuffer for computing\nSelect this mode to render into a buffer that matches the\nResultImageData and can be read back with ReadResult.  Otherwise\nuse vtkOpenGLTextureImage::AttachAsDrawTarget to set a texture as\nthe draw target.\n"},
  {"Compute", PyvtkOpenGLShaderComputation_Compute, METH_VARARGS,
   "Compute(self, slice:float=0.) -> None\nC++: void Compute(float slice=0.)\n\nPerform the actual computation Updates the program if needed and\nthen renders to the current framebuffer configuration Slice will\nbe passed as a uniform float\n"},
  {"SetUniform", PyvtkOpenGLShaderComputation_SetUniform, METH_VARARGS,
   "SetUniform(self, name:str, uniform:float) -> None\nC++: void SetUniform(std::string name, float uniform)\n\nAdd a uniform value TODO: support types other than float\n"},
  {"ReadResult", PyvtkOpenGLShaderComputation_ReadResult, METH_VARARGS,
   "ReadResult(self) -> None\nC++: void ReadResult()\n\nCopy the framebuffer pixels into the result image\n"},
  {"GetVertexShaderSource", PyvtkOpenGLShaderComputation_GetVertexShaderSource, METH_VARARGS,
   "GetVertexShaderSource(self) -> str\nC++: virtual char *GetVertexShaderSource()\n\nThe strings defining the shaders\n"},
  {"SetVertexShaderSource", PyvtkOpenGLShaderComputation_SetVertexShaderSource, METH_VARARGS,
   "SetVertexShaderSource(self, _arg:str) -> None\nC++: virtual void SetVertexShaderSource(const char *_arg)\n\nThe strings defining the shaders\n"},
  {"GetFragmentShaderSource", PyvtkOpenGLShaderComputation_GetFragmentShaderSource, METH_VARARGS,
   "GetFragmentShaderSource(self) -> str\nC++: virtual char *GetFragmentShaderSource()\n\nThe strings defining the shaders\n"},
  {"SetFragmentShaderSource", PyvtkOpenGLShaderComputation_SetFragmentShaderSource, METH_VARARGS,
   "SetFragmentShaderSource(self, _arg:str) -> None\nC++: virtual void SetFragmentShaderSource(const char *_arg)\n\nThe strings defining the shaders\n"},
  {"GetResultImageData", PyvtkOpenGLShaderComputation_GetResultImageData, METH_VARARGS,
   "GetResultImageData(self) -> vtkImageData\nC++: virtual vtkImageData *GetResultImageData()\n\nThe results of the computation. Must be set with the desired\ndimensions before calling Compute.\n"},
  {"SetResultImageData", PyvtkOpenGLShaderComputation_SetResultImageData, METH_VARARGS,
   "SetResultImageData(self, _arg:vtkImageData) -> None\nC++: virtual void SetResultImageData(vtkImageData *_arg)\n\nThe results of the computation. Must be set with the desired\ndimensions before calling Compute.\n"},
  {"GetRenderWindow", PyvtkOpenGLShaderComputation_GetRenderWindow, METH_VARARGS,
   "GetRenderWindow(self) -> vtkRenderWindow\nC++: virtual vtkRenderWindow *GetRenderWindow()\n\nUsed internally to manage OpenGL context and extensions\n"},
  {"SetRenderWindow", PyvtkOpenGLShaderComputation_SetRenderWindow, METH_VARARGS,
   "SetRenderWindow(self, _arg:vtkRenderWindow) -> None\nC++: virtual void SetRenderWindow(vtkRenderWindow *_arg)\n\nUsed internally to manage OpenGL context and extensions\n"},
  {"GetInitialized", PyvtkOpenGLShaderComputation_GetInitialized, METH_VARARGS,
   "GetInitialized(self) -> bool\nC++: virtual bool GetInitialized()\n\nHas the context been set up with a render window?\n"},
  {"GetErrorOccurred", PyvtkOpenGLShaderComputation_GetErrorOccurred, METH_VARARGS,
   "GetErrorOccurred(self) -> bool\nC++: virtual bool GetErrorOccurred()\n\nHas there been an error since the class was created. After an\nerror, generally the cleanest thing to do is delete the class,\nand create a new instance.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLShaderComputation_Doc =
  "vtkOpenGLShaderComputation - OpenGL actor\n\n"
  "Superclass: vtkObject\n\n"
  "vtkOpenGLShaderComputation is a way to perform GPU computations on\n"
  "vtk data. vtkOpenGLShaderComputation interfaces to the OpenGL\n"
  "rendering library.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLShaderComputation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkOpenGLShaderComputation", // tp_name
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
  PyvtkOpenGLShaderComputation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLShaderComputation_StaticNew()
{
  return vtkOpenGLShaderComputation::New();
}

PyObject *PyvtkOpenGLShaderComputation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLShaderComputation_Type, PyvtkOpenGLShaderComputation_Methods,
    "vtkOpenGLShaderComputation",
 &PyvtkOpenGLShaderComputation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLShaderComputation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLShaderComputation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLShaderComputation", o) != 0)
  {
    Py_DECREF(o);
  }

}

