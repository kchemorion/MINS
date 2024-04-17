// python wrapper for vtkMRMLVolumeDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLVolumeDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLVolumeDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLVolumeDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLVolumeDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLVolumeDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLVolumeDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLVolumeDisplayNode *tempr = vtkMRMLVolumeDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLVolumeDisplayNode::NewInstance());

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
PyvtkMRMLVolumeDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLVolumeDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLVolumeDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

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
      op->vtkMRMLVolumeDisplayNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLVolumeDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetNodeTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLVolumeDisplayNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->UpdateScene(temp0);
    }
    else
    {
      op->vtkMRMLVolumeDisplayNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_SetBackgroundImageStencilDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundImageStencilDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundImageStencilDataConnection(temp0);
    }
    else
    {
      op->vtkMRMLVolumeDisplayNode::SetBackgroundImageStencilDataConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_GetBackgroundImageStencilDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundImageStencilDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetBackgroundImageStencilDataConnection() :
      op->vtkMRMLVolumeDisplayNode::GetBackgroundImageStencilDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_GetBackgroundImageStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundImageStencilData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->GetBackgroundImageStencilData() :
      op->vtkMRMLVolumeDisplayNode::GetBackgroundImageStencilData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_GetImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetImageDataConnection() :
      op->vtkMRMLVolumeDisplayNode::GetImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_SetInputImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputImageDataConnection(temp0);
    }
    else
    {
      op->vtkMRMLVolumeDisplayNode::SetInputImageDataConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_GetInputImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInputImageDataConnection() :
      op->vtkMRMLVolumeDisplayNode::GetInputImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_GetInputImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInputImageData() :
      op->vtkMRMLVolumeDisplayNode::GetInputImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_GetOutputImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutputImageData() :
      op->vtkMRMLVolumeDisplayNode::GetOutputImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_GetOutputImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputImageDataConnection() :
      op->vtkMRMLVolumeDisplayNode::GetOutputImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_UpdateImageDataPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateImageDataPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateImageDataPipeline();
    }
    else
    {
      op->vtkMRMLVolumeDisplayNode::UpdateImageDataPipeline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

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
      op->vtkMRMLVolumeDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLVolumeDisplayNode_SetDefaultColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultColorMap();
    }
    else
    {
      op->vtkMRMLVolumeDisplayNode::SetDefaultColorMap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeDisplayNode_GetVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeDisplayNode *op = static_cast<vtkMRMLVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->GetVolumeNode() :
      op->vtkMRMLVolumeDisplayNode::GetVolumeNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLVolumeDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLVolumeDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLVolumeDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLVolumeDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLVolumeDisplayNode\nC++: static vtkMRMLVolumeDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLVolumeDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLVolumeDisplayNode\nC++: vtkMRMLVolumeDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLVolumeDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLVolumeDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CopyContent", PyvtkMRMLVolumeDisplayNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLVolumeDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLVolumeDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override = 0;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"UpdateReferences", PyvtkMRMLVolumeDisplayNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nUpdates this node if it depends on other nodes when the node is\ndeleted in the scene\n"},
  {"UpdateScene", PyvtkMRMLVolumeDisplayNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"SetBackgroundImageStencilDataConnection", PyvtkMRMLVolumeDisplayNode_SetBackgroundImageStencilDataConnection, METH_VARARGS,
   "SetBackgroundImageStencilDataConnection(self,\n    imageDataConnection:vtkAlgorithmOutput) -> None\nC++: virtual void SetBackgroundImageStencilDataConnection(\n    vtkAlgorithmOutput *imageDataConnection)\n\nSets ImageData for background mask Must be reimplemented in\nderiving class if they need it.\nGetBackgroundImageStencilDataConnection() returns 0 if the\nbackground image data is not used.\n"},
  {"GetBackgroundImageStencilDataConnection", PyvtkMRMLVolumeDisplayNode_GetBackgroundImageStencilDataConnection, METH_VARARGS,
   "GetBackgroundImageStencilDataConnection(self)\n    -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetBackgroundImageStencilDataConnection(\n    )\n\n"},
  {"GetBackgroundImageStencilData", PyvtkMRMLVolumeDisplayNode_GetBackgroundImageStencilData, METH_VARARGS,
   "GetBackgroundImageStencilData(self) -> vtkImageStencilData\nC++: virtual vtkImageStencilData *GetBackgroundImageStencilData()\n\n"},
  {"GetImageDataConnection", PyvtkMRMLVolumeDisplayNode_GetImageDataConnection, METH_VARARGS,
   "GetImageDataConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetImageDataConnection()\n\nReturns the output of the pipeline if there is a not a null\ninput. Gets ImageData converted from the real data in the node\nThe image is the direct output of the pipeline, it might not be\nup-to-date. You can call Update() on the returned vtkImageData or\nuse GetUpToDateImageData() instead.\n\\sa GetUpToDateImageData()\n"},
  {"SetInputImageDataConnection", PyvtkMRMLVolumeDisplayNode_SetInputImageDataConnection, METH_VARARGS,
   "SetInputImageDataConnection(self,\n    imageDataConnection:vtkAlgorithmOutput) -> None\nC++: virtual void SetInputImageDataConnection(\n    vtkAlgorithmOutput *imageDataConnection)\n\nGets ImageData and ensure it's up-to-date by calling Update() on\nthe pipeline. Please note that it can be slow, depending on the\nfilters in the pipeline and the dimension of the input data. Set\nthe pipeline input. Filters can be applied to the input image\ndata. The output image data is the one used by the mappers. It\ninternally calls SetInputImageDataPipeline that can be\nreimplemented.\n"},
  {"GetInputImageDataConnection", PyvtkMRMLVolumeDisplayNode_GetInputImageDataConnection, METH_VARARGS,
   "GetInputImageDataConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetInputImageDataConnection()\n\n"},
  {"GetInputImageData", PyvtkMRMLVolumeDisplayNode_GetInputImageData, METH_VARARGS,
   "GetInputImageData(self) -> vtkImageData\nC++: virtual vtkImageData *GetInputImageData()\n\nGets the pipeline input. To be reimplemented in subclasses.\n"},
  {"GetOutputImageData", PyvtkMRMLVolumeDisplayNode_GetOutputImageData, METH_VARARGS,
   "GetOutputImageData(self) -> vtkImageData\nC++: virtual vtkImageData *GetOutputImageData()\n\nGets the pipeline output. To be reimplemented in subclasses.\n"},
  {"GetOutputImageDataConnection", PyvtkMRMLVolumeDisplayNode_GetOutputImageDataConnection, METH_VARARGS,
   "GetOutputImageDataConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetOutputImageDataConnection()\n\n"},
  {"UpdateImageDataPipeline", PyvtkMRMLVolumeDisplayNode_UpdateImageDataPipeline, METH_VARARGS,
   "UpdateImageDataPipeline(self) -> None\nC++: virtual void UpdateImageDataPipeline()\n\nUpdate the pipeline based on this node attributes\n"},
  {"ProcessMRMLEvents", PyvtkMRMLVolumeDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"SetDefaultColorMap", PyvtkMRMLVolumeDisplayNode_SetDefaultColorMap, METH_VARARGS,
   "SetDefaultColorMap(self) -> None\nC++: virtual void SetDefaultColorMap()\n\nset gray colormap or override in subclass\n"},
  {"GetVolumeNode", PyvtkMRMLVolumeDisplayNode_GetVolumeNode, METH_VARARGS,
   "GetVolumeNode(self) -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *GetVolumeNode()\n\nSearch in the scene the volume node vtkMRMLVolumeDisplayNode is\nassociated to\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLVolumeDisplayNode_Doc =
  "vtkMRMLVolumeDisplayNode - MRML node for representing a volume\ndisplay attributes.\n\n"
  "Superclass: vtkMRMLDisplayNode\n\n"
  "vtkMRMLVolumeDisplayNode nodes describe how volume is displayed.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLVolumeDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLVolumeDisplayNode", // tp_name
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
  PyvtkMRMLVolumeDisplayNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLVolumeDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLVolumeDisplayNode_Type, PyvtkMRMLVolumeDisplayNode_Methods,
    "vtkMRMLVolumeDisplayNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLDisplayNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLVolumeDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLVolumeDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLVolumeDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

