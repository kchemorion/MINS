// python wrapper for vtkMRMLColorLegendDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLColorLegendDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLColorLegendDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLColorLegendDisplayNode_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLColorLegendDisplayNode_OrientationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerColorsModuleMRMLPython.vtkMRMLColorLegendDisplayNode.OrientationType", // tp_name
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
PyObject *PyvtkMRMLColorLegendDisplayNode_OrientationType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLColorLegendDisplayNode_OrientationType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLColorLegendDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLColorLegendDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLColorLegendDisplayNode *tempr = vtkMRMLColorLegendDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLColorLegendDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLColorLegendDisplayNode::NewInstance());

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
PyvtkMRMLColorLegendDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLColorLegendDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLColorLegendDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLColorLegendDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLColorLegendDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

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
      op->vtkMRMLColorLegendDisplayNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLColorLegendDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkMRMLColorLegendDisplayNode::OrientationType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkMRMLColorLegendDisplayNode::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkMRMLColorLegendDisplayNode_OrientationType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  typedef vtkMRMLColorLegendDisplayNode::OrientationType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkMRMLColorLegendDisplayNode.OrientationType"))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkMRMLColorLegendDisplayNode::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkMRMLColorLegendDisplayNode::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkMRMLColorLegendDisplayNode::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkMRMLColorLegendDisplayNode::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLColorLegendDisplayNode_SetPosition_s1(self, args);
    case 1:
      return PyvtkMRMLColorLegendDisplayNode_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkMRMLColorLegendDisplayNode::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkMRMLColorLegendDisplayNode::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkMRMLColorLegendDisplayNode::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLColorLegendDisplayNode_SetSize_s1(self, args);
    case 1:
      return PyvtkMRMLColorLegendDisplayNode_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetTitleText() :
      op->vtkMRMLColorLegendDisplayNode::GetTitleText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetTitleText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleText(temp0);
    }
    else
    {
      op->vtkMRMLColorLegendDisplayNode::SetTitleText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkMRMLColorLegendDisplayNode::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkMRMLColorLegendDisplayNode::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetDefaultNumericLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNumericLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDefaultNumericLabelFormat() :
      op->vtkMRMLColorLegendDisplayNode::GetDefaultNumericLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetDefaultTextLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultTextLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDefaultTextLabelFormat() :
      op->vtkMRMLColorLegendDisplayNode::GetDefaultTextLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetMaxNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfColors() :
      op->vtkMRMLColorLegendDisplayNode::GetMaxNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetMaxNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumberOfColors(temp0);
    }
    else
    {
      op->vtkMRMLColorLegendDisplayNode::SetMaxNumberOfColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkMRMLColorLegendDisplayNode::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLabels(temp0);
    }
    else
    {
      op->vtkMRMLColorLegendDisplayNode::SetNumberOfLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetUseColorNamesForLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseColorNamesForLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseColorNamesForLabels() :
      op->vtkMRMLColorLegendDisplayNode::GetUseColorNamesForLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetUseColorNamesForLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseColorNamesForLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseColorNamesForLabels(temp0);
    }
    else
    {
      op->vtkMRMLColorLegendDisplayNode::SetUseColorNamesForLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkMRMLColorLegendDisplayNode::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkMRMLColorLegendDisplayNode::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_GetPrimaryDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrimaryDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDisplayNode *tempr = (ap.IsBound() ?
      op->GetPrimaryDisplayNode() :
      op->vtkMRMLColorLegendDisplayNode::GetPrimaryDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_SetAndObservePrimaryDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObservePrimaryDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

  vtkMRMLDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayNode"))
  {
    if (ap.IsBound())
    {
      op->SetAndObservePrimaryDisplayNode(temp0);
    }
    else
    {
      op->vtkMRMLColorLegendDisplayNode::SetAndObservePrimaryDisplayNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLegendDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLegendDisplayNode *op = static_cast<vtkMRMLColorLegendDisplayNode *>(vp);

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
      op->vtkMRMLColorLegendDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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

static PyMethodDef PyvtkMRMLColorLegendDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLColorLegendDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLColorLegendDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLColorLegendDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLColorLegendDisplayNode\nC++: static vtkMRMLColorLegendDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLColorLegendDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLColorLegendDisplayNode\nC++: vtkMRMLColorLegendDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLColorLegendDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLColorLegendDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLColorLegendDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"GetNodeTagName", PyvtkMRMLColorLegendDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"CopyContent", PyvtkMRMLColorLegendDisplayNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLColorLegendDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetOrientation", PyvtkMRMLColorLegendDisplayNode_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> OrientationType\nC++: virtual OrientationType GetOrientation()\n\nGet/Set color legend orientation Possible values:\nvtkMRMLColorLegendDisplayNode::Horizontal,\nvtkMRMLColorLegendDisplayNode::Vertical\n"},
  {"SetOrientation", PyvtkMRMLColorLegendDisplayNode_SetOrientation, METH_VARARGS,
   "SetOrientation(self, _arg:OrientationType) -> None\nC++: virtual void SetOrientation(OrientationType _arg)\n\nGet/Set color legend orientation Possible values:\nvtkMRMLColorLegendDisplayNode::Horizontal,\nvtkMRMLColorLegendDisplayNode::Vertical\n"},
  {"GetPosition", PyvtkMRMLColorLegendDisplayNode_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (float, float)\nC++: virtual double *GetPosition()\n\nGet/Set color legend position of lower left point. Values are\nfraction of window size.\n"},
  {"SetPosition", PyvtkMRMLColorLegendDisplayNode_SetPosition, METH_VARARGS,
   "SetPosition(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetPosition(double _arg1, double _arg2)\nSetPosition(self, _arg:(float, float)) -> None\nC++: void SetPosition(const double _arg[2])\n\nGet/Set color legend position of lower left point. Values are\nfraction of window size.\n"},
  {"GetSize", PyvtkMRMLColorLegendDisplayNode_GetSize, METH_VARARGS,
   "GetSize(self) -> (float, float)\nC++: virtual double *GetSize()\n\nColor legend size as fraction of window size. Instead of storing\nwidth and height, the two values correspond to size of short side\nand long side, as this allows quick orientation switching without\nthe need to adjust the size. For vertical orientation: width,\nheight. For horizontal orientation: height, width.\n"},
  {"SetSize", PyvtkMRMLColorLegendDisplayNode_SetSize, METH_VARARGS,
   "SetSize(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetSize(double _arg1, double _arg2)\nSetSize(self, _arg:(float, float)) -> None\nC++: void SetSize(const double _arg[2])\n\nColor legend size as fraction of window size. Instead of storing\nwidth and height, the two values correspond to size of short side\nand long side, as this allows quick orientation switching without\nthe need to adjust the size. For vertical orientation: width,\nheight. For horizontal orientation: height, width.\n"},
  {"GetTitleText", PyvtkMRMLColorLegendDisplayNode_GetTitleText, METH_VARARGS,
   "GetTitleText(self) -> str\nC++: virtual std::string GetTitleText()\n\nGet/Set color legend title\n"},
  {"SetTitleText", PyvtkMRMLColorLegendDisplayNode_SetTitleText, METH_VARARGS,
   "SetTitleText(self, _arg:str) -> None\nC++: virtual void SetTitleText(std::string _arg)\n\nGet/Set color legend title\n"},
  {"GetLabelFormat", PyvtkMRMLColorLegendDisplayNode_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: virtual std::string GetLabelFormat()\n\nGet/set color legend labels format string according to printf\nfunction specification\n(https://www.cplusplus.com/reference/cstdio/printf/).\n\nExamples:\n- display with 1 fractional digits: %.1f\n- display integer: %.0f\n- display with 4 significant digits: %.4g\n- string label annotation: %s\n"},
  {"SetLabelFormat", PyvtkMRMLColorLegendDisplayNode_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, _arg:str) -> None\nC++: virtual void SetLabelFormat(std::string _arg)\n\nGet/set color legend labels format string according to printf\nfunction specification\n(https://www.cplusplus.com/reference/cstdio/printf/).\n\nExamples:\n- display with 1 fractional digits: %.1f\n- display integer: %.0f\n- display with 4 significant digits: %.4g\n- string label annotation: %s\n"},
  {"GetDefaultNumericLabelFormat", PyvtkMRMLColorLegendDisplayNode_GetDefaultNumericLabelFormat, METH_VARARGS,
   "GetDefaultNumericLabelFormat(self) -> str\nC++: virtual std::string GetDefaultNumericLabelFormat()\n\nDefault label format for numerical values. Recommended when\nUseColorNamesForLabels is false.\n\\sa SetLabelFormat\n"},
  {"GetDefaultTextLabelFormat", PyvtkMRMLColorLegendDisplayNode_GetDefaultTextLabelFormat, METH_VARARGS,
   "GetDefaultTextLabelFormat(self) -> str\nC++: virtual std::string GetDefaultTextLabelFormat()\n\nDefault label format for text label values. Recommended when\nUseColorNamesForLabels is true.\n\\sa SetLabelFormat\n"},
  {"GetMaxNumberOfColors", PyvtkMRMLColorLegendDisplayNode_GetMaxNumberOfColors, METH_VARARGS,
   "GetMaxNumberOfColors(self) -> int\nC++: virtual int GetMaxNumberOfColors()\n\nGet/set maximum number of colors in color legend\n"},
  {"SetMaxNumberOfColors", PyvtkMRMLColorLegendDisplayNode_SetMaxNumberOfColors, METH_VARARGS,
   "SetMaxNumberOfColors(self, _arg:int) -> None\nC++: virtual void SetMaxNumberOfColors(int _arg)\n\nGet/set maximum number of colors in color legend\n"},
  {"GetNumberOfLabels", PyvtkMRMLColorLegendDisplayNode_GetNumberOfLabels, METH_VARARGS,
   "GetNumberOfLabels(self) -> int\nC++: virtual int GetNumberOfLabels()\n\nGet/set number of displayed labels in color legend\n"},
  {"SetNumberOfLabels", PyvtkMRMLColorLegendDisplayNode_SetNumberOfLabels, METH_VARARGS,
   "SetNumberOfLabels(self, _arg:int) -> None\nC++: virtual void SetNumberOfLabels(int _arg)\n\nGet/set number of displayed labels in color legend\n"},
  {"GetUseColorNamesForLabels", PyvtkMRMLColorLegendDisplayNode_GetUseColorNamesForLabels, METH_VARARGS,
   "GetUseColorNamesForLabels(self) -> bool\nC++: virtual bool GetUseColorNamesForLabels()\n\nGet/set use color names for labels flag\n"},
  {"SetUseColorNamesForLabels", PyvtkMRMLColorLegendDisplayNode_SetUseColorNamesForLabels, METH_VARARGS,
   "SetUseColorNamesForLabels(self, _arg:bool) -> None\nC++: virtual void SetUseColorNamesForLabels(bool _arg)\n\nGet/set use color names for labels flag\n"},
  {"GetTitleTextProperty", PyvtkMRMLColorLegendDisplayNode_GetTitleTextProperty, METH_VARARGS,
   "GetTitleTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleTextProperty()\n\nText property object that controls the display properties of\ntitle. The text object property controls background\ncolor/opacity, frame size/color, font, etc. This function always\nreturns a valid vtkTextProperty pointer.\n"},
  {"GetLabelTextProperty", PyvtkMRMLColorLegendDisplayNode_GetLabelTextProperty, METH_VARARGS,
   "GetLabelTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\nText property object that controls the display properties of\nlabels. The text object property controls background\ncolor/opacity, frame size/color, font, etc. This function always\nreturns a valid vtkTextProperty pointer.\n"},
  {"GetPrimaryDisplayNode", PyvtkMRMLColorLegendDisplayNode_GetPrimaryDisplayNode, METH_VARARGS,
   "GetPrimaryDisplayNode(self) -> vtkMRMLDisplayNode\nC++: vtkMRMLDisplayNode *GetPrimaryDisplayNode()\n\nGet/set primary display node, i.e., the display node that\nspecifies the color table and scalar range that this color legend\ndisplay node should display. This node already has an indirect\nreference to the displayable node, but a displayable node may\nhave multiple display nodes, that is why this reference to a\nspecific display node is necessary.\n"},
  {"SetAndObservePrimaryDisplayNode", PyvtkMRMLColorLegendDisplayNode_SetAndObservePrimaryDisplayNode, METH_VARARGS,
   "SetAndObservePrimaryDisplayNode(self, node:vtkMRMLDisplayNode)\n    -> None\nC++: void SetAndObservePrimaryDisplayNode(\n    vtkMRMLDisplayNode *node)\n\nGet/set primary display node, i.e., the display node that\nspecifies the color table and scalar range that this color legend\ndisplay node should display. This node already has an indirect\nreference to the displayable node, but a displayable node may\nhave multiple display nodes, that is why this reference to a\nspecific display node is necessary.\n"},
  {"ProcessMRMLEvents", PyvtkMRMLColorLegendDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, eventID:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long eventID, void *callData) override;\n\nHandles events registered in the observer manager\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLColorLegendDisplayNode_Doc =
  "vtkMRMLColorLegendDisplayNode - Class describing how to display a\ncolor legend.\n\n"
  "Superclass: vtkMRMLDisplayNode\n\n"
  "This display node must be added as a display node to a displayable\n"
  "node and a display node of that same data node must be set using\n"
  "SetAndObservePrimaryDisplayNode.\n\n"
  "The color legend will be displayed for the colormap and scalar range\n"
  "defined in the primary display node. Scalar range and color node that\n"
  "are set in the vtkMRMLColorLegendDisplayNode are ignored.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLColorLegendDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerColorsModuleMRMLPython.vtkMRMLColorLegendDisplayNode", // tp_name
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
  PyvtkMRMLColorLegendDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLColorLegendDisplayNode_StaticNew()
{
  return vtkMRMLColorLegendDisplayNode::New();
}

PyObject *PyvtkMRMLColorLegendDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLColorLegendDisplayNode_Type, PyvtkMRMLColorLegendDisplayNode_Methods,
    "vtkMRMLColorLegendDisplayNode",
 &PyvtkMRMLColorLegendDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLDisplayNode");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLColorLegendDisplayNode_OrientationType_Type);
  PyVTKEnum_Add(&PyvtkMRMLColorLegendDisplayNode_OrientationType_Type, "vtkMRMLColorLegendDisplayNode.OrientationType");

  o = (PyObject *)&PyvtkMRMLColorLegendDisplayNode_OrientationType_Type;
  if (PyDict_SetItemString(d, "OrientationType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLColorLegendDisplayNode::OrientationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "Horizontal", vtkMRMLColorLegendDisplayNode::Horizontal },
        { "Vertical", vtkMRMLColorLegendDisplayNode::Vertical },
        { "Orientation_Last", vtkMRMLColorLegendDisplayNode::Orientation_Last },
      };

    o = PyvtkMRMLColorLegendDisplayNode_OrientationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLColorLegendDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLColorLegendDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLColorLegendDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

