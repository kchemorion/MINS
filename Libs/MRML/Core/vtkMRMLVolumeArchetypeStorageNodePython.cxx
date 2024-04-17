// python wrapper for vtkMRMLVolumeArchetypeStorageNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLVolumeArchetypeStorageNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLVolumeArchetypeStorageNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLVolumeArchetypeStorageNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorageNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorageNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorageNode_ClassNew
#endif

static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLVolumeArchetypeStorageNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLVolumeArchetypeStorageNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLVolumeArchetypeStorageNode *tempr = vtkMRMLVolumeArchetypeStorageNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLVolumeArchetypeStorageNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLVolumeArchetypeStorageNode::NewInstance());

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
PyvtkMRMLVolumeArchetypeStorageNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLVolumeArchetypeStorageNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLVolumeArchetypeStorageNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLVolumeArchetypeStorageNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_UpdateFileList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateFileList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    std::string tempr = (ap.IsBound() ?
      op->UpdateFileList(temp0, temp1) :
      op->vtkMRMLVolumeArchetypeStorageNode::UpdateFileList(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkMRMLVolumeArchetypeStorageNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLVolumeArchetypeStorageNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_GetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCenterImage() :
      op->vtkMRMLVolumeArchetypeStorageNode::GetCenterImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_SetCenterImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterImage(temp0);
    }
    else
    {
      op->vtkMRMLVolumeArchetypeStorageNode::SetCenterImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_GetSingleFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSingleFile() :
      op->vtkMRMLVolumeArchetypeStorageNode::GetSingleFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_SetSingleFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSingleFile(temp0);
    }
    else
    {
      op->vtkMRMLVolumeArchetypeStorageNode::SetSingleFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_SetUseOrientationFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOrientationFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOrientationFromFile(temp0);
    }
    else
    {
      op->vtkMRMLVolumeArchetypeStorageNode::SetUseOrientationFromFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_GetUseOrientationFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOrientationFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseOrientationFromFile() :
      op->vtkMRMLVolumeArchetypeStorageNode::GetUseOrientationFromFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_CanReadInReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadInReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadInReferenceNode(temp0) :
      op->vtkMRMLVolumeArchetypeStorageNode::CanReadInReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_CanWriteFromReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanWriteFromReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanWriteFromReferenceNode(temp0) :
      op->vtkMRMLVolumeArchetypeStorageNode::CanWriteFromReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_ConfigureForDataExchange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConfigureForDataExchange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLVolumeArchetypeStorageNode *op = static_cast<vtkMRMLVolumeArchetypeStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConfigureForDataExchange();
    }
    else
    {
      op->vtkMRMLVolumeArchetypeStorageNode::ConfigureForDataExchange();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLVolumeArchetypeStorageNode_SetMetaDataDictionaryFromReader(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetMetaDataDictionaryFromReader");

  vtkMRMLVolumeNode *temp0 = nullptr;
  vtkITKArchetypeImageSeriesReader *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkITKArchetypeImageSeriesReader"))
  {
    vtkMRMLVolumeArchetypeStorageNode::SetMetaDataDictionaryFromReader(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLVolumeArchetypeStorageNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLVolumeArchetypeStorageNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLVolumeArchetypeStorageNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLVolumeArchetypeStorageNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLVolumeArchetypeStorageNode\nC++: static vtkMRMLVolumeArchetypeStorageNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLVolumeArchetypeStorageNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLVolumeArchetypeStorageNode\nC++: vtkMRMLVolumeArchetypeStorageNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLVolumeArchetypeStorageNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLVolumeArchetypeStorageNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLVolumeArchetypeStorageNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"UpdateFileList", PyvtkMRMLVolumeArchetypeStorageNode_UpdateFileList, METH_VARARGS,
   "UpdateFileList(self, refNode:vtkMRMLNode, move:bool=False) -> str\nC++: std::string UpdateFileList(vtkMRMLNode *refNode,\n    bool move=false)\n\nDo a temp write to update the file list in this storage node with\nall file names that are written when write out the ref node If\nmove is true, return the directory that contains the written\nfiles and only the written files, for use in a move instead of a\ndouble write. If move is false then the temporary directory is\nremoved and an empty string is returned.\n"},
  {"Copy", PyvtkMRMLVolumeArchetypeStorageNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLVolumeArchetypeStorageNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Storage, Model)\n"},
  {"GetCenterImage", PyvtkMRMLVolumeArchetypeStorageNode_GetCenterImage, METH_VARARGS,
   "GetCenterImage(self) -> int\nC++: virtual int GetCenterImage()\n\nCenter image on read\n"},
  {"SetCenterImage", PyvtkMRMLVolumeArchetypeStorageNode_SetCenterImage, METH_VARARGS,
   "SetCenterImage(self, _arg:int) -> None\nC++: virtual void SetCenterImage(int _arg)\n\n"},
  {"GetSingleFile", PyvtkMRMLVolumeArchetypeStorageNode_GetSingleFile, METH_VARARGS,
   "GetSingleFile(self) -> int\nC++: virtual int GetSingleFile()\n\nwhether to read single file or the whole series\n"},
  {"SetSingleFile", PyvtkMRMLVolumeArchetypeStorageNode_SetSingleFile, METH_VARARGS,
   "SetSingleFile(self, _arg:int) -> None\nC++: virtual void SetSingleFile(int _arg)\n\n"},
  {"SetUseOrientationFromFile", PyvtkMRMLVolumeArchetypeStorageNode_SetUseOrientationFromFile, METH_VARARGS,
   "SetUseOrientationFromFile(self, _arg:int) -> None\nC++: virtual void SetUseOrientationFromFile(int _arg)\n\nWhether to use orientation from file\n"},
  {"GetUseOrientationFromFile", PyvtkMRMLVolumeArchetypeStorageNode_GetUseOrientationFromFile, METH_VARARGS,
   "GetUseOrientationFromFile(self) -> int\nC++: virtual int GetUseOrientationFromFile()\n\n"},
  {"CanReadInReferenceNode", PyvtkMRMLVolumeArchetypeStorageNode_CanReadInReferenceNode, METH_VARARGS,
   "CanReadInReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanReadInReferenceNode(vtkMRMLNode *refNode) override;\n\nReturn true if the reference node is supported by the storage\nnode\n"},
  {"CanWriteFromReferenceNode", PyvtkMRMLVolumeArchetypeStorageNode_CanWriteFromReferenceNode, METH_VARARGS,
   "CanWriteFromReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanWriteFromReferenceNode(vtkMRMLNode *refNode)\n    override;\n\nReturn true if the node can be written from. Used by WriteData to\nknow if the file can be written from the reference node. By\ndefault it returns the same than CanReadInReferenceNode.\nSubclasses can reimplement the method.\n\\sa CanReadInReferenceNode, WriteData\n"},
  {"ConfigureForDataExchange", PyvtkMRMLVolumeArchetypeStorageNode_ConfigureForDataExchange, METH_VARARGS,
   "ConfigureForDataExchange(self) -> None\nC++: void ConfigureForDataExchange() override;\n\nConfigure the storage node for data exchange. This is an\nopportunity to optimize the storage node's settings, for instance\nto turn off compression.\n"},
  {"SetMetaDataDictionaryFromReader", PyvtkMRMLVolumeArchetypeStorageNode_SetMetaDataDictionaryFromReader, METH_VARARGS,
   "SetMetaDataDictionaryFromReader(__a:vtkMRMLVolumeNode,\n    __b:vtkITKArchetypeImageSeriesReader) -> None\nC++: static void SetMetaDataDictionaryFromReader(\n    vtkMRMLVolumeNode *, vtkITKArchetypeImageSeriesReader *)\n\nProvide a uniform way to populate the volume nodes's itk\nmetadatadictionary from the reader.  Since\nitk::MetaDataDictionary is not exposed in python, this method\nallows it to be set indirectly using only wrapped types.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLVolumeArchetypeStorageNode_Doc =
  "vtkMRMLVolumeArchetypeStorageNode - MRML node for representing a\nvolume storage.\n\n"
  "Superclass: vtkMRMLStorageNode\n\n"
  "vtkMRMLVolumeArchetypeStorageNode nodes describe the archetype based\n"
  "volume storage node that allows to read/write volume data from/to\n"
  "file using generic ITK mechanism.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLVolumeArchetypeStorageNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLVolumeArchetypeStorageNode", // tp_name
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
  PyvtkMRMLVolumeArchetypeStorageNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLVolumeArchetypeStorageNode_StaticNew()
{
  return vtkMRMLVolumeArchetypeStorageNode::New();
}

PyObject *PyvtkMRMLVolumeArchetypeStorageNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLVolumeArchetypeStorageNode_Type, PyvtkMRMLVolumeArchetypeStorageNode_Methods,
    "vtkMRMLVolumeArchetypeStorageNode",
 &PyvtkMRMLVolumeArchetypeStorageNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorageNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLVolumeArchetypeStorageNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLVolumeArchetypeStorageNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLVolumeArchetypeStorageNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

