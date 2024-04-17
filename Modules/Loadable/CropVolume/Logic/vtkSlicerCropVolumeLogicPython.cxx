// python wrapper for vtkSlicerCropVolumeLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerCropVolumeLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerCropVolumeLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerCropVolumeLogic_ClassNew(); }


static PyObject *
PyvtkSlicerCropVolumeLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerCropVolumeLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCropVolumeLogic *op = static_cast<vtkSlicerCropVolumeLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerCropVolumeLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerCropVolumeLogic *tempr = vtkSlicerCropVolumeLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCropVolumeLogic *op = static_cast<vtkSlicerCropVolumeLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerCropVolumeLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerCropVolumeLogic::NewInstance());

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
PyvtkSlicerCropVolumeLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerCropVolumeLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCropVolumeLogic *op = static_cast<vtkSlicerCropVolumeLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerCropVolumeLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_Apply(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Apply");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCropVolumeLogic *op = static_cast<vtkSlicerCropVolumeLogic *>(vp);

  vtkMRMLCropVolumeParametersNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLCropVolumeParametersNode"))
  {
    int tempr = (ap.IsBound() ?
      op->Apply(temp0) :
      op->vtkSlicerCropVolumeLogic::Apply(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_CropVoxelBased(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CropVoxelBased");

  vtkMRMLDisplayableNode *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  vtkMRMLVolumeNode *temp2 = nullptr;
  bool temp3 = true;
  double temp4 = 0.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 5) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLVolumeNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    int tempr = vtkSlicerCropVolumeLogic::CropVoxelBased(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_GetVoxelBasedCropOutputExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVoxelBasedCropOutputExtent");

  vtkMRMLDisplayableNode *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    bool tempr = vtkSlicerCropVolumeLogic::GetVoxelBasedCropOutputExtent(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_CropInterpolated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CropInterpolated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCropVolumeLogic *op = static_cast<vtkSlicerCropVolumeLogic *>(vp);

  vtkMRMLDisplayableNode *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  vtkMRMLVolumeNode *temp2 = nullptr;
  bool temp3 = false;
  double temp4;
  int temp5;
  double temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLVolumeNode") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    int tempr = (ap.IsBound() ?
      op->CropInterpolated(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkSlicerCropVolumeLogic::CropInterpolated(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_GetInterpolatedCropOutputGeometry(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInterpolatedCropOutputGeometry");

  vtkMRMLDisplayableNode *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  bool temp2 = false;
  double temp3;
  const size_t size4 = 6;
  int temp4[6];
  int save4[6];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    bool tempr = vtkSlicerCropVolumeLogic::GetInterpolatedCropOutputGeometry(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_FitROIToInputVolume(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FitROIToInputVolume");

  vtkMRMLCropVolumeParametersNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLCropVolumeParametersNode"))
  {
    bool tempr = vtkSlicerCropVolumeLogic::FitROIToInputVolume(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_SnapROIToVoxelGrid(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SnapROIToVoxelGrid");

  vtkMRMLCropVolumeParametersNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLCropVolumeParametersNode"))
  {
    vtkSlicerCropVolumeLogic::SnapROIToVoxelGrid(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_IsROIAlignedWithInputVolume(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsROIAlignedWithInputVolume");

  vtkMRMLCropVolumeParametersNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLCropVolumeParametersNode"))
  {
    bool tempr = vtkSlicerCropVolumeLogic::IsROIAlignedWithInputVolume(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerCropVolumeLogic_RegisterNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerCropVolumeLogic *op = static_cast<vtkSlicerCropVolumeLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterNodes();
    }
    else
    {
      op->vtkSlicerCropVolumeLogic::RegisterNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerCropVolumeLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerCropVolumeLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerCropVolumeLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerCropVolumeLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerCropVolumeLogic\nC++: static vtkSlicerCropVolumeLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerCropVolumeLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerCropVolumeLogic\nC++: vtkSlicerCropVolumeLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerCropVolumeLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerCropVolumeLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Apply", PyvtkSlicerCropVolumeLogic_Apply, METH_VARARGS,
   "Apply(self, __a:vtkMRMLCropVolumeParametersNode) -> int\nC++: int Apply(vtkMRMLCropVolumeParametersNode *)\n\nCrop input volume using the specified ROI node.\n"},
  {"CropVoxelBased", PyvtkSlicerCropVolumeLogic_CropVoxelBased, METH_VARARGS,
   "CropVoxelBased(roi:vtkMRMLDisplayableNode,\n    inputVolume:vtkMRMLVolumeNode, outputNode:vtkMRMLVolumeNode,\n    limitToInputExtent:bool=True, fillValue:float=0.0) -> int\nC++: static int CropVoxelBased(vtkMRMLDisplayableNode *roi,\n    vtkMRMLVolumeNode *inputVolume, vtkMRMLVolumeNode *outputNode,\n     bool limitToInputExtent=true, double fillValue=0.0)\n\nPerform non-interpolated (voxel-based) cropping. If\nlimitToInputExtent is set to true (default) then the extent can\nonly be smaller than the input volume.\n"},
  {"GetVoxelBasedCropOutputExtent", PyvtkSlicerCropVolumeLogic_GetVoxelBasedCropOutputExtent, METH_VARARGS,
   "GetVoxelBasedCropOutputExtent(roi:vtkMRMLDisplayableNode,\n    inputVolume:vtkMRMLVolumeNode, outputExtent:[int, int, int,\n    int, int, int], limitToInputExtent:bool=False) -> bool\nC++: static bool GetVoxelBasedCropOutputExtent(\n    vtkMRMLDisplayableNode *roi, vtkMRMLVolumeNode *inputVolume,\n    int outputExtent[6], bool limitToInputExtent=false)\n\nCompute non-interpolated (voxel-based) cropping output volume\ngeometry (without actually cropping the image). If\nlimitToInputExtent is set to true (default) then the extent can\nonly be smaller than the input volume.\n"},
  {"CropInterpolated", PyvtkSlicerCropVolumeLogic_CropInterpolated, METH_VARARGS,
   "CropInterpolated(self, roi:vtkMRMLDisplayableNode,\n    inputVolume:vtkMRMLVolumeNode, outputNode:vtkMRMLVolumeNode,\n    isotropicResampling:bool, spacingScale:float,\n    interpolationMode:int, fillValue:float) -> int\nC++: int CropInterpolated(vtkMRMLDisplayableNode *roi,\n    vtkMRMLVolumeNode *inputVolume, vtkMRMLVolumeNode *outputNode,\n     bool isotropicResampling, double spacingScale,\n    int interpolationMode, double fillValue)\n\nPerform interpolated cropping.\n"},
  {"GetInterpolatedCropOutputGeometry", PyvtkSlicerCropVolumeLogic_GetInterpolatedCropOutputGeometry, METH_VARARGS,
   "GetInterpolatedCropOutputGeometry(roi:vtkMRMLDisplayableNode,\n    inputVolume:vtkMRMLVolumeNode, isotropicResampling:bool,\n    spacingScale:float, outputExtent:[int, int, int, int, int,\n    int], outputSpacing:[float, float, float]) -> bool\nC++: static bool GetInterpolatedCropOutputGeometry(\n    vtkMRMLDisplayableNode *roi, vtkMRMLVolumeNode *inputVolume,\n    bool isotropicResampling, double spacingScale,\n    int outputExtent[6], double outputSpacing[3])\n\nComputes output volume geometry for interpolated cropping\n(without actually cropping the image).\n"},
  {"FitROIToInputVolume", PyvtkSlicerCropVolumeLogic_FitROIToInputVolume, METH_VARARGS,
   "FitROIToInputVolume(\n    parametersNode:vtkMRMLCropVolumeParametersNode) -> bool\nC++: static bool FitROIToInputVolume(\n    vtkMRMLCropVolumeParametersNode *parametersNode)\n\nSets ROI to fit to input volume. If ROI is under a non-linear\ntransform then the ROI transform will be reset to RAS.\n"},
  {"SnapROIToVoxelGrid", PyvtkSlicerCropVolumeLogic_SnapROIToVoxelGrid, METH_VARARGS,
   "SnapROIToVoxelGrid(parametersNode:vtkMRMLCropVolumeParametersNode)\n     -> None\nC++: static void SnapROIToVoxelGrid(\n    vtkMRMLCropVolumeParametersNode *parametersNode)\n\n"},
  {"IsROIAlignedWithInputVolume", PyvtkSlicerCropVolumeLogic_IsROIAlignedWithInputVolume, METH_VARARGS,
   "IsROIAlignedWithInputVolume(\n    parametersNode:vtkMRMLCropVolumeParametersNode) -> bool\nC++: static bool IsROIAlignedWithInputVolume(\n    vtkMRMLCropVolumeParametersNode *parametersNode)\n\n"},
  {"RegisterNodes", PyvtkSlicerCropVolumeLogic_RegisterNodes, METH_VARARGS,
   "RegisterNodes(self) -> None\nC++: void RegisterNodes() override;\n\nRegister node classes into the MRML scene. Called each time a new\nscene is set. Do nothing by default. Can be reimplemented in\nderived classes.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerCropVolumeLogic_Doc =
  "vtkSlicerCropVolumeLogic - slicer logic class for volumes manipulation\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
  "This class manages the logic associated with reading, saving, and\n"
  "changing propertied of the volumes\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerCropVolumeLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerCropVolumeModuleLogicPython.vtkSlicerCropVolumeLogic", // tp_name
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
  PyvtkSlicerCropVolumeLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerCropVolumeLogic_StaticNew()
{
  return vtkSlicerCropVolumeLogic::New();
}

PyObject *PyvtkSlicerCropVolumeLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerCropVolumeLogic_Type, PyvtkSlicerCropVolumeLogic_Methods,
    "vtkSlicerCropVolumeLogic",
 &PyvtkSlicerCropVolumeLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerCropVolumeLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerCropVolumeLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerCropVolumeLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

