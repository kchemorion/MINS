// python wrapper for vtkMRMLStreamingVolumeNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLStreamingVolumeNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLStreamingVolumeNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLStreamingVolumeNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLVectorVolumeNode_ClassNew
extern "C" { PyObject *PyvtkMRMLVectorVolumeNode_ClassNew(); }
#define DECLARED_PyvtkMRMLVectorVolumeNode_ClassNew
#endif

static PyObject *
PyvtkMRMLStreamingVolumeNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLStreamingVolumeNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLStreamingVolumeNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLStreamingVolumeNode *tempr = vtkMRMLStreamingVolumeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStreamingVolumeNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLStreamingVolumeNode::NewInstance());

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
PyvtkMRMLStreamingVolumeNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLStreamingVolumeNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLStreamingVolumeNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLStreamingVolumeNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->ProcessMRMLEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLStreamingVolumeNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLStreamingVolumeNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->CopyContent(temp0, temp1);
    }
    else
    {
      op->vtkMRMLStreamingVolumeNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLStreamingVolumeNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLStreamingVolumeNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_SetAndObserveImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveImageData(temp0);
    }
    else
    {
      op->vtkMRMLStreamingVolumeNode::SetAndObserveImageData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_GetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImageData() :
      op->vtkMRMLStreamingVolumeNode::GetImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_GetImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetImageDataConnection() :
      op->vtkMRMLStreamingVolumeNode::GetImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_SetAndObserveFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  vtkStreamingVolumeFrame *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStreamingVolumeFrame"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveFrame(temp0);
    }
    else
    {
      op->vtkMRMLStreamingVolumeNode::SetAndObserveFrame(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_GetFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamingVolumeFrame *tempr = (ap.IsBound() ?
      op->GetFrame() :
      op->vtkMRMLStreamingVolumeNode::GetFrame());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_EncodeImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EncodeImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->EncodeImageData(temp0) :
      op->vtkMRMLStreamingVolumeNode::EncodeImageData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_DecodeFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecodeFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->DecodeFrame() :
      op->vtkMRMLStreamingVolumeNode::DecodeFrame());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_IsKeyFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsKeyFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsKeyFrame() :
      op->vtkMRMLStreamingVolumeNode::IsKeyFrame());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_FrameModifiedCallback(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FrameModifiedCallback");

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    vtkMRMLStreamingVolumeNode::FrameModifiedCallback(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_SetCodec(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCodec");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  vtkStreamingVolumeCodec *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStreamingVolumeCodec"))
  {
    if (ap.IsBound())
    {
      op->SetCodec(temp0);
    }
    else
    {
      op->vtkMRMLStreamingVolumeNode::SetCodec(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_GetCodec(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCodec");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamingVolumeCodec *tempr = (ap.IsBound() ?
      op->GetCodec() :
      op->vtkMRMLStreamingVolumeNode::GetCodec());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_GetCodecFourCC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCodecFourCC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCodecFourCC() :
      op->vtkMRMLStreamingVolumeNode::GetCodecFourCC());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_SetCodecFourCC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCodecFourCC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

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
      op->vtkMRMLStreamingVolumeNode::SetCodecFourCC(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_SetCodecParameterString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCodecParameterString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCodecParameterString(temp0);
    }
    else
    {
      op->vtkMRMLStreamingVolumeNode::SetCodecParameterString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLStreamingVolumeNode_GetCodecParameterString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCodecParameterString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLStreamingVolumeNode *op = static_cast<vtkMRMLStreamingVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCodecParameterString() :
      op->vtkMRMLStreamingVolumeNode::GetCodecParameterString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLStreamingVolumeNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLStreamingVolumeNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLStreamingVolumeNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLStreamingVolumeNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLStreamingVolumeNode\nC++: static vtkMRMLStreamingVolumeNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLStreamingVolumeNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLStreamingVolumeNode\nC++: vtkMRMLStreamingVolumeNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLStreamingVolumeNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLStreamingVolumeNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLStreamingVolumeNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"ProcessMRMLEvents", PyvtkMRMLStreamingVolumeNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"CopyContent", PyvtkMRMLStreamingVolumeNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLStreamingVolumeNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"GetNodeTagName", PyvtkMRMLStreamingVolumeNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"SetAndObserveImageData", PyvtkMRMLStreamingVolumeNode_SetAndObserveImageData, METH_VARARGS,
   "SetAndObserveImageData(self, imageData:vtkImageData) -> None\nC++: void SetAndObserveImageData(vtkImageData *imageData)\n    override;\n\nSet/Get the observed image data object and and image data\nconnections\n\\sa vtkMRMLVolumeNode::SetAndObserveImageData(),\n    vtkMRMLVolumeNode::GetImageData(),\n    vtkMRMLVolumeNode::GetImageDataConnection()\n"},
  {"GetImageData", PyvtkMRMLStreamingVolumeNode_GetImageData, METH_VARARGS,
   "GetImageData(self) -> vtkImageData\nC++: vtkImageData *GetImageData() override;\n\n"},
  {"GetImageDataConnection", PyvtkMRMLStreamingVolumeNode_GetImageDataConnection, METH_VARARGS,
   "GetImageDataConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetImageDataConnection() override;\n\nReturn the input image data pipeline.\n"},
  {"SetAndObserveFrame", PyvtkMRMLStreamingVolumeNode_SetAndObserveFrame, METH_VARARGS,
   "SetAndObserveFrame(self, frame:vtkStreamingVolumeFrame) -> None\nC++: void SetAndObserveFrame(vtkStreamingVolumeFrame *frame)\n\nSet and observe the frame object containing the compressed image\ndata\n\\param frame Object containing the compressed video frame info\n"},
  {"GetFrame", PyvtkMRMLStreamingVolumeNode_GetFrame, METH_VARARGS,
   "GetFrame(self) -> vtkStreamingVolumeFrame\nC++: vtkStreamingVolumeFrame *GetFrame()\n\nReturns a pointer to the current frame\n"},
  {"EncodeImageData", PyvtkMRMLStreamingVolumeNode_EncodeImageData, METH_VARARGS,
   "EncodeImageData(self, forceKeyFrame:bool=False) -> bool\nC++: virtual bool EncodeImageData(bool forceKeyFrame=false)\n\nEncodes the current vtkImageData as a compressed frame using the\nspecified codec Returns true if the image is successfully encoded\n"},
  {"DecodeFrame", PyvtkMRMLStreamingVolumeNode_DecodeFrame, METH_VARARGS,
   "DecodeFrame(self) -> bool\nC++: virtual bool DecodeFrame()\n\nDecodes the current frame and stores the contents in the volume\nnode as vtkImageData Returns true if the frame is successfully\ndecoded\n"},
  {"IsKeyFrame", PyvtkMRMLStreamingVolumeNode_IsKeyFrame, METH_VARARGS,
   "IsKeyFrame(self) -> bool\nC++: virtual bool IsKeyFrame()\n\nReturns true if the current frame is a keyframe KeyFrames are not\ninterpolated and don't require any additional frames in order to\nbe decoded to an uncompressed image\n"},
  {"FrameModifiedCallback", PyvtkMRMLStreamingVolumeNode_FrameModifiedCallback, METH_VARARGS,
   "FrameModifiedCallback(caller:vtkObject, eid:int,\n    clientData:Pointer, callData:Pointer) -> None\nC++: static void FrameModifiedCallback(vtkObject *caller,\n    unsigned long eid, void *clientData, void *callData)\n\nCallback that is called if the current frame is modified Invokes\nFrameModifiedEvent\n"},
  {"SetCodec", PyvtkMRMLStreamingVolumeNode_SetCodec, METH_VARARGS,
   "SetCodec(self, _arg:vtkStreamingVolumeCodec) -> None\nC++: virtual void SetCodec(vtkStreamingVolumeCodec *_arg)\n\nInstance of the code that is\n"},
  {"GetCodec", PyvtkMRMLStreamingVolumeNode_GetCodec, METH_VARARGS,
   "GetCodec(self) -> vtkStreamingVolumeCodec\nC++: vtkStreamingVolumeCodec *GetCodec()\n\n"},
  {"GetCodecFourCC", PyvtkMRMLStreamingVolumeNode_GetCodecFourCC, METH_VARARGS,
   "GetCodecFourCC(self) -> str\nC++: virtual std::string GetCodecFourCC()\n\nThe FourCC representing the codec that should be used See\nhttps://www.fourcc.org/codecs.php\n"},
  {"SetCodecFourCC", PyvtkMRMLStreamingVolumeNode_SetCodecFourCC, METH_VARARGS,
   "SetCodecFourCC(self, _arg:str) -> None\nC++: virtual void SetCodecFourCC(std::string _arg)\n\n"},
  {"SetCodecParameterString", PyvtkMRMLStreamingVolumeNode_SetCodecParameterString, METH_VARARGS,
   "SetCodecParameterString(self, parameterString:str) -> None\nC++: void SetCodecParameterString(std::string parameterString)\n\nString representing the parameters that are currently being used\nby the codec Format is\n\"ParameterName1:ParameterValue1;ParameterName2;ParameterValue2;ParameterNameN:ParameterValueN\"\n"},
  {"GetCodecParameterString", PyvtkMRMLStreamingVolumeNode_GetCodecParameterString, METH_VARARGS,
   "GetCodecParameterString(self) -> str\nC++: std::string GetCodecParameterString()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLStreamingVolumeNode_Doc =
  "vtkMRMLStreamingVolumeNode - MRML node for representing a single\ncompressed video frame that can be decoded to an image representation\n\n"
  "Superclass: vtkMRMLVectorVolumeNode\n\n"
  "In this context, a frame is considered to be a compressed image that\n"
  "may require additional frames to decode to an image, and an image is\n"
  "the uncompressed pixel based representation. A video codec can be\n"
  "used to decode and encode between frame and image representations\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLStreamingVolumeNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLStreamingVolumeNode", // tp_name
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
  PyvtkMRMLStreamingVolumeNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLStreamingVolumeNode_StaticNew()
{
  return vtkMRMLStreamingVolumeNode::New();
}

PyObject *PyvtkMRMLStreamingVolumeNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLStreamingVolumeNode_Type, PyvtkMRMLStreamingVolumeNode_Methods,
    "vtkMRMLStreamingVolumeNode",
 &PyvtkMRMLStreamingVolumeNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLVectorVolumeNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyLong_FromLong(vtkMRMLStreamingVolumeNode::FrameModifiedEvent);
  if (o)
  {
    PyDict_SetItemString(d, "FrameModifiedEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLStreamingVolumeNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLStreamingVolumeNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLStreamingVolumeNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

