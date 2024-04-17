// python wrapper for vtkSlicerSegmentationsModuleLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerSegmentationsModuleLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerSegmentationsModuleLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerSegmentationsModuleLogic_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerSegmentationsModuleLogic_SegmentStatus_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSegmentationsModuleLogicPython.vtkSlicerSegmentationsModuleLogic.SegmentStatus", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkSlicerSegmentationsModuleLogic_SegmentStatus_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSlicerSegmentationsModuleLogic_SegmentStatus_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerSegmentationsModuleLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerSegmentationsModuleLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerSegmentationsModuleLogic *tempr = vtkSlicerSegmentationsModuleLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerSegmentationsModuleLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerSegmentationsModuleLogic::NewInstance());

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
PyvtkSlicerSegmentationsModuleLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerSegmentationsModuleLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerSegmentationsModuleLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSegmentationNodeForSegmentation(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentationNodeForSegmentation");

  vtkMRMLScene *temp0 = nullptr;
  vtkSegmentation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkSegmentation"))
  {
    vtkMRMLSegmentationNode *tempr = vtkSlicerSegmentationsModuleLogic::GetSegmentationNodeForSegmentation(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSegmentationNodeForSegment(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentationNodeForSegment");

  vtkMRMLScene *temp0 = nullptr;
  vtkSegment *temp1 = nullptr;
  std::string temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkSegment") &&
      ap.GetValue(temp2))
  {
    vtkMRMLSegmentationNode *tempr = vtkSlicerSegmentationsModuleLogic::GetSegmentationNodeForSegment(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_LoadSegmentationFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadSegmentationFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = true;
  const char *temp2 = nullptr;
  vtkMRMLColorTableNode *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkMRMLColorTableNode")))
  {
    vtkMRMLSegmentationNode *tempr = (ap.IsBound() ?
      op->LoadSegmentationFromFile(temp0, temp1, temp2, temp3) :
      op->vtkSlicerSegmentationsModuleLogic::LoadSegmentationFromFile(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_CreateLabelmapVolumeFromOrientedImageData(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateLabelmapVolumeFromOrientedImageData");

  vtkOrientedImageData *temp0 = nullptr;
  vtkMRMLLabelMapVolumeNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkMRMLLabelMapVolumeNode"))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::CreateLabelmapVolumeFromOrientedImageData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_CopyOrientedImageDataToVolumeNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CopyOrientedImageDataToVolumeNode");

  vtkOrientedImageData *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  bool temp2 = true;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::CopyOrientedImageDataToVolumeNode(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_CreateOrientedImageDataFromVolumeNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateOrientedImageDataFromVolumeNode");

  vtkMRMLScalarVolumeNode *temp0 = nullptr;
  vtkMRMLTransformNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLScalarVolumeNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLTransformNode")))
  {
    vtkOrientedImageData *tempr = vtkSlicerSegmentationsModuleLogic::CreateOrientedImageDataFromVolumeNode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_DoesLabelmapContainSingleLabel(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DoesLabelmapContainSingleLabel");

  vtkMRMLLabelMapVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLLabelMapVolumeNode"))
  {
    int tempr = vtkSlicerSegmentationsModuleLogic::DoesLabelmapContainSingleLabel(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetAllLabelValues(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAllLabelValues");

  vtkIntArray *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    vtkSlicerSegmentationsModuleLogic::GetAllLabelValues(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_CreateSegmentFromLabelmapVolumeNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateSegmentFromLabelmapVolumeNode");

  vtkMRMLLabelMapVolumeNode *temp0 = nullptr;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLLabelMapVolumeNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode")))
  {
    vtkSegment *tempr = vtkSlicerSegmentationsModuleLogic::CreateSegmentFromLabelmapVolumeNode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_CreateSegmentFromModelNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateSegmentFromModelNode");

  vtkMRMLModelNode *temp0 = nullptr;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLModelNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode")))
  {
    vtkSegment *tempr = vtkSlicerSegmentationsModuleLogic::CreateSegmentFromModelNode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSegmentationNodeForSegmentSubjectHierarchyItem(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentationNodeForSegmentSubjectHierarchyItem");

  long long temp0;
  vtkMRMLScene *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLScene"))
  {
    vtkMRMLSegmentationNode *tempr = vtkSlicerSegmentationsModuleLogic::GetSegmentationNodeForSegmentSubjectHierarchyItem(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSegmentForSegmentSubjectHierarchyItem(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentForSegmentSubjectHierarchyItem");

  long long temp0;
  vtkMRMLScene *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLScene"))
  {
    vtkSegment *tempr = vtkSlicerSegmentationsModuleLogic::GetSegmentForSegmentSubjectHierarchyItem(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportSegmentToRepresentationNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportSegmentToRepresentationNode");

  vtkSegment *temp0 = nullptr;
  vtkMRMLNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSegment") &&
      ap.GetVTKObject(temp1, "vtkMRMLNode"))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ExportSegmentToRepresentationNode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToModels_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportSegmentsToModels");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  long long temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetArray(temp1.data(), temp1.size()) &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ExportSegmentsToModels(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToModels_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportSegmentsToModels");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  long long temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetVTKObject(temp1, "vtkStringArray") &&
      ap.GetValue(temp2))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ExportSegmentsToModels(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToModels_Methods[] = {
  {"ExportSegmentsToModels", PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToModels_s1, METH_VARARGS | METH_STATIC,
   "VTk *vtkMRMLSegmentationNode s"},
  {"ExportSegmentsToModels", PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToModels_s2, METH_VARARGS | METH_STATIC,
   "VVk *vtkMRMLSegmentationNode *vtkStringArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToModels(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToModels_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ExportSegmentsToModels");
  return nullptr;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportVisibleSegmentsToModels(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportVisibleSegmentsToModels");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ExportVisibleSegmentsToModels(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportAllSegmentsToModels(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportAllSegmentsToModels");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ExportAllSegmentsToModels(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToLabelmapNode_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportSegmentsToLabelmapNode");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  vtkMRMLLabelMapVolumeNode *temp2 = nullptr;
  vtkMRMLVolumeNode *temp3 = nullptr;
  int temp4 = vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS;
  vtkMRMLColorTableNode *temp5 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 6) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetArray(temp1.data(), temp1.size()) &&
      ap.GetVTKObject(temp2, "vtkMRMLLabelMapVolumeNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkMRMLVolumeNode")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp5, "vtkMRMLColorTableNode")))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ExportSegmentsToLabelmapNode(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToLabelmapNode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportSegmentsToLabelmapNode");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  vtkMRMLLabelMapVolumeNode *temp2 = nullptr;
  vtkMRMLVolumeNode *temp3 = nullptr;
  int temp4 = vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS;
  vtkMRMLColorTableNode *temp5 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 6) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetVTKObject(temp1, "vtkStringArray") &&
      ap.GetVTKObject(temp2, "vtkMRMLLabelMapVolumeNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkMRMLVolumeNode")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp5, "vtkMRMLColorTableNode")))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ExportSegmentsToLabelmapNode(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToLabelmapNode_Methods[] = {
  {"ExportSegmentsToLabelmapNode", PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToLabelmapNode_s1, METH_VARARGS | METH_STATIC,
   "VTV|ViV *vtkMRMLSegmentationNode s *vtkMRMLLabelMapVolumeNode *vtkMRMLVolumeNode *vtkMRMLColorTableNode"},
  {"ExportSegmentsToLabelmapNode", PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToLabelmapNode_s2, METH_VARARGS | METH_STATIC,
   "VVV|ViV *vtkMRMLSegmentationNode *vtkStringArray *vtkMRMLLabelMapVolumeNode *vtkMRMLVolumeNode *vtkMRMLColorTableNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToLabelmapNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToLabelmapNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
    case 4:
    case 5:
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ExportSegmentsToLabelmapNode");
  return nullptr;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportVisibleSegmentsToLabelmapNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportVisibleSegmentsToLabelmapNode");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  vtkMRMLLabelMapVolumeNode *temp1 = nullptr;
  vtkMRMLVolumeNode *temp2 = nullptr;
  int temp3 = vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLLabelMapVolumeNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLVolumeNode")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ExportVisibleSegmentsToLabelmapNode(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportAllSegmentsToLabelmapNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportAllSegmentsToLabelmapNode");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  vtkMRMLLabelMapVolumeNode *temp1 = nullptr;
  int temp2 = vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLLabelMapVolumeNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ExportAllSegmentsToLabelmapNode(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ImportLabelmapToSegmentationNode");

  vtkMRMLLabelMapVolumeNode *temp0 = nullptr;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  std::string temp2 = "";
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLLabelMapVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ImportLabelmapToSegmentationNode(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ImportLabelmapToSegmentationNode");

  vtkOrientedImageData *temp0 = nullptr;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  std::string temp2 = "";
  std::string temp3 = "";
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ImportLabelmapToSegmentationNode(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ImportLabelmapToSegmentationNode");

  vtkMRMLLabelMapVolumeNode *temp0 = nullptr;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  vtkStringArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLLabelMapVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      ap.GetVTKObject(temp2, "vtkStringArray"))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ImportLabelmapToSegmentationNode(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ImportLabelmapToSegmentationNode");

  vtkOrientedImageData *temp0 = nullptr;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  vtkStringArray *temp2 = nullptr;
  vtkGeneralTransform *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      ap.GetVTKObject(temp2, "vtkStringArray") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkGeneralTransform")))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ImportLabelmapToSegmentationNode(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode_Methods[] = {
  {"ImportLabelmapToSegmentationNode", PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode_s1, METH_VARARGS | METH_STATIC,
   "VV|s *vtkMRMLLabelMapVolumeNode *vtkMRMLSegmentationNode"},
  {"ImportLabelmapToSegmentationNode", PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode_s2, METH_VARARGS | METH_STATIC,
   "VV|ss *vtkOrientedImageData *vtkMRMLSegmentationNode"},
  {"ImportLabelmapToSegmentationNode", PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode_s3, METH_VARARGS | METH_STATIC,
   "VVV *vtkMRMLLabelMapVolumeNode *vtkMRMLSegmentationNode *vtkStringArray"},
  {"ImportLabelmapToSegmentationNode", PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode_s4, METH_VARARGS | METH_STATIC,
   "VVV|V *vtkOrientedImageData *vtkMRMLSegmentationNode *vtkStringArray *vtkGeneralTransform"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ImportLabelmapToSegmentationNode");
  return nullptr;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNodeWithTerminology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImportLabelmapToSegmentationNodeWithTerminology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  vtkMRMLLabelMapVolumeNode *temp0 = nullptr;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  std::string temp2;
  std::string temp3 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkMRMLLabelMapVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = (ap.IsBound() ?
      op->ImportLabelmapToSegmentationNodeWithTerminology(temp0, temp1, temp2, temp3) :
      op->vtkSlicerSegmentationsModuleLogic::ImportLabelmapToSegmentationNodeWithTerminology(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ImportModelToSegmentationNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ImportModelToSegmentationNode");

  vtkMRMLModelNode *temp0 = nullptr;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  std::string temp2 = "";
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLModelNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ImportModelToSegmentationNode(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ImportModelsToSegmentationNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ImportModelsToSegmentationNode");

  long long temp0;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  std::string temp2 = "";
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ImportModelsToSegmentationNode(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsClosedSurfaceRepresentationToFiles(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportSegmentsClosedSurfaceRepresentationToFiles");

  std::string temp0;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  vtkStringArray *temp2 = nullptr;
  std::string temp3 = "STL";
  bool temp4 = true;
  double temp5 = 1.0;
  bool temp6 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 7) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ExportSegmentsClosedSurfaceRepresentationToFiles(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetLabelValuesFromColorNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLabelValuesFromColorNode");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  vtkMRMLColorTableNode *temp1 = nullptr;
  vtkStringArray *temp2 = nullptr;
  vtkIntArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLColorTableNode") &&
      ap.GetVTKObject(temp2, "vtkStringArray") &&
      ap.GetVTKObject(temp3, "vtkIntArray"))
  {
    vtkSlicerSegmentationsModuleLogic::GetLabelValuesFromColorNode(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsBinaryLabelmapRepresentationToFiles(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportSegmentsBinaryLabelmapRepresentationToFiles");

  std::string temp0;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  vtkStringArray *temp2 = nullptr;
  std::string temp3 = "nrrd";
  bool temp4 = false;
  vtkMRMLVolumeNode *temp5 = nullptr;
  int temp6 = vtkSegmentation::EXTENT_REFERENCE_GEOMETRY;
  vtkMRMLColorTableNode *temp7 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 8) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp5, "vtkMRMLVolumeNode")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp7, "vtkMRMLColorTableNode")))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ExportSegmentsBinaryLabelmapRepresentationToFiles(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_CreateRepresentationForOneSegment(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateRepresentationForOneSegment");

  vtkSegmentation *temp0 = nullptr;
  std::string temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSegmentation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkDataObject *tempr = vtkSlicerSegmentationsModuleLogic::CreateRepresentationForOneSegment(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ApplyParentTransformToOrientedImageData(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyParentTransformToOrientedImageData");

  vtkMRMLTransformableNode *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  bool temp2 = false;
  size_t size3 = 0;
  double store3[2*4];
  double *temp3 = nullptr;
  double *save3 = nullptr;
  if (ap.GetArgSize(3) > 0)
  {
    size3 = 4;
    temp3 = store3;
    save3 = store3 + 4;
  }
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformableNode") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    bool tempr = vtkSlicerSegmentationsModuleLogic::ApplyParentTransformToOrientedImageData(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ApplyParentTransformToPolyData(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ApplyParentTransformToPolyData");

  vtkMRMLTransformableNode *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformableNode") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ApplyParentTransformToPolyData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetTransformBetweenRepresentationAndSegmentation(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTransformBetweenRepresentationAndSegmentation");

  vtkMRMLTransformableNode *temp0 = nullptr;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  vtkGeneralTransform *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformableNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      ap.GetVTKObject(temp2, "vtkGeneralTransform"))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::GetTransformBetweenRepresentationAndSegmentation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSegmentRepresentation(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentRepresentation");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  std::string temp1;
  std::string temp2;
  vtkDataObject *temp3 = nullptr;
  bool temp4 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::GetSegmentRepresentation(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSegmentBinaryLabelmapRepresentation(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentBinaryLabelmapRepresentation");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  std::string temp1;
  vtkOrientedImageData *temp2 = nullptr;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::GetSegmentBinaryLabelmapRepresentation(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSegmentClosedSurfaceRepresentation(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentClosedSurfaceRepresentation");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  std::string temp1;
  vtkPolyData *temp2 = nullptr;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPolyData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::GetSegmentClosedSurfaceRepresentation(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_SetBinaryLabelmapToSegment(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetBinaryLabelmapToSegment");

  vtkOrientedImageData *temp0 = nullptr;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  std::string temp2;
  int temp3 = vtkSlicerSegmentationsModuleLogic::MODE_REPLACE;
  size_t size4 = 0;
  int store4[6];
  int *temp4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 6;
    temp4 = store4;
  }
  bool temp5 = false;
  std::vector<std::string> temp6(ap.GetArgSize(6));
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 7) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp6.data(), temp6.size())))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::SetBinaryLabelmapToSegment(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_SetTerminologyToSegmentationFromLabelmapNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminologyToSegmentationFromLabelmapNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  vtkMRMLSegmentationNode *temp0 = nullptr;
  vtkMRMLLabelMapVolumeNode *temp1 = nullptr;
  std::string temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLLabelMapVolumeNode") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->SetTerminologyToSegmentationFromLabelmapNode(temp0, temp1, temp2) :
      op->vtkSlicerSegmentationsModuleLogic::SetTerminologyToSegmentationFromLabelmapNode(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetDefaultSegmentationNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultSegmentationNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSegmentationNode *tempr = (ap.IsBound() ?
      op->GetDefaultSegmentationNode() :
      op->vtkSlicerSegmentationsModuleLogic::GetDefaultSegmentationNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetDefaultSurfaceSmoothingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultSurfaceSmoothingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDefaultSurfaceSmoothingEnabled() :
      op->vtkSlicerSegmentationsModuleLogic::GetDefaultSurfaceSmoothingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_SetDefaultSurfaceSmoothingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultSurfaceSmoothingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultSurfaceSmoothingEnabled(temp0);
    }
    else
    {
      op->vtkSlicerSegmentationsModuleLogic::SetDefaultSurfaceSmoothingEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetDefaultSegmentEditorNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultSegmentEditorNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSegmentEditorNode *tempr = (ap.IsBound() ?
      op->GetDefaultSegmentEditorNode() :
      op->vtkSlicerSegmentationsModuleLogic::GetDefaultSegmentEditorNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetDefaultOverwriteMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultOverwriteMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultOverwriteMode() :
      op->vtkSlicerSegmentationsModuleLogic::GetDefaultOverwriteMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_SetDefaultOverwriteMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultOverwriteMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSegmentationsModuleLogic *op = static_cast<vtkSlicerSegmentationsModuleLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultOverwriteMode(temp0);
    }
    else
    {
      op->vtkSlicerSegmentationsModuleLogic::SetDefaultOverwriteMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSegmentStatusAsHumanReadableString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentStatusAsHumanReadableString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkSlicerSegmentationsModuleLogic::GetSegmentStatusAsHumanReadableString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSegmentStatusAsMachineReadableString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentStatusAsMachineReadableString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkSlicerSegmentationsModuleLogic::GetSegmentStatusAsMachineReadableString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSegmentStatusFromMachineReadableString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentStatusFromMachineReadableString");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerSegmentationsModuleLogic::GetSegmentStatusFromMachineReadableString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetStatusTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStatusTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSlicerSegmentationsModuleLogic::GetStatusTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSegmentStatus(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSegmentStatus");

  vtkSegment *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegment"))
  {
    int tempr = vtkSlicerSegmentationsModuleLogic::GetSegmentStatus(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_SetSegmentStatus(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetSegmentStatus");

  vtkSegment *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSegment") &&
      ap.GetValue(temp1))
  {
    vtkSlicerSegmentationsModuleLogic::SetSegmentStatus(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ClearSegment(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ClearSegment");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ClearSegment(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GetSharedSegmentIDsInMask(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSharedSegmentIDsInMask");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  std::string temp1;
  vtkOrientedImageData *temp2 = nullptr;
  const size_t size3 = 6;
  int temp3[6];
  std::vector<std::string> temp4(ap.GetArgSize(4));
  int temp5 = 0.0;
  bool temp6 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5, 7) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkOrientedImageData") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4.data(), temp4.size()) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::GetSharedSegmentIDsInMask(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp4.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp4.data(), temp4.size()));
      ap.SetContents(4, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_ReconvertAllRepresentations(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ReconvertAllRepresentations");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      (ap.NoArgsLeft() || ap.GetArray(temp1.data(), temp1.size())))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::ReconvertAllRepresentations(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_CollapseBinaryLabelmaps(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CollapseBinaryLabelmaps");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetValue(temp1))
  {
    vtkSlicerSegmentationsModuleLogic::CollapseBinaryLabelmaps(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_GenerateMergedLabelmapInReferenceGeometry(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GenerateMergedLabelmapInReferenceGeometry");

  vtkMRMLSegmentationNode *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  vtkStringArray *temp2 = nullptr;
  int temp3;
  vtkOrientedImageData *temp4 = nullptr;
  vtkIntArray *temp5 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5, 6) &&
      ap.GetVTKObject(temp0, "vtkMRMLSegmentationNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      ap.GetVTKObject(temp2, "vtkStringArray") &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp5, "vtkIntArray")))
  {
    vtkSlicerSegmentationsModuleLogic::GenerateMergedLabelmapInReferenceGeometry(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_IsEffectiveExentOutsideReferenceVolume(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsEffectiveExentOutsideReferenceVolume");

  vtkMRMLVolumeNode *temp0 = nullptr;
  vtkMRMLSegmentationNode *temp1 = nullptr;
  vtkStringArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLSegmentationNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkStringArray")))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::IsEffectiveExentOutsideReferenceVolume(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSegmentationsModuleLogic_IsSegmentationExentOutsideReferenceGeometry(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSegmentationExentOutsideReferenceGeometry");

  vtkOrientedImageData *temp0 = nullptr;
  vtkOrientedImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData"))
  {
    bool tempr = vtkSlicerSegmentationsModuleLogic::IsSegmentationExentOutsideReferenceGeometry(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerSegmentationsModuleLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerSegmentationsModuleLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerSegmentationsModuleLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerSegmentationsModuleLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerSegmentationsModuleLogic\nC++: static vtkSlicerSegmentationsModuleLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerSegmentationsModuleLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerSegmentationsModuleLogic\nC++: vtkSlicerSegmentationsModuleLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerSegmentationsModuleLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerSegmentationsModuleLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetSegmentationNodeForSegmentation", PyvtkSlicerSegmentationsModuleLogic_GetSegmentationNodeForSegmentation, METH_VARARGS,
   "GetSegmentationNodeForSegmentation(scene:vtkMRMLScene,\n    segmentation:vtkSegmentation) -> vtkMRMLSegmentationNode\nC++: static vtkMRMLSegmentationNode *GetSegmentationNodeForSegmentation(\n    vtkMRMLScene *scene, vtkSegmentation *segmentation)\n\nGet segmentation node containing a segmentation object. As\nsegmentation objects are out-of-MRML VTK objects, there is no\ndirect link from it to its parent node, so must be found from the\nMRML scene.\n\\param scene MRML scene\n\\param segmentation Segmentation to find\n\\return Segmentation node containing the given segmentation if\n    any, nullptr otherwise\n"},
  {"GetSegmentationNodeForSegment", PyvtkSlicerSegmentationsModuleLogic_GetSegmentationNodeForSegment, METH_VARARGS,
   "GetSegmentationNodeForSegment(scene:vtkMRMLScene,\n    segment:vtkSegment, segmentId:str) -> vtkMRMLSegmentationNode\nC++: static vtkMRMLSegmentationNode *GetSegmentationNodeForSegment(\n    vtkMRMLScene *scene, vtkSegment *segment,\n    std::string &segmentId)\n\nGet segmentation node containing a given segment. As segments are\nout-of-MRML VTK objects, there is no direct link from it to its\nparent node, so must be found from the MRML scene.\n\\param scene MRML scene\n\\param segment Segment to find\n\\param segmentId Output argument for the ID of the found segment\n\\return Segmentation node containing the given segment if any,\n    nullptr otherwise\n"},
  {"LoadSegmentationFromFile", PyvtkSlicerSegmentationsModuleLogic_LoadSegmentationFromFile, METH_VARARGS,
   "LoadSegmentationFromFile(self, filename:str,\n    autoOpacities:bool=True, nodeName:str=...,\n    colorTableNode:vtkMRMLColorTableNode=...)\n    -> vtkMRMLSegmentationNode\nC++: vtkMRMLSegmentationNode *LoadSegmentationFromFile(\n    const char *filename, bool autoOpacities=true,\n    const char *nodeName=nullptr,\n    vtkMRMLColorTableNode *colorTableNode=nullptr)\n\nLoad segmentation from file\n\\param filename Path and name of file containing segmentation\n    (nrrd, vtm, etc.)\n\\param autoOpacities Optional flag determining whether segment\n    opacities are calculated automatically based on containment.\n    True by default.\n\\param nodeName Optional string to use for the segmentation node\n    name.\n\\param colorTableNode Optional color node used to name the\n    segments and set segment color.\n\\return Loaded segmentation node\n"},
  {"CreateLabelmapVolumeFromOrientedImageData", PyvtkSlicerSegmentationsModuleLogic_CreateLabelmapVolumeFromOrientedImageData, METH_VARARGS,
   "CreateLabelmapVolumeFromOrientedImageData(\n    orientedImageData:vtkOrientedImageData,\n    labelmapVolumeNode:vtkMRMLLabelMapVolumeNode) -> bool\nC++: static bool CreateLabelmapVolumeFromOrientedImageData(\n    vtkOrientedImageData *orientedImageData,\n    vtkMRMLLabelMapVolumeNode *labelmapVolumeNode)\n\nCreate labelmap volume MRML node from oriented image data.\nCreates a display node if a display node does not exist. Shifts\nimage extent to start from zero. Image is shallow-copied (voxel\narray is not duplicated).\n\\param orientedImageData Oriented image data to create labelmap\n    from\n\\param labelmapVolumeNode Labelmap volume to be populated with\n    the oriented image data. The volume node must exist and be\n    added to the MRML scene.\n\\return Success flag\n"},
  {"CopyOrientedImageDataToVolumeNode", PyvtkSlicerSegmentationsModuleLogic_CopyOrientedImageDataToVolumeNode, METH_VARARGS,
   "CopyOrientedImageDataToVolumeNode(\n    orientedImageData:vtkOrientedImageData,\n    volumeNode:vtkMRMLVolumeNode, shallowCopy:bool=True,\n    shiftImageDataExtentToZeroStart:bool=True) -> bool\nC++: static bool CopyOrientedImageDataToVolumeNode(\n    vtkOrientedImageData *orientedImageData,\n    vtkMRMLVolumeNode *volumeNode, bool shallowCopy=true,\n    bool shiftImageDataExtentToZeroStart=true)\n\nCreate volume MRML node from oriented image data. Display node is\nnot created.\n\\param orientedImageData Oriented image data to create volume\n    node from\n\\param scalarVolumeNode Volume to be populated with the oriented\n    image data.\n\\param shallowCopy If true then voxel array is not duplicated.\n\\param shiftImageDataExtentToZeroStart: Adjust image origin to\n    make image extents start from zero. May be necessary for\n    compatibility with some algorithms\n       that assumes image extent start from 0.\n\\return Success flag\n"},
  {"CreateOrientedImageDataFromVolumeNode", PyvtkSlicerSegmentationsModuleLogic_CreateOrientedImageDataFromVolumeNode, METH_VARARGS,
   "CreateOrientedImageDataFromVolumeNode(\n    volumeNode:vtkMRMLScalarVolumeNode,\n    outputParentTransformNode:vtkMRMLTransformNode=...)\n    -> vtkOrientedImageData\nC++: static vtkOrientedImageData *CreateOrientedImageDataFromVolumeNode(\n    vtkMRMLScalarVolumeNode *volumeNode,\n    vtkMRMLTransformNode *outputParentTransformNode=nullptr)\n\nCreate oriented image data from a volume node\n\\param outputParentTransformNode Specifies the parent transform\n    node where the created image data can be placed.\nNOTE: Need to take ownership of the created object! For example\nusing vtkSmartPointer::Take\n"},
  {"DoesLabelmapContainSingleLabel", PyvtkSlicerSegmentationsModuleLogic_DoesLabelmapContainSingleLabel, METH_VARARGS,
   "DoesLabelmapContainSingleLabel(\n    labelmapVolumeNode:vtkMRMLLabelMapVolumeNode) -> int\nC++: static int DoesLabelmapContainSingleLabel(\n    vtkMRMLLabelMapVolumeNode *labelmapVolumeNode)\n\nUtility function to determine if a labelmap contains a single\nlabel\n\\return 0 if contains no label or multiple labels, the label if\n    it contains a single one\n"},
  {"GetAllLabelValues", PyvtkSlicerSegmentationsModuleLogic_GetAllLabelValues, METH_VARARGS,
   "GetAllLabelValues(labels:vtkIntArray, labelmap:vtkImageData)\n    -> None\nC++: static void GetAllLabelValues(vtkIntArray *labels,\n    vtkImageData *labelmap)\n\nUtility function that returns all non-empty label values in a\nlabelmap\n"},
  {"CreateSegmentFromLabelmapVolumeNode", PyvtkSlicerSegmentationsModuleLogic_CreateSegmentFromLabelmapVolumeNode, METH_VARARGS,
   "CreateSegmentFromLabelmapVolumeNode(\n    labelmapVolumeNode:vtkMRMLLabelMapVolumeNode,\n    segmentationNode:vtkMRMLSegmentationNode=...) -> vtkSegment\nC++: static vtkSegment *CreateSegmentFromLabelmapVolumeNode(\n    vtkMRMLLabelMapVolumeNode *labelmapVolumeNode,\n    vtkMRMLSegmentationNode *segmentationNode=nullptr)\n\nCreate segment from labelmap volume MRML node. The contents are\nset as binary labelmap representation in the segment. Returns\nnullptr if labelmap contains more than one label. In that case\n\\sa ImportLabelmapToSegmentationNode needs to be used. NOTE: Need\nto take ownership of the created object! For example using\nvtkSmartPointer::Take\n\\param labelmapVolumeNode Model node containing image data that\n    will be the binary labelmap representation in the created\n    segment\n\\param segmentationNode Segmentation node that will be the\n    container of the segment. It is used to get parent transform\n    to\n  make sure the created segment will be located the same place\nthe image was, considering all transforms involved. nullptr value\n  means that this consideration is not needed. Default value is\nnullptr.\n\\return Created segment that then can be added to the\n    segmentation if needed. Need to take ownership of the created\n  object! For example using vtkSmartPointer::Take\n"},
  {"CreateSegmentFromModelNode", PyvtkSlicerSegmentationsModuleLogic_CreateSegmentFromModelNode, METH_VARARGS,
   "CreateSegmentFromModelNode(modelNode:vtkMRMLModelNode,\n    segmentationNode:vtkMRMLSegmentationNode=...) -> vtkSegment\nC++: static vtkSegment *CreateSegmentFromModelNode(\n    vtkMRMLModelNode *modelNode,\n    vtkMRMLSegmentationNode *segmentationNode=nullptr)\n\nCreate segment from model MRML node. The contents are set as\nclosed surface model representation in the segment. NOTE: Need to\ntake ownership of the created object! For example using\nvtkSmartPointer::Take\n\\param modelNode Model node containing poly data that will be the\nclosed surface representation in the created segment\n\\param segmentationNode Segmentation node that will be the\n    container of the segment. It is used to get parent transform\n    to\n  make sure the created segment will be located the same place\nthe model was, considering all transforms involved. nullptr value\n  means that this consideration is not needed. Default value is\nnullptr.\n\\return Created segment that then can be added to the\n    segmentation if needed. Need to take ownership of the created\n  object! For example using vtkSmartPointer::Take\n"},
  {"GetSegmentationNodeForSegmentSubjectHierarchyItem", PyvtkSlicerSegmentationsModuleLogic_GetSegmentationNodeForSegmentSubjectHierarchyItem, METH_VARARGS,
   "GetSegmentationNodeForSegmentSubjectHierarchyItem(\n    segmentShItemID:int, scene:vtkMRMLScene)\n    -> vtkMRMLSegmentationNode\nC++: static vtkMRMLSegmentationNode *GetSegmentationNodeForSegmentSubjectHierarchyItem(\n    vtkIdType segmentShItemID, vtkMRMLScene *scene)\n\nUtility function for getting the segmentation node for a\nsegmentation or segment subject hierarchy item.\n"},
  {"GetSegmentForSegmentSubjectHierarchyItem", PyvtkSlicerSegmentationsModuleLogic_GetSegmentForSegmentSubjectHierarchyItem, METH_VARARGS,
   "GetSegmentForSegmentSubjectHierarchyItem(segmentShItemID:int,\n    scene:vtkMRMLScene) -> vtkSegment\nC++: static vtkSegment *GetSegmentForSegmentSubjectHierarchyItem(\n    vtkIdType segmentShItemID, vtkMRMLScene *scene)\n\nUtility function for getting the segment object for a segment\nsubject hierarchy item\n"},
  {"ExportSegmentToRepresentationNode", PyvtkSlicerSegmentationsModuleLogic_ExportSegmentToRepresentationNode, METH_VARARGS,
   "ExportSegmentToRepresentationNode(segment:vtkSegment,\n    representationNode:vtkMRMLNode) -> bool\nC++: static bool ExportSegmentToRepresentationNode(\n    vtkSegment *segment, vtkMRMLNode *representationNode)\n\nExport segment to representation MRML node.\n1. If representation node is a labelmap node, then the binary\n   labelmap representation of the segment is copied\n2. If representation node is a model node, then the closed\n   surface representation is copied Otherwise return with\n   failure.\n"},
  {"ExportSegmentsToModels", PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToModels, METH_VARARGS,
   "ExportSegmentsToModels(segmentationNode:vtkMRMLSegmentationNode,\n    segmentIDs:(str, ...), folderItemId:int) -> bool\nC++: static bool ExportSegmentsToModels(\n    vtkMRMLSegmentationNode *segmentationNode,\n    const std::vector<std::string> &segmentIDs,\n    vtkIdType folderItemId)\nExportSegmentsToModels(segmentationNode:vtkMRMLSegmentationNode,\n    segmentIds:vtkStringArray, folderItemId:int) -> bool\nC++: static bool ExportSegmentsToModels(\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkStringArray *segmentIds, vtkIdType folderItemId)\n\nExport multiple segments into a folder, a model node from each\nsegment\n\\param segmentationNode Segmentation node from which the the\n    segments are exported\n\\param segmentIds List of segment IDs to export\n\\param folderItemId Subject hierarchy folder item ID to export\n    the segments to\n"},
  {"ExportVisibleSegmentsToModels", PyvtkSlicerSegmentationsModuleLogic_ExportVisibleSegmentsToModels, METH_VARARGS,
   "ExportVisibleSegmentsToModels(\n    segmentationNode:vtkMRMLSegmentationNode, folderItemId:int)\n    -> bool\nC++: static bool ExportVisibleSegmentsToModels(\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkIdType folderItemId)\n\nExport visible segments into a folder, a model node from each\nsegment\n\\param segmentationNode Segmentation node from which the the\n    segments are exported\n\\param folderItemId Subject hierarchy folder item ID to export\n    the segments to\n"},
  {"ExportAllSegmentsToModels", PyvtkSlicerSegmentationsModuleLogic_ExportAllSegmentsToModels, METH_VARARGS,
   "ExportAllSegmentsToModels(\n    segmentationNode:vtkMRMLSegmentationNode, folderItemId:int)\n    -> bool\nC++: static bool ExportAllSegmentsToModels(\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkIdType folderItemId)\n\nExport all segments into a folder, a model node from each segment\n\\param segmentationNode Segmentation node from which the the\n    segments are exported\n\\param folderItemId Subject hierarchy folder item ID to export\n    the segments to\n"},
  {"ExportSegmentsToLabelmapNode", PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsToLabelmapNode, METH_VARARGS,
   "ExportSegmentsToLabelmapNode(\n    segmentationNode:vtkMRMLSegmentationNode, segmentIDs:(str,\n    ...), labelmapNode:vtkMRMLLabelMapVolumeNode,\n    referenceVolumeNode:vtkMRMLVolumeNode=...,\n    extentComputationMode:int=...,\n    colorTableNode:vtkMRMLColorTableNode=...) -> bool\nC++: static bool ExportSegmentsToLabelmapNode(\n    vtkMRMLSegmentationNode *segmentationNode,\n    const std::vector<std::string> &segmentIDs,\n    vtkMRMLLabelMapVolumeNode *labelmapNode,\n    vtkMRMLVolumeNode *referenceVolumeNode=nullptr,\n    int extentComputationMode=vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS,\n     vtkMRMLColorTableNode *colorTableNode=nullptr)\nExportSegmentsToLabelmapNode(\n    segmentationNode:vtkMRMLSegmentationNode,\n    segmentIDs:vtkStringArray,\n    labelmapNode:vtkMRMLLabelMapVolumeNode,\n    referenceVolumeNode:vtkMRMLVolumeNode=...,\n    extentComputationMode:int=...,\n    colorTableNode:vtkMRMLColorTableNode=...) -> bool\nC++: static bool ExportSegmentsToLabelmapNode(\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkStringArray *segmentIDs,\n    vtkMRMLLabelMapVolumeNode *labelmapNode,\n    vtkMRMLVolumeNode *referenceVolumeNode=nullptr,\n    int extentComputationMode=vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS,\n     vtkMRMLColorTableNode *colorTableNode=nullptr)\n\nExport multiple segments into a multi-label labelmap volume node\n\\param segmentationNode Segmentation node from which the the\n    segments are exported\n\\param segmentIds List of segment IDs to export\n\\param labelmapNode Labelmap node to export the segments to\n\\param referenceVolumeNode If specified, then the merged labelmap\nnode will match the geometry of referenceVolumeNode\n\\param extentComputationMode If referenceVolumeNode is not\n    specified then labelmap extents will be determined based on\n    this value.\n  By default, the minimum necessary size is used. Set value to\nvtkSegmentation::EXTENT_REFERENCE_GEOMETRY to use reference\ngeometry extent.\n\\param colorTableNod ...\n [Truncated]\n"},
  {"ExportVisibleSegmentsToLabelmapNode", PyvtkSlicerSegmentationsModuleLogic_ExportVisibleSegmentsToLabelmapNode, METH_VARARGS,
   "ExportVisibleSegmentsToLabelmapNode(\n    segmentationNode:vtkMRMLSegmentationNode,\n    labelmapNode:vtkMRMLLabelMapVolumeNode,\n    referenceVolumeNode:vtkMRMLVolumeNode=...,\n    extentComputationMode:int=...) -> bool\nC++: static bool ExportVisibleSegmentsToLabelmapNode(\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkMRMLLabelMapVolumeNode *labelmapNode,\n    vtkMRMLVolumeNode *referenceVolumeNode=nullptr,\n    int extentComputationMode=vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS)\n\nExport visible segments into a multi-label labelmap volume node\n\\param segmentationNode Segmentation node from which the the\n    visible segments are exported\n\\param labelmapNode Labelmap node to export the segments to\n\\param referenceVolumeNode If specified, then the merged labelmap\nnode will match the geometry of referenceVolumeNode\n\\param extentComputationMode If referenceVolumeNode is not\n    specified then labelmap extents will be determined based on\n    this value.\n  By default, the minimum necessary size is used. Set value to\nvtkSegmentation::EXTENT_REFERENCE_GEOMETRY to use reference\ngeometry extent.\n"},
  {"ExportAllSegmentsToLabelmapNode", PyvtkSlicerSegmentationsModuleLogic_ExportAllSegmentsToLabelmapNode, METH_VARARGS,
   "ExportAllSegmentsToLabelmapNode(\n    segmentationNode:vtkMRMLSegmentationNode,\n    labelmapNode:vtkMRMLLabelMapVolumeNode,\n    extentComputationMode:int=...) -> bool\nC++: static bool ExportAllSegmentsToLabelmapNode(\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkMRMLLabelMapVolumeNode *labelmapNode,\n    int extentComputationMode=vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS)\n\nExport all segments into a multi-label labelmap volume node\n\\param segmentationNode Segmentation node from which the the\n    segments are exported\n\\param labelmapNode Labelmap node to export the segments to\n\\param extentComputationMode Labelmap extents will be determined\n    based on this value.\n  By default, the minimum necessary size is used. Set value to\nvtkSegmentation::EXTENT_REFERENCE_GEOMETRY to use reference\ngeometry extent.\n"},
  {"ImportLabelmapToSegmentationNode", PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNode, METH_VARARGS,
   "ImportLabelmapToSegmentationNode(\n    labelmapNode:vtkMRMLLabelMapVolumeNode,\n    segmentationNode:vtkMRMLSegmentationNode,\n    insertBeforeSegmentId:str=...) -> bool\nC++: static bool ImportLabelmapToSegmentationNode(\n    vtkMRMLLabelMapVolumeNode *labelmapNode,\n    vtkMRMLSegmentationNode *segmentationNode,\n    std::string insertBeforeSegmentId=\"\")\nImportLabelmapToSegmentationNode(\n    labelmapImage:vtkOrientedImageData,\n    segmentationNode:vtkMRMLSegmentationNode,\n    baseSegmentName:str=..., insertBeforeSegmentId:str=...)\n    -> bool\nC++: static bool ImportLabelmapToSegmentationNode(\n    vtkOrientedImageData *labelmapImage,\n    vtkMRMLSegmentationNode *segmentationNode,\n    std::string baseSegmentName=\"\",\n    std::string insertBeforeSegmentId=\"\")\nImportLabelmapToSegmentationNode(\n    labelmapNode:vtkMRMLLabelMapVolumeNode,\n    segmentationNode:vtkMRMLSegmentationNode,\n    updatedSegmentIDs:vtkStringArray) -> bool\nC++: static bool ImportLabelmapToSegmentationNode(\n    vtkMRMLLabelMapVolumeNode *labelmapNode,\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkStringArray *updatedSegmentIDs)\nImportLabelmapToSegmentationNode(\n    labelmapImage:vtkOrientedImageData,\n    segmentationNode:vtkMRMLSegmentationNode,\n    updatedSegmentIDs:vtkStringArray,\n    labelmapToSegmentationTransform:vtkGeneralTransform=...)\n    -> bool\nC++: static bool ImportLabelmapToSegmentationNode(\n    vtkOrientedImageData *labelmapImage,\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkStringArray *updatedSegmentIDs,\n    vtkGeneralTransform *labelmapToSegmentationTransform=nullptr)\n\nImport all labels from a labelmap node to a segmentation node,\neach label to a separate segment. The colors of the new segments\nare set from the color table corresponding to the labelmap\nvolume.\n\\param insertBeforeSegmentId New segments will be inserted before\nthis segment.\n"},
  {"ImportLabelmapToSegmentationNodeWithTerminology", PyvtkSlicerSegmentationsModuleLogic_ImportLabelmapToSegmentationNodeWithTerminology, METH_VARARGS,
   "ImportLabelmapToSegmentationNodeWithTerminology(self,\n    labelmapNode:vtkMRMLLabelMapVolumeNode,\n    segmentationNode:vtkMRMLSegmentationNode,\n    terminologyContextName:str, insertBeforeSegmentId:str=...)\n    -> bool\nC++: bool ImportLabelmapToSegmentationNodeWithTerminology(\n    vtkMRMLLabelMapVolumeNode *labelmapNode,\n    vtkMRMLSegmentationNode *segmentationNode,\n    std::string terminologyContextName,\n    std::string insertBeforeSegmentId=\"\")\n\nImport all labels from a labelmap node to a segmentation node,\neach label to a separate segment. Terminology and color is set to\nthe segments based on the color table corresponding to the\nlabelmap volume node.\n\\param terminologyContextName Terminology context the entries of\n    which are mapped to the labels imported from the labelmap\n    node\n\\param insertBeforeSegmentId New segments will be inserted before\nthis segment.\n"},
  {"ImportModelToSegmentationNode", PyvtkSlicerSegmentationsModuleLogic_ImportModelToSegmentationNode, METH_VARARGS,
   "ImportModelToSegmentationNode(modelNode:vtkMRMLModelNode,\n    segmentationNode:vtkMRMLSegmentationNode,\n    insertBeforeSegmentId:str=...) -> bool\nC++: static bool ImportModelToSegmentationNode(\n    vtkMRMLModelNode *modelNode,\n    vtkMRMLSegmentationNode *segmentationNode,\n    std::string insertBeforeSegmentId=\"\")\n\nImport model into the segmentation as a segment.\n"},
  {"ImportModelsToSegmentationNode", PyvtkSlicerSegmentationsModuleLogic_ImportModelsToSegmentationNode, METH_VARARGS,
   "ImportModelsToSegmentationNode(folderItemId:int,\n    segmentationNode:vtkMRMLSegmentationNode,\n    insertBeforeSegmentId:str=...) -> bool\nC++: static bool ImportModelsToSegmentationNode(\n    vtkIdType folderItemId,\n    vtkMRMLSegmentationNode *segmentationNode,\n    std::string insertBeforeSegmentId=\"\")\n\nImport models in a folder into the segmentation as segments.\n"},
  {"ExportSegmentsClosedSurfaceRepresentationToFiles", PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsClosedSurfaceRepresentationToFiles, METH_VARARGS,
   "ExportSegmentsClosedSurfaceRepresentationToFiles(\n    destinationFolder:str,\n    segmentationNode:vtkMRMLSegmentationNode,\n    segmentIds:vtkStringArray=..., fileFormat:str=...,\n    lps:bool=True, sizeScale:float=1.0, merge:bool=False) -> bool\nC++: static bool ExportSegmentsClosedSurfaceRepresentationToFiles(\n    std::string destinationFolder,\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkStringArray *segmentIds=nullptr,\n    std::string fileFormat=\"STL\", bool lps=true,\n    double sizeScale=1.0, bool merge=false)\n\nExport closed surface representation of multiple segments to\nfiles. Typically used for writing 3D printable model files.\n\\param segmentationNode Segmentation node from which the the\n    segments are exported\n\\param destinationFolder Folder name where segments will be\n    exported to\n\\param fileFormat Output file format (STL or OBJ).\n\\param merge Merge all models into a single mesh. Only applicable\nto STL format.\n\\param lps Save files in LPS coordinate system. If set to false\n    then RAS coordinate system is used.\n\\param segmentIds List of segment IDs to export\n"},
  {"GetLabelValuesFromColorNode", PyvtkSlicerSegmentationsModuleLogic_GetLabelValuesFromColorNode, METH_VARARGS,
   "GetLabelValuesFromColorNode(\n    segmentationNode:vtkMRMLSegmentationNode,\n    colorTableNode:vtkMRMLColorTableNode,\n    segmentIds:vtkStringArray, labelValues:vtkIntArray) -> None\nC++: static void GetLabelValuesFromColorNode(\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkMRMLColorTableNode *colorTableNode,\n    vtkStringArray *segmentIds, vtkIntArray *labelValues)\n\nGets the label values for the current segment from the color node\nreference. Label values found by matching color + segment name.\nIf a segment name is not found in the table, then the label value\nreturned for the segment is the first label value outside the\ntable range.\n\\param segmentationNode Segmentation node that has the export\n    color node reference.\n\\param colorTableNode Color table used to get the label values\n    for the segments.\n\\param segmentIds List of segment ids to get values for. The\n    order of segmentIds dictates the order of the returned label\n    values.\n\\param labelValues Output label values from the color node.\n    Length of the array will be the same as the number of\n    segmentIds.\n"},
  {"ExportSegmentsBinaryLabelmapRepresentationToFiles", PyvtkSlicerSegmentationsModuleLogic_ExportSegmentsBinaryLabelmapRepresentationToFiles, METH_VARARGS,
   "ExportSegmentsBinaryLabelmapRepresentationToFiles(\n    destinationFolder:str,\n    segmentationNode:vtkMRMLSegmentationNode,\n    segmentIds:vtkStringArray=..., extension:str=...,\n    useCompression:bool=False,\n    referenceVolumeNode:vtkMRMLVolumeNode=...,\n    extentComputationMode:int=...,\n    colorTableNode:vtkMRMLColorTableNode=...) -> bool\nC++: static bool ExportSegmentsBinaryLabelmapRepresentationToFiles(\n    std::string destinationFolder,\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkStringArray *segmentIds=nullptr,\n    std::string extension=\"nrrd\", bool useCompression=false,\n    vtkMRMLVolumeNode *referenceVolumeNode=nullptr,\n    int extentComputationMode=vtkSegmentation::EXTENT_REFERENCE_GEOMETRY,\n     vtkMRMLColorTableNode *colorTableNode=nullptr)\n\nExport binary surface representation of multiple segments to a\nsingle output volume.\n\\param destinationFolder Folder name where segments will be\n    exported to\n\\param segmentationNode Segmentation node that has the export\n    color node reference.\n\\param segmentIds List of segment ids to get values for. The\n    order of segmentIds dictates the order of the returned label\n    values.\n\\param extension The file extension used for the output file.\n    \"nrrd\" by default.\n\\param useCompression If compression should be applied to the\n    output file.\n\\param referenceVolumeNode If specified, then the saved\n    segmentation will match the geometry of referenceVolumeNode\n\\param extentComputationMode If referenceVolumeNode is not\n    specified then the saved segmentation extents will be\n    determined based on this value.\n\\param colorTableNode Optional color table node used to set the\n    exported labelmap values for the segments.\n  Segment names are matched to color names to determine the label\nvalues.\n  If a segment name is not found in the color node, then the\nfirst unused value outside of the color table range will be used.\n"},
  {"CreateRepresentationForOneSegment", PyvtkSlicerSegmentationsModuleLogic_CreateRepresentationForOneSegment, METH_VARARGS,
   "CreateRepresentationForOneSegment(segmentation:vtkSegmentation,\n    segmentID:str, representationName:str) -> vtkDataObject\nC++: static vtkDataObject *CreateRepresentationForOneSegment(\n    vtkSegmentation *segmentation, std::string segmentID,\n    std::string representationName)\n\nCreate representation of only one segment in a segmentation.\nUseful if only one segment is processed, and we do not want to\nconvert all segments to a certain segmentation to save time.\nNOTE: Need to take ownership of the created object! For example\nusing vtkSmartPointer::Take\n\\return Representation of the specified segment if found or can\n    be created, nullptr otherwise\n"},
  {"ApplyParentTransformToOrientedImageData", PyvtkSlicerSegmentationsModuleLogic_ApplyParentTransformToOrientedImageData, METH_VARARGS,
   "ApplyParentTransformToOrientedImageData(\n    transformableNode:vtkMRMLTransformableNode,\n    orientedImageData:vtkOrientedImageData,\n    linearInterpolation:bool=False, backgroundColor:[float, float,\n     float, float]=...) -> bool\nC++: static bool ApplyParentTransformToOrientedImageData(\n    vtkMRMLTransformableNode *transformableNode,\n    vtkOrientedImageData *orientedImageData,\n    bool linearInterpolation=false,\n    double backgroundColor[4]=nullptr)\n\nApply the parent transform of a node to an oriented image data.\nUseful if we want to get a labelmap representation of a\nsegmentation in the proper geometry for processing.\n\\return Success flag\n"},
  {"ApplyParentTransformToPolyData", PyvtkSlicerSegmentationsModuleLogic_ApplyParentTransformToPolyData, METH_VARARGS,
   "ApplyParentTransformToPolyData(\n    transformableNode:vtkMRMLTransformableNode,\n    polyData:vtkPolyData) -> bool\nC++: static bool ApplyParentTransformToPolyData(\n    vtkMRMLTransformableNode *transformableNode,\n    vtkPolyData *polyData)\n\nApply the parent transform of a node to a poly data. Useful if we\nwant to get a surface or contours representation of a\nsegmentation in the proper geometry for processing.\n\\return Success flag\n"},
  {"GetTransformBetweenRepresentationAndSegmentation", PyvtkSlicerSegmentationsModuleLogic_GetTransformBetweenRepresentationAndSegmentation, METH_VARARGS,
   "GetTransformBetweenRepresentationAndSegmentation(\n    representationNode:vtkMRMLTransformableNode,\n    segmentationNode:vtkMRMLSegmentationNode,\n    representationToSegmentationTransform:vtkGeneralTransform)\n    -> bool\nC++: static bool GetTransformBetweenRepresentationAndSegmentation(\n    vtkMRMLTransformableNode *representationNode,\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkGeneralTransform *representationToSegmentationTransform)\n\nGet transform between a representation node (e.g. labelmap or\nmodel) and a segmentation node. Useful if we want to add a\nrepresentation to a segment, and we want to make sure that the\nsegment will be located the same place the representation node\nwas. The output transform is the representation node's parent\ntransform concatenated with the inverse of the segmentation's\nparent transform. It needs to be applied on the representation.\n\\param representationNode Transformable node which contains the\n    representation we want to add to the segment\n\\param segmentationNode Segmentation node that will contain the\n    segment to which the representation is added. It is the\n  representation node's parent transform concatenated with the inverse of the\nsegmentation's parent transform.\n\\param representationToSegmentationTransform General transform\n    between the representation node and the segmentation node.\n\\return Success flag\n"},
  {"GetSegmentRepresentation", PyvtkSlicerSegmentationsModuleLogic_GetSegmentRepresentation, METH_VARARGS,
   "GetSegmentRepresentation(segmentationNode:vtkMRMLSegmentationNode,\n     segmentID:str, representationName:str,\n    segmentRepresentation:vtkDataObject,\n    applyParentTransform:bool=True) -> bool\nC++: static bool GetSegmentRepresentation(\n    vtkMRMLSegmentationNode *segmentationNode,\n    std::string segmentID, std::string representationName,\n    vtkDataObject *segmentRepresentation,\n    bool applyParentTransform=true)\n\nConvenience function to get a specified representation of a\nsegment in a segmentation. A duplicate of the representation data\nobject is copied into the argument output object, with the\nsegmentation's parent transform applied if requested (on by\ndefault).\n\\param segmentationNode Input segmentation node containing the\n    segment to extract\n\\param segmentID Segment identifier of the segment to extract\n\\param representationName Name of the requested representation\n\\param segmentRepresentation Output representation data object\n    into which the given representation in the segment is copied\n\\param applyParentTransform Flag determining whether to apply\n    parent transform of the segmentation node. On by default\n\\return Success flag\n"},
  {"GetSegmentBinaryLabelmapRepresentation", PyvtkSlicerSegmentationsModuleLogic_GetSegmentBinaryLabelmapRepresentation, METH_VARARGS,
   "GetSegmentBinaryLabelmapRepresentation(\n    segmentationNode:vtkMRMLSegmentationNode, segmentID:str,\n    imageData:vtkOrientedImageData,\n    applyParentTransform:bool=True) -> bool\nC++: static bool GetSegmentBinaryLabelmapRepresentation(\n    vtkMRMLSegmentationNode *segmentationNode,\n    std::string segmentID, vtkOrientedImageData *imageData,\n    bool applyParentTransform=true)\n\nConvenience function to get binary labelmap representation of a\nsegment in a segmentation. Uses \\sa GetSegmentRepresentation A\nduplicate of the oriented image data is copied into the argument\nimage data, with the segmentation's parent transform applied if\nrequested (on by default). The oriented image data can be used\ndirectly for processing, or to create a labelmap volume using \\sa\nCreateLabelmapVolumeFromOrientedImageData.\n\\param segmentationNode Input segmentation node containing the\n    segment to extract\n\\param segmentID Segment identifier of the segment to extract\n\\param imageData Output oriented image data into which the\n    segment binary labelmap is copied\n\\param applyParentTransform Flag determining whether to apply\n    parent transform of the segmentation node.\n  If on, then the oriented image data is in RAS, otherwise in the\nsegmentation node's coordinate frame. On by default\n\\return Success flag\n"},
  {"GetSegmentClosedSurfaceRepresentation", PyvtkSlicerSegmentationsModuleLogic_GetSegmentClosedSurfaceRepresentation, METH_VARARGS,
   "GetSegmentClosedSurfaceRepresentation(\n    segmentationNode:vtkMRMLSegmentationNode, segmentID:str,\n    polyData:vtkPolyData, applyParentTransform:bool=True) -> bool\nC++: static bool GetSegmentClosedSurfaceRepresentation(\n    vtkMRMLSegmentationNode *segmentationNode,\n    std::string segmentID, vtkPolyData *polyData,\n    bool applyParentTransform=true)\n\nConvenience function to get closed surface representation of a\nsegment in a segmentation. Uses \\sa GetSegmentRepresentation A\nduplicate of the closed surface data is copied into the argument\nimage data, with the segmentation's parent transform applied if\nrequested (on by default).\n\\param segmentationNode Input segmentation node containing the\n    segment to extract\n\\param segmentID Segment identifier of the segment to extract\n\\param polyData Output polydata into which the segment polydata\n    is copied\n\\param applyParentTransform Flag determining whether to apply\n    parent transform of the segmentation node.\n  If on, then the oriented image data is in RAS, otherwise in the\nsegmentation node's coordinate frame. On by default\n\\return Success flag\n"},
  {"SetBinaryLabelmapToSegment", PyvtkSlicerSegmentationsModuleLogic_SetBinaryLabelmapToSegment, METH_VARARGS,
   "SetBinaryLabelmapToSegment(labelmap:vtkOrientedImageData,\n    segmentationNode:vtkMRMLSegmentationNode, segmentID:str,\n    mergeMode:int=..., extent:(int, int, int, int, int, int)=...,\n    minimumOfAllSegments:bool=False, segmentIdsToOverwrite:(str,\n    ...)=...) -> bool\nC++: static bool SetBinaryLabelmapToSegment(\n    vtkOrientedImageData *labelmap,\n    vtkMRMLSegmentationNode *segmentationNode,\n    std::string segmentID, int mergeMode=MODE_REPLACE,\n    const int extent[6]=nullptr, bool minimumOfAllSegments=false,\n    const std::vector<std::string> &segmentIdsToOverwrite={ })\n\n"},
  {"SetTerminologyToSegmentationFromLabelmapNode", PyvtkSlicerSegmentationsModuleLogic_SetTerminologyToSegmentationFromLabelmapNode, METH_VARARGS,
   "SetTerminologyToSegmentationFromLabelmapNode(self,\n    segmentationNode:vtkMRMLSegmentationNode,\n    labelmapNode:vtkMRMLLabelMapVolumeNode,\n    terminologyContextName:str) -> bool\nC++: bool SetTerminologyToSegmentationFromLabelmapNode(\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkMRMLLabelMapVolumeNode *labelmapNode,\n    std::string terminologyContextName)\n\nAssign terminology to segments in a segmentation node based on\nthe labels of a labelmap node. Match is made based on the\n3dSlicerLabel terminology type attribute. If the terminology\ncontext does not contain that attribute, match cannot be made.\n\\param terminologyContextName Terminology context the entries of\n    which are mapped to the labels imported from the labelmap\n    node\n"},
  {"GetDefaultSegmentationNode", PyvtkSlicerSegmentationsModuleLogic_GetDefaultSegmentationNode, METH_VARARGS,
   "GetDefaultSegmentationNode(self) -> vtkMRMLSegmentationNode\nC++: vtkMRMLSegmentationNode *GetDefaultSegmentationNode()\n\nGet default segmentation node. All new segmentation nodes are\ninitialized to the content of this node.\n"},
  {"GetDefaultSurfaceSmoothingEnabled", PyvtkSlicerSegmentationsModuleLogic_GetDefaultSurfaceSmoothingEnabled, METH_VARARGS,
   "GetDefaultSurfaceSmoothingEnabled(self) -> bool\nC++: bool GetDefaultSurfaceSmoothingEnabled()\n\nGet/Set default closed surface smoothing enabled flag for new\nsegmentation nodes.\n"},
  {"SetDefaultSurfaceSmoothingEnabled", PyvtkSlicerSegmentationsModuleLogic_SetDefaultSurfaceSmoothingEnabled, METH_VARARGS,
   "SetDefaultSurfaceSmoothingEnabled(self, enabled:bool) -> None\nC++: void SetDefaultSurfaceSmoothingEnabled(bool enabled)\n\n"},
  {"GetDefaultSegmentEditorNode", PyvtkSlicerSegmentationsModuleLogic_GetDefaultSegmentEditorNode, METH_VARARGS,
   "GetDefaultSegmentEditorNode(self) -> vtkMRMLSegmentEditorNode\nC++: vtkMRMLSegmentEditorNode *GetDefaultSegmentEditorNode()\n\nGet node that is used for initializing each new Segment Editor\nnode.\n"},
  {"GetDefaultOverwriteMode", PyvtkSlicerSegmentationsModuleLogic_GetDefaultOverwriteMode, METH_VARARGS,
   "GetDefaultOverwriteMode(self) -> int\nC++: int GetDefaultOverwriteMode()\n\nGet/Set default segmentation overwrite mode for masking options.\n"},
  {"SetDefaultOverwriteMode", PyvtkSlicerSegmentationsModuleLogic_SetDefaultOverwriteMode, METH_VARARGS,
   "SetDefaultOverwriteMode(self, mode:int) -> None\nC++: void SetDefaultOverwriteMode(int mode)\n\n"},
  {"GetSegmentStatusAsHumanReadableString", PyvtkSlicerSegmentationsModuleLogic_GetSegmentStatusAsHumanReadableString, METH_VARARGS,
   "GetSegmentStatusAsHumanReadableString(segmentStatus:int) -> str\nC++: static const char *GetSegmentStatusAsHumanReadableString(\n    int segmentStatus)\n\nGet the human readable segment status from the SegmentStatus enum\nvalue\n"},
  {"GetSegmentStatusAsMachineReadableString", PyvtkSlicerSegmentationsModuleLogic_GetSegmentStatusAsMachineReadableString, METH_VARARGS,
   "GetSegmentStatusAsMachineReadableString(segmentStatus:int) -> str\nC++: static const char *GetSegmentStatusAsMachineReadableString(\n    int segmentStatus)\n\nGet the machine readable segment status from the SegmentStatus\nenum value\n"},
  {"GetSegmentStatusFromMachineReadableString", PyvtkSlicerSegmentationsModuleLogic_GetSegmentStatusFromMachineReadableString, METH_VARARGS,
   "GetSegmentStatusFromMachineReadableString(statusString:str) -> int\nC++: static int GetSegmentStatusFromMachineReadableString(\n    std::string statusString)\n\nGet the enum segment status from a machine string\n"},
  {"GetStatusTagName", PyvtkSlicerSegmentationsModuleLogic_GetStatusTagName, METH_VARARGS,
   "GetStatusTagName() -> str\nC++: static const char *GetStatusTagName()\n\nReturns the name of the status tag\n"},
  {"GetSegmentStatus", PyvtkSlicerSegmentationsModuleLogic_GetSegmentStatus, METH_VARARGS,
   "GetSegmentStatus(segment:vtkSegment) -> int\nC++: static int GetSegmentStatus(vtkSegment *segment)\n\nReturns the value of the status tag for the given segment. If\nstatus tag is not specified then\nvtkSlicerSegmentationsModuleLogic::NotStarted is returned.\n"},
  {"SetSegmentStatus", PyvtkSlicerSegmentationsModuleLogic_SetSegmentStatus, METH_VARARGS,
   "SetSegmentStatus(segment:vtkSegment, status:int) -> None\nC++: static void SetSegmentStatus(vtkSegment *segment, int status)\n\nSet the value of the status tag for the given segment. If setting\nof vtkSlicerSegmentationsModuleLogic::NotStarted is requested and\nthe status tag does not exist or it is empty then the status tag\nis not modified.\n"},
  {"ClearSegment", PyvtkSlicerSegmentationsModuleLogic_ClearSegment, METH_VARARGS,
   "ClearSegment(segmentationNode:vtkMRMLSegmentationNode,\n    segmentID:str) -> bool\nC++: static bool ClearSegment(\n    vtkMRMLSegmentationNode *segmentationNode,\n    std::string segmentID)\n\nClear the contents of a single segment\n"},
  {"GetSharedSegmentIDsInMask", PyvtkSlicerSegmentationsModuleLogic_GetSharedSegmentIDsInMask, METH_VARARGS,
   "GetSharedSegmentIDsInMask(\n    segmentationNode:vtkMRMLSegmentationNode, sharedSegmentID:str,\n     mask:vtkOrientedImageData, extent:(int, int, int, int, int,\n    int), segmentIDs:[str, ...], maskThreshold:int=0.0,\n    includeInputSharedSegmentID:bool=False) -> bool\nC++: static bool GetSharedSegmentIDsInMask(\n    vtkMRMLSegmentationNode *segmentationNode,\n    std::string sharedSegmentID, vtkOrientedImageData *mask,\n    const int extent[6], std::vector<std::string> &segmentIDs,\n    int maskThreshold=0.0, bool includeInputSharedSegmentID=false)\n\nGet the list of segment IDs in the same shared labelmap that are\ncontained within the mask\n\\param segmentationNode Node containing the segmentation\n\\param sharedSegmentID Segment ID of the segment that contains\n    the shared labelmap to be checked\n\\param mask Mask labelmap\n\\param segmentIDs Output list of segment IDs under the mask\n\\param includeInputSharedSegmentID If false, sharedSegmentID will\nnot be added to the list of output segment IDs even if it is\n    within the mask\n"},
  {"ReconvertAllRepresentations", PyvtkSlicerSegmentationsModuleLogic_ReconvertAllRepresentations, METH_VARARGS,
   "ReconvertAllRepresentations(\n    segmentationNode:vtkMRMLSegmentationNode, segmentIDs:(str,\n    ...)=...) -> bool\nC++: static bool ReconvertAllRepresentations(\n    vtkMRMLSegmentationNode *segmentationNode,\n    const std::vector<std::string> &segmentIDs={ })\n\nReconvert all representations in the segmentation from the source\nrepresentation\n\\param segmentationNode Node containing the segmentation\n\\param sharedSegmentID Segment IDs to be converted. If empty, all\nsegments will be converted.\n\\return True if the representation was created, False otherwise\n"},
  {"CollapseBinaryLabelmaps", PyvtkSlicerSegmentationsModuleLogic_CollapseBinaryLabelmaps, METH_VARARGS,
   "CollapseBinaryLabelmaps(segmentationNode:vtkMRMLSegmentationNode,\n    forceToSingleLayer:bool) -> None\nC++: static void CollapseBinaryLabelmaps(\n    vtkMRMLSegmentationNode *segmentationNode,\n    bool forceToSingleLayer)\n\nCollapse all segments into fewer shared labelmap layers\n\\param segmentationNode Node containing the segmentation\n\\param forceToSingleLayer If false, then the layers will not be\n    overwritten by each other, if true then the layers can\n  overwrite each other, but the result is guaranteed to have one\nlayer\n\\return True if the representation was created, False otherwise\n"},
  {"GenerateMergedLabelmapInReferenceGeometry", PyvtkSlicerSegmentationsModuleLogic_GenerateMergedLabelmapInReferenceGeometry, METH_VARARGS,
   "GenerateMergedLabelmapInReferenceGeometry(\n    segmentationNode:vtkMRMLSegmentationNode,\n    referenceVolumeNode:vtkMRMLVolumeNode,\n    segmentIDs:vtkStringArray, extentComputationMode:int,\n    mergedLabelmap_Reference:vtkOrientedImageData,\n    labelValues:vtkIntArray=...) -> None\nC++: static void GenerateMergedLabelmapInReferenceGeometry(\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkMRMLVolumeNode *referenceVolumeNode,\n    vtkStringArray *segmentIDs, int extentComputationMode,\n    vtkOrientedImageData *mergedLabelmap_Reference,\n    vtkIntArray *labelValues=nullptr)\n\nGenerate a merged labelmap from the binary labelmap\nrepresentations of the specified segments\n\\param segmentationNode Node containing the segmentation\n\\param referenceVolumeNode Determines geometry of merged labelmap\nif not nullptr, automatically determined otherwise\n\\param segmentIDs Segment IDs to be converted. If empty, all\n    segments will be converted.\n\\param extentComputationMode If referenceVolumeNode is not\n    specified then the saved segmentation extents will be\n    determined based on this value.\n\\param mergedLabelmap_Reference Output merged labelmap in the\n    reference volume coordinate system\n\\param labelValues Output label values from the color node.\n    Length of the array must be the same as the number of\n    segmentIds.\n"},
  {"IsEffectiveExentOutsideReferenceVolume", PyvtkSlicerSegmentationsModuleLogic_IsEffectiveExentOutsideReferenceVolume, METH_VARARGS,
   "IsEffectiveExentOutsideReferenceVolume(\n    referenceVolumeNode:vtkMRMLVolumeNode,\n    segmentationNode:vtkMRMLSegmentationNode,\n    segmentIDs:vtkStringArray=...) -> bool\nC++: static bool IsEffectiveExentOutsideReferenceVolume(\n    vtkMRMLVolumeNode *referenceVolumeNode,\n    vtkMRMLSegmentationNode *segmentationNode,\n    vtkStringArray *segmentIDs=nullptr)\n\nDetermine if any part of the effective extent is outside of the\nreference volume geometry\n\\param referenceVolumeNode Volume node that contains the\n    reference geometry.\n\\param segmentationNode Segmentation node that contains the\n    effective extent to be checked.\n\\param segmentIDs List of segment IDs that will be used to\n    calculate the effective extent.\n\\return True if the effective segmentation extent is outside of\n    the reference volume, False otherwise.\n"},
  {"IsSegmentationExentOutsideReferenceGeometry", PyvtkSlicerSegmentationsModuleLogic_IsSegmentationExentOutsideReferenceGeometry, METH_VARARGS,
   "IsSegmentationExentOutsideReferenceGeometry(\n    referenceGeometry:vtkOrientedImageData,\n    segmentationGeometry:vtkOrientedImageData) -> bool\nC++: static bool IsSegmentationExentOutsideReferenceGeometry(\n    vtkOrientedImageData *referenceGeometry,\n    vtkOrientedImageData *segmentationGeometry)\n\nDetermine if any part of the segmentation extent is outside of\nthe reference geometry\n\\param referenceVolumeNode Image that contains the reference\n    geometry.\n\\param segmentationNode Image that contains the segmentation\n    geometry.\n\\return True if the segmentation extent is outside of the\n    reference volume, False otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerSegmentationsModuleLogic_Doc =
  "vtkSlicerSegmentationsModuleLogic - Logic class for segmentation\nhandling\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
  "This class manages the logic associated with converting and handling\n"
  "segmentation node objects.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerSegmentationsModuleLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSegmentationsModuleLogicPython.vtkSlicerSegmentationsModuleLogic", // tp_name
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
  PyvtkSlicerSegmentationsModuleLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerSegmentationsModuleLogic_StaticNew()
{
  return vtkSlicerSegmentationsModuleLogic::New();
}

PyObject *PyvtkSlicerSegmentationsModuleLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerSegmentationsModuleLogic_Type, PyvtkSlicerSegmentationsModuleLogic_Methods,
    "vtkSlicerSegmentationsModuleLogic",
 &PyvtkSlicerSegmentationsModuleLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSlicerSegmentationsModuleLogic_SegmentStatus_Type);
  PyVTKEnum_Add(&PyvtkSlicerSegmentationsModuleLogic_SegmentStatus_Type, "vtkSlicerSegmentationsModuleLogic.SegmentStatus");

  o = (PyObject *)&PyvtkSlicerSegmentationsModuleLogic_SegmentStatus_Type;
  if (PyDict_SetItemString(d, "SegmentStatus", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "MODE_REPLACE", vtkSlicerSegmentationsModuleLogic::MODE_REPLACE },
        { "MODE_MERGE_MAX", vtkSlicerSegmentationsModuleLogic::MODE_MERGE_MAX },
        { "MODE_MERGE_MIN", vtkSlicerSegmentationsModuleLogic::MODE_MERGE_MIN },
        { "MODE_MERGE_MASK", vtkSlicerSegmentationsModuleLogic::MODE_MERGE_MASK },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkSlicerSegmentationsModuleLogic::SegmentStatus cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "NotStarted", vtkSlicerSegmentationsModuleLogic::NotStarted },
        { "InProgress", vtkSlicerSegmentationsModuleLogic::InProgress },
        { "Completed", vtkSlicerSegmentationsModuleLogic::Completed },
        { "Flagged", vtkSlicerSegmentationsModuleLogic::Flagged },
        { "LastStatus", vtkSlicerSegmentationsModuleLogic::LastStatus },
      };

    o = PyvtkSlicerSegmentationsModuleLogic_SegmentStatus_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerSegmentationsModuleLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerSegmentationsModuleLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerSegmentationsModuleLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

