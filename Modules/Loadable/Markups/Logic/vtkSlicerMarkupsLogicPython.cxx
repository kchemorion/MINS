// python wrapper for vtkSlicerMarkupsLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkSlicerMarkupsLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerMarkupsLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerMarkupsLogic_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerMarkupsLogic_Events_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleLogicPython.vtkSlicerMarkupsLogic.Events", // tp_name
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
PyObject *PyvtkSlicerMarkupsLogic_Events_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSlicerMarkupsLogic_Events_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSlicerMarkupsLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerMarkupsLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerMarkupsLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerMarkupsLogic *tempr = vtkSlicerMarkupsLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerMarkupsLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerMarkupsLogic::NewInstance());

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
PyvtkSlicerMarkupsLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerMarkupsLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerMarkupsLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ProcessMRMLNodesEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLNodesEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

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
      op->ProcessMRMLNodesEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::ProcessMRMLNodesEvents(temp0, temp1, temp2);
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
PyvtkSlicerMarkupsLogic_GetSelectionNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSelectionNodeID() :
      op->vtkSlicerMarkupsLogic::GetSelectionNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_GetActiveListID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveListID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetActiveListID() :
      op->vtkSlicerMarkupsLogic::GetActiveListID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SetActiveListID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveListID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->SetActiveListID(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::SetActiveListID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SetActiveList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->SetActiveList(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::SetActiveList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_AddNewDisplayNodeForMarkupsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNewDisplayNodeForMarkupsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    std::string tempr = (ap.IsBound() ?
      op->AddNewDisplayNodeForMarkupsNode(temp0) :
      op->vtkSlicerMarkupsLogic::AddNewDisplayNodeForMarkupsNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_AddNewFiducialNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNewFiducialNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = "F";
  vtkMRMLScene *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLScene")))
  {
    std::string tempr = (ap.IsBound() ?
      op->AddNewFiducialNode(temp0, temp1) :
      op->vtkSlicerMarkupsLogic::AddNewFiducialNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_AddNewMarkupsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNewMarkupsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  std::string temp0;
  std::string temp1 = std::string();
  vtkMRMLScene *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLScene")))
  {
    vtkMRMLMarkupsNode *tempr = (ap.IsBound() ?
      op->AddNewMarkupsNode(temp0, temp1, temp2) :
      op->vtkSlicerMarkupsLogic::AddNewMarkupsNode(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_AddControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  double temp0 = 0.0;
  double temp1 = 0.0;
  double temp2 = 0.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->AddControlPoint(temp0, temp1, temp2) :
      op->vtkSlicerMarkupsLogic::AddControlPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_JumpSlicesToLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpSlicesToLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  double temp0;
  double temp1;
  double temp2;
  bool temp3 = false;
  int temp4 = -1;
  vtkMRMLSliceNode *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp5, "vtkMRMLSliceNode")))
  {
    if (ap.IsBound())
    {
      op->JumpSlicesToLocation(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::JumpSlicesToLocation(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_JumpSlicesToNthPointInMarkup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpSlicesToNthPointInMarkup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  bool temp2 = false;
  int temp3 = -1;
  vtkMRMLSliceNode *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp4, "vtkMRMLSliceNode")))
  {
    if (ap.IsBound())
    {
      op->JumpSlicesToNthPointInMarkup(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::JumpSlicesToNthPointInMarkup(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_FocusCamerasOnNthPointInMarkup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FocusCamerasOnNthPointInMarkup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FocusCamerasOnNthPointInMarkup(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::FocusCamerasOnNthPointInMarkup(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_FocusCameraOnNthPointInMarkup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FocusCameraOnNthPointInMarkup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->FocusCameraOnNthPointInMarkup(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::FocusCameraOnNthPointInMarkup(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_LoadMarkups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMarkups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    char *tempr = (ap.IsBound() ?
      op->LoadMarkups(temp0, temp1, temp2) :
      op->vtkSlicerMarkupsLogic::LoadMarkups(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_LoadMarkupsFiducials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMarkupsFiducials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    char *tempr = (ap.IsBound() ?
      op->LoadMarkupsFiducials(temp0, temp1, temp2) :
      op->vtkSlicerMarkupsLogic::LoadMarkupsFiducials(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_LoadMarkupsFromFcsv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMarkupsFromFcsv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    char *tempr = (ap.IsBound() ?
      op->LoadMarkupsFromFcsv(temp0, temp1, temp2) :
      op->vtkSlicerMarkupsLogic::LoadMarkupsFromFcsv(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_LoadMarkupsFromJson(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadMarkupsFromJson");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    char *tempr = (ap.IsBound() ?
      op->LoadMarkupsFromJson(temp0, temp1, temp2) :
      op->vtkSlicerMarkupsLogic::LoadMarkupsFromJson(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_LoadAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    char *tempr = (ap.IsBound() ?
      op->LoadAnnotation(temp0, temp1, temp2) :
      op->vtkSlicerMarkupsLogic::LoadAnnotation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SetAllControlPointsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllControlPointsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAllControlPointsVisibility(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::SetAllControlPointsVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ToggleAllControlPointsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleAllControlPointsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->ToggleAllControlPointsVisibility(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::ToggleAllControlPointsVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SetAllControlPointsLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllControlPointsLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAllControlPointsLocked(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::SetAllControlPointsLocked(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ToggleAllControlPointsLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleAllControlPointsLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->ToggleAllControlPointsLocked(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::ToggleAllControlPointsLocked(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SetAllControlPointsSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllControlPointsSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAllControlPointsSelected(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::SetAllControlPointsSelected(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ToggleAllControlPointsSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleAllControlPointsSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->ToggleAllControlPointsSelected(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::ToggleAllControlPointsSelected(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SetDisplayNodeToDefaults(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayNodeToDefaults");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayNode"))
  {
    if (ap.IsBound())
    {
      op->SetDisplayNodeToDefaults(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::SetDisplayNodeToDefaults(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SetDisplayDefaultsFromNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayDefaultsFromNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayNode"))
  {
    if (ap.IsBound())
    {
      op->SetDisplayDefaultsFromNode(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::SetDisplayDefaultsFromNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_CopyNthControlPointToNewList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyNthControlPointToNewList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  int temp0;
  vtkMRMLMarkupsNode *temp1 = nullptr;
  vtkMRMLMarkupsNode *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLMarkupsNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLMarkupsNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CopyNthControlPointToNewList(temp0, temp1, temp2) :
      op->vtkSlicerMarkupsLogic::CopyNthControlPointToNewList(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_MoveNthControlPointToNewListAtIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveNthControlPointToNewListAtIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  int temp0;
  vtkMRMLMarkupsNode *temp1 = nullptr;
  vtkMRMLMarkupsNode *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLMarkupsNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp3))
  {
    bool tempr = (ap.IsBound() ?
      op->MoveNthControlPointToNewListAtIndex(temp0, temp1, temp2, temp3) :
      op->vtkSlicerMarkupsLogic::MoveNthControlPointToNewListAtIndex(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ConvertAnnotationFiducialsToMarkups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertAnnotationFiducialsToMarkups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkStringArray *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkStringArray")))
  {
    if (ap.IsBound())
    {
      op->ConvertAnnotationFiducialsToMarkups(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::ConvertAnnotationFiducialsToMarkups(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ConvertAnnotationLinesROIsToMarkups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertAnnotationLinesROIsToMarkups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkStringArray *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkStringArray")))
  {
    if (ap.IsBound())
    {
      op->ConvertAnnotationLinesROIsToMarkups(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::ConvertAnnotationLinesROIsToMarkups(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ConvertAnnotationHierarchyToSubjectHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertAnnotationHierarchyToSubjectHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->ConvertAnnotationHierarchyToSubjectHierarchy(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::ConvertAnnotationHierarchyToSubjectHierarchy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_RenameAllControlPointsFromCurrentFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenameAllControlPointsFromCurrentFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->RenameAllControlPointsFromCurrentFormat(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::RenameAllControlPointsFromCurrentFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_StartPlaceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPlaceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  bool temp0 = false;
  vtkMRMLInteractionNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLInteractionNode")))
  {
    bool tempr = (ap.IsBound() ?
      op->StartPlaceMode(temp0, temp1) :
      op->vtkSlicerMarkupsLogic::StartPlaceMode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SetAutoCreateDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoCreateDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoCreateDisplayNodes(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::SetAutoCreateDisplayNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_GetAutoCreateDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoCreateDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoCreateDisplayNodes() :
      op->vtkSlicerMarkupsLogic::GetAutoCreateDisplayNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_AutoCreateDisplayNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCreateDisplayNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoCreateDisplayNodesOn();
    }
    else
    {
      op->vtkSlicerMarkupsLogic::AutoCreateDisplayNodesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_AutoCreateDisplayNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCreateDisplayNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoCreateDisplayNodesOff();
    }
    else
    {
      op->vtkSlicerMarkupsLogic::AutoCreateDisplayNodesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_GetDefaultMarkupsDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultMarkupsDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsDisplayNode *tempr = (ap.IsBound() ?
      op->GetDefaultMarkupsDisplayNode() :
      op->vtkSlicerMarkupsLogic::GetDefaultMarkupsDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_CopyBasicDisplayProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyBasicDisplayProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsDisplayNode *temp0 = nullptr;
  vtkMRMLMarkupsDisplayNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLMarkupsDisplayNode"))
  {
    if (ap.IsBound())
    {
      op->CopyBasicDisplayProperties(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::CopyBasicDisplayProperties(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_GetClosedCurveSurfaceArea(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetClosedCurveSurfaceArea");

  vtkMRMLMarkupsClosedCurveNode *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsClosedCurveNode") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkPolyData")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    double tempr = vtkSlicerMarkupsLogic::GetClosedCurveSurfaceArea(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_FitSurfaceProjectWarp(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FitSurfaceProjectWarp");

  vtkPoints *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  double temp2 = 1.0;
  long long temp3 = 225;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkSlicerMarkupsLogic::FitSurfaceProjectWarp(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_FitSurfaceDiskWarp(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FitSurfaceDiskWarp");

  vtkPoints *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  double temp2 = 1.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkSlicerMarkupsLogic::FitSurfaceDiskWarp(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_IsPolygonClockwise(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsPolygonClockwise");

  vtkPoints *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkIdList")))
  {
    bool tempr = vtkSlicerMarkupsLogic::IsPolygonClockwise(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_GetBestFitPlane(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBestFitPlane");

  vtkMRMLMarkupsNode *temp0 = nullptr;
  vtkPlane *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetVTKObject(temp1, "vtkPlane"))
  {
    bool tempr = vtkSlicerMarkupsLogic::GetBestFitPlane(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_GetJsonStorageNodeClassNameForMarkupsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJsonStorageNodeClassNameForMarkupsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetJsonStorageNodeClassNameForMarkupsType(temp0) :
      op->vtkSlicerMarkupsLogic::GetJsonStorageNodeClassNameForMarkupsType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_RegisterJsonStorageNodeForMarkupsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterJsonStorageNodeForMarkupsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RegisterJsonStorageNodeForMarkupsType(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::RegisterJsonStorageNodeForMarkupsType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_AddNewJsonStorageNodeForMarkupsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNewJsonStorageNodeForMarkupsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLMarkupsJsonStorageNode *tempr = (ap.IsBound() ?
      op->AddNewJsonStorageNodeForMarkupsType(temp0) :
      op->vtkSlicerMarkupsLogic::AddNewJsonStorageNodeForMarkupsType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_RegisterMarkupsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterMarkupsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  vtkSlicerMarkupsWidget *temp1 = nullptr;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetVTKObject(temp1, "vtkSlicerMarkupsWidget") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->RegisterMarkupsNode(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::RegisterMarkupsNode(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_UnregisterMarkupsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnregisterMarkupsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->UnregisterMarkupsNode(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::UnregisterMarkupsNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_IsMarkupsNodeRegistered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMarkupsNodeRegistered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMarkupsNodeRegistered(temp0) :
      op->vtkSlicerMarkupsLogic::IsMarkupsNodeRegistered(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_GetWidgetByMarkupsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetByMarkupsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSlicerMarkupsWidget *tempr = (ap.IsBound() ?
      op->GetWidgetByMarkupsType(temp0) :
      op->vtkSlicerMarkupsLogic::GetWidgetByMarkupsType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_GetNodeByMarkupsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeByMarkupsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLMarkupsNode *tempr = (ap.IsBound() ?
      op->GetNodeByMarkupsType(temp0) :
      op->vtkSlicerMarkupsLogic::GetNodeByMarkupsType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_GetCreateMarkupsPushButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateMarkupsPushButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCreateMarkupsPushButton(temp0) :
      op->vtkSlicerMarkupsLogic::GetCreateMarkupsPushButton(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ImportControlPointsFromTable(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ImportControlPointsFromTable");

  vtkMRMLMarkupsNode *temp0 = nullptr;
  vtkMRMLTableNode *temp1 = nullptr;
  int temp2 = 0;
  int temp3 = -1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLTableNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    bool tempr = vtkSlicerMarkupsLogic::ImportControlPointsFromTable(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ExportControlPointsToTable(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportControlPointsToTable");

  vtkMRMLMarkupsNode *temp0 = nullptr;
  vtkMRMLTableNode *temp1 = nullptr;
  int temp2 = vtkMRMLStorageNode::CoordinateSystemRAS;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLTableNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkSlicerMarkupsLogic::ExportControlPointsToTable(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ExportControlPointsToCSV(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExportControlPointsToCSV");

  vtkMRMLMarkupsNode *temp0 = nullptr;
  std::string temp1;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkSlicerMarkupsLogic::ExportControlPointsToCSV(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ImportControlPointsFromCSV(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ImportControlPointsFromCSV");

  vtkMRMLMarkupsNode *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp1))
  {
    bool tempr = vtkSlicerMarkupsLogic::ImportControlPointsFromCSV(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_CopyNthMarkupToNewList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyNthMarkupToNewList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  int temp0;
  vtkMRMLMarkupsNode *temp1 = nullptr;
  vtkMRMLMarkupsNode *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLMarkupsNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLMarkupsNode"))
  {
    bool tempr = (ap.IsBound() ?
      op->CopyNthMarkupToNewList(temp0, temp1, temp2) :
      op->vtkSlicerMarkupsLogic::CopyNthMarkupToNewList(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_MoveNthMarkupToNewList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveNthMarkupToNewList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  int temp0;
  vtkMRMLMarkupsNode *temp1 = nullptr;
  vtkMRMLMarkupsNode *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLMarkupsNode") &&
      ap.GetVTKObject(temp2, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp3))
  {
    bool tempr = (ap.IsBound() ?
      op->MoveNthMarkupToNewList(temp0, temp1, temp2, temp3) :
      op->vtkSlicerMarkupsLogic::MoveNthMarkupToNewList(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_AddFiducial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFiducial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  double temp0 = 0.0;
  double temp1 = 0.0;
  double temp2 = 0.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->AddFiducial(temp0, temp1, temp2) :
      op->vtkSlicerMarkupsLogic::AddFiducial(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SetAllMarkupsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllMarkupsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAllMarkupsVisibility(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::SetAllMarkupsVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ToggleAllMarkupsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleAllMarkupsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->ToggleAllMarkupsVisibility(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::ToggleAllMarkupsVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SetAllMarkupsLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllMarkupsLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAllMarkupsLocked(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::SetAllMarkupsLocked(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ToggleAllMarkupsLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleAllMarkupsLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->ToggleAllMarkupsLocked(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::ToggleAllMarkupsLocked(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_SetAllMarkupsSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllMarkupsSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAllMarkupsSelected(temp0, temp1);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::SetAllMarkupsSelected(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_ToggleAllMarkupsSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleAllMarkupsSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->ToggleAllMarkupsSelected(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::ToggleAllMarkupsSelected(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_RenameAllMarkupsFromCurrentFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenameAllMarkupsFromCurrentFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->RenameAllMarkupsFromCurrentFormat(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::RenameAllMarkupsFromCurrentFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerMarkupsLogic_GenerateUniqueColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUniqueColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GenerateUniqueColor() :
      op->vtkSlicerMarkupsLogic::GenerateUniqueColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerMarkupsLogic_GenerateUniqueColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUniqueColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerMarkupsLogic *op = static_cast<vtkSlicerMarkupsLogic *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GenerateUniqueColor(temp0);
    }
    else
    {
      op->vtkSlicerMarkupsLogic::GenerateUniqueColor(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerMarkupsLogic_GenerateUniqueColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSlicerMarkupsLogic_GenerateUniqueColor_s1(self, args);
    case 1:
      return PyvtkSlicerMarkupsLogic_GenerateUniqueColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateUniqueColor");
  return nullptr;
}

static PyMethodDef PyvtkSlicerMarkupsLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerMarkupsLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerMarkupsLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerMarkupsLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerMarkupsLogic\nC++: static vtkSlicerMarkupsLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerMarkupsLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerMarkupsLogic\nC++: vtkSlicerMarkupsLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerMarkupsLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerMarkupsLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ProcessMRMLNodesEvents", PyvtkSlicerMarkupsLogic_ProcessMRMLNodesEvents, METH_VARARGS,
   "ProcessMRMLNodesEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLNodesEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nReceives all the events fired by the nodes. To listen to a node,\nyou can add an observer using GetMRMLNodesCallbackCommand() or\nuse the utility macros\nvtk[SetAndObserve|Observe]MRMLNode[Event]Macro\nProcessMRMLNodesEvents calls OnMRMLNodeModified when event is\nvtkCommand::ModifiedEvent.\n\\sa ProcessMRMLSceneEvents, ProcessMRMLLogicsEvents,\nOnMRMLNodeModified(), vtkSetAndObserveMRMLNodeMacro,\nvtkObserveMRMLNodeMacro, vtkSetAndObserveMRMLNodeEventMacro\n"},
  {"GetSelectionNodeID", PyvtkSlicerMarkupsLogic_GetSelectionNodeID, METH_VARARGS,
   "GetSelectionNodeID(self) -> str\nC++: std::string GetSelectionNodeID()\n\nUtility method to return the id of the selection node. Checks the\nmrml application logic if set, otherwise checks the scene for a\nsingleton selection node. Returns an empty string on failure.\n"},
  {"GetActiveListID", PyvtkSlicerMarkupsLogic_GetActiveListID, METH_VARARGS,
   "GetActiveListID(self) -> str\nC++: std::string GetActiveListID()\n\nUtility method to return the id of the active place node. Returns\nan empty string on failure.\n\\sa SetActiveListID\n"},
  {"SetActiveListID", PyvtkSlicerMarkupsLogic_SetActiveListID, METH_VARARGS,
   "SetActiveListID(self, markupsNode:vtkMRMLMarkupsNode) -> None\nC++: void SetActiveListID(vtkMRMLMarkupsNode *markupsNode)\n\nThis method is deprecated due to its confusing name. It is kept\nfor backward compatibility only, SetActiveList method should be\nused instead.\n"},
  {"SetActiveList", PyvtkSlicerMarkupsLogic_SetActiveList, METH_VARARGS,
   "SetActiveList(self, markupsNode:vtkMRMLMarkupsNode) -> None\nC++: void SetActiveList(vtkMRMLMarkupsNode *markupsNode)\n\nUtility method to set the active place node from the passed\nmarkups node. Does not set the interaction mode to place.\n\\sa GetActiveListID, StartPlaceMode\n\\sa vtkMRMLSelectionNode::SetReferenceActivePlaceNodeClassName\n\\sa vtkMRMLSelectionNode::SetActivePlaceNodeID\n"},
  {"AddNewDisplayNodeForMarkupsNode", PyvtkSlicerMarkupsLogic_AddNewDisplayNodeForMarkupsNode, METH_VARARGS,
   "AddNewDisplayNodeForMarkupsNode(self, mrmlNode:vtkMRMLNode) -> str\nC++: std::string AddNewDisplayNodeForMarkupsNode(\n    vtkMRMLNode *mrmlNode)\n\nCreate a new display node and observe it on the markups node. On\nsuccess, return the id, on failure return an empty string. If a\ndisplay node already exists for this node, return the id of that\nnode.\n"},
  {"AddNewFiducialNode", PyvtkSlicerMarkupsLogic_AddNewFiducialNode, METH_VARARGS,
   "AddNewFiducialNode(self, name:str=\"F\", scene:vtkMRMLScene=...)\n    -> str\nC++: std::string AddNewFiducialNode(const char *name=\"F\",\n    vtkMRMLScene *scene=nullptr)\n\nCreate a new markups fiducial node and associated display node,\nadding both to the scene. If the scene argument is null use the\nscene set on the logic class, and also make it the active on on\nthe selection node, otherwise add to the passed scene. On\nsuccess, return the id, on failure return an empty string.\n"},
  {"AddNewMarkupsNode", PyvtkSlicerMarkupsLogic_AddNewMarkupsNode, METH_VARARGS,
   "AddNewMarkupsNode(self, className:str, nodeName:str=...,\n    scene:vtkMRMLScene=...) -> vtkMRMLMarkupsNode\nC++: vtkMRMLMarkupsNode *AddNewMarkupsNode(std::string className,\n    std::string nodeName=std::string(),\n    vtkMRMLScene *scene=nullptr)\n\nCreate a new markups node and associated display node, adding\nboth to the scene. For ROI nodes, each new node will have a\nunique color.\n"},
  {"AddControlPoint", PyvtkSlicerMarkupsLogic_AddControlPoint, METH_VARARGS,
   "AddControlPoint(self, r:float=0.0, a:float=0.0, s:float=0.0)\n    -> int\nC++: int AddControlPoint(double r=0.0, double a=0.0, double s=0.0)\n\nAdd a new control point to the currently active markups fiducial\nnode at the given RAS coordinates (default 0,0,0). Will create a\nmarkups fiducial node if one is not active. Returns -1 on\nfailure, index of the added control point on success.\n"},
  {"JumpSlicesToLocation", PyvtkSlicerMarkupsLogic_JumpSlicesToLocation, METH_VARARGS,
   "JumpSlicesToLocation(self, x:float, y:float, z:float,\n    centered:bool, viewGroup:int=-1, exclude:vtkMRMLSliceNode=...)\n     -> None\nC++: void JumpSlicesToLocation(double x, double y, double z,\n    bool centered, int viewGroup=-1,\n    vtkMRMLSliceNode *exclude=nullptr)\n\njump the slice windows to the given coordinate If viewGroup is -1\nthen all all slice views are updated, otherwise only those views\nthat are in the specified group.\n"},
  {"JumpSlicesToNthPointInMarkup", PyvtkSlicerMarkupsLogic_JumpSlicesToNthPointInMarkup, METH_VARARGS,
   "JumpSlicesToNthPointInMarkup(self, id:str, n:int,\n    centered:bool=False, viewGroup:int=-1,\n    exclude:vtkMRMLSliceNode=...) -> None\nC++: void JumpSlicesToNthPointInMarkup(const char *id, int n,\n    bool centered=false, int viewGroup=-1,\n    vtkMRMLSliceNode *exclude=nullptr)\n\njump the slice windows to the nth markup with the mrml id id\n\\sa JumpSlicesToLocation\n"},
  {"FocusCamerasOnNthPointInMarkup", PyvtkSlicerMarkupsLogic_FocusCamerasOnNthPointInMarkup, METH_VARARGS,
   "FocusCamerasOnNthPointInMarkup(self, id:str, n:int) -> None\nC++: void FocusCamerasOnNthPointInMarkup(const char *id, int n)\n\nrefocus all of the 3D cameras to the nth markup with the mrml id\nid\n\\sa FocusCameraOnNthPointInMarkup\n"},
  {"FocusCameraOnNthPointInMarkup", PyvtkSlicerMarkupsLogic_FocusCameraOnNthPointInMarkup, METH_VARARGS,
   "FocusCameraOnNthPointInMarkup(self, cameraNodeID:str,\n    markupNodeID:str, n:int) -> None\nC++: void FocusCameraOnNthPointInMarkup(const char *cameraNodeID,\n    const char *markupNodeID, int n)\n\nrefocus the camera with the given cameraNodeID on the nth markup\nin the markups node with id markupNodeID\n\\sa FocusCamerasOnNthPointInMarkup\n"},
  {"LoadMarkups", PyvtkSlicerMarkupsLogic_LoadMarkups, METH_VARARGS,
   "LoadMarkups(self, fileName:str, fidsName:str=...,\n    userMessages:vtkMRMLMessageCollection=...) -> str\nC++: char *LoadMarkups(const char *fileName,\n    const char *fidsName=nullptr,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nLoad a markups node from fileName, return nullptr on error, node\nID string otherwise. Adds the appropriate storage and display\nnodes to the scene as well.\n"},
  {"LoadMarkupsFiducials", PyvtkSlicerMarkupsLogic_LoadMarkupsFiducials, METH_VARARGS,
   "LoadMarkupsFiducials(self, fileName:str, fidsName:str=...,\n    userMessages:vtkMRMLMessageCollection=...) -> str\nC++: char *LoadMarkupsFiducials(const char *fileName,\n    const char *fidsName=nullptr,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nThis method is deprecated. It is kept for backward compatibility\nonly, it does the same as LoadMarkups method.\n"},
  {"LoadMarkupsFromFcsv", PyvtkSlicerMarkupsLogic_LoadMarkupsFromFcsv, METH_VARARGS,
   "LoadMarkupsFromFcsv(self, fileName:str, nodeName:str=...,\n    userMessages:vtkMRMLMessageCollection=...) -> str\nC++: char *LoadMarkupsFromFcsv(const char *fileName,\n    const char *nodeName=nullptr,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\n"},
  {"LoadMarkupsFromJson", PyvtkSlicerMarkupsLogic_LoadMarkupsFromJson, METH_VARARGS,
   "LoadMarkupsFromJson(self, fileName:str, nodeName:str=...,\n    userMessages:vtkMRMLMessageCollection=...) -> str\nC++: char *LoadMarkupsFromJson(const char *fileName,\n    const char *nodeName=nullptr,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\n"},
  {"LoadAnnotation", PyvtkSlicerMarkupsLogic_LoadAnnotation, METH_VARARGS,
   "LoadAnnotation(self, filename:str, name:str,\n    annotationFileType:int) -> str\nC++: char *LoadAnnotation(const char *filename, const char *name,\n    int annotationFileType)\n\nLoad a legacy annotation file, return nullptr on error, node ID\nstring otherwise. Adds the appropriate storage and display nodes\nto the scene as well. fileType is from this class's enum\n"},
  {"SetAllControlPointsVisibility", PyvtkSlicerMarkupsLogic_SetAllControlPointsVisibility, METH_VARARGS,
   "SetAllControlPointsVisibility(self, node:vtkMRMLMarkupsNode,\n    flag:bool) -> None\nC++: void SetAllControlPointsVisibility(vtkMRMLMarkupsNode *node,\n    bool flag)\n\n"},
  {"ToggleAllControlPointsVisibility", PyvtkSlicerMarkupsLogic_ToggleAllControlPointsVisibility, METH_VARARGS,
   "ToggleAllControlPointsVisibility(self, node:vtkMRMLMarkupsNode)\n    -> None\nC++: void ToggleAllControlPointsVisibility(\n    vtkMRMLMarkupsNode *node)\n\n"},
  {"SetAllControlPointsLocked", PyvtkSlicerMarkupsLogic_SetAllControlPointsLocked, METH_VARARGS,
   "SetAllControlPointsLocked(self, node:vtkMRMLMarkupsNode,\n    flag:bool) -> None\nC++: void SetAllControlPointsLocked(vtkMRMLMarkupsNode *node,\n    bool flag)\n\n"},
  {"ToggleAllControlPointsLocked", PyvtkSlicerMarkupsLogic_ToggleAllControlPointsLocked, METH_VARARGS,
   "ToggleAllControlPointsLocked(self, node:vtkMRMLMarkupsNode)\n    -> None\nC++: void ToggleAllControlPointsLocked(vtkMRMLMarkupsNode *node)\n\n"},
  {"SetAllControlPointsSelected", PyvtkSlicerMarkupsLogic_SetAllControlPointsSelected, METH_VARARGS,
   "SetAllControlPointsSelected(self, node:vtkMRMLMarkupsNode,\n    flag:bool) -> None\nC++: void SetAllControlPointsSelected(vtkMRMLMarkupsNode *node,\n    bool flag)\n\n"},
  {"ToggleAllControlPointsSelected", PyvtkSlicerMarkupsLogic_ToggleAllControlPointsSelected, METH_VARARGS,
   "ToggleAllControlPointsSelected(self, node:vtkMRMLMarkupsNode)\n    -> None\nC++: void ToggleAllControlPointsSelected(vtkMRMLMarkupsNode *node)\n\n"},
  {"SetDisplayNodeToDefaults", PyvtkSlicerMarkupsLogic_SetDisplayNodeToDefaults, METH_VARARGS,
   "SetDisplayNodeToDefaults(self,\n    displayNode:vtkMRMLMarkupsDisplayNode) -> None\nC++: void SetDisplayNodeToDefaults(\n    vtkMRMLMarkupsDisplayNode *displayNode)\n\nUtility method to set up a display node from the defaults. Point\nlabels visibility and properties label visibility setting is not\nsaved to defaults, as typically it is better to initialize these\nbased on the node type (point labels are more useful for\nfiducials, while properties label is more useful for other\nmarkups).\n"},
  {"SetDisplayDefaultsFromNode", PyvtkSlicerMarkupsLogic_SetDisplayDefaultsFromNode, METH_VARARGS,
   "SetDisplayDefaultsFromNode(self,\n    displayNode:vtkMRMLMarkupsDisplayNode) -> None\nC++: void SetDisplayDefaultsFromNode(\n    vtkMRMLMarkupsDisplayNode *displayNode)\n\nutility method to set defaults from display node\n"},
  {"CopyNthControlPointToNewList", PyvtkSlicerMarkupsLogic_CopyNthControlPointToNewList, METH_VARARGS,
   "CopyNthControlPointToNewList(self, n:int,\n    markupsNode:vtkMRMLMarkupsNode,\n    newMarkupsNode:vtkMRMLMarkupsNode) -> bool\nC++: bool CopyNthControlPointToNewList(int n,\n    vtkMRMLMarkupsNode *markupsNode,\n    vtkMRMLMarkupsNode *newMarkupsNode)\n\nutility method to copy a control point from one list to another,\nadding it to the end of the new list\n\\sa vtkMRMLMarkupsNode::AddControlPoint\nReturns true on success, false on failure\n"},
  {"MoveNthControlPointToNewListAtIndex", PyvtkSlicerMarkupsLogic_MoveNthControlPointToNewListAtIndex, METH_VARARGS,
   "MoveNthControlPointToNewListAtIndex(self, n:int,\n    markupsNode:vtkMRMLMarkupsNode,\n    newMarkupsNode:vtkMRMLMarkupsNode, newIndex:int) -> bool\nC++: bool MoveNthControlPointToNewListAtIndex(int n,\n    vtkMRMLMarkupsNode *markupsNode,\n    vtkMRMLMarkupsNode *newMarkupsNode, int newIndex)\n\nutility method to move a control point from one list to another,\ntrying to insert it at the given new index. If the new index is\nlarger than the number of control points in the list, adds it to\nthe end. If new index is smaller than 0, adds it at the\nbeginning. Otherwise inserts at that index.\n\\sa vtkMRMLMarkupsNode::InsertControlPoint\nReturns true on success, false on failure\n"},
  {"ConvertAnnotationFiducialsToMarkups", PyvtkSlicerMarkupsLogic_ConvertAnnotationFiducialsToMarkups, METH_VARARGS,
   "ConvertAnnotationFiducialsToMarkups(self,\n    addedNodeIds:vtkStringArray=...,\n    removedNodeIds:vtkStringArray=...) -> None\nC++: void ConvertAnnotationFiducialsToMarkups(\n    vtkStringArray *addedNodeIds=nullptr,\n    vtkStringArray *removedNodeIds=nullptr)\n\nSearches the scene for annotation fiducial nodes, collecting a\nlist of annotation hierarchy nodes. Then iterates through those\nhierarchy nodes and moves the fiducials that are under them into\nnew markups nodes. Leaves the top level hierarchy nodes intact as\nthey may be parents to ruler or ROIs but deletes the 1:1\nhierarchy nodes. If addedNodeIds or removedNodeIds are specified\nthen IDs of data and hierarchy nodes added or removed during\nconversion in the main scene are added to these arrays.\n"},
  {"ConvertAnnotationLinesROIsToMarkups", PyvtkSlicerMarkupsLogic_ConvertAnnotationLinesROIsToMarkups, METH_VARARGS,
   "ConvertAnnotationLinesROIsToMarkups(self,\n    addedNodeIds:vtkStringArray=...,\n    removedNodeIds:vtkStringArray=...) -> None\nC++: void ConvertAnnotationLinesROIsToMarkups(\n    vtkStringArray *addedNodeIds=nullptr,\n    vtkStringArray *removedNodeIds=nullptr)\n\nSearches the scene for annotation ruler and ROI nodes and\nconverts each to markup line or ROI node. If addedNodeIds or\nremovedNodeIds are specified then IDs of data and hierarchy nodes\nadded or removed during conversion in the main scene are added to\nthese arrays.\n"},
  {"ConvertAnnotationHierarchyToSubjectHierarchy", PyvtkSlicerMarkupsLogic_ConvertAnnotationHierarchyToSubjectHierarchy, METH_VARARGS,
   "ConvertAnnotationHierarchyToSubjectHierarchy(self,\n    scene:vtkMRMLScene) -> None\nC++: void ConvertAnnotationHierarchyToSubjectHierarchy(\n    vtkMRMLScene *scene)\n\n"},
  {"RenameAllControlPointsFromCurrentFormat", PyvtkSlicerMarkupsLogic_RenameAllControlPointsFromCurrentFormat, METH_VARARGS,
   "RenameAllControlPointsFromCurrentFormat(self,\n    markupsNode:vtkMRMLMarkupsNode) -> None\nC++: void RenameAllControlPointsFromCurrentFormat(\n    vtkMRMLMarkupsNode *markupsNode)\n\nIterate over the control points in the list and reset the control\npoint labels using the current ControlPointLabelFormat setting.\nTry to keep current numbering. Will work if there's a %d, %g or\n%f in the format string, but precision is not handled.\n"},
  {"StartPlaceMode", PyvtkSlicerMarkupsLogic_StartPlaceMode, METH_VARARGS,
   "StartPlaceMode(self, persistent:bool,\n    interactionNode:vtkMRMLInteractionNode=...) -> bool\nC++: bool StartPlaceMode(bool persistent,\n    vtkMRMLInteractionNode *interactionNode=nullptr)\n\nPut the interaction node into place mode, and set the persistence\nof place mode according to the persistent flag. Return true on\nsuccessfully going into place mode, false otherwise. By default,\nthe default interaction node is updated.\n\\sa SetActiveIDList\n"},
  {"SetAutoCreateDisplayNodes", PyvtkSlicerMarkupsLogic_SetAutoCreateDisplayNodes, METH_VARARGS,
   "SetAutoCreateDisplayNodes(self, _arg:bool) -> None\nC++: virtual void SetAutoCreateDisplayNodes(bool _arg)\n\n"},
  {"GetAutoCreateDisplayNodes", PyvtkSlicerMarkupsLogic_GetAutoCreateDisplayNodes, METH_VARARGS,
   "GetAutoCreateDisplayNodes(self) -> bool\nC++: virtual bool GetAutoCreateDisplayNodes()\n\n"},
  {"AutoCreateDisplayNodesOn", PyvtkSlicerMarkupsLogic_AutoCreateDisplayNodesOn, METH_VARARGS,
   "AutoCreateDisplayNodesOn(self) -> None\nC++: virtual void AutoCreateDisplayNodesOn()\n\n"},
  {"AutoCreateDisplayNodesOff", PyvtkSlicerMarkupsLogic_AutoCreateDisplayNodesOff, METH_VARARGS,
   "AutoCreateDisplayNodesOff(self) -> None\nC++: virtual void AutoCreateDisplayNodesOff()\n\n"},
  {"GetDefaultMarkupsDisplayNode", PyvtkSlicerMarkupsLogic_GetDefaultMarkupsDisplayNode, METH_VARARGS,
   "GetDefaultMarkupsDisplayNode(self) -> vtkMRMLMarkupsDisplayNode\nC++: vtkMRMLMarkupsDisplayNode *GetDefaultMarkupsDisplayNode()\n\n"},
  {"CopyBasicDisplayProperties", PyvtkSlicerMarkupsLogic_CopyBasicDisplayProperties, METH_VARARGS,
   "CopyBasicDisplayProperties(self,\n    sourceDisplayNode:vtkMRMLMarkupsDisplayNode,\n    targetDisplayNode:vtkMRMLMarkupsDisplayNode) -> None\nC++: void CopyBasicDisplayProperties(\n    vtkMRMLMarkupsDisplayNode *sourceDisplayNode,\n    vtkMRMLMarkupsDisplayNode *targetDisplayNode)\n\nCopies basic display properties between markups display nodes.\nThis is used for updating a display node to defaults.\n"},
  {"GetClosedCurveSurfaceArea", PyvtkSlicerMarkupsLogic_GetClosedCurveSurfaceArea, METH_VARARGS,
   "GetClosedCurveSurfaceArea(curveNode:vtkMRMLMarkupsClosedCurveNode,\n     surface:vtkPolyData=..., projectWarp:bool=True) -> float\nC++: static double GetClosedCurveSurfaceArea(\n    vtkMRMLMarkupsClosedCurveNode *curveNode,\n    vtkPolyData *surface=nullptr, bool projectWarp=true)\n\nMeasure surface area of the smooth surface that fits on the\nclosed curve in world coordinate system. If projectWarp option is\nenabled then FitSurfaceProjectWarp method is used otherwise\nFitSurfaceDiskWarp is used. FitSurfaceProjectWarp produces\naccurate results for all quasi-planar curves (while\nFitSurfaceDiskWarp may significantly overestimate surface area\nfor planar convex curves). FitSurfaceDiskWarp is kept for\ncomparison only and may be removed in the future.\n\\param curveNode points to fit the surface to\n\\param surface if not nullptr then the generated surface is saved\ninto that\n"},
  {"FitSurfaceProjectWarp", PyvtkSlicerMarkupsLogic_FitSurfaceProjectWarp, METH_VARARGS,
   "FitSurfaceProjectWarp(curvePoints:vtkPoints, surface:vtkPolyData,\n    radiusScalingFactor:float=1.0,\n    numberOfInternalGridPoints:int=225) -> bool\nC++: static bool FitSurfaceProjectWarp(vtkPoints *curvePoints,\n    vtkPolyData *surface, double radiusScalingFactor=1.0,\n    vtkIdType numberOfInternalGridPoints=225)\n\nCreate a \"soap bubble\" surface that fits on the provided point\nlist. It can fill arbitrarily complex (non-self-intersecting)\npolygons in a plane or in a slightly curved plane. First the\ncontour points projected to best fit plane, triangulated in 2D,\nand warped to the non-planar shape. Convex surfaces are\ntriangulated correctly. If the contour is self-intersecting after\nprojected to best fit plane then the surface will be invalid.\n\\param curvePoints: points to fit the surface to\n\\param radiusScalingFactor size of the surface. Value of 1.0\n    (default) means the surface edge fits on the points.\nLarger values increase the generated soap bubble outer radius,\nwhich may be useful to avoid coincident points when using this\nsurface for cutting another surface.\n\\param numberOfInternalGridPoints specifies the number of\n    additional grid points that are added to get a more evenly\n    triangulated\nsurface. Default is 225, which corresponds to 15x15 subdivisions\nfor a square shaped region.\n\\warning Specifying radiusScalingFactor has no effect. Associated\nfeature is not yet implemented.\n"},
  {"FitSurfaceDiskWarp", PyvtkSlicerMarkupsLogic_FitSurfaceDiskWarp, METH_VARARGS,
   "FitSurfaceDiskWarp(curvePoints:vtkPoints, surface:vtkPolyData,\n    radiusScalingFactor:float=1.0) -> bool\nC++: static bool FitSurfaceDiskWarp(vtkPoints *curvePoints,\n    vtkPolyData *surface, double radiusScalingFactor=1.0)\n\nCreate a \"soap bubble\" surface that fits on the provided point\nlist. Compared to FitSurfaceProjectWarp, this method can tolerate\nmore if points are not on a plane but it may not be able to fill\ncomplicated shapes (with sharp edges or many indentations). A\ntriangulated disk is warped so that its boundary matches the\nprovided curve points using thin-plate spline transform. The\ngenerated surface may go beyond the boundary of the input points\nif the boundary is highly concave or curved.\n\\param curvePoints: points to fit the surface to\n\\param radiusScalingFactor size of the surface.Value of 1.0\n    (default) means the surface edge fits on the points.\nLarger values increase the generated soap bubble outer radius,\nwhich may be useful to avoid coincident points when using this\nsurface for cutting another surface.\n"},
  {"IsPolygonClockwise", PyvtkSlicerMarkupsLogic_IsPolygonClockwise, METH_VARARGS,
   "IsPolygonClockwise(points:vtkPoints, pointIds:vtkIdList=...)\n    -> bool\nC++: static bool IsPolygonClockwise(vtkPoints *points,\n    vtkIdList *pointIds=nullptr)\n\nReturn true if the polygon points are oriented clockwise. If\npointIds is null then point IDs will be 0, 1, 2, ... n-1.\n"},
  {"GetBestFitPlane", PyvtkSlicerMarkupsLogic_GetBestFitPlane, METH_VARARGS,
   "GetBestFitPlane(curveNode:vtkMRMLMarkupsNode, plane:vtkPlane)\n    -> bool\nC++: static bool GetBestFitPlane(vtkMRMLMarkupsNode *curveNode,\n    vtkPlane *plane)\n\nGet best fit plane for a markup\n"},
  {"GetJsonStorageNodeClassNameForMarkupsType", PyvtkSlicerMarkupsLogic_GetJsonStorageNodeClassNameForMarkupsType, METH_VARARGS,
   "GetJsonStorageNodeClassNameForMarkupsType(self, markupsType:str)\n    -> str\nC++: std::string GetJsonStorageNodeClassNameForMarkupsType(\n    std::string markupsType)\n\n"},
  {"RegisterJsonStorageNodeForMarkupsType", PyvtkSlicerMarkupsLogic_RegisterJsonStorageNodeForMarkupsType, METH_VARARGS,
   "RegisterJsonStorageNodeForMarkupsType(self, markupsType:str,\n    storageNodeClassName:str) -> None\nC++: void RegisterJsonStorageNodeForMarkupsType(\n    std::string markupsType, std::string storageNodeClassName)\n\n"},
  {"AddNewJsonStorageNodeForMarkupsType", PyvtkSlicerMarkupsLogic_AddNewJsonStorageNodeForMarkupsType, METH_VARARGS,
   "AddNewJsonStorageNodeForMarkupsType(self, markupsType:str)\n    -> vtkMRMLMarkupsJsonStorageNode\nC++: vtkMRMLMarkupsJsonStorageNode *AddNewJsonStorageNodeForMarkupsType(\n    std::string markupsType)\n\n"},
  {"RegisterMarkupsNode", PyvtkSlicerMarkupsLogic_RegisterMarkupsNode, METH_VARARGS,
   "RegisterMarkupsNode(self, markupsNode:vtkMRMLMarkupsNode,\n    markupsWidget:vtkSlicerMarkupsWidget,\n    createPushButton:bool=True) -> None\nC++: void RegisterMarkupsNode(vtkMRMLMarkupsNode *markupsNode,\n    vtkSlicerMarkupsWidget *markupsWidget,\n    bool createPushButton=true)\n\nRegister a markup and its corresponding widget to be handled by\nthe Markups module. For a markup to be handled by this module\n(processed by the displayable manager, UI and subject hierarchy)\nit needs to be registered using this method. The method also\nregisters the markupsNode class in the scene.\n\\param markupsNode MRMLMarkups node to be registered.\n\\param markupsWidget vtkSlicerWidget associated to the\n    MRMLMarkups node registered.\n"},
  {"UnregisterMarkupsNode", PyvtkSlicerMarkupsLogic_UnregisterMarkupsNode, METH_VARARGS,
   "UnregisterMarkupsNode(self, markupsNode:vtkMRMLMarkupsNode)\n    -> None\nC++: void UnregisterMarkupsNode(vtkMRMLMarkupsNode *markupsNode)\n\nUnregister a markup and its corresponding widget. This will\ntrigger the vtkSlicerMarkupsLogic::MarkupUnregistered event.\n\\param markupsNode MRMLMarkups node to be unregistered.\n"},
  {"IsMarkupsNodeRegistered", PyvtkSlicerMarkupsLogic_IsMarkupsNodeRegistered, METH_VARARGS,
   "IsMarkupsNodeRegistered(self, nodeType:str) -> bool\nC++: bool IsMarkupsNodeRegistered(const char *nodeType)\n\nReturns true if the provided class name is a known markups class\n(it has been registered in the logic using RegisterMarkupsNode).\n"},
  {"GetWidgetByMarkupsType", PyvtkSlicerMarkupsLogic_GetWidgetByMarkupsType, METH_VARARGS,
   "GetWidgetByMarkupsType(self, markupsType:str)\n    -> vtkSlicerMarkupsWidget\nC++: vtkSlicerMarkupsWidget *GetWidgetByMarkupsType(\n    const char *markupsType)\n\nThis returns an instance to a corresponding\nvtkSlicerMarkupsWidget associated to the indicated markups name.\n\\param markupsType registered class to retrieve the associated\n    widget.\n\\return pointer to associated vtkSlicerMarkupsWidget or nullptr\n    if the MRML node\nclass is not registered.\n"},
  {"GetNodeByMarkupsType", PyvtkSlicerMarkupsLogic_GetNodeByMarkupsType, METH_VARARGS,
   "GetNodeByMarkupsType(self, markupsType:str) -> vtkMRMLMarkupsNode\nC++: vtkMRMLMarkupsNode *GetNodeByMarkupsType(\n    const char *markupsType)\n\nThis returns an instance to a corresponding vtkMRMLMarkupsNode\nassociated to the indicated markups name.\n\\param markupsType registered class to retrieve the associated\n    widget.\n\\return pointer to associated vtkSlicerMarkupsWidget or nullptr\n    if the MRML node\nclass is not registered.\n"},
  {"GetCreateMarkupsPushButton", PyvtkSlicerMarkupsLogic_GetCreateMarkupsPushButton, METH_VARARGS,
   "GetCreateMarkupsPushButton(self, markupName:str) -> bool\nC++: bool GetCreateMarkupsPushButton(const char *markupName)\n\nThis returns the flags that indicates whether the GUI push button\nshould be created.\n"},
  {"ImportControlPointsFromTable", PyvtkSlicerMarkupsLogic_ImportControlPointsFromTable, METH_VARARGS,
   "ImportControlPointsFromTable(markupsNode:vtkMRMLMarkupsNode,\n    tableNode:vtkMRMLTableNode, startRow:int=0,\n    numberOfRows:int=-1) -> bool\nC++: static bool ImportControlPointsFromTable(\n    vtkMRMLMarkupsNode *markupsNode, vtkMRMLTableNode *tableNode,\n    int startRow=0, int numberOfRows=-1)\n\nImport markups control points from table node Column names:\nlabel, r, a, s, (or l, p, s), defined, selected, visible, locked,\ndescription.\n"},
  {"ExportControlPointsToTable", PyvtkSlicerMarkupsLogic_ExportControlPointsToTable, METH_VARARGS,
   "ExportControlPointsToTable(markupsNode:vtkMRMLMarkupsNode,\n    tableNode:vtkMRMLTableNode, coordinateSystem:int=...) -> bool\nC++: static bool ExportControlPointsToTable(\n    vtkMRMLMarkupsNode *markupsNode, vtkMRMLTableNode *tableNode,\n    int coordinateSystem=vtkMRMLStorageNode::CoordinateSystemRAS)\n\n"},
  {"ExportControlPointsToCSV", PyvtkSlicerMarkupsLogic_ExportControlPointsToCSV, METH_VARARGS,
   "ExportControlPointsToCSV(markupsNode:vtkMRMLMarkupsNode,\n    filename:str, lps:bool=True) -> bool\nC++: static bool ExportControlPointsToCSV(\n    vtkMRMLMarkupsNode *markupsNode, const std::string filename,\n    bool lps=true)\n\nExport markups node control points to CSV file.\n\\param markupsNode Node that the control points are exported to.\n\\param filename Output filename.\n\\param lps Save files in LPS coordinate system. If set to false\n    then RAS coordinate system is used.\n"},
  {"ImportControlPointsFromCSV", PyvtkSlicerMarkupsLogic_ImportControlPointsFromCSV, METH_VARARGS,
   "ImportControlPointsFromCSV(markupsNode:vtkMRMLMarkupsNode,\n    filename:str) -> bool\nC++: static bool ImportControlPointsFromCSV(\n    vtkMRMLMarkupsNode *markupsNode, const std::string filename)\n\nImport markups node control points from CSV file.\n\\param markupsNode Node that the control points are imported\n    from.\n\\param filename Input filename.\n"},
  {"CopyNthMarkupToNewList", PyvtkSlicerMarkupsLogic_CopyNthMarkupToNewList, METH_VARARGS,
   "CopyNthMarkupToNewList(self, n:int,\n    markupsNode:vtkMRMLMarkupsNode,\n    newMarkupsNode:vtkMRMLMarkupsNode) -> bool\nC++: bool CopyNthMarkupToNewList(int n,\n    vtkMRMLMarkupsNode *markupsNode,\n    vtkMRMLMarkupsNode *newMarkupsNode)\n\n\\deprecated Use CopyNthControlPointToNewList instead.\n"},
  {"MoveNthMarkupToNewList", PyvtkSlicerMarkupsLogic_MoveNthMarkupToNewList, METH_VARARGS,
   "MoveNthMarkupToNewList(self, n:int,\n    markupsNode:vtkMRMLMarkupsNode,\n    newMarkupsNode:vtkMRMLMarkupsNode, newIndex:int) -> bool\nC++: bool MoveNthMarkupToNewList(int n,\n    vtkMRMLMarkupsNode *markupsNode,\n    vtkMRMLMarkupsNode *newMarkupsNode, int newIndex)\n\n\\deprecated Use MoveNthControlPointToNewList instead.\n"},
  {"AddFiducial", PyvtkSlicerMarkupsLogic_AddFiducial, METH_VARARGS,
   "AddFiducial(self, r:float=0.0, a:float=0.0, s:float=0.0) -> int\nC++: int AddFiducial(double r=0.0, double a=0.0, double s=0.0)\n\n\\deprecated Use AddControlPoint instead.\n"},
  {"SetAllMarkupsVisibility", PyvtkSlicerMarkupsLogic_SetAllMarkupsVisibility, METH_VARARGS,
   "SetAllMarkupsVisibility(self, node:vtkMRMLMarkupsNode, flag:bool)\n    -> None\nC++: void SetAllMarkupsVisibility(vtkMRMLMarkupsNode *node,\n    bool flag)\n\n\\deprecated Use SetAllControlPointsVisibility instead.\n"},
  {"ToggleAllMarkupsVisibility", PyvtkSlicerMarkupsLogic_ToggleAllMarkupsVisibility, METH_VARARGS,
   "ToggleAllMarkupsVisibility(self, node:vtkMRMLMarkupsNode) -> None\nC++: void ToggleAllMarkupsVisibility(vtkMRMLMarkupsNode *node)\n\n\\deprecated Use ToggleAllControlPointsVisibility instead.\n"},
  {"SetAllMarkupsLocked", PyvtkSlicerMarkupsLogic_SetAllMarkupsLocked, METH_VARARGS,
   "SetAllMarkupsLocked(self, node:vtkMRMLMarkupsNode, flag:bool)\n    -> None\nC++: void SetAllMarkupsLocked(vtkMRMLMarkupsNode *node, bool flag)\n\n\\deprecated Use SetAllControlPointsLocked instead.\n"},
  {"ToggleAllMarkupsLocked", PyvtkSlicerMarkupsLogic_ToggleAllMarkupsLocked, METH_VARARGS,
   "ToggleAllMarkupsLocked(self, node:vtkMRMLMarkupsNode) -> None\nC++: void ToggleAllMarkupsLocked(vtkMRMLMarkupsNode *node)\n\n\\deprecated Use ToggleAllControlPointsLocked instead.\n"},
  {"SetAllMarkupsSelected", PyvtkSlicerMarkupsLogic_SetAllMarkupsSelected, METH_VARARGS,
   "SetAllMarkupsSelected(self, node:vtkMRMLMarkupsNode, flag:bool)\n    -> None\nC++: void SetAllMarkupsSelected(vtkMRMLMarkupsNode *node,\n    bool flag)\n\n\\deprecated Use SetAllControlPointsSelected instead.\n"},
  {"ToggleAllMarkupsSelected", PyvtkSlicerMarkupsLogic_ToggleAllMarkupsSelected, METH_VARARGS,
   "ToggleAllMarkupsSelected(self, node:vtkMRMLMarkupsNode) -> None\nC++: void ToggleAllMarkupsSelected(vtkMRMLMarkupsNode *node)\n\n\\deprecated Use ToggleAllControlPointsSelected instead.\n"},
  {"RenameAllMarkupsFromCurrentFormat", PyvtkSlicerMarkupsLogic_RenameAllMarkupsFromCurrentFormat, METH_VARARGS,
   "RenameAllMarkupsFromCurrentFormat(self,\n    markupsNode:vtkMRMLMarkupsNode) -> None\nC++: void RenameAllMarkupsFromCurrentFormat(\n    vtkMRMLMarkupsNode *markupsNode)\n\n\\deprecated Use RenameAllControlPointsFromCurrentFormat instead.\n"},
  {"GenerateUniqueColor", PyvtkSlicerMarkupsLogic_GenerateUniqueColor, METH_VARARGS,
   "GenerateUniqueColor(self) -> vtkVector3d\nC++: vtkVector3d GenerateUniqueColor()\nGenerateUniqueColor(self, color:[float, float, float]) -> None\nC++: void GenerateUniqueColor(double color[3])\n\nGenerate a unique color for a markup node. In the current\nimplementation, the color is not globally unique, but colors are\ngenerated by iterating through the items in \"MediumChart\" color\ntable.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerMarkupsLogic_Doc =
  "vtkSlicerMarkupsLogic - slicer logic class for volumes manipulation\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
  "This class manages the logic associated with reading, saving, and\n"
  "changing propertied of the volumes\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerMarkupsLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleLogicPython.vtkSlicerMarkupsLogic", // tp_name
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
  PyvtkSlicerMarkupsLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerMarkupsLogic_StaticNew()
{
  return vtkSlicerMarkupsLogic::New();
}

PyObject *PyvtkSlicerMarkupsLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerMarkupsLogic_Type, PyvtkSlicerMarkupsLogic_Methods,
    "vtkSlicerMarkupsLogic",
 &PyvtkSlicerMarkupsLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSlicerMarkupsLogic_Events_Type);
  PyVTKEnum_Add(&PyvtkSlicerMarkupsLogic_Events_Type, "vtkSlicerMarkupsLogic.Events");

  o = (PyObject *)&PyvtkSlicerMarkupsLogic_Events_Type;
  if (PyDict_SetItemString(d, "Events", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSlicerMarkupsLogic::Events cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "MarkupRegistered", vtkSlicerMarkupsLogic::MarkupRegistered },
        { "MarkupUnregistered", vtkSlicerMarkupsLogic::MarkupUnregistered },
      };

    o = PyvtkSlicerMarkupsLogic_Events_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "AnnotationNone", vtkSlicerMarkupsLogic::AnnotationNone },
        { "AnnotationFiducial", vtkSlicerMarkupsLogic::AnnotationFiducial },
        { "AnnotationRuler", vtkSlicerMarkupsLogic::AnnotationRuler },
        { "AnnotationROI", vtkSlicerMarkupsLogic::AnnotationROI },
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

void PyVTKAddFile_vtkSlicerMarkupsLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerMarkupsLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerMarkupsLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

