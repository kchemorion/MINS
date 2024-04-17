// python wrapper for vtkStreamingVolumeCodec
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStreamingVolumeCodec.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStreamingVolumeCodec(PyObject *dict); }
extern "C" { PyObject *PyvtkStreamingVolumeCodec_ClassNew(); }


static PyObject *
PyvtkStreamingVolumeCodec_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStreamingVolumeCodec::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamingVolumeCodec::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStreamingVolumeCodec *tempr = vtkStreamingVolumeCodec::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamingVolumeCodec *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamingVolumeCodec::NewInstance());

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
PyvtkStreamingVolumeCodec_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStreamingVolumeCodec::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStreamingVolumeCodec::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_GetFourCC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFourCC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    std::string tempr = op->GetFourCC();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_CreateCodecInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCodecInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkStreamingVolumeCodec *tempr = op->CreateCodecInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_DecodeFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecodeFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  vtkStreamingVolumeFrame *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkStreamingVolumeFrame") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    bool tempr = (ap.IsBound() ?
      op->DecodeFrame(temp0, temp1) :
      op->vtkStreamingVolumeCodec::DecodeFrame(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_EncodeImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  vtkImageData *temp0 = nullptr;
  vtkStreamingVolumeFrame *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkStreamingVolumeFrame") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->EncodeImageData(temp0, temp1, temp2) :
      op->vtkStreamingVolumeCodec::EncodeImageData(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_SetParametersFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametersFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParametersFromString(temp0);
    }
    else
    {
      op->vtkStreamingVolumeCodec::SetParametersFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_GetParametersAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametersAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParametersAsString() :
      op->vtkStreamingVolumeCodec::GetParametersAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_GetAvailiableParameterNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAvailiableParameterNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetAvailiableParameterNames() :
      op->vtkStreamingVolumeCodec::GetAvailiableParameterNames());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_GetParameterDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = op->GetParameterDescription(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetParameter(temp0, temp1) :
      op->vtkStreamingVolumeCodec::SetParameter(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_GetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetParameter(temp0, temp1) :
      op->vtkStreamingVolumeCodec::GetParameter(temp0, temp1));

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
PyvtkStreamingVolumeCodec_GetParameterPresetNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterPresetNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetParameterPresetNames() :
      op->vtkStreamingVolumeCodec::GetParameterPresetNames());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_GetParameterPresetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterPresetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterPresetValue(temp0) :
      op->vtkStreamingVolumeCodec::GetParameterPresetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_GetParameterPresetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterPresetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetParameterPresetName(temp0) :
      op->vtkStreamingVolumeCodec::GetParameterPresetName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_GetNumberOfParameterPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParameterPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParameterPresets() :
      op->vtkStreamingVolumeCodec::GetNumberOfParameterPresets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_SetParametersFromPresetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametersFromPresetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetParametersFromPresetValue(temp0) :
      op->vtkStreamingVolumeCodec::SetParametersFromPresetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamingVolumeCodec_GetDefaultParameterPresetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultParameterPresetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingVolumeCodec *op = static_cast<vtkStreamingVolumeCodec *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDefaultParameterPresetValue() :
      op->vtkStreamingVolumeCodec::GetDefaultParameterPresetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStreamingVolumeCodec_Methods[] = {
  {"IsTypeOf", PyvtkStreamingVolumeCodec_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStreamingVolumeCodec_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStreamingVolumeCodec_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStreamingVolumeCodec\nC++: static vtkStreamingVolumeCodec *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStreamingVolumeCodec_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStreamingVolumeCodec\nC++: vtkStreamingVolumeCodec *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStreamingVolumeCodec_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStreamingVolumeCodec_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFourCC", PyvtkStreamingVolumeCodec_GetFourCC, METH_VARARGS,
   "GetFourCC(self) -> str\nC++: virtual std::string GetFourCC()\n\nReturns the FourCC code representing the codec See\nhttps://www.fourcc.org/codecs.php for an incomplete list\n"},
  {"CreateCodecInstance", PyvtkStreamingVolumeCodec_CreateCodecInstance, METH_VARARGS,
   "CreateCodecInstance(self) -> vtkStreamingVolumeCodec\nC++: virtual vtkStreamingVolumeCodec *CreateCodecInstance()\n\nCreates an instance of the codec\n"},
  {"DecodeFrame", PyvtkStreamingVolumeCodec_DecodeFrame, METH_VARARGS,
   "DecodeFrame(self, frame:vtkStreamingVolumeFrame,\n    outputImageData:vtkImageData) -> bool\nC++: virtual bool DecodeFrame(vtkStreamingVolumeFrame *frame,\n    vtkImageData *outputImageData)\n\nDecode compressed frame data and stores it in the imagedata\nHandles the decoding of additional previous frames if required\n\\param frame Input frame containing the compressed frame data\n\\param outputImageData Output image which will store the\n    uncompressed image\nReturns true if the frame is decoded successfully\n"},
  {"EncodeImageData", PyvtkStreamingVolumeCodec_EncodeImageData, METH_VARARGS,
   "EncodeImageData(self, inputImageData:vtkImageData,\n    outputStreamingFrame:vtkStreamingVolumeFrame,\n    forceKeyFrame:bool=False) -> bool\nC++: virtual bool EncodeImageData(vtkImageData *inputImageData,\n    vtkStreamingVolumeFrame *outputStreamingFrame,\n    bool forceKeyFrame=false)\n\nEncode the image data and store it in the frame\n\\param inputImageData Input image containing the uncompressed\n    image\n\\param outputStreamingFrame Output frame that will be used to\n    store the compressed frame\n\\param forceKeyFrame If the codec supports it, attempt to encode\n    the image as a keyframe\nReturns true if the image is encoded successfully\n"},
  {"SetParametersFromString", PyvtkStreamingVolumeCodec_SetParametersFromString, METH_VARARGS,
   "SetParametersFromString(self, parameterString:str) -> None\nC++: virtual void SetParametersFromString(\n    std::string parameterString)\n\nRead this codec's information from a string representation Format\nis\n\"ParameterName1:ParameterValue1;ParameterName2;ParameterValue2;ParameterNameN:ParameterValueN\"\n\\sa GetParametersAsString()\n"},
  {"GetParametersAsString", PyvtkStreamingVolumeCodec_GetParametersAsString, METH_VARARGS,
   "GetParametersAsString(self) -> str\nC++: virtual std::string GetParametersAsString()\n\nWrite this codec's information to a string representation Format\nis\n\"ParameterName1:ParameterValue1;ParameterName2;ParameterValue2;ParameterNameN:ParameterValueN\"\n\\sa SetParametersFromString()\n"},
  {"GetAvailiableParameterNames", PyvtkStreamingVolumeCodec_GetAvailiableParameterNames, METH_VARARGS,
   "GetAvailiableParameterNames(self) -> (str, ...)\nC++: virtual std::vector<std::string> GetAvailiableParameterNames(\n    )\n\nReturns a list of availiable parameter names for the codec\n"},
  {"GetParameterDescription", PyvtkStreamingVolumeCodec_GetParameterDescription, METH_VARARGS,
   "GetParameterDescription(self, parameterName:str) -> str\nC++: virtual std::string GetParameterDescription(\n    std::string parameterName)\n\nGet parameter description as a string\n\\param parameterName String containing the name of the parameter\nReturns the description of the parameter as a string, and returns\nan empty string if the parameter name is invalid\n"},
  {"SetParameter", PyvtkStreamingVolumeCodec_SetParameter, METH_VARARGS,
   "SetParameter(self, parameterName:str, parameterValue:str) -> bool\nC++: virtual bool SetParameter(std::string parameterName,\n    std::string parameterValue)\n\nSet a parameter for the codec\n\\param parameterName String containing the name of the parameter\n\\param parameterValue Value of the specified parameter\nReturns true if the parameter is successfully set\n"},
  {"GetParameter", PyvtkStreamingVolumeCodec_GetParameter, METH_VARARGS,
   "GetParameter(self, parameterName:str, parameterValue:str) -> bool\nC++: virtual bool GetParameter(std::string parameterName,\n    std::string &parameterValue)\n\nGet a parameter for the codec\n\\param parameterName String containing the name of the parameter\n\\param parameterValue Value of the specified parameter\nReturns true if the parameter was found\n"},
  {"GetParameterPresetNames", PyvtkStreamingVolumeCodec_GetParameterPresetNames, METH_VARARGS,
   "GetParameterPresetNames(self) -> (str, ...)\nC++: std::vector<std::string> GetParameterPresetNames()\n\nReturns a list of the human readable names of the supported\nparameter presets\n"},
  {"GetParameterPresetValue", PyvtkStreamingVolumeCodec_GetParameterPresetValue, METH_VARARGS,
   "GetParameterPresetValue(self, presetName:str) -> str\nC++: std::string GetParameterPresetValue(\n    const std::string &presetName)\n\nGet the string representing the preset value given the name of\nthe parameter\n\\param presetName String containing the name of the preset\nReturns a string representing the preset value\n"},
  {"GetParameterPresetName", PyvtkStreamingVolumeCodec_GetParameterPresetName, METH_VARARGS,
   "GetParameterPresetName(self, presetValue:str) -> str\nC++: std::string GetParameterPresetName(\n    const std::string &presetValue)\n\nGet the human readable preset name given the parameter value\nstring\n\\param presetValue String representing the preset value\nReturns the human readable name of the preset value\n"},
  {"GetNumberOfParameterPresets", PyvtkStreamingVolumeCodec_GetNumberOfParameterPresets, METH_VARARGS,
   "GetNumberOfParameterPresets(self) -> int\nC++: int GetNumberOfParameterPresets()\n\nGet the number of parameter presets\n"},
  {"SetParametersFromPresetValue", PyvtkStreamingVolumeCodec_SetParametersFromPresetValue, METH_VARARGS,
   "SetParametersFromPresetValue(self, presetValue:str) -> bool\nC++: virtual bool SetParametersFromPresetValue(\n    const std::string &presetValue)\n\nSet the current parameters of the codec based on the specified\npreset value. The method must be overridden in child classes that\nsupport presets.\n\\param presetValue String representing the preset value\nReturns true on success.\n"},
  {"GetDefaultParameterPresetValue", PyvtkStreamingVolumeCodec_GetDefaultParameterPresetValue, METH_VARARGS,
   "GetDefaultParameterPresetValue(self) -> str\nC++: virtual std::string GetDefaultParameterPresetValue()\n\nGet the default preset parameter value The human readable name of\nthe parameter can be retreived using GetParameterPresetName()\n\\sa GetParameterPresetName()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStreamingVolumeCodec_Doc =
  "vtkStreamingVolumeCodec - VTK object for representing a volume\ncompression codec (normally a video compression codec)\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStreamingVolumeCodec_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkStreamingVolumeCodec", // tp_name
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
  PyvtkStreamingVolumeCodec_Doc, // tp_doc
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

PyObject *PyvtkStreamingVolumeCodec_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStreamingVolumeCodec_Type, PyvtkStreamingVolumeCodec_Methods,
    "vtkStreamingVolumeCodec",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyLong_FromLong(vtkStreamingVolumeCodec::ParameterModifiedEvent);
  if (o)
  {
    PyDict_SetItemString(d, "ParameterModifiedEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStreamingVolumeCodec(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStreamingVolumeCodec_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStreamingVolumeCodec", o) != 0)
  {
    Py_DECREF(o);
  }

}

