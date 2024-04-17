// python wrapper for vtkMRMLSegmentationStorageNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSegmentationStorageNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSegmentationStorageNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSegmentationStorageNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorageNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorageNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorageNode_ClassNew
#endif

static PyObject *
PyvtkMRMLSegmentationStorageNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSegmentationStorageNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSegmentationStorageNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSegmentationStorageNode *tempr = vtkMRMLSegmentationStorageNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSegmentationStorageNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSegmentationStorageNode::NewInstance());

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
PyvtkMRMLSegmentationStorageNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSegmentationStorageNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSegmentationStorageNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLSegmentationStorageNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

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
      op->vtkMRMLSegmentationStorageNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLSegmentationStorageNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_GetDefaultWriteFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultWriteFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultWriteFileExtension() :
      op->vtkMRMLSegmentationStorageNode::GetDefaultWriteFileExtension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_CanReadInReferenceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadInReferenceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanReadInReferenceNode(temp0) :
      op->vtkMRMLSegmentationStorageNode::CanReadInReferenceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_ResetSupportedWriteFileTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetSupportedWriteFileTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetSupportedWriteFileTypes();
    }
    else
    {
      op->vtkMRMLSegmentationStorageNode::ResetSupportedWriteFileTypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_SetCropToMinimumExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropToMinimumExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCropToMinimumExtent(temp0);
    }
    else
    {
      op->vtkMRMLSegmentationStorageNode::SetCropToMinimumExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_GetCropToMinimumExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropToMinimumExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCropToMinimumExtent() :
      op->vtkMRMLSegmentationStorageNode::GetCropToMinimumExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_CropToMinimumExtentOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CropToMinimumExtentOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CropToMinimumExtentOn();
    }
    else
    {
      op->vtkMRMLSegmentationStorageNode::CropToMinimumExtentOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSegmentationStorageNode_CropToMinimumExtentOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CropToMinimumExtentOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSegmentationStorageNode *op = static_cast<vtkMRMLSegmentationStorageNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CropToMinimumExtentOff();
    }
    else
    {
      op->vtkMRMLSegmentationStorageNode::CropToMinimumExtentOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSegmentationStorageNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSegmentationStorageNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSegmentationStorageNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSegmentationStorageNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSegmentationStorageNode\nC++: static vtkMRMLSegmentationStorageNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSegmentationStorageNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSegmentationStorageNode\nC++: vtkMRMLSegmentationStorageNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSegmentationStorageNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSegmentationStorageNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLSegmentationStorageNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLSegmentationStorageNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLSegmentationStorageNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Storage, Model)\n"},
  {"GetDefaultWriteFileExtension", PyvtkMRMLSegmentationStorageNode_GetDefaultWriteFileExtension, METH_VARARGS,
   "GetDefaultWriteFileExtension(self) -> str\nC++: const char *GetDefaultWriteFileExtension() override;\n\nReturn a default file extension for writing File write extension\nis determined dynamically from source representation type.\n"},
  {"CanReadInReferenceNode", PyvtkMRMLSegmentationStorageNode_CanReadInReferenceNode, METH_VARARGS,
   "CanReadInReferenceNode(self, refNode:vtkMRMLNode) -> bool\nC++: bool CanReadInReferenceNode(vtkMRMLNode *refNode) override;\n\nReturn true if the reference node can be read in\n"},
  {"ResetSupportedWriteFileTypes", PyvtkMRMLSegmentationStorageNode_ResetSupportedWriteFileTypes, METH_VARARGS,
   "ResetSupportedWriteFileTypes(self) -> None\nC++: void ResetSupportedWriteFileTypes()\n\nReset supported write file types. Called when source\nrepresentation is changed\n"},
  {"SetCropToMinimumExtent", PyvtkMRMLSegmentationStorageNode_SetCropToMinimumExtent, METH_VARARGS,
   "SetCropToMinimumExtent(self, _arg:bool) -> None\nC++: virtual void SetCropToMinimumExtent(bool _arg)\n\nControls if segmentation labelmap representation is written using\nminimum necessary extent or the extent of reference image. If\nfalse (default): the segmentation will be saved using the same\nextent as the reference image. If true: the segmentation will be\nsaved using the effective extent. This saves space (especially\nwhen saving the segmentation uncompressed), but makes voxel\ncoordinates of the segmentation different from voxel coordinates\nof the reference image, which may cause problems in software that\nassume voxel coordinate system of the reference image is the same\nas the segmentation's.\n"},
  {"GetCropToMinimumExtent", PyvtkMRMLSegmentationStorageNode_GetCropToMinimumExtent, METH_VARARGS,
   "GetCropToMinimumExtent(self) -> bool\nC++: virtual bool GetCropToMinimumExtent()\n\n"},
  {"CropToMinimumExtentOn", PyvtkMRMLSegmentationStorageNode_CropToMinimumExtentOn, METH_VARARGS,
   "CropToMinimumExtentOn(self) -> None\nC++: virtual void CropToMinimumExtentOn()\n\n"},
  {"CropToMinimumExtentOff", PyvtkMRMLSegmentationStorageNode_CropToMinimumExtentOff, METH_VARARGS,
   "CropToMinimumExtentOff(self) -> None\nC++: virtual void CropToMinimumExtentOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSegmentationStorageNode_Doc =
  "vtkMRMLSegmentationStorageNode - MRML node for segmentation storage\non disk.\n\n"
  "Superclass: vtkMRMLStorageNode\n\n"
  "Only the source representation of the segmentation is stored on disk.\n\n"
  "If source representation is labelmap then it is stored as a NRRD\n"
  "image file (.seg.nrrd file). Upon saving, segments are automatically\n"
  "collapsed to as few 3D volumes as possible. If no segments overlap,\n"
  "then the segmentation will be saved as a 3D volume. If segments\n"
  "overlap (same voxel position is included in multiple segments) then a\n"
  "4D volume is saved.\n\n"
  "If source representation is polygonal mesh, such as closed surface,\n"
  "then the segmentation is stored as a VTK multiblock data set (.vtm\n"
  "file accompanied by a number of .vtk polydata files).\n\n"
  "Detailed specification of the segmentation file format is available\n"
  "at:\n"
  "https://slicer.readthedocs.io/en/latest/developer_guide/modules/segmen\n"
  "tations.html\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSegmentationStorageNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSegmentationStorageNode", // tp_name
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
  PyvtkMRMLSegmentationStorageNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSegmentationStorageNode_StaticNew()
{
  return vtkMRMLSegmentationStorageNode::New();
}

PyObject *PyvtkMRMLSegmentationStorageNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSegmentationStorageNode_Type, PyvtkMRMLSegmentationStorageNode_Methods,
    "vtkMRMLSegmentationStorageNode",
 &PyvtkMRMLSegmentationStorageNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorageNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSegmentationStorageNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSegmentationStorageNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSegmentationStorageNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

