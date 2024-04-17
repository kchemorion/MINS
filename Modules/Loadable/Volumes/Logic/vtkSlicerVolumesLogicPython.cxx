// python wrapper for vtkSlicerVolumesLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerVolumesLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerVolumesLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerVolumesLogic_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerVolumesLogic_LoadingOptions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerVolumesModuleLogicPython.vtkSlicerVolumesLogic.LoadingOptions", // tp_name
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
PyObject *PyvtkSlicerVolumesLogic_LoadingOptions_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSlicerVolumesLogic_LoadingOptions_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSlicerVolumesLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerVolumesLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerVolumesLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerVolumesLogic *tempr = vtkSlicerVolumesLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerVolumesLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerVolumesLogic::NewInstance());

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
PyvtkSlicerVolumesLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerVolumesLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerVolumesLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_IsFreeSurferVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFreeSurferVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFreeSurferVolume(temp0) :
      op->vtkSlicerVolumesLogic::IsFreeSurferVolume(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_AddArchetypeVolume_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArchetypeVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->AddArchetypeVolume(temp0, temp1, temp2) :
      op->vtkSlicerVolumesLogic::AddArchetypeVolume(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumesLogic_AddArchetypeVolume_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArchetypeVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  vtkStringArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkStringArray"))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->AddArchetypeVolume(temp0, temp1, temp2, temp3) :
      op->vtkSlicerVolumesLogic::AddArchetypeVolume(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumesLogic_AddArchetypeVolume_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArchetypeVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->AddArchetypeVolume(temp0, temp1) :
      op->vtkSlicerVolumesLogic::AddArchetypeVolume(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumesLogic_AddArchetypeVolume(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSlicerVolumesLogic_AddArchetypeVolume_s1(self, args);
    case 4:
      return PyvtkSlicerVolumesLogic_AddArchetypeVolume_s2(self, args);
    case 2:
      return PyvtkSlicerVolumesLogic_AddArchetypeVolume_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddArchetypeVolume");
  return nullptr;
}


static PyObject *
PyvtkSlicerVolumesLogic_AddArchetypeScalarVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArchetypeScalarVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  vtkStringArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkStringArray"))
  {
    vtkMRMLScalarVolumeNode *tempr = (ap.IsBound() ?
      op->AddArchetypeScalarVolume(temp0, temp1, temp2, temp3) :
      op->vtkSlicerVolumesLogic::AddArchetypeScalarVolume(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_SaveArchetypeVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveArchetypeVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  const char *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode"))
  {
    int tempr = (ap.IsBound() ?
      op->SaveArchetypeVolume(temp0, temp1) :
      op->vtkSlicerVolumesLogic::SaveArchetypeVolume(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_CreateAndAddLabelVolume_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateAndAddLabelVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetValue(temp1))
  {
    vtkMRMLLabelMapVolumeNode *tempr = (ap.IsBound() ?
      op->CreateAndAddLabelVolume(temp0, temp1) :
      op->vtkSlicerVolumesLogic::CreateAndAddLabelVolume(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumesLogic_CreateAndAddLabelVolume_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateAndAddLabelVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      ap.GetValue(temp2))
  {
    vtkMRMLLabelMapVolumeNode *tempr = (ap.IsBound() ?
      op->CreateAndAddLabelVolume(temp0, temp1, temp2) :
      op->vtkSlicerVolumesLogic::CreateAndAddLabelVolume(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumesLogic_CreateAndAddLabelVolume(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSlicerVolumesLogic_CreateAndAddLabelVolume_s1(self, args);
    case 3:
      return PyvtkSlicerVolumesLogic_CreateAndAddLabelVolume_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CreateAndAddLabelVolume");
  return nullptr;
}


static PyObject *
PyvtkSlicerVolumesLogic_CreateLabelVolume_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateLabelVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetValue(temp1))
  {
    vtkMRMLLabelMapVolumeNode *tempr = (ap.IsBound() ?
      op->CreateLabelVolume(temp0, temp1) :
      op->vtkSlicerVolumesLogic::CreateLabelVolume(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumesLogic_CreateLabelVolume_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateLabelVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      ap.GetValue(temp2))
  {
    vtkMRMLLabelMapVolumeNode *tempr = (ap.IsBound() ?
      op->CreateLabelVolume(temp0, temp1, temp2) :
      op->vtkSlicerVolumesLogic::CreateLabelVolume(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumesLogic_CreateLabelVolume(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSlicerVolumesLogic_CreateLabelVolume_s1(self, args);
    case 3:
      return PyvtkSlicerVolumesLogic_CreateLabelVolume_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CreateLabelVolume");
  return nullptr;
}


static PyObject *
PyvtkSlicerVolumesLogic_FillLabelVolumeFromTemplate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillLabelVolumeFromTemplate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLLabelMapVolumeNode *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLLabelMapVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode"))
  {
    vtkMRMLLabelMapVolumeNode *tempr = (ap.IsBound() ?
      op->FillLabelVolumeFromTemplate(temp0, temp1) :
      op->vtkSlicerVolumesLogic::FillLabelVolumeFromTemplate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumesLogic_FillLabelVolumeFromTemplate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillLabelVolumeFromTemplate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  vtkMRMLLabelMapVolumeNode *temp1 = nullptr;
  vtkMRMLVolumeNode *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkMRMLLabelMapVolumeNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLVolumeNode"))
  {
    vtkMRMLLabelMapVolumeNode *tempr = (ap.IsBound() ?
      op->FillLabelVolumeFromTemplate(temp0, temp1, temp2) :
      op->vtkSlicerVolumesLogic::FillLabelVolumeFromTemplate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumesLogic_FillLabelVolumeFromTemplate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSlicerVolumesLogic_FillLabelVolumeFromTemplate_s1(self, args);
    case 3:
      return PyvtkSlicerVolumesLogic_FillLabelVolumeFromTemplate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FillLabelVolumeFromTemplate");
  return nullptr;
}


static PyObject *
PyvtkSlicerVolumesLogic_CreateLabelVolumeFromVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateLabelVolumeFromVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  vtkMRMLLabelMapVolumeNode *temp1 = nullptr;
  vtkMRMLVolumeNode *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkMRMLLabelMapVolumeNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLVolumeNode"))
  {
    vtkMRMLLabelMapVolumeNode *tempr = (ap.IsBound() ?
      op->CreateLabelVolumeFromVolume(temp0, temp1, temp2) :
      op->vtkSlicerVolumesLogic::CreateLabelVolumeFromVolume(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_CreateScalarVolumeFromVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateScalarVolumeFromVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  vtkMRMLScalarVolumeNode *temp1 = nullptr;
  vtkMRMLVolumeNode *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkMRMLScalarVolumeNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLVolumeNode"))
  {
    vtkMRMLScalarVolumeNode *tempr = (ap.IsBound() ?
      op->CreateScalarVolumeFromVolume(temp0, temp1, temp2) :
      op->vtkSlicerVolumesLogic::CreateScalarVolumeFromVolume(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_ClearVolumeImageData(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ClearVolumeImageData");

  vtkMRMLVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode"))
  {
    vtkSlicerVolumesLogic::ClearVolumeImageData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_CheckForLabelVolumeValidity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckForLabelVolumeValidity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLScalarVolumeNode *temp0 = nullptr;
  vtkMRMLLabelMapVolumeNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLScalarVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLLabelMapVolumeNode"))
  {
    std::string tempr = (ap.IsBound() ?
      op->CheckForLabelVolumeValidity(temp0, temp1) :
      op->vtkSlicerVolumesLogic::CheckForLabelVolumeValidity(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_CompareVolumeGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompareVolumeGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLScalarVolumeNode *temp0 = nullptr;
  vtkMRMLScalarVolumeNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLScalarVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLScalarVolumeNode"))
  {
    std::string tempr = (ap.IsBound() ?
      op->CompareVolumeGeometry(temp0, temp1) :
      op->vtkSlicerVolumesLogic::CompareVolumeGeometry(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_CloneVolume_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloneVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetValue(temp1))
  {
    vtkMRMLScalarVolumeNode *tempr = (ap.IsBound() ?
      op->CloneVolume(temp0, temp1) :
      op->vtkSlicerVolumesLogic::CloneVolume(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumesLogic_CloneVolume_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CloneVolume");

  vtkMRMLScene *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  const char *temp2 = nullptr;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkMRMLScalarVolumeNode *tempr = vtkSlicerVolumesLogic::CloneVolume(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerVolumesLogic_CloneVolume(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSlicerVolumesLogic_CloneVolume_s1(self, args);
    case 3:
    case 4:
      return PyvtkSlicerVolumesLogic_CloneVolume_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CloneVolume");
  return nullptr;
}


static PyObject *
PyvtkSlicerVolumesLogic_CloneVolumeWithoutImageData(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CloneVolumeWithoutImageData");

  vtkMRMLScene *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      ap.GetValue(temp2))
  {
    vtkMRMLScalarVolumeNode *tempr = vtkSlicerVolumesLogic::CloneVolumeWithoutImageData(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_CloneVolumeGeneric(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CloneVolumeGeneric");

  vtkMRMLScene *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  const char *temp2 = nullptr;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkMRMLVolumeNode *tempr = vtkSlicerVolumesLogic::CloneVolumeGeneric(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_TranslateFreeSurferRegistrationMatrixIntoSlicerRASToRASMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateFreeSurferRegistrationMatrixIntoSlicerRASToRASMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  vtkMatrix4x4 *temp2 = nullptr;
  vtkMatrix4x4 *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode") &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp3, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->TranslateFreeSurferRegistrationMatrixIntoSlicerRASToRASMatrix(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSlicerVolumesLogic::TranslateFreeSurferRegistrationMatrixIntoSlicerRASToRASMatrix(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_ComputeTkRegVox2RASMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeTkRegVox2RASMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->ComputeTkRegVox2RASMatrix(temp0, temp1);
    }
    else
    {
      op->vtkSlicerVolumesLogic::ComputeTkRegVox2RASMatrix(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_CenterVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode"))
  {
    if (ap.IsBound())
    {
      op->CenterVolume(temp0);
    }
    else
    {
      op->vtkSlicerVolumesLogic::CenterVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_GetVolumeCenteredOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeCenteredOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetVolumeCenteredOrigin(temp0, temp1);
    }
    else
    {
      op->vtkSlicerVolumesLogic::GetVolumeCenteredOrigin(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_ResampleVolumeToReferenceVolume(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ResampleVolumeToReferenceVolume");

  vtkMRMLVolumeNode *temp0 = nullptr;
  vtkMRMLVolumeNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode"))
  {
    vtkMRMLScalarVolumeNode *tempr = vtkSlicerVolumesLogic::ResampleVolumeToReferenceVolume(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_GetCompareVolumeGeometryEpsilon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompareVolumeGeometryEpsilon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCompareVolumeGeometryEpsilon() :
      op->vtkSlicerVolumesLogic::GetCompareVolumeGeometryEpsilon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_SetCompareVolumeGeometryEpsilon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompareVolumeGeometryEpsilon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompareVolumeGeometryEpsilon(temp0);
    }
    else
    {
      op->vtkSlicerVolumesLogic::SetCompareVolumeGeometryEpsilon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_GetCompareVolumeGeometryPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompareVolumeGeometryPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompareVolumeGeometryPrecision() :
      op->vtkSlicerVolumesLogic::GetCompareVolumeGeometryPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_ApplyVolumeDisplayPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyVolumeDisplayPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLVolumeDisplayNode *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeDisplayNode") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->ApplyVolumeDisplayPreset(temp0, temp1) :
      op->vtkSlicerVolumesLogic::ApplyVolumeDisplayPreset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_GetAppliedVolumeDisplayPresetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppliedVolumeDisplayPresetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  vtkMRMLVolumeDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeDisplayNode"))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetAppliedVolumeDisplayPresetId(temp0) :
      op->vtkSlicerVolumesLogic::GetAppliedVolumeDisplayPresetId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerVolumesLogic_GetVolumeDisplayPresetIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeDisplayPresetIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerVolumesLogic *op = static_cast<vtkSlicerVolumesLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetVolumeDisplayPresetIDs() :
      op->vtkSlicerVolumesLogic::GetVolumeDisplayPresetIDs());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerVolumesLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerVolumesLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerVolumesLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerVolumesLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerVolumesLogic\nC++: static vtkSlicerVolumesLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerVolumesLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerVolumesLogic\nC++: vtkSlicerVolumesLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerVolumesLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerVolumesLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsFreeSurferVolume", PyvtkSlicerVolumesLogic_IsFreeSurferVolume, METH_VARARGS,
   "IsFreeSurferVolume(self, filename:str) -> int\nC++: int IsFreeSurferVolume(const char *filename)\n\nExamine the file name to see if the extension is one of the\nsupported freesurfer volume formats. Used to assign the proper\ncolor node to label maps.\n"},
  {"AddArchetypeVolume", PyvtkSlicerVolumesLogic_AddArchetypeVolume, METH_VARARGS,
   "AddArchetypeVolume(self, filename:str, volname:str,\n    loadingOptions:int) -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *AddArchetypeVolume(const char *filename,\n    const char *volname, int loadingOptions)\nAddArchetypeVolume(self, filename:str, volname:str,\n    loadingOptions:int, fileList:vtkStringArray)\n    -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *AddArchetypeVolume(const char *filename,\n    const char *volname, int loadingOptions,\n    vtkStringArray *fileList)\nAddArchetypeVolume(self, filename:str, volname:str)\n    -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *AddArchetypeVolume(const char *filename,\n    const char *volname)\n\nOverloaded function of AddArchetypeVolume to provide more loading\noptions, where variable loadingOptions is bit-coded as following:\nbit 0: label map bit 1: centered bit 2: loading single file bit\n3: calculate window level automatically bit 4: discard image\norientation higher bits are reserved for future use\n"},
  {"AddArchetypeScalarVolume", PyvtkSlicerVolumesLogic_AddArchetypeScalarVolume, METH_VARARGS,
   "AddArchetypeScalarVolume(self, filename:str, volname:str,\n    loadingOptions:int, fileList:vtkStringArray)\n    -> vtkMRMLScalarVolumeNode\nC++: vtkMRMLScalarVolumeNode *AddArchetypeScalarVolume(\n    const char *filename, const char *volname, int loadingOptions,\n     vtkStringArray *fileList)\n\nLoad a scalar volume function directly, bypassing checks of all\nfactories done in AddArchetypeVolume.\n\\sa AddArchetypeVolume(const NodeSetFactoryRegistry&\n    volumeRegistry, const char* filename, const char* volname,\n    int loadingOptions, vtkStringArray *fileList)\n"},
  {"SaveArchetypeVolume", PyvtkSlicerVolumesLogic_SaveArchetypeVolume, METH_VARARGS,
   "SaveArchetypeVolume(self, filename:str,\n    volumeNode:vtkMRMLVolumeNode) -> int\nC++: int SaveArchetypeVolume(const char *filename,\n    vtkMRMLVolumeNode *volumeNode)\n\nWrite volume's image data to a specified file\n"},
  {"CreateAndAddLabelVolume", PyvtkSlicerVolumesLogic_CreateAndAddLabelVolume, METH_VARARGS,
   "CreateAndAddLabelVolume(self, volumeNode:vtkMRMLVolumeNode,\n    name:str) -> vtkMRMLLabelMapVolumeNode\nC++: vtkMRMLLabelMapVolumeNode *CreateAndAddLabelVolume(\n    vtkMRMLVolumeNode *volumeNode, const char *name)\nCreateAndAddLabelVolume(self, scene:vtkMRMLScene,\n    volumeNode:vtkMRMLVolumeNode, name:str)\n    -> vtkMRMLLabelMapVolumeNode\nC++: vtkMRMLLabelMapVolumeNode *CreateAndAddLabelVolume(\n    vtkMRMLScene *scene, vtkMRMLVolumeNode *volumeNode,\n    const char *name)\n\nCreate a label map volume to match the given volumeNode and add\nit to the current scene\n\\sa GetMRMLScene()\n"},
  {"CreateLabelVolume", PyvtkSlicerVolumesLogic_CreateLabelVolume, METH_VARARGS,
   "CreateLabelVolume(self, volumeNode:vtkMRMLVolumeNode, name:str)\n    -> vtkMRMLLabelMapVolumeNode\nC++: vtkMRMLLabelMapVolumeNode *CreateLabelVolume(\n    vtkMRMLVolumeNode *volumeNode, const char *name)\nCreateLabelVolume(self, scene:vtkMRMLScene,\n    volumeNode:vtkMRMLVolumeNode, name:str)\n    -> vtkMRMLLabelMapVolumeNode\nC++: vtkMRMLLabelMapVolumeNode *CreateLabelVolume(\n    vtkMRMLScene *scene, vtkMRMLVolumeNode *volumeNode,\n    const char *name)\n\n\\deprecated Create a label map volume to match the given\nvolumeNode and add it to the current scene.\n\\sa CreateAndAddLabelVolume\n"},
  {"FillLabelVolumeFromTemplate", PyvtkSlicerVolumesLogic_FillLabelVolumeFromTemplate, METH_VARARGS,
   "FillLabelVolumeFromTemplate(self,\n    labelNode:vtkMRMLLabelMapVolumeNode,\n    templateNode:vtkMRMLVolumeNode) -> vtkMRMLLabelMapVolumeNode\nC++: vtkMRMLLabelMapVolumeNode *FillLabelVolumeFromTemplate(\n    vtkMRMLLabelMapVolumeNode *labelNode,\n    vtkMRMLVolumeNode *templateNode)\nFillLabelVolumeFromTemplate(self, scene:vtkMRMLScene,\n    labelNode:vtkMRMLLabelMapVolumeNode,\n    templateNode:vtkMRMLVolumeNode) -> vtkMRMLLabelMapVolumeNode\nC++: vtkMRMLLabelMapVolumeNode *FillLabelVolumeFromTemplate(\n    vtkMRMLScene *scene, vtkMRMLLabelMapVolumeNode *labelNode,\n    vtkMRMLVolumeNode *templateNode)\n\n\\deprecated Fill in a label map volume to match the given\ntemplate volume node.\n\\sa FillLabelVolumeFromTemplate(vtkMRMLScene*,\n    vtkMRMLScalarVolumeNode*, vtkMRMLVolumeNode*)\n\\sa GetMRMLScene()\n"},
  {"CreateLabelVolumeFromVolume", PyvtkSlicerVolumesLogic_CreateLabelVolumeFromVolume, METH_VARARGS,
   "CreateLabelVolumeFromVolume(self, scene:vtkMRMLScene,\n    outputVolume:vtkMRMLLabelMapVolumeNode,\n    inputVolume:vtkMRMLVolumeNode) -> vtkMRMLLabelMapVolumeNode\nC++: vtkMRMLLabelMapVolumeNode *CreateLabelVolumeFromVolume(\n    vtkMRMLScene *scene, vtkMRMLLabelMapVolumeNode *outputVolume,\n    vtkMRMLVolumeNode *inputVolume)\n\nSet a label map volume to match the given input volume node,\nunder the assumption that the given label map node is already\nadded to the scene. A display node will be added to it if the\nlabel node doesn't already have one, and the image data\nassociated with the label node will be allocated according to the\ntemplate volumeNode.\n"},
  {"CreateScalarVolumeFromVolume", PyvtkSlicerVolumesLogic_CreateScalarVolumeFromVolume, METH_VARARGS,
   "CreateScalarVolumeFromVolume(self, scene:vtkMRMLScene,\n    outputVolume:vtkMRMLScalarVolumeNode,\n    inputVolume:vtkMRMLVolumeNode) -> vtkMRMLScalarVolumeNode\nC++: vtkMRMLScalarVolumeNode *CreateScalarVolumeFromVolume(\n    vtkMRMLScene *scene, vtkMRMLScalarVolumeNode *outputVolume,\n    vtkMRMLVolumeNode *inputVolume)\n\nSet a scalar volume to match the given input volume node, under\nthe assumption that the given label map node is already added to\nthe scene. A display node will be added to it if the label node\ndoesn't already have one, and the image data associated with the\nlabel node will be allocated according to the template\nvolumeNode.\n"},
  {"ClearVolumeImageData", PyvtkSlicerVolumesLogic_ClearVolumeImageData, METH_VARARGS,
   "ClearVolumeImageData(volumeNode:vtkMRMLVolumeNode) -> None\nC++: static void ClearVolumeImageData(\n    vtkMRMLVolumeNode *volumeNode)\n\nClear the image data of a volume node to contain all zeros\n"},
  {"CheckForLabelVolumeValidity", PyvtkSlicerVolumesLogic_CheckForLabelVolumeValidity, METH_VARARGS,
   "CheckForLabelVolumeValidity(self,\n    volumeNode:vtkMRMLScalarVolumeNode,\n    labelNode:vtkMRMLLabelMapVolumeNode) -> str\nC++: std::string CheckForLabelVolumeValidity(\n    vtkMRMLScalarVolumeNode *volumeNode,\n    vtkMRMLLabelMapVolumeNode *labelNode)\n\nReturn a string listing any warnings about the spatial validity\nof the labelmap with respect to the volume.  An empty string\nindicates that the two volumes are identical samplings of the\nsame spatial region and that the second volume input is a label\nmap.\n\\sa CompareVolumeGeometry\n"},
  {"CompareVolumeGeometry", PyvtkSlicerVolumesLogic_CompareVolumeGeometry, METH_VARARGS,
   "CompareVolumeGeometry(self, volumeNode1:vtkMRMLScalarVolumeNode,\n    volumeNode2:vtkMRMLScalarVolumeNode) -> str\nC++: std::string CompareVolumeGeometry(\n    vtkMRMLScalarVolumeNode *volumeNode1,\n    vtkMRMLScalarVolumeNode *volumeNode2)\n\nGenerate a string listing any warnings about the spatial validity\nof the second volume with respect to the first volume.  An empty\nstring indicates that the two volumes are identical samplings of\nthe same spatial region. Checks include:\n Valid image data.\n Same dimensions.\n Same spacing.\n Same origin.\n Same IJKtoRAS.\n\\sa CheckForLabelVolumeValidity, ResampleVolumeToReferenceVolume\n"},
  {"CloneVolume", PyvtkSlicerVolumesLogic_CloneVolume, METH_VARARGS,
   "CloneVolume(self, volumeNode:vtkMRMLVolumeNode, name:str)\n    -> vtkMRMLScalarVolumeNode\nC++: vtkMRMLScalarVolumeNode *CloneVolume(\n    vtkMRMLVolumeNode *volumeNode, const char *name)\nCloneVolume(scene:vtkMRMLScene, volumeNode:vtkMRMLVolumeNode,\n    name:str, cloneImageData:bool=True) -> vtkMRMLScalarVolumeNode\nC++: static vtkMRMLScalarVolumeNode *CloneVolume(\n    vtkMRMLScene *scene, vtkMRMLVolumeNode *volumeNode,\n    const char *name, bool cloneImageData=true)\n\nCreate a deep copy of a volumeNode and add it to the current\nscene. If cloneImageData is false then the volume node is created\nwithout image data.\n\\sa GetMRMLScene()\n"},
  {"CloneVolumeWithoutImageData", PyvtkSlicerVolumesLogic_CloneVolumeWithoutImageData, METH_VARARGS,
   "CloneVolumeWithoutImageData(scene:vtkMRMLScene,\n    volumeNode:vtkMRMLVolumeNode, name:str)\n    -> vtkMRMLScalarVolumeNode\nC++: static vtkMRMLScalarVolumeNode *CloneVolumeWithoutImageData(\n    vtkMRMLScene *scene, vtkMRMLVolumeNode *volumeNode,\n    const char *name)\n\nCreate a empty copy of a volumeNode without imageData and add it\nto the current scene\n\\sa GetMRMLScene()\n"},
  {"CloneVolumeGeneric", PyvtkSlicerVolumesLogic_CloneVolumeGeneric, METH_VARARGS,
   "CloneVolumeGeneric(scene:vtkMRMLScene,\n    volumeNode:vtkMRMLVolumeNode, name:str,\n    cloneImageData:bool=True) -> vtkMRMLVolumeNode\nC++: static vtkMRMLVolumeNode *CloneVolumeGeneric(\n    vtkMRMLScene *scene, vtkMRMLVolumeNode *volumeNode,\n    const char *name, bool cloneImageData=true)\n\nCreate a deep copy of a volumeNode and add it to the scene\n"},
  {"TranslateFreeSurferRegistrationMatrixIntoSlicerRASToRASMatrix", PyvtkSlicerVolumesLogic_TranslateFreeSurferRegistrationMatrixIntoSlicerRASToRASMatrix, METH_VARARGS,
   "TranslateFreeSurferRegistrationMatrixIntoSlicerRASToRASMatrix(\n    self, V1Node:vtkMRMLVolumeNode, V2Node:vtkMRMLVolumeNode,\n    FSRegistrationMatrix:vtkMatrix4x4, ResultsMatrix:vtkMatrix4x4)\n     -> None\nC++: void TranslateFreeSurferRegistrationMatrixIntoSlicerRASToRASMatrix(\n    vtkMRMLVolumeNode *V1Node, vtkMRMLVolumeNode *V2Node,\n    vtkMatrix4x4 *FSRegistrationMatrix,\n    vtkMatrix4x4 *ResultsMatrix)\n\nComputes matrix we need to register V1Node to V2Node given the\n\"register.dat\" matrix from tkregister2 (FreeSurfer)\n"},
  {"ComputeTkRegVox2RASMatrix", PyvtkSlicerVolumesLogic_ComputeTkRegVox2RASMatrix, METH_VARARGS,
   "ComputeTkRegVox2RASMatrix(self, VNode:vtkMRMLVolumeNode,\n    M:vtkMatrix4x4) -> None\nC++: void ComputeTkRegVox2RASMatrix(vtkMRMLVolumeNode *VNode,\n    vtkMatrix4x4 *M)\n\nConvenience method to compute a volume's Vox2RAS-tkreg Matrix\n"},
  {"CenterVolume", PyvtkSlicerVolumesLogic_CenterVolume, METH_VARARGS,
   "CenterVolume(self, volumeNode:vtkMRMLVolumeNode) -> None\nC++: void CenterVolume(vtkMRMLVolumeNode *volumeNode)\n\nCenter the volume on the origin (0,0,0)\n\\sa GetVolumeCenteredOrigin()\n"},
  {"GetVolumeCenteredOrigin", PyvtkSlicerVolumesLogic_GetVolumeCenteredOrigin, METH_VARARGS,
   "GetVolumeCenteredOrigin(self, volumeNode:vtkMRMLVolumeNode,\n    origin:[float, ...]) -> None\nC++: void GetVolumeCenteredOrigin(vtkMRMLVolumeNode *volumeNode,\n    double *origin)\n\nCompute the origin of the volume in order for the volume to be\ncentered.\n\\sa CenterVolume()\n"},
  {"ResampleVolumeToReferenceVolume", PyvtkSlicerVolumesLogic_ResampleVolumeToReferenceVolume, METH_VARARGS,
   "ResampleVolumeToReferenceVolume(inputVolumeNode:vtkMRMLVolumeNode,\n     referenceVolumeNode:vtkMRMLVolumeNode)\n    -> vtkMRMLScalarVolumeNode\nC++: static vtkMRMLScalarVolumeNode *ResampleVolumeToReferenceVolume(\n    vtkMRMLVolumeNode *inputVolumeNode,\n    vtkMRMLVolumeNode *referenceVolumeNode)\n\nConvenience method to resample input volume using reference\nvolume info\n\\sa CompareVolumeGeometry\n"},
  {"GetCompareVolumeGeometryEpsilon", PyvtkSlicerVolumesLogic_GetCompareVolumeGeometryEpsilon, METH_VARARGS,
   "GetCompareVolumeGeometryEpsilon(self) -> float\nC++: virtual double GetCompareVolumeGeometryEpsilon()\n\nGetting the epsilon value to use when determining if the elements\nof the IJK to RAS matrices of two volumes match. Defaults to 10\nto the minus 6.\n"},
  {"SetCompareVolumeGeometryEpsilon", PyvtkSlicerVolumesLogic_SetCompareVolumeGeometryEpsilon, METH_VARARGS,
   "SetCompareVolumeGeometryEpsilon(self, epsilon:float) -> None\nC++: void SetCompareVolumeGeometryEpsilon(double epsilon)\n\nSetting the epsilon value and associated precision to use when\ndetermining if the elements of the IJK to RAS matrices of two\nvolumes match and how to print out the mismatched elements.\n"},
  {"GetCompareVolumeGeometryPrecision", PyvtkSlicerVolumesLogic_GetCompareVolumeGeometryPrecision, METH_VARARGS,
   "GetCompareVolumeGeometryPrecision(self) -> int\nC++: virtual int GetCompareVolumeGeometryPrecision()\n\nGet the precision with which to print out volume geometry\nmismatches, value is set when setting the compare volume geometry\nepsilon.\n\\sa SetCompareVolumeGeometryEpsilon\n"},
  {"ApplyVolumeDisplayPreset", PyvtkSlicerVolumesLogic_ApplyVolumeDisplayPreset, METH_VARARGS,
   "ApplyVolumeDisplayPreset(self,\n    displayNode:vtkMRMLVolumeDisplayNode, presetId:str) -> bool\nC++: bool ApplyVolumeDisplayPreset(\n    vtkMRMLVolumeDisplayNode *displayNode, std::string presetId)\n\nMethod to set volume window/level based on a volume display\npreset. Returns true on success.\n"},
  {"GetAppliedVolumeDisplayPresetId", PyvtkSlicerVolumesLogic_GetAppliedVolumeDisplayPresetId, METH_VARARGS,
   "GetAppliedVolumeDisplayPresetId(self,\n    displayNode:vtkMRMLVolumeDisplayNode) -> str\nC++: std::string GetAppliedVolumeDisplayPresetId(\n    vtkMRMLVolumeDisplayNode *displayNode)\n\nGet ID of the volume display preset that matches current display\nsettings. Returns empty string if there is no match.\n"},
  {"GetVolumeDisplayPresetIDs", PyvtkSlicerVolumesLogic_GetVolumeDisplayPresetIDs, METH_VARARGS,
   "GetVolumeDisplayPresetIDs(self) -> (str, ...)\nC++: std::vector<std::string> GetVolumeDisplayPresetIDs()\n\nMethod to get a vector to currently defined window level preset\nIDs.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerVolumesLogic_Doc =
  "vtkSlicerVolumesLogic - slicer logic class for volumes manipulation\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
  "This class manages the logic associated with reading, saving, and\n"
  "changing properties of volumes\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerVolumesLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerVolumesModuleLogicPython.vtkSlicerVolumesLogic", // tp_name
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
  PyvtkSlicerVolumesLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerVolumesLogic_StaticNew()
{
  return vtkSlicerVolumesLogic::New();
}

PyObject *PyvtkSlicerVolumesLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerVolumesLogic_Type, PyvtkSlicerVolumesLogic_Methods,
    "vtkSlicerVolumesLogic",
 &PyvtkSlicerVolumesLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSlicerVolumesLogic_LoadingOptions_Type);
  PyVTKEnum_Add(&PyvtkSlicerVolumesLogic_LoadingOptions_Type, "vtkSlicerVolumesLogic.LoadingOptions");

  o = (PyObject *)&PyvtkSlicerVolumesLogic_LoadingOptions_Type;
  if (PyDict_SetItemString(d, "LoadingOptions", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkSlicerVolumesLogic::LoadingOptions cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "LabelMap", vtkSlicerVolumesLogic::LabelMap },
        { "CenterImage", vtkSlicerVolumesLogic::CenterImage },
        { "SingleFile", vtkSlicerVolumesLogic::SingleFile },
        { "AutoWindowLevel", vtkSlicerVolumesLogic::AutoWindowLevel },
        { "DiscardOrientation", vtkSlicerVolumesLogic::DiscardOrientation },
      };

    o = PyvtkSlicerVolumesLogic_LoadingOptions_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerVolumesLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerVolumesLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerVolumesLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

