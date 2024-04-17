// python wrapper for vtkMRMLAnnotationDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAnnotationDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAnnotationDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAnnotationDisplayNode_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationDisplayNode_ProjectionFlag_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationDisplayNode.ProjectionFlag", // tp_name
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
PyObject *PyvtkMRMLAnnotationDisplayNode_ProjectionFlag_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLAnnotationDisplayNode_ProjectionFlag_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAnnotationDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAnnotationDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAnnotationDisplayNode *tempr = vtkMRMLAnnotationDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAnnotationDisplayNode::NewInstance());

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
PyvtkMRMLAnnotationDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAnnotationDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAnnotationDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLAnnotationDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationDisplayNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLAnnotationDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->UpdateScene(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

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
      op->vtkMRMLAnnotationDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLAnnotationDisplayNode_CreateBackup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateBackup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateBackup();
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::CreateBackup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_RestoreBackup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreBackup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestoreBackup();
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::RestoreBackup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_ClearBackup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearBackup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearBackup();
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::ClearBackup();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetBackup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationDisplayNode *tempr = (ap.IsBound() ?
      op->GetBackup() :
      op->vtkMRMLAnnotationDisplayNode::GetBackup());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndPropagateSuperColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAndPropagateSuperColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetAndPropagateSuperColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndPropagateSuperColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

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
      op->SetAndPropagateSuperColor(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetAndPropagateSuperColor(temp0);
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
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperColor_s1(self, args);
    case 1:
      return PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAndPropagateSuperColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetSuperColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSuperColor() :
      op->vtkMRMLAnnotationDisplayNode::GetSuperColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSelectedColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndPropagateSuperSelectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAndPropagateSuperSelectedColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetAndPropagateSuperSelectedColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSelectedColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndPropagateSuperSelectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

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
      op->SetAndPropagateSuperSelectedColor(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetAndPropagateSuperSelectedColor(temp0);
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
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSelectedColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSelectedColor_s1(self, args);
    case 1:
      return PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSelectedColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAndPropagateSuperSelectedColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetSuperSelectedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperSelectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSuperSelectedColor() :
      op->vtkMRMLAnnotationDisplayNode::GetSuperSelectedColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndPropagateSuperOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndPropagateSuperOpacity(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetAndPropagateSuperOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetSuperOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSuperOpacity() :
      op->vtkMRMLAnnotationDisplayNode::GetSuperOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndPropagateSuperAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndPropagateSuperAmbient(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetAndPropagateSuperAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetSuperAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSuperAmbient() :
      op->vtkMRMLAnnotationDisplayNode::GetSuperAmbient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndPropagateSuperDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndPropagateSuperDiffuse(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetAndPropagateSuperDiffuse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetSuperDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSuperDiffuse() :
      op->vtkMRMLAnnotationDisplayNode::GetSuperDiffuse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndPropagateSuperSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndPropagateSuperSpecular(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetAndPropagateSuperSpecular(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetSuperSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSuperSpecular() :
      op->vtkMRMLAnnotationDisplayNode::GetSuperSpecular());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndPropagateSuperPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndPropagateSuperPower(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetAndPropagateSuperPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetSuperPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSuperPower() :
      op->vtkMRMLAnnotationDisplayNode::GetSuperPower());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSelectedAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndPropagateSuperSelectedAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndPropagateSuperSelectedAmbient(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetAndPropagateSuperSelectedAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetSuperSelectedAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperSelectedAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSuperSelectedAmbient() :
      op->vtkMRMLAnnotationDisplayNode::GetSuperSelectedAmbient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSelectedSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndPropagateSuperSelectedSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndPropagateSuperSelectedSpecular(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetAndPropagateSuperSelectedSpecular(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetSuperSelectedSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperSelectedSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSuperSelectedSpecular() :
      op->vtkMRMLAnnotationDisplayNode::GetSuperSelectedSpecular());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetSliceProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceProjection(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetSliceProjection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetSliceProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceProjection() :
      op->vtkMRMLAnnotationDisplayNode::GetSliceProjection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SliceProjectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionOn();
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SliceProjectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SliceProjectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionOff();
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SliceProjectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetProjectedColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetProjectedColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetProjectedColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetProjectedColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetProjectedColor(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetProjectedColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetProjectedColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLAnnotationDisplayNode_SetProjectedColor_s1(self, args);
    case 1:
      return PyvtkMRMLAnnotationDisplayNode_SetProjectedColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetProjectedColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetProjectedColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectedColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetProjectedColor() :
      op->vtkMRMLAnnotationDisplayNode::GetProjectedColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_SetProjectedOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectedOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectedOpacity(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationDisplayNode::SetProjectedOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationDisplayNode_GetProjectedOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectedOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationDisplayNode *op = static_cast<vtkMRMLAnnotationDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProjectedOpacity() :
      op->vtkMRMLAnnotationDisplayNode::GetProjectedOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAnnotationDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAnnotationDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAnnotationDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAnnotationDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAnnotationDisplayNode\nC++: static vtkMRMLAnnotationDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAnnotationDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAnnotationDisplayNode\nC++: vtkMRMLAnnotationDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAnnotationDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAnnotationDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLAnnotationDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLAnnotationDisplayNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLAnnotationDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Annotation)\n"},
  {"UpdateScene", PyvtkMRMLAnnotationDisplayNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ProcessMRMLEvents", PyvtkMRMLAnnotationDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"CreateBackup", PyvtkMRMLAnnotationDisplayNode_CreateBackup, METH_VARARGS,
   "CreateBackup(self) -> None\nC++: virtual void CreateBackup()\n\nCreates a backup of the current MRML state of this node and keeps\na reference\n"},
  {"RestoreBackup", PyvtkMRMLAnnotationDisplayNode_RestoreBackup, METH_VARARGS,
   "RestoreBackup(self) -> None\nC++: virtual void RestoreBackup()\n\n"},
  {"ClearBackup", PyvtkMRMLAnnotationDisplayNode_ClearBackup, METH_VARARGS,
   "ClearBackup(self) -> None\nC++: void ClearBackup()\n\n"},
  {"GetBackup", PyvtkMRMLAnnotationDisplayNode_GetBackup, METH_VARARGS,
   "GetBackup(self) -> vtkMRMLAnnotationDisplayNode\nC++: vtkMRMLAnnotationDisplayNode *GetBackup()\n\nReturns the associated backup of this node\n"},
  {"SetAndPropagateSuperColor", PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperColor, METH_VARARGS,
   "SetAndPropagateSuperColor(self, _arg1:float, _arg2:float,\n    _arg3:float) -> None\nC++: virtual void SetAndPropagateSuperColor(double _arg1,\n    double _arg2, double _arg3)\nSetAndPropagateSuperColor(self, _arg:[float, float, float])\n    -> None\nC++: virtual void SetAndPropagateSuperColor(double _arg[3])\n\n"},
  {"GetSuperColor", PyvtkMRMLAnnotationDisplayNode_GetSuperColor, METH_VARARGS,
   "GetSuperColor(self) -> (float, float, float)\nC++: virtual double *GetSuperColor()\n\n"},
  {"SetAndPropagateSuperSelectedColor", PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSelectedColor, METH_VARARGS,
   "SetAndPropagateSuperSelectedColor(self, _arg1:float, _arg2:float,\n    _arg3:float) -> None\nC++: virtual void SetAndPropagateSuperSelectedColor(double _arg1,\n    double _arg2, double _arg3)\nSetAndPropagateSuperSelectedColor(self, _arg:[float, float,\n    float]) -> None\nC++: virtual void SetAndPropagateSuperSelectedColor(\n    double _arg[3])\n\n"},
  {"GetSuperSelectedColor", PyvtkMRMLAnnotationDisplayNode_GetSuperSelectedColor, METH_VARARGS,
   "GetSuperSelectedColor(self) -> (float, float, float)\nC++: virtual double *GetSuperSelectedColor()\n\n"},
  {"SetAndPropagateSuperOpacity", PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperOpacity, METH_VARARGS,
   "SetAndPropagateSuperOpacity(self, _arg:float) -> None\nC++: virtual void SetAndPropagateSuperOpacity(double _arg)\n\n"},
  {"GetSuperOpacity", PyvtkMRMLAnnotationDisplayNode_GetSuperOpacity, METH_VARARGS,
   "GetSuperOpacity(self) -> float\nC++: virtual double GetSuperOpacity()\n\n"},
  {"SetAndPropagateSuperAmbient", PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperAmbient, METH_VARARGS,
   "SetAndPropagateSuperAmbient(self, _arg:float) -> None\nC++: virtual void SetAndPropagateSuperAmbient(double _arg)\n\n"},
  {"GetSuperAmbient", PyvtkMRMLAnnotationDisplayNode_GetSuperAmbient, METH_VARARGS,
   "GetSuperAmbient(self) -> float\nC++: virtual double GetSuperAmbient()\n\n"},
  {"SetAndPropagateSuperDiffuse", PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperDiffuse, METH_VARARGS,
   "SetAndPropagateSuperDiffuse(self, _arg:float) -> None\nC++: virtual void SetAndPropagateSuperDiffuse(double _arg)\n\n"},
  {"GetSuperDiffuse", PyvtkMRMLAnnotationDisplayNode_GetSuperDiffuse, METH_VARARGS,
   "GetSuperDiffuse(self) -> float\nC++: virtual double GetSuperDiffuse()\n\n"},
  {"SetAndPropagateSuperSpecular", PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSpecular, METH_VARARGS,
   "SetAndPropagateSuperSpecular(self, _arg:float) -> None\nC++: virtual void SetAndPropagateSuperSpecular(double _arg)\n\n"},
  {"GetSuperSpecular", PyvtkMRMLAnnotationDisplayNode_GetSuperSpecular, METH_VARARGS,
   "GetSuperSpecular(self) -> float\nC++: virtual double GetSuperSpecular()\n\n"},
  {"SetAndPropagateSuperPower", PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperPower, METH_VARARGS,
   "SetAndPropagateSuperPower(self, _arg:float) -> None\nC++: virtual void SetAndPropagateSuperPower(double _arg)\n\n"},
  {"GetSuperPower", PyvtkMRMLAnnotationDisplayNode_GetSuperPower, METH_VARARGS,
   "GetSuperPower(self) -> float\nC++: virtual double GetSuperPower()\n\n"},
  {"SetAndPropagateSuperSelectedAmbient", PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSelectedAmbient, METH_VARARGS,
   "SetAndPropagateSuperSelectedAmbient(self, _arg:float) -> None\nC++: virtual void SetAndPropagateSuperSelectedAmbient(double _arg)\n\n"},
  {"GetSuperSelectedAmbient", PyvtkMRMLAnnotationDisplayNode_GetSuperSelectedAmbient, METH_VARARGS,
   "GetSuperSelectedAmbient(self) -> float\nC++: virtual double GetSuperSelectedAmbient()\n\n"},
  {"SetAndPropagateSuperSelectedSpecular", PyvtkMRMLAnnotationDisplayNode_SetAndPropagateSuperSelectedSpecular, METH_VARARGS,
   "SetAndPropagateSuperSelectedSpecular(self, _arg:float) -> None\nC++: virtual void SetAndPropagateSuperSelectedSpecular(\n    double _arg)\n\n"},
  {"GetSuperSelectedSpecular", PyvtkMRMLAnnotationDisplayNode_GetSuperSelectedSpecular, METH_VARARGS,
   "GetSuperSelectedSpecular(self) -> float\nC++: virtual double GetSuperSelectedSpecular()\n\n"},
  {"SetSliceProjection", PyvtkMRMLAnnotationDisplayNode_SetSliceProjection, METH_VARARGS,
   "SetSliceProjection(self, _arg:int) -> None\nC++: virtual void SetSliceProjection(int _arg)\n\nSet SliceProjection flag Off by default Not all subclasses have\nprojection behavior Please refer to subclasses for more\ninformation\n\\sa SliceIntersectionVisibility, ProjectedColor\n"},
  {"GetSliceProjection", PyvtkMRMLAnnotationDisplayNode_GetSliceProjection, METH_VARARGS,
   "GetSliceProjection(self) -> int\nC++: virtual int GetSliceProjection()\n\n"},
  {"SliceProjectionOn", PyvtkMRMLAnnotationDisplayNode_SliceProjectionOn, METH_VARARGS,
   "SliceProjectionOn(self) -> None\nC++: void SliceProjectionOn()\n\nSet SliceProjection to On\n"},
  {"SliceProjectionOff", PyvtkMRMLAnnotationDisplayNode_SliceProjectionOff, METH_VARARGS,
   "SliceProjectionOff(self) -> None\nC++: void SliceProjectionOff()\n\nSet SliceProjection to Off\n"},
  {"SetProjectedColor", PyvtkMRMLAnnotationDisplayNode_SetProjectedColor, METH_VARARGS,
   "SetProjectedColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetProjectedColor(double _arg1, double _arg2,\n    double _arg3)\nSetProjectedColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetProjectedColor(const double _arg[3])\n\nSet color of the projection on the 2D viewers White (1.0, 1.0,\n1.0) by default.\n"},
  {"GetProjectedColor", PyvtkMRMLAnnotationDisplayNode_GetProjectedColor, METH_VARARGS,
   "GetProjectedColor(self) -> (float, float, float)\nC++: virtual double *GetProjectedColor()\n\n"},
  {"SetProjectedOpacity", PyvtkMRMLAnnotationDisplayNode_SetProjectedOpacity, METH_VARARGS,
   "SetProjectedOpacity(self, _arg:float) -> None\nC++: virtual void SetProjectedOpacity(double _arg)\n\nSet opacity of projection on the 2D viewers 1.0 by default\n"},
  {"GetProjectedOpacity", PyvtkMRMLAnnotationDisplayNode_GetProjectedOpacity, METH_VARARGS,
   "GetProjectedOpacity(self) -> float\nC++: virtual double GetProjectedOpacity()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAnnotationDisplayNode_Doc =
  "vtkMRMLAnnotationDisplayNode - MRML node to represent display\nproperties for tractography.\n\n"
  "Superclass: vtkMRMLModelDisplayNode\n\n"
  "vtkMRMLAnnotationDisplayNode nodes store display properties of\n"
  "trajectories from tractography in diffusion MRI data, including color\n"
  "type (by bundle, by fiber, or by scalar invariants), display on/off\n"
  "for tensor glyphs and display of trajectory as a line or tube.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationDisplayNode", // tp_name
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
  PyvtkMRMLAnnotationDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAnnotationDisplayNode_StaticNew()
{
  return vtkMRMLAnnotationDisplayNode::New();
}

PyObject *PyvtkMRMLAnnotationDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAnnotationDisplayNode_Type, PyvtkMRMLAnnotationDisplayNode_Methods,
    "vtkMRMLAnnotationDisplayNode",
 &PyvtkMRMLAnnotationDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLModelDisplayNode");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLAnnotationDisplayNode_ProjectionFlag_Type);
  PyVTKEnum_Add(&PyvtkMRMLAnnotationDisplayNode_ProjectionFlag_Type, "vtkMRMLAnnotationDisplayNode.ProjectionFlag");

  o = (PyObject *)&PyvtkMRMLAnnotationDisplayNode_ProjectionFlag_Type;
  if (PyDict_SetItemString(d, "ProjectionFlag", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkMRMLAnnotationDisplayNode::ProjectionFlag cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "ProjectionOff", vtkMRMLAnnotationDisplayNode::ProjectionOff },
        { "ProjectionOn", vtkMRMLAnnotationDisplayNode::ProjectionOn },
      };

    o = PyvtkMRMLAnnotationDisplayNode_ProjectionFlag_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAnnotationDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAnnotationDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAnnotationDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

