// python wrapper for vtkMRMLScalarVolumeNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLScalarVolumeNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLScalarVolumeNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLScalarVolumeNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLVolumeNode_ClassNew
extern "C" { PyObject *PyvtkMRMLVolumeNode_ClassNew(); }
#define DECLARED_PyvtkMRMLVolumeNode_ClassNew
#endif

static PyObject *
PyvtkMRMLScalarVolumeNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLScalarVolumeNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLScalarVolumeNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLScalarVolumeNode *tempr = vtkMRMLScalarVolumeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScalarVolumeNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLScalarVolumeNode::NewInstance());

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
PyvtkMRMLScalarVolumeNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLScalarVolumeNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLScalarVolumeNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLScalarVolumeNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLScalarVolumeNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLScalarVolumeNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_CreateNoneNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateNoneNode");

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    vtkMRMLScalarVolumeNode::CreateNoneNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_GetScalarVolumeDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVolumeDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScalarVolumeDisplayNode *tempr = (ap.IsBound() ?
      op->GetScalarVolumeDisplayNode() :
      op->vtkMRMLScalarVolumeNode::GetScalarVolumeDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLScalarVolumeNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_CreateDefaultDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultDisplayNodes();
    }
    else
    {
      op->vtkMRMLScalarVolumeNode::CreateDefaultDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_SetVoxelValueQuantity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoxelValueQuantity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  vtkCodedEntry *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCodedEntry"))
  {
    if (ap.IsBound())
    {
      op->SetVoxelValueQuantity(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeNode::SetVoxelValueQuantity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_GetVoxelValueQuantity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelValueQuantity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCodedEntry *tempr = (ap.IsBound() ?
      op->GetVoxelValueQuantity() :
      op->vtkMRMLScalarVolumeNode::GetVoxelValueQuantity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_SetVoxelValueUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoxelValueUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  vtkCodedEntry *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCodedEntry"))
  {
    if (ap.IsBound())
    {
      op->SetVoxelValueUnits(temp0);
    }
    else
    {
      op->vtkMRMLScalarVolumeNode::SetVoxelValueUnits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScalarVolumeNode_GetVoxelValueUnits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelValueUnits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScalarVolumeNode *op = static_cast<vtkMRMLScalarVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCodedEntry *tempr = (ap.IsBound() ?
      op->GetVoxelValueUnits() :
      op->vtkMRMLScalarVolumeNode::GetVoxelValueUnits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLScalarVolumeNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLScalarVolumeNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLScalarVolumeNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLScalarVolumeNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLScalarVolumeNode\nC++: static vtkMRMLScalarVolumeNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLScalarVolumeNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLScalarVolumeNode\nC++: vtkMRMLScalarVolumeNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLScalarVolumeNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLScalarVolumeNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLScalarVolumeNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"HasCopyContent", PyvtkMRMLScalarVolumeNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"GetNodeTagName", PyvtkMRMLScalarVolumeNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"CreateNoneNode", PyvtkMRMLScalarVolumeNode_CreateNoneNode, METH_VARARGS,
   "CreateNoneNode(scene:vtkMRMLScene) -> None\nC++: static void CreateNoneNode(vtkMRMLScene *scene)\n\nMake a 'None' volume node with blank image data\n"},
  {"GetScalarVolumeDisplayNode", PyvtkMRMLScalarVolumeNode_GetScalarVolumeDisplayNode, METH_VARARGS,
   "GetScalarVolumeDisplayNode(self) -> vtkMRMLScalarVolumeDisplayNode\nC++: virtual vtkMRMLScalarVolumeDisplayNode *GetScalarVolumeDisplayNode(\n    )\n\nAssociated display MRML node\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLScalarVolumeNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"CreateDefaultDisplayNodes", PyvtkMRMLScalarVolumeNode_CreateDefaultDisplayNodes, METH_VARARGS,
   "CreateDefaultDisplayNodes(self) -> None\nC++: void CreateDefaultDisplayNodes() override;\n\nCreate and observe default display node\n"},
  {"SetVoxelValueQuantity", PyvtkMRMLScalarVolumeNode_SetVoxelValueQuantity, METH_VARARGS,
   "SetVoxelValueQuantity(self, __a:vtkCodedEntry) -> None\nC++: void SetVoxelValueQuantity(vtkCodedEntry *)\n\nMeasured quantity of voxel values, specified as a standard coded\nentry. For example: (DCM, 112031, \"Attenuation Coefficient\")\n"},
  {"GetVoxelValueQuantity", PyvtkMRMLScalarVolumeNode_GetVoxelValueQuantity, METH_VARARGS,
   "GetVoxelValueQuantity(self) -> vtkCodedEntry\nC++: virtual vtkCodedEntry *GetVoxelValueQuantity()\n\n"},
  {"SetVoxelValueUnits", PyvtkMRMLScalarVolumeNode_SetVoxelValueUnits, METH_VARARGS,
   "SetVoxelValueUnits(self, __a:vtkCodedEntry) -> None\nC++: void SetVoxelValueUnits(vtkCodedEntry *)\n\nMeasurement unit of voxel value quantity, specified as a standard\ncoded entry. For example: (UCUM, [hnsf'U], \"Hounsfield unit\") It\nstores a single unit. Plural (units) name is chosen to be\nconsistent with nomenclature in the DICOM standard.\n"},
  {"GetVoxelValueUnits", PyvtkMRMLScalarVolumeNode_GetVoxelValueUnits, METH_VARARGS,
   "GetVoxelValueUnits(self) -> vtkCodedEntry\nC++: virtual vtkCodedEntry *GetVoxelValueUnits()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLScalarVolumeNode_Doc =
  "vtkMRMLScalarVolumeNode - MRML node for representing a volume (image\nstack).\n\n"
  "Superclass: vtkMRMLVolumeNode\n\n"
  "Volume nodes describe data sets that can be thought of as stacks of\n"
  "2D images that form a 3D volume. Volume nodes contain only the image\n"
  "data, where it is store on disk and how to read the files is\n"
  "controlled by the volume storage node, how to render the data (window\n"
  "and level) is controlled by the volume display nodes. Image\n"
  "information is extracted from the image headers (if they exist) at\n"
  "the time the MRML file is generated. Consequently, MRML files isolate\n"
  "MRML browsers from understanding how to read the myriad of file\n"
  "formats for medical data.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLScalarVolumeNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLScalarVolumeNode", // tp_name
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
  PyvtkMRMLScalarVolumeNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLScalarVolumeNode_StaticNew()
{
  return vtkMRMLScalarVolumeNode::New();
}

PyObject *PyvtkMRMLScalarVolumeNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLScalarVolumeNode_Type, PyvtkMRMLScalarVolumeNode_Methods,
    "vtkMRMLScalarVolumeNode",
 &PyvtkMRMLScalarVolumeNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLVolumeNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLScalarVolumeNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLScalarVolumeNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLScalarVolumeNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

