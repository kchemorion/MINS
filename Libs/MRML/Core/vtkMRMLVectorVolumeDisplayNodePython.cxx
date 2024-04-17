// python wrapper for vtkMRMLVectorVolumeDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLVectorVolumeDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLVectorVolumeDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLVectorVolumeDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLGlyphableVolumeDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLGlyphableVolumeDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLGlyphableVolumeDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLVectorVolumeDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLVectorVolumeDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLVectorVolumeDisplayNode *tempr = vtkMRMLVectorVolumeDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVectorVolumeDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLVectorVolumeDisplayNode::NewInstance());

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
PyvtkMRMLVectorVolumeDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLVectorVolumeDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLVectorVolumeDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLVectorVolumeDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

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
      op->vtkMRMLVectorVolumeDisplayNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLVectorVolumeDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLVectorVolumeDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkMRMLVectorVolumeDisplayNode::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarMode(temp0);
    }
    else
    {
      op->vtkMRMLVectorVolumeDisplayNode::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_SetScalarModeToMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToMagnitude();
    }
    else
    {
      op->vtkMRMLVectorVolumeDisplayNode::SetScalarModeToMagnitude();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_GetGlyphMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphMode() :
      op->vtkMRMLVectorVolumeDisplayNode::GetGlyphMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_SetGlyphMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphMode(temp0);
    }
    else
    {
      op->vtkMRMLVectorVolumeDisplayNode::SetGlyphMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_SetGlyphModeToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphModeToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphModeToLines();
    }
    else
    {
      op->vtkMRMLVectorVolumeDisplayNode::SetGlyphModeToLines();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_SetGlyphModeToTubes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphModeToTubes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphModeToTubes();
    }
    else
    {
      op->vtkMRMLVectorVolumeDisplayNode::SetGlyphModeToTubes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_SetDefaultColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultColorMap();
    }
    else
    {
      op->vtkMRMLVectorVolumeDisplayNode::SetDefaultColorMap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

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
      op->vtkMRMLVectorVolumeDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLVectorVolumeDisplayNode_GetInputImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInputImageDataConnection() :
      op->vtkMRMLVectorVolumeDisplayNode::GetInputImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_UpdateImageDataPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateImageDataPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateImageDataPipeline();
    }
    else
    {
      op->vtkMRMLVectorVolumeDisplayNode::UpdateImageDataPipeline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_GetShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageShiftScale *tempr = (ap.IsBound() ?
      op->GetShiftScale() :
      op->vtkMRMLVectorVolumeDisplayNode::GetShiftScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_GetRGBToHSI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBToHSI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageRGBToHSI *tempr = (ap.IsBound() ?
      op->GetRGBToHSI() :
      op->vtkMRMLVectorVolumeDisplayNode::GetRGBToHSI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_GetExtractIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageExtractComponents *tempr = (ap.IsBound() ?
      op->GetExtractIntensity() :
      op->vtkMRMLVectorVolumeDisplayNode::GetExtractIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_GetAppendComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageAppendComponents *tempr = (ap.IsBound() ?
      op->GetAppendComponents() :
      op->vtkMRMLVectorVolumeDisplayNode::GetAppendComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVectorVolumeDisplayNode_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVectorVolumeDisplayNode *op = static_cast<vtkMRMLVectorVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageThreshold *tempr = (ap.IsBound() ?
      op->GetThreshold() :
      op->vtkMRMLVectorVolumeDisplayNode::GetThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLVectorVolumeDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLVectorVolumeDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLVectorVolumeDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLVectorVolumeDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLVectorVolumeDisplayNode\nC++: static vtkMRMLVectorVolumeDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLVectorVolumeDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLVectorVolumeDisplayNode\nC++: vtkMRMLVectorVolumeDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLVectorVolumeDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLVectorVolumeDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLVectorVolumeDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"CopyContent", PyvtkMRMLVectorVolumeDisplayNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLVectorVolumeDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLVectorVolumeDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetScalarMode", PyvtkMRMLVectorVolumeDisplayNode_GetScalarMode, METH_VARARGS,
   "GetScalarMode(self) -> int\nC++: virtual int GetScalarMode()\n\n"},
  {"SetScalarMode", PyvtkMRMLVectorVolumeDisplayNode_SetScalarMode, METH_VARARGS,
   "SetScalarMode(self, _arg:int) -> None\nC++: virtual void SetScalarMode(int _arg)\n\n"},
  {"SetScalarModeToMagnitude", PyvtkMRMLVectorVolumeDisplayNode_SetScalarModeToMagnitude, METH_VARARGS,
   "SetScalarModeToMagnitude(self) -> None\nC++: void SetScalarModeToMagnitude()\n\n"},
  {"GetGlyphMode", PyvtkMRMLVectorVolumeDisplayNode_GetGlyphMode, METH_VARARGS,
   "GetGlyphMode(self) -> int\nC++: virtual int GetGlyphMode()\n\n"},
  {"SetGlyphMode", PyvtkMRMLVectorVolumeDisplayNode_SetGlyphMode, METH_VARARGS,
   "SetGlyphMode(self, _arg:int) -> None\nC++: virtual void SetGlyphMode(int _arg)\n\n"},
  {"SetGlyphModeToLines", PyvtkMRMLVectorVolumeDisplayNode_SetGlyphModeToLines, METH_VARARGS,
   "SetGlyphModeToLines(self) -> None\nC++: void SetGlyphModeToLines()\n\n"},
  {"SetGlyphModeToTubes", PyvtkMRMLVectorVolumeDisplayNode_SetGlyphModeToTubes, METH_VARARGS,
   "SetGlyphModeToTubes(self) -> None\nC++: void SetGlyphModeToTubes()\n\n"},
  {"SetDefaultColorMap", PyvtkMRMLVectorVolumeDisplayNode_SetDefaultColorMap, METH_VARARGS,
   "SetDefaultColorMap(self) -> None\nC++: void SetDefaultColorMap() override;\n\nset gray colormap\n"},
  {"ProcessMRMLEvents", PyvtkMRMLVectorVolumeDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"GetInputImageDataConnection", PyvtkMRMLVectorVolumeDisplayNode_GetInputImageDataConnection, METH_VARARGS,
   "GetInputImageDataConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInputImageDataConnection() override;\n\nGet the input of the pipeline\n"},
  {"UpdateImageDataPipeline", PyvtkMRMLVectorVolumeDisplayNode_UpdateImageDataPipeline, METH_VARARGS,
   "UpdateImageDataPipeline(self) -> None\nC++: void UpdateImageDataPipeline() override;\n\nUpdate the pipeline based on this node attributes\n"},
  {"GetShiftScale", PyvtkMRMLVectorVolumeDisplayNode_GetShiftScale, METH_VARARGS,
   "GetShiftScale(self) -> vtkImageShiftScale\nC++: virtual vtkImageShiftScale *GetShiftScale()\n\nAccess to this class's internal filter elements\n"},
  {"GetRGBToHSI", PyvtkMRMLVectorVolumeDisplayNode_GetRGBToHSI, METH_VARARGS,
   "GetRGBToHSI(self) -> vtkImageRGBToHSI\nC++: virtual vtkImageRGBToHSI *GetRGBToHSI()\n\n"},
  {"GetExtractIntensity", PyvtkMRMLVectorVolumeDisplayNode_GetExtractIntensity, METH_VARARGS,
   "GetExtractIntensity(self) -> vtkImageExtractComponents\nC++: virtual vtkImageExtractComponents *GetExtractIntensity()\n\n"},
  {"GetAppendComponents", PyvtkMRMLVectorVolumeDisplayNode_GetAppendComponents, METH_VARARGS,
   "GetAppendComponents(self) -> vtkImageAppendComponents\nC++: virtual vtkImageAppendComponents *GetAppendComponents()\n\n"},
  {"GetThreshold", PyvtkMRMLVectorVolumeDisplayNode_GetThreshold, METH_VARARGS,
   "GetThreshold(self) -> vtkImageThreshold\nC++: virtual vtkImageThreshold *GetThreshold()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLVectorVolumeDisplayNode_Doc =
  "vtkMRMLVectorVolumeDisplayNode - MRML node for representing a volume\n(image stack).\n\n"
  "Superclass: vtkMRMLGlyphableVolumeDisplayNode\n\n"
  "Volume nodes describe data sets that can be thought of as stacks of\n"
  "2D images that form a 3D volume.  Volume nodes describe where the\n"
  "images are stored on disk, how to render the data (window and level),\n"
  "and how to read the files.  This information is extracted from the\n"
  "image headers (if they exist) at the time the MRML file is generated.\n"
  "Consequently, MRML files isolate MRML browsers from understanding how\n"
  "to read the myriad of file formats for medical data.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLVectorVolumeDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLVectorVolumeDisplayNode", // tp_name
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
  PyvtkMRMLVectorVolumeDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLVectorVolumeDisplayNode_StaticNew()
{
  return vtkMRMLVectorVolumeDisplayNode::New();
}

PyObject *PyvtkMRMLVectorVolumeDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLVectorVolumeDisplayNode_Type, PyvtkMRMLVectorVolumeDisplayNode_Methods,
    "vtkMRMLVectorVolumeDisplayNode",
 &PyvtkMRMLVectorVolumeDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLGlyphableVolumeDisplayNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "scalarModeMagnitude", vtkMRMLVectorVolumeDisplayNode::scalarModeMagnitude },
        { "glyphModeLines", vtkMRMLVectorVolumeDisplayNode::glyphModeLines },
        { "glyphModeTubes", vtkMRMLVectorVolumeDisplayNode::glyphModeTubes },
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

void PyVTKAddFile_vtkMRMLVectorVolumeDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLVectorVolumeDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLVectorVolumeDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

