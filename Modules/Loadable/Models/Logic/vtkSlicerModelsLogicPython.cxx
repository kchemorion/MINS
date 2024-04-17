// python wrapper for vtkSlicerModelsLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerModelsLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerModelsLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerModelsLogic_ClassNew(); }


static PyObject *
PyvtkSlicerModelsLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerModelsLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerModelsLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerModelsLogic *op = static_cast<vtkSlicerModelsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerModelsLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerModelsLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerModelsLogic *tempr = vtkSlicerModelsLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerModelsLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerModelsLogic *op = static_cast<vtkSlicerModelsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerModelsLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerModelsLogic::NewInstance());

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
PyvtkSlicerModelsLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerModelsLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerModelsLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerModelsLogic *op = static_cast<vtkSlicerModelsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerModelsLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerModelsLogic_AddModel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerModelsLogic *op = static_cast<vtkSlicerModelsLogic *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkPolyData")))
  {
    vtkMRMLModelNode *tempr = (ap.IsBound() ?
      op->AddModel(temp0) :
      op->vtkSlicerModelsLogic::AddModel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerModelsLogic_AddModel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerModelsLogic *op = static_cast<vtkSlicerModelsLogic *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkAlgorithmOutput")))
  {
    vtkMRMLModelNode *tempr = (ap.IsBound() ?
      op->AddModel(temp0) :
      op->vtkSlicerModelsLogic::AddModel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerModelsLogic_AddModel_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerModelsLogic *op = static_cast<vtkSlicerModelsLogic *>(vp);

  const char *temp0 = nullptr;
  int temp1 = vtkMRMLStorageNode::CoordinateSystemLPS;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    vtkMRMLModelNode *tempr = (ap.IsBound() ?
      op->AddModel(temp0, temp1, temp2) :
      op->vtkSlicerModelsLogic::AddModel(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerModelsLogic_AddModel_Methods[] = {
  {"AddModel", PyvtkSlicerModelsLogic_AddModel_s1, METH_VARARGS,
   "@|V *vtkPolyData"},
  {"AddModel", PyvtkSlicerModelsLogic_AddModel_s2, METH_VARARGS,
   "@|V *vtkAlgorithmOutput"},
  {"AddModel", PyvtkSlicerModelsLogic_AddModel_s3, METH_VARARGS,
   "@z|iV *vtkMRMLMessageCollection"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSlicerModelsLogic_AddModel(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSlicerModelsLogic_AddModel_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return PyvtkSlicerModelsLogic_AddModel_s3(self, args);
    case 0:
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddModel");
  return nullptr;
}


static PyObject *
PyvtkSlicerModelsLogic_AddModels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddModels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerModelsLogic *op = static_cast<vtkSlicerModelsLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2 = vtkMRMLStorageNode::CoordinateSystemLPS;
  vtkMRMLMessageCollection *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkMRMLMessageCollection")))
  {
    int tempr = (ap.IsBound() ?
      op->AddModels(temp0, temp1, temp2, temp3) :
      op->vtkSlicerModelsLogic::AddModels(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerModelsLogic_SaveModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerModelsLogic *op = static_cast<vtkSlicerModelsLogic *>(vp);

  const char *temp0 = nullptr;
  vtkMRMLModelNode *temp1 = nullptr;
  int temp2 = vtkMRMLStorageNode::CoordinateSystemLPS;
  vtkMRMLMessageCollection *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLModelNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkMRMLMessageCollection")))
  {
    int tempr = (ap.IsBound() ?
      op->SaveModel(temp0, temp1, temp2, temp3) :
      op->vtkSlicerModelsLogic::SaveModel(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerModelsLogic_TransformModel(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformModel");

  vtkMRMLTransformNode *temp0 = nullptr;
  vtkMRMLModelNode *temp1 = nullptr;
  int temp2;
  vtkMRMLModelNode *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLModelNode") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkMRMLModelNode"))
  {
    vtkSlicerModelsLogic::TransformModel(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerModelsLogic_SetAllModelsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllModelsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerModelsLogic *op = static_cast<vtkSlicerModelsLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllModelsVisibility(temp0);
    }
    else
    {
      op->vtkSlicerModelsLogic::SetAllModelsVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerModelsLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerModelsLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerModelsLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerModelsLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerModelsLogic\nC++: static vtkSlicerModelsLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerModelsLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerModelsLogic\nC++: vtkSlicerModelsLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerModelsLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerModelsLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddModel", PyvtkSlicerModelsLogic_AddModel, METH_VARARGS,
   "AddModel(self, polyData:vtkPolyData=...) -> vtkMRMLModelNode\nC++: vtkMRMLModelNode *AddModel(vtkPolyData *polyData=nullptr)\nAddModel(self, polyData:vtkAlgorithmOutput=...)\n    -> vtkMRMLModelNode\nC++: vtkMRMLModelNode *AddModel(\n    vtkAlgorithmOutput *polyData=nullptr)\nAddModel(self, filename:str, coordinateSystem:int=...,\n    userMessages:vtkMRMLMessageCollection=...) -> vtkMRMLModelNode\nC++: vtkMRMLModelNode *AddModel(const char *filename,\n    int coordinateSystem=vtkMRMLStorageNode::CoordinateSystemLPS,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nAdd into the scene a new mrml model node with an existing\npolydata A display node is also added into the scene. param\npolyData surface mesh in RAS coordinate system.\n"},
  {"AddModels", PyvtkSlicerModelsLogic_AddModels, METH_VARARGS,
   "AddModels(self, dirname:str, suffix:str, coordinateSystem:int=...,\n     userMessages:vtkMRMLMessageCollection=...) -> int\nC++: int AddModels(const char *dirname, const char *suffix,\n    int coordinateSystem=vtkMRMLStorageNode::CoordinateSystemLPS,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nCreate model nodes and read their polydata from a specified\ndirectory\n\\param coordinateSystem If coordinate system is not specified\n  in the file then this coordinate system is used. Default is\nLPS.\n\\param userMessages User-displayable warning or error messages\n    can be received if userMessages object is\n  specified.\n"},
  {"SaveModel", PyvtkSlicerModelsLogic_SaveModel, METH_VARARGS,
   "SaveModel(self, filename:str, modelNode:vtkMRMLModelNode,\n    coordinateSystem:int=...,\n    userMessages:vtkMRMLMessageCollection=...) -> int\nC++: int SaveModel(const char *filename,\n    vtkMRMLModelNode *modelNode,\n    int coordinateSystem=vtkMRMLStorageNode::CoordinateSystemLPS,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nWrite model's polydata  to a specified file\n\\param coordinateSystem If coordinate system is not specified\n  in the file then this coordinate system is used. Default is -1,\nwhich means that\n  the coordinate system specified in the storage node will be\nused.\n\\param userMessages User-displayable warning or error messages\n    can be received if userMessages object is\n  specified.\n"},
  {"TransformModel", PyvtkSlicerModelsLogic_TransformModel, METH_VARARGS,
   "TransformModel(tnode:vtkMRMLTransformNode,\n    modelNode:vtkMRMLModelNode, transformNormals:int,\n    modelOut:vtkMRMLModelNode) -> None\nC++: static void TransformModel(vtkMRMLTransformNode *tnode,\n    vtkMRMLModelNode *modelNode, int transformNormals,\n    vtkMRMLModelNode *modelOut)\n\nTransform models's polydata\n"},
  {"SetAllModelsVisibility", PyvtkSlicerModelsLogic_SetAllModelsVisibility, METH_VARARGS,
   "SetAllModelsVisibility(self, flag:int) -> None\nC++: void SetAllModelsVisibility(int flag)\n\nIterate through all models in the scene, find all their display\nnodes and set their visibility flag to flag. Does not touch model\nhierarchy nodes with display nodes\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerModelsLogic_Doc =
  "vtkSlicerModelsLogic - no description provided.\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerModelsLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerModelsModuleLogicPython.vtkSlicerModelsLogic", // tp_name
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
  PyvtkSlicerModelsLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerModelsLogic_StaticNew()
{
  return vtkSlicerModelsLogic::New();
}

PyObject *PyvtkSlicerModelsLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerModelsLogic_Type, PyvtkSlicerModelsLogic_Methods,
    "vtkSlicerModelsLogic",
 &PyvtkSlicerModelsLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerModelsLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerModelsLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerModelsLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

