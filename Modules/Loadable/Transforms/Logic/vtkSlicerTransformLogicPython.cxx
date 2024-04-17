// python wrapper for vtkSlicerTransformLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerTransformLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerTransformLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerTransformLogic_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerTransformLogic_TransformKind_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerTransformsModuleLogicPython.vtkSlicerTransformLogic.TransformKind", // tp_name
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
PyObject *PyvtkSlicerTransformLogic_TransformKind_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSlicerTransformLogic_TransformKind_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSlicerTransformLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerTransformLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTransformLogic *op = static_cast<vtkSlicerTransformLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerTransformLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerTransformLogic *tempr = vtkSlicerTransformLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTransformLogic *op = static_cast<vtkSlicerTransformLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerTransformLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerTransformLogic::NewInstance());

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
PyvtkSlicerTransformLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerTransformLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTransformLogic *op = static_cast<vtkSlicerTransformLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerTransformLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_hardenTransform(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "hardenTransform");

  vtkMRMLTransformableNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformableNode"))
  {
    bool tempr = vtkSlicerTransformLogic::hardenTransform(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_AddTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTransformLogic *op = static_cast<vtkSlicerTransformLogic *>(vp);

  const char *temp0 = nullptr;
  vtkMRMLScene *temp1 = nullptr;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLScene") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    vtkMRMLTransformNode *tempr = (ap.IsBound() ?
      op->AddTransform(temp0, temp1, temp2) :
      op->vtkSlicerTransformLogic::AddTransform(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_GetVisualization2d_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVisualization2d");

  vtkPolyData *temp0 = nullptr;
  vtkMRMLTransformDisplayNode *temp1 = nullptr;
  vtkMRMLSliceNode *temp2 = nullptr;
  vtkMRMLMarkupsNode *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetVTKObject(temp1, "vtkMRMLTransformDisplayNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLSliceNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkMRMLMarkupsNode")))
  {
    bool tempr = vtkSlicerTransformLogic::GetVisualization2d(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerTransformLogic_GetVisualization2d_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVisualization2d");

  vtkPolyData *temp0 = nullptr;
  vtkMRMLTransformDisplayNode *temp1 = nullptr;
  vtkMatrix4x4 *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  vtkPoints *temp5 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5, 6) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetVTKObject(temp1, "vtkMRMLTransformDisplayNode") &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp5, "vtkPoints")))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    bool tempr = vtkSlicerTransformLogic::GetVisualization2d(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerTransformLogic_GetVisualization2d(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
    case 4:
      return PyvtkSlicerTransformLogic_GetVisualization2d_s1(self, args);
    case 5:
    case 6:
      return PyvtkSlicerTransformLogic_GetVisualization2d_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVisualization2d");
  return nullptr;
}


static PyObject *
PyvtkSlicerTransformLogic_GetVisualization3d_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVisualization3d");

  vtkPolyData *temp0 = nullptr;
  vtkMRMLTransformDisplayNode *temp1 = nullptr;
  vtkMatrix4x4 *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  vtkPoints *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetVTKObject(temp1, "vtkMRMLTransformDisplayNode") &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4") &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp4, "vtkPoints")))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    bool tempr = vtkSlicerTransformLogic::GetVisualization3d(temp0, temp1, temp2, temp3, temp4);

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
PyvtkSlicerTransformLogic_GetVisualization3d_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVisualization3d");

  vtkPolyData *temp0 = nullptr;
  vtkMRMLTransformDisplayNode *temp1 = nullptr;
  vtkMRMLNode *temp2 = nullptr;
  vtkMRMLMarkupsNode *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetVTKObject(temp1, "vtkMRMLTransformDisplayNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkMRMLMarkupsNode")))
  {
    bool tempr = vtkSlicerTransformLogic::GetVisualization3d(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerTransformLogic_GetVisualization3d_Methods[] = {
  {"GetVisualization3d", PyvtkSlicerTransformLogic_GetVisualization3d_s1, METH_VARARGS | METH_STATIC,
   "VVVP|V *vtkPolyData *vtkMRMLTransformDisplayNode *vtkMatrix4x4 *i *vtkPoints"},
  {"GetVisualization3d", PyvtkSlicerTransformLogic_GetVisualization3d_s2, METH_VARARGS | METH_STATIC,
   "VVV|V *vtkPolyData *vtkMRMLTransformDisplayNode *vtkMRMLNode *vtkMRMLMarkupsNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSlicerTransformLogic_GetVisualization3d(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSlicerTransformLogic_GetVisualization3d_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 5:
      return PyvtkSlicerTransformLogic_GetVisualization3d_s1(self, args);
    case 3:
      return PyvtkSlicerTransformLogic_GetVisualization3d_s2(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVisualization3d");
  return nullptr;
}


static PyObject *
PyvtkSlicerTransformLogic_GetVisualizationDisplacementMagnitudeScalarName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVisualizationDisplacementMagnitudeScalarName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSlicerTransformLogic::GetVisualizationDisplacementMagnitudeScalarName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_CreateDisplacementVolumeFromTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDisplacementVolumeFromTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTransformLogic *op = static_cast<vtkSlicerTransformLogic *>(vp);

  vtkMRMLTransformNode *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  bool temp2 = true;
  vtkMRMLVolumeNode *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLVolumeNode")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkMRMLVolumeNode")))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->CreateDisplacementVolumeFromTransform(temp0, temp1, temp2, temp3) :
      op->vtkSlicerTransformLogic::CreateDisplacementVolumeFromTransform(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_ConvertToGridTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToGridTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTransformLogic *op = static_cast<vtkSlicerTransformLogic *>(vp);

  vtkMRMLTransformNode *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  vtkMRMLTransformNode *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLVolumeNode")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLTransformNode")))
  {
    vtkMRMLTransformNode *tempr = (ap.IsBound() ?
      op->ConvertToGridTransform(temp0, temp1, temp2) :
      op->vtkSlicerTransformLogic::ConvertToGridTransform(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_GetTransformedPointSamplesAsMagnitudeImage(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTransformedPointSamplesAsMagnitudeImage");

  vtkImageData *temp0 = nullptr;
  vtkMRMLTransformNode *temp1 = nullptr;
  vtkMatrix4x4 *temp2 = nullptr;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkMRMLTransformNode") &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkSlicerTransformLogic::GetTransformedPointSamplesAsMagnitudeImage(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_GetTransformedPointSamplesAsVectorImage(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTransformedPointSamplesAsVectorImage");

  vtkImageData *temp0 = nullptr;
  vtkMRMLTransformNode *temp1 = nullptr;
  vtkMatrix4x4 *temp2 = nullptr;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkMRMLTransformNode") &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkSlicerTransformLogic::GetTransformedPointSamplesAsVectorImage(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTransformLogic_GetTransformKind(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTransformKind");

  vtkMRMLTransformNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLTransformNode"))
  {
    typedef vtkSlicerTransformLogic::TransformKind tempr_type;
  tempr_type tempr = vtkSlicerTransformLogic::GetTransformKind(temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkSlicerTransformLogic_TransformKind_FromEnum(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerTransformLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerTransformLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerTransformLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerTransformLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerTransformLogic\nC++: static vtkSlicerTransformLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerTransformLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerTransformLogic\nC++: vtkSlicerTransformLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerTransformLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerTransformLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"hardenTransform", PyvtkSlicerTransformLogic_hardenTransform, METH_VARARGS,
   "hardenTransform(node:vtkMRMLTransformableNode) -> bool\nC++: static bool hardenTransform(vtkMRMLTransformableNode *node)\n\nApply the associated transform to the transformable node. Return\ntrue on success, false otherwise. This method is kept for\nbackward compatibility only, it is recommended to use\nvtkMRMLTransformableNode::HardenTransform() method instead.\n"},
  {"AddTransform", PyvtkSlicerTransformLogic_AddTransform, METH_VARARGS,
   "AddTransform(self, filename:str, scene:vtkMRMLScene,\n    userMessages:vtkMRMLMessageCollection=...)\n    -> vtkMRMLTransformNode\nC++: vtkMRMLTransformNode *AddTransform(const char *filename,\n    vtkMRMLScene *scene,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nRead transform from file\n"},
  {"GetVisualization2d", PyvtkSlicerTransformLogic_GetVisualization2d, METH_VARARGS,
   "GetVisualization2d(output_RAS:vtkPolyData,\n    displayNode:vtkMRMLTransformDisplayNode,\n    sliceNode:vtkMRMLSliceNode,\n    glyphPointsNode:vtkMRMLMarkupsNode=...) -> bool\nC++: static bool GetVisualization2d(vtkPolyData *output_RAS,\n    vtkMRMLTransformDisplayNode *displayNode,\n    vtkMRMLSliceNode *sliceNode,\n    vtkMRMLMarkupsNode *glyphPointsNode=nullptr)\nGetVisualization2d(output_RAS:vtkPolyData,\n    displayNode:vtkMRMLTransformDisplayNode,\n    sliceToRAS:vtkMatrix4x4, fieldOfViewOrigin:[float, ...],\n    fieldOfViewSize:[float, ...],\n    samplePositions_RAS:vtkPoints=...) -> bool\nC++: static bool GetVisualization2d(vtkPolyData *output_RAS,\n    vtkMRMLTransformDisplayNode *displayNode,\n    vtkMatrix4x4 *sliceToRAS, double *fieldOfViewOrigin,\n    double *fieldOfViewSize,\n    vtkPoints *samplePositions_RAS=nullptr)\n\nGenerate polydata for 2D transform visualization Return true on\nsuccess.\n"},
  {"GetVisualization3d", PyvtkSlicerTransformLogic_GetVisualization3d, METH_VARARGS,
   "GetVisualization3d(output_RAS:vtkPolyData,\n    displayNode:vtkMRMLTransformDisplayNode,\n    roiToRAS:vtkMatrix4x4, roiSize:[int, ...],\n    samplePositions_RAS:vtkPoints=...) -> bool\nC++: static bool GetVisualization3d(vtkPolyData *output_RAS,\n    vtkMRMLTransformDisplayNode *displayNode,\n    vtkMatrix4x4 *roiToRAS, int *roiSize,\n    vtkPoints *samplePositions_RAS=nullptr)\nGetVisualization3d(output_RAS:vtkPolyData,\n    displayNode:vtkMRMLTransformDisplayNode,\n    regionNode:vtkMRMLNode,\n    glyphPointsNode:vtkMRMLMarkupsNode=...) -> bool\nC++: static bool GetVisualization3d(vtkPolyData *output_RAS,\n    vtkMRMLTransformDisplayNode *displayNode,\n    vtkMRMLNode *regionNode,\n    vtkMRMLMarkupsNode *glyphPointsNode=nullptr)\n\nGenerate polydata for 3D transform visualization roiToRAS defines\nthe ROI origin and direction. roiSize defines the ROI size (in\nthe ROI coordinate system spacing)  . Return true on success.\n"},
  {"GetVisualizationDisplacementMagnitudeScalarName", PyvtkSlicerTransformLogic_GetVisualizationDisplacementMagnitudeScalarName, METH_VARARGS,
   "GetVisualizationDisplacementMagnitudeScalarName() -> str\nC++: static const char *GetVisualizationDisplacementMagnitudeScalarName(\n    )\n\nName of the scalar array that stores the displacement magnitude\nvalues in polydata returned by GetVisualization2d and\nGetVisualization3d.\n"},
  {"CreateDisplacementVolumeFromTransform", PyvtkSlicerTransformLogic_CreateDisplacementVolumeFromTransform, METH_VARARGS,
   "CreateDisplacementVolumeFromTransform(self,\n    inputTransformNode:vtkMRMLTransformNode,\n    referenceVolumeNode:vtkMRMLVolumeNode=...,\n    magnitude:bool=True,\n    existingOutputVolumeNode:vtkMRMLVolumeNode=...)\n    -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *CreateDisplacementVolumeFromTransform(\n    vtkMRMLTransformNode *inputTransformNode,\n    vtkMRMLVolumeNode *referenceVolumeNode=nullptr,\n    bool magnitude=true,\n    vtkMRMLVolumeNode *existingOutputVolumeNode=nullptr)\n\nCreate a volume node that contains the transform displacement in\neach voxel. If magnitude is true then a scalar volume is created,\neach voxel containing the magnitude of the displacement. If\nmagnitude is false then a 3-component scalar volume is created,\neach voxel containing the displacement vector.\nreferenceVolumeNode specifies the volume origin, spacing, extent,\nand orientation. If existingOutputVolumeNode is specified then\ninstead of creating a new volume node, that existing node will be\nupdated.\n"},
  {"ConvertToGridTransform", PyvtkSlicerTransformLogic_ConvertToGridTransform, METH_VARARGS,
   "ConvertToGridTransform(self,\n    inputTransformNode:vtkMRMLTransformNode,\n    referenceVolumeNode:vtkMRMLVolumeNode=...,\n    existingOutputTransformNode:vtkMRMLTransformNode=...)\n    -> vtkMRMLTransformNode\nC++: vtkMRMLTransformNode *ConvertToGridTransform(\n    vtkMRMLTransformNode *inputTransformNode,\n    vtkMRMLVolumeNode *referenceVolumeNode=nullptr,\n    vtkMRMLTransformNode *existingOutputTransformNode=nullptr)\n\nConvert the input transform to a grid transform. If\nreferenceVolumeNode is specified then it will determine the\norigin, spacing, extent, and orientation of the displacement\nfield. If existingOutputTransformNode is specified then instead\nof creating a new transform node, that existing node will be\nupdated.\n"},
  {"GetTransformedPointSamplesAsMagnitudeImage", PyvtkSlicerTransformLogic_GetTransformedPointSamplesAsMagnitudeImage, METH_VARARGS,
   "GetTransformedPointSamplesAsMagnitudeImage(\n    outputMagnitudeImage:vtkImageData,\n    inputTransformNode:vtkMRMLTransformNode,\n    ijkToRAS:vtkMatrix4x4, transformToWorld:bool=True) -> bool\nC++: static bool GetTransformedPointSamplesAsMagnitudeImage(\n    vtkImageData *outputMagnitudeImage,\n    vtkMRMLTransformNode *inputTransformNode,\n    vtkMatrix4x4 *ijkToRAS, bool transformToWorld=true)\n\nTake samples from the displacement field and store the magnitude\nin an image volume The extents of the output image must be set\nbefore calling this method. The origin and spacing attributes of\nthe output image are ignored (origin, spacing, and axis\ndirections are all specified by ijkToRAS). If transformToWorld is\ntrue then transform to world is returned, otherwise transform\nfrom world is returned. Returns true on success.\n"},
  {"GetTransformedPointSamplesAsVectorImage", PyvtkSlicerTransformLogic_GetTransformedPointSamplesAsVectorImage, METH_VARARGS,
   "GetTransformedPointSamplesAsVectorImage(\n    outputVectorImage:vtkImageData,\n    inputTransformNode:vtkMRMLTransformNode,\n    ijkToRAS:vtkMatrix4x4, transformToWorld:bool=True) -> bool\nC++: static bool GetTransformedPointSamplesAsVectorImage(\n    vtkImageData *outputVectorImage,\n    vtkMRMLTransformNode *inputTransformNode,\n    vtkMatrix4x4 *ijkToRAS, bool transformToWorld=true)\n\nTake samples from the displacement field and store the vector\ncomponents in an image volume The extents of the output image\nmust be set before calling this method. The origin and spacing\nattributes of the output image are ignored (origin, spacing, and\naxis directions are all specified by ijkToRAS). If\ntransformToWorld is true then transform to world is returned,\notherwise transform from world is returned. Returns true on\nsuccess.\n"},
  {"GetTransformKind", PyvtkSlicerTransformLogic_GetTransformKind, METH_VARARGS,
   "GetTransformKind(transformNode:vtkMRMLTransformNode)\n    -> TransformKind\nC++: static TransformKind GetTransformKind(\n    vtkMRMLTransformNode *transformNode)\n\nReturns TRANSFORM_LINEAR if the node contains a simple linear\ntransform. Returns TRANSFORM_BSPLINE if the node contains a\nbspline transform with an\n  optional additive or composite bulk component. Returns\nTRANSFORM_GRID if the node contains a simple grid transform.\nReturns TRANSFORM_THINPLATESPLINE if the node contains a simple\nthin plate spline transform. Returns TRANSFORM_OTHER in all other\ncases.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerTransformLogic_Doc =
  "vtkSlicerTransformLogic - no description provided.\n\n"
  "Superclass: vtkMRMLAbstractLogic\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerTransformLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerTransformsModuleLogicPython.vtkSlicerTransformLogic", // tp_name
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
  PyvtkSlicerTransformLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerTransformLogic_StaticNew()
{
  return vtkSlicerTransformLogic::New();
}

PyObject *PyvtkSlicerTransformLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerTransformLogic_Type, PyvtkSlicerTransformLogic_Methods,
    "vtkSlicerTransformLogic",
 &PyvtkSlicerTransformLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLAbstractLogic");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSlicerTransformLogic_TransformKind_Type);
  PyVTKEnum_Add(&PyvtkSlicerTransformLogic_TransformKind_Type, "vtkSlicerTransformLogic.TransformKind");

  o = (PyObject *)&PyvtkSlicerTransformLogic_TransformKind_Type;
  if (PyDict_SetItemString(d, "TransformKind", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkSlicerTransformLogic::TransformKind cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "TRANSFORM_OTHER", vtkSlicerTransformLogic::TRANSFORM_OTHER },
        { "TRANSFORM_LINEAR", vtkSlicerTransformLogic::TRANSFORM_LINEAR },
        { "TRANSFORM_BSPLINE", vtkSlicerTransformLogic::TRANSFORM_BSPLINE },
        { "TRANSFORM_GRID", vtkSlicerTransformLogic::TRANSFORM_GRID },
        { "TRANSFORM_THINPLATESPLINE", vtkSlicerTransformLogic::TRANSFORM_THINPLATESPLINE },
      };

    o = PyvtkSlicerTransformLogic_TransformKind_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerTransformLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerTransformLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerTransformLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

