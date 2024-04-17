// python wrapper for vtkMRMLMarkupsDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMarkupsDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsDisplayNode_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsDisplayNode_ComponentType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsDisplayNode.ComponentType", // tp_name
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
PyObject *PyvtkMRMLMarkupsDisplayNode_ComponentType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLMarkupsDisplayNode_ComponentType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsDisplayNode_SnapModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsDisplayNode.SnapModes", // tp_name
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
PyObject *PyvtkMRMLMarkupsDisplayNode_SnapModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLMarkupsDisplayNode_SnapModes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsDisplayNode_GlyphShapes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsDisplayNode.GlyphShapes", // tp_name
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
PyObject *PyvtkMRMLMarkupsDisplayNode_GlyphShapes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLMarkupsDisplayNode_GlyphShapes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsDisplayNode_CurveLineSizeModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsDisplayNode.CurveLineSizeModes", // tp_name
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
PyObject *PyvtkMRMLMarkupsDisplayNode_CurveLineSizeModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLMarkupsDisplayNode_CurveLineSizeModes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsDisplayNode *tempr = vtkMRMLMarkupsDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsDisplayNode::NewInstance());

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
PyvtkMRMLMarkupsDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLMarkupsDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

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
      op->vtkMRMLMarkupsDisplayNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLMarkupsDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLMarkupsDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

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
      op->vtkMRMLMarkupsDisplayNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

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
      op->vtkMRMLMarkupsDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLMarkupsDisplayNode_GetMarkupsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsNode *tempr = (ap.IsBound() ?
      op->GetMarkupsNode() :
      op->vtkMRMLMarkupsDisplayNode::GetMarkupsNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetDefaultContextName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDefaultContextName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLMarkupsDisplayNode::GetDefaultContextName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetActiveComponentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  std::string temp0 = vtkMRMLMarkupsDisplayNode::GetDefaultContextName();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentType(temp0) :
      op->vtkMRMLMarkupsDisplayNode::GetActiveComponentType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetActiveComponentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  std::string temp0 = vtkMRMLMarkupsDisplayNode::GetDefaultContextName();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentIndex(temp0) :
      op->vtkMRMLMarkupsDisplayNode::GetActiveComponentIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  int temp0;
  int temp1;
  std::string temp2 = vtkMRMLMarkupsDisplayNode::GetDefaultContextName();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetActiveComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetActiveComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_HasActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasActiveComponent() :
      op->vtkMRMLMarkupsDisplayNode::HasActiveComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetActiveComponentInteractionContexts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentInteractionContexts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetActiveComponentInteractionContexts() :
      op->vtkMRMLMarkupsDisplayNode::GetActiveComponentInteractionContexts());

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


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetActiveControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveControlPoint(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetActiveControlPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_UpdateActiveControlPointWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateActiveControlPointWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  int temp0;
  vtkMRMLInteractionEventData *temp1 = nullptr;
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLInteractionEventData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->UpdateActiveControlPointWorld(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMRMLMarkupsDisplayNode::UpdateActiveControlPointWorld(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkMRMLMarkupsDisplayNode_GetActiveControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  std::vector<int> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->GetActiveControlPoints(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::GetActiveControlPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetActiveControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  std::string temp0 = vtkMRMLMarkupsDisplayNode::GetDefaultContextName();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveControlPoint(temp0) :
      op->vtkMRMLMarkupsDisplayNode::GetActiveControlPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextScale() :
      op->vtkMRMLMarkupsDisplayNode::GetTextScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextScale(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetTextScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetPointLabelsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLabelsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointLabelsVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetPointLabelsVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetPointLabelsVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointLabelsVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPointLabelsVisibility() :
      op->vtkMRMLMarkupsDisplayNode::GetPointLabelsVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_PointLabelsVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointLabelsVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointLabelsVisibilityOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::PointLabelsVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_PointLabelsVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointLabelsVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointLabelsVisibilityOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::PointLabelsVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetPropertiesLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertiesLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPropertiesLabelVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetPropertiesLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetPropertiesLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertiesLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPropertiesLabelVisibility() :
      op->vtkMRMLMarkupsDisplayNode::GetPropertiesLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_PropertiesLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropertiesLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PropertiesLabelVisibilityOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::PropertiesLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_PropertiesLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropertiesLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PropertiesLabelVisibilityOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::PropertiesLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetFillVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetFillVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetFillVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFillVisibility() :
      op->vtkMRMLMarkupsDisplayNode::GetFillVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_FillVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillVisibilityOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::FillVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_FillVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillVisibilityOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::FillVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetOutlineVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetOutlineVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetOutlineVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutlineVisibility() :
      op->vtkMRMLMarkupsDisplayNode::GetOutlineVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_OutlineVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineVisibilityOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::OutlineVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_OutlineVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineVisibilityOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::OutlineVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetFillOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillOpacity(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetFillOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetFillOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFillOpacity() :
      op->vtkMRMLMarkupsDisplayNode::GetFillOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_FillOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillOpacityOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::FillOpacityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_FillOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FillOpacityOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::FillOpacityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetOutlineOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutlineOpacity(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetOutlineOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetOutlineOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutlineOpacity() :
      op->vtkMRMLMarkupsDisplayNode::GetOutlineOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_OutlineOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOpacityOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::OutlineOpacityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_OutlineOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOpacityOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::OutlineOpacityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetMinimumGlyphType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMinimumGlyphType");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMRMLMarkupsDisplayNode::GetMinimumGlyphType();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetMaximumGlyphType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMaximumGlyphType");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMRMLMarkupsDisplayNode::GetMaximumGlyphType();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphType(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetGlyphType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphType() :
      op->vtkMRMLMarkupsDisplayNode::GetGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GlyphTypeIs3D_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlyphTypeIs3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GlyphTypeIs3D(temp0) :
      op->vtkMRMLMarkupsDisplayNode::GlyphTypeIs3D(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_GlyphTypeIs3D_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlyphTypeIs3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GlyphTypeIs3D() :
      op->vtkMRMLMarkupsDisplayNode::GlyphTypeIs3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_GlyphTypeIs3D(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsDisplayNode_GlyphTypeIs3D_s1(self, args);
    case 0:
      return PyvtkMRMLMarkupsDisplayNode_GlyphTypeIs3D_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GlyphTypeIs3D");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetGlyphTypeAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGlyphTypeAsString() :
      op->vtkMRMLMarkupsDisplayNode::GetGlyphTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetGlyphTypeAsString_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlyphTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLMarkupsDisplayNode::GetGlyphTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetGlyphTypeAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLMarkupsDisplayNode_GetGlyphTypeAsString_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsDisplayNode_GetGlyphTypeAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlyphTypeAsString");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetGlyphTypeFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphTypeFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphTypeFromString(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetGlyphTypeFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetGlyphTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlyphTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsDisplayNode::GetGlyphTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetSnapMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapMode(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetSnapMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetSnapMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSnapMode() :
      op->vtkMRMLMarkupsDisplayNode::GetSnapMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetSnapModeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSnapModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLMarkupsDisplayNode::GetSnapModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetSnapModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSnapModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsDisplayNode::GetSnapModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetGlyphScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphScale(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetGlyphScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetGlyphScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphScale() :
      op->vtkMRMLMarkupsDisplayNode::GetGlyphScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphSize(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetGlyphSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphSize() :
      op->vtkMRMLMarkupsDisplayNode::GetGlyphSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetUseGlyphScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGlyphScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseGlyphScale(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetUseGlyphScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetUseGlyphScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGlyphScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseGlyphScale() :
      op->vtkMRMLMarkupsDisplayNode::GetUseGlyphScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_UseGlyphScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGlyphScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseGlyphScaleOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::UseGlyphScaleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_UseGlyphScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGlyphScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseGlyphScaleOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::UseGlyphScaleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetSliceProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
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
      op->vtkMRMLMarkupsDisplayNode::SetSliceProjection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetSliceProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSliceProjection() :
      op->vtkMRMLMarkupsDisplayNode::GetSliceProjection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SliceProjectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SliceProjectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SliceProjectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SliceProjectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionUseFiducialColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceProjectionUseFiducialColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceProjectionUseFiducialColor(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetSliceProjectionUseFiducialColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionUseFiducialColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceProjectionUseFiducialColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSliceProjectionUseFiducialColor() :
      op->vtkMRMLMarkupsDisplayNode::GetSliceProjectionUseFiducialColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SliceProjectionUseFiducialColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionUseFiducialColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionUseFiducialColorOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SliceProjectionUseFiducialColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SliceProjectionUseFiducialColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionUseFiducialColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionUseFiducialColorOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SliceProjectionUseFiducialColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionOutlinedBehindSlicePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceProjectionOutlinedBehindSlicePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceProjectionOutlinedBehindSlicePlane(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetSliceProjectionOutlinedBehindSlicePlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionOutlinedBehindSlicePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceProjectionOutlinedBehindSlicePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSliceProjectionOutlinedBehindSlicePlane() :
      op->vtkMRMLMarkupsDisplayNode::GetSliceProjectionOutlinedBehindSlicePlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SliceProjectionOutlinedBehindSlicePlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionOutlinedBehindSlicePlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionOutlinedBehindSlicePlaneOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SliceProjectionOutlinedBehindSlicePlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SliceProjectionOutlinedBehindSlicePlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SliceProjectionOutlinedBehindSlicePlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SliceProjectionOutlinedBehindSlicePlaneOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SliceProjectionOutlinedBehindSlicePlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceProjectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

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
      op->SetSliceProjectionColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetSliceProjectionColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceProjectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceProjectionColor(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetSliceProjectionColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionColor_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceProjectionColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceProjectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSliceProjectionColor() :
      op->vtkMRMLMarkupsDisplayNode::GetSliceProjectionColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceProjectionOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceProjectionOpacity(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetSliceProjectionOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceProjectionOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliceProjectionOpacityMinValue() :
      op->vtkMRMLMarkupsDisplayNode::GetSliceProjectionOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceProjectionOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliceProjectionOpacityMaxValue() :
      op->vtkMRMLMarkupsDisplayNode::GetSliceProjectionOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceProjectionOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliceProjectionOpacity() :
      op->vtkMRMLMarkupsDisplayNode::GetSliceProjectionOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetCurveLineSizeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveLineSizeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurveLineSizeMode(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetCurveLineSizeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetCurveLineSizeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveLineSizeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurveLineSizeMode() :
      op->vtkMRMLMarkupsDisplayNode::GetCurveLineSizeMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetCurveLineSizeModeAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveLineSizeModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCurveLineSizeModeAsString() :
      op->vtkMRMLMarkupsDisplayNode::GetCurveLineSizeModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetCurveLineSizeModeAsString_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurveLineSizeModeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLMarkupsDisplayNode::GetCurveLineSizeModeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetCurveLineSizeModeAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLMarkupsDisplayNode_GetCurveLineSizeModeAsString_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsDisplayNode_GetCurveLineSizeModeAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCurveLineSizeModeAsString");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetCurveLineSizeModeFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveLineSizeModeFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurveLineSizeModeFromString(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetCurveLineSizeModeFromString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetCurveLineSizeModeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurveLineSizeModeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsDisplayNode::GetCurveLineSizeModeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineThickness() :
      op->vtkMRMLMarkupsDisplayNode::GetLineThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetLineThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineThickness(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetLineThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineDiameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineDiameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineDiameter() :
      op->vtkMRMLMarkupsDisplayNode::GetLineDiameter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetLineDiameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineDiameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineDiameter(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetLineDiameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColorFadingStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineColorFadingStart() :
      op->vtkMRMLMarkupsDisplayNode::GetLineColorFadingStart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetLineColorFadingStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColorFadingStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineColorFadingStart(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetLineColorFadingStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColorFadingEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineColorFadingEnd() :
      op->vtkMRMLMarkupsDisplayNode::GetLineColorFadingEnd());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetLineColorFadingEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColorFadingEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineColorFadingEnd(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetLineColorFadingEnd(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetLineColorFadingSaturation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColorFadingSaturation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineColorFadingSaturation(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetLineColorFadingSaturation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingSaturationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColorFadingSaturationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineColorFadingSaturationMinValue() :
      op->vtkMRMLMarkupsDisplayNode::GetLineColorFadingSaturationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingSaturationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColorFadingSaturationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineColorFadingSaturationMaxValue() :
      op->vtkMRMLMarkupsDisplayNode::GetLineColorFadingSaturationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingSaturation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColorFadingSaturation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineColorFadingSaturation() :
      op->vtkMRMLMarkupsDisplayNode::GetLineColorFadingSaturation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetLineColorFadingHueOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColorFadingHueOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineColorFadingHueOffset(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetLineColorFadingHueOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingHueOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColorFadingHueOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineColorFadingHueOffsetMinValue() :
      op->vtkMRMLMarkupsDisplayNode::GetLineColorFadingHueOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingHueOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColorFadingHueOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineColorFadingHueOffsetMaxValue() :
      op->vtkMRMLMarkupsDisplayNode::GetLineColorFadingHueOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingHueOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColorFadingHueOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineColorFadingHueOffset() :
      op->vtkMRMLMarkupsDisplayNode::GetLineColorFadingHueOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetLineColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineColorNodeID(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetLineColorNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLineColorNodeID() :
      op->vtkMRMLMarkupsDisplayNode::GetLineColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineColorNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColorNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLProceduralColorNode *tempr = (ap.IsBound() ?
      op->GetLineColorNode() :
      op->vtkMRMLMarkupsDisplayNode::GetLineColorNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetLineColorNodeReferenceRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColorNodeReferenceRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLineColorNodeReferenceRole() :
      op->vtkMRMLMarkupsDisplayNode::GetLineColorNodeReferenceRole());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetOccludedVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOccludedVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOccludedVisibility() :
      op->vtkMRMLMarkupsDisplayNode::GetOccludedVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetOccludedVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOccludedVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOccludedVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetOccludedVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_OccludedVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OccludedVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OccludedVisibilityOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::OccludedVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_OccludedVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OccludedVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OccludedVisibilityOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::OccludedVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetOccludedOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOccludedOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOccludedOpacity() :
      op->vtkMRMLMarkupsDisplayNode::GetOccludedOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetOccludedOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOccludedOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOccludedOpacity(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetOccludedOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkMRMLMarkupsDisplayNode::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetActiveColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

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
      op->SetActiveColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetActiveColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetActiveColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetActiveColor(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetActiveColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetActiveColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLMarkupsDisplayNode_SetActiveColor_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsDisplayNode_SetActiveColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetActiveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetActiveColor() :
      op->vtkMRMLMarkupsDisplayNode::GetActiveColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetHandlesInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlesInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHandlesInteractive() :
      op->vtkMRMLMarkupsDisplayNode::GetHandlesInteractive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetHandlesInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlesInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandlesInteractive(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetHandlesInteractive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_HandlesInteractiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesInteractiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesInteractiveOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::HandlesInteractiveOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_HandlesInteractiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesInteractiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandlesInteractiveOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::HandlesInteractiveOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetTranslationHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTranslationHandleVisibility() :
      op->vtkMRMLMarkupsDisplayNode::GetTranslationHandleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetTranslationHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationHandleVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetTranslationHandleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_TranslationHandleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationHandleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationHandleVisibilityOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::TranslationHandleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_TranslationHandleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationHandleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationHandleVisibilityOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::TranslationHandleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetRotationHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRotationHandleVisibility() :
      op->vtkMRMLMarkupsDisplayNode::GetRotationHandleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetRotationHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationHandleVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetRotationHandleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_RotationHandleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationHandleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RotationHandleVisibilityOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::RotationHandleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_RotationHandleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationHandleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RotationHandleVisibilityOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::RotationHandleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetScaleHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleHandleVisibility() :
      op->vtkMRMLMarkupsDisplayNode::GetScaleHandleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetScaleHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleHandleVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetScaleHandleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_ScaleHandleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleHandleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleHandleVisibilityOn();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::ScaleHandleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_ScaleHandleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleHandleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleHandleVisibilityOff();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::ScaleHandleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetHandleVisibility(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetHandleVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHandleVisibility(temp0) :
      op->vtkMRMLMarkupsDisplayNode::GetHandleVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetInteractionHandleScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionHandleScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionHandleScale(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetInteractionHandleScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetInteractionHandleScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionHandleScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInteractionHandleScale() :
      op->vtkMRMLMarkupsDisplayNode::GetInteractionHandleScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetRotationHandleComponentVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationHandleComponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  bool temp1 = false;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetRotationHandleComponentVisibility(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetRotationHandleComponentVisibility(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetRotationHandleComponentVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationHandleComponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  const size_t size0 = 4;
  bool temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRotationHandleComponentVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetRotationHandleComponentVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetRotationHandleComponentVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMRMLMarkupsDisplayNode_SetRotationHandleComponentVisibility_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsDisplayNode_SetRotationHandleComponentVisibility_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRotationHandleComponentVisibility");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetRotationHandleComponentVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationHandleComponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool *tempr = (ap.IsBound() ?
      op->GetRotationHandleComponentVisibility() :
      op->vtkMRMLMarkupsDisplayNode::GetRotationHandleComponentVisibility());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetScaleHandleComponentVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleHandleComponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  bool temp1 = false;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetScaleHandleComponentVisibility(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetScaleHandleComponentVisibility(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetScaleHandleComponentVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleHandleComponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  const size_t size0 = 4;
  bool temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScaleHandleComponentVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetScaleHandleComponentVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetScaleHandleComponentVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMRMLMarkupsDisplayNode_SetScaleHandleComponentVisibility_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsDisplayNode_SetScaleHandleComponentVisibility_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScaleHandleComponentVisibility");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetScaleHandleComponentVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleHandleComponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool *tempr = (ap.IsBound() ?
      op->GetScaleHandleComponentVisibility() :
      op->vtkMRMLMarkupsDisplayNode::GetScaleHandleComponentVisibility());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetTranslationHandleComponentVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationHandleComponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  bool temp0 = false;
  bool temp1 = false;
  bool temp2 = false;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetTranslationHandleComponentVisibility(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetTranslationHandleComponentVisibility(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetTranslationHandleComponentVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationHandleComponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  const size_t size0 = 4;
  bool temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationHandleComponentVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetTranslationHandleComponentVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetTranslationHandleComponentVisibility(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMRMLMarkupsDisplayNode_SetTranslationHandleComponentVisibility_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsDisplayNode_SetTranslationHandleComponentVisibility_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTranslationHandleComponentVisibility");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetTranslationHandleComponentVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationHandleComponentVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool *tempr = (ap.IsBound() ?
      op->GetTranslationHandleComponentVisibility() :
      op->vtkMRMLMarkupsDisplayNode::GetTranslationHandleComponentVisibility());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetScalarDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetScalarDataSet() :
      op->vtkMRMLMarkupsDisplayNode::GetScalarDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetActiveScalarArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetActiveScalarArray() :
      op->vtkMRMLMarkupsDisplayNode::GetActiveScalarArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_UpdateAssignedAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAssignedAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAssignedAttribute();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::UpdateAssignedAttribute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayNode::SetScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayNode_GetCanDisplayScaleHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCanDisplayScaleHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayNode *op = static_cast<vtkMRMLMarkupsDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCanDisplayScaleHandles() :
      op->vtkMRMLMarkupsDisplayNode::GetCanDisplayScaleHandles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsDisplayNode\nC++: static vtkMRMLMarkupsDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsDisplayNode\nC++: vtkMRMLMarkupsDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLMarkupsDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"CopyContent", PyvtkMRMLMarkupsDisplayNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLMarkupsDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetNodeTagName", PyvtkMRMLMarkupsDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Markups)\n"},
  {"UpdateScene", PyvtkMRMLMarkupsDisplayNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ProcessMRMLEvents", PyvtkMRMLMarkupsDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nAlternative method to propagate events generated in Display nodes\n"},
  {"GetMarkupsNode", PyvtkMRMLMarkupsDisplayNode_GetMarkupsNode, METH_VARARGS,
   "GetMarkupsNode(self) -> vtkMRMLMarkupsNode\nC++: vtkMRMLMarkupsNode *GetMarkupsNode()\n\nConvenience function for getting the displayable markups node\n"},
  {"GetDefaultContextName", PyvtkMRMLMarkupsDisplayNode_GetDefaultContextName, METH_VARARGS,
   "GetDefaultContextName() -> str\nC++: static const std::string GetDefaultContextName()\n\nGet name of the default interaction context (typically the mouse)\n"},
  {"GetActiveComponentType", PyvtkMRMLMarkupsDisplayNode_GetActiveComponentType, METH_VARARGS,
   "GetActiveComponentType(self, context:str=...) -> int\nC++: int GetActiveComponentType(\n    std::string context=vtkMRMLMarkupsDisplayNode::GetDefaultContextName(\n    ))\n\nActive component (that the mouse or other interaction context is\nhovered over). This property is computed on-the-fly and saved to\nfile.\n\\param context Name of the interaction context. By default it is\n    empty string, meaning mouse.\n  Additional devices, such as virtual reality controllers can\nspecify additional context names.\n  This mechanism allows interacting with multiple markups at the\nsame time (user can grab\n  different markup points with each controller at the same time).\n"},
  {"GetActiveComponentIndex", PyvtkMRMLMarkupsDisplayNode_GetActiveComponentIndex, METH_VARARGS,
   "GetActiveComponentIndex(self, context:str=...) -> int\nC++: int GetActiveComponentIndex(\n    std::string context=vtkMRMLMarkupsDisplayNode::GetDefaultContextName(\n    ))\n\nIndex of active component (that the mouse or other interaction\ncontext is hovered over). This property is computed on-the-fly\nand saved to file.\n\\param context Name of the interaction context. By default it is\n    empty string, meaning mouse\n"},
  {"SetActiveComponent", PyvtkMRMLMarkupsDisplayNode_SetActiveComponent, METH_VARARGS,
   "SetActiveComponent(self, componentType:int, componentIndex:int,\n    context:str=...) -> None\nC++: void SetActiveComponent(int componentType,\n    int componentIndex,\n    std::string context=vtkMRMLMarkupsDisplayNode::GetDefaultContextName(\n    ))\n\nSet active component type and index for interaction context\n(empty by default, meaning mouse)\n"},
  {"HasActiveComponent", PyvtkMRMLMarkupsDisplayNode_HasActiveComponent, METH_VARARGS,
   "HasActiveComponent(self) -> bool\nC++: bool HasActiveComponent()\n\nQuery if there is an active component for any interaction context\n"},
  {"GetActiveComponentInteractionContexts", PyvtkMRMLMarkupsDisplayNode_GetActiveComponentInteractionContexts, METH_VARARGS,
   "GetActiveComponentInteractionContexts(self) -> (str, ...)\nC++: std::vector<std::string> GetActiveComponentInteractionContexts(\n    )\n\nGet list of interaction context names that have active components\n\\return List of interaction context names that have active\n    components\n"},
  {"SetActiveControlPoint", PyvtkMRMLMarkupsDisplayNode_SetActiveControlPoint, METH_VARARGS,
   "SetActiveControlPoint(self, controlPointIndex:int) -> None\nC++: void SetActiveControlPoint(int controlPointIndex)\n\nSet active component index to the provided value and component\ntype to ComponentControlPoint.\n"},
  {"UpdateActiveControlPointWorld", PyvtkMRMLMarkupsDisplayNode_UpdateActiveControlPointWorld, METH_VARARGS,
   "UpdateActiveControlPointWorld(self, controlPointIndex:int,\n    eventData:vtkMRMLInteractionEventData,\n    accurateWorldOrientationMatrix:[float, float, float, float,\n    float, float, float, float, float], viewNodeID:str,\n    associatedNodeID:str, positionStatus:int) -> int\nC++: int UpdateActiveControlPointWorld(int controlPointIndex,\n    vtkMRMLInteractionEventData *eventData,\n    double accurateWorldOrientationMatrix[9],\n    const char *viewNodeID, const char *associatedNodeID,\n    int positionStatus)\n\nConvenience method to perform several update operations at once,\nwith minimum number of modified events. It updates the active\ncontrol point index (if controlPointIndex<0 then it creates a new\npoint) and updates its position and orientation. Returns the\ncontrol point index (different from the input if the input was <\n0).\n"},
  {"GetActiveControlPoints", PyvtkMRMLMarkupsDisplayNode_GetActiveControlPoints, METH_VARARGS,
   "GetActiveControlPoints(self, controlPointIndices:[int, ...])\n    -> None\nC++: void GetActiveControlPoints(\n    std::vector<int> &controlPointIndices)\n\nReturns index of active control point for all interaction\ncontexts if active component type is ComponentControlPoint.\n"},
  {"GetActiveControlPoint", PyvtkMRMLMarkupsDisplayNode_GetActiveControlPoint, METH_VARARGS,
   "GetActiveControlPoint(self, context:str=...) -> int\nC++: int GetActiveControlPoint(\n    std::string context=vtkMRMLMarkupsDisplayNode::GetDefaultContextName(\n    ))\n\nReturns index of active control point for interaction context if\nactive component type is ComponentControlPoint, -1 otherwise.\n\\param context Name of the interaction context. By default it is\n    empty string, meaning mouse\n"},
  {"GetTextScale", PyvtkMRMLMarkupsDisplayNode_GetTextScale, METH_VARARGS,
   "GetTextScale(self) -> float\nC++: virtual double GetTextScale()\n\nSet the text scale of the associated text.\n"},
  {"SetTextScale", PyvtkMRMLMarkupsDisplayNode_SetTextScale, METH_VARARGS,
   "SetTextScale(self, _arg:float) -> None\nC++: virtual void SetTextScale(double _arg)\n\n"},
  {"SetPointLabelsVisibility", PyvtkMRMLMarkupsDisplayNode_SetPointLabelsVisibility, METH_VARARGS,
   "SetPointLabelsVisibility(self, _arg:bool) -> None\nC++: virtual void SetPointLabelsVisibility(bool _arg)\n\nControl visibility of control point labels.\n"},
  {"GetPointLabelsVisibility", PyvtkMRMLMarkupsDisplayNode_GetPointLabelsVisibility, METH_VARARGS,
   "GetPointLabelsVisibility(self) -> bool\nC++: virtual bool GetPointLabelsVisibility()\n\nControl visibility of control point labels.\n"},
  {"PointLabelsVisibilityOn", PyvtkMRMLMarkupsDisplayNode_PointLabelsVisibilityOn, METH_VARARGS,
   "PointLabelsVisibilityOn(self) -> None\nC++: virtual void PointLabelsVisibilityOn()\n\nControl visibility of control point labels.\n"},
  {"PointLabelsVisibilityOff", PyvtkMRMLMarkupsDisplayNode_PointLabelsVisibilityOff, METH_VARARGS,
   "PointLabelsVisibilityOff(self) -> None\nC++: virtual void PointLabelsVisibilityOff()\n\nControl visibility of control point labels.\n"},
  {"SetPropertiesLabelVisibility", PyvtkMRMLMarkupsDisplayNode_SetPropertiesLabelVisibility, METH_VARARGS,
   "SetPropertiesLabelVisibility(self, _arg:bool) -> None\nC++: virtual void SetPropertiesLabelVisibility(bool _arg)\n\nControl visibility of information box.\n"},
  {"GetPropertiesLabelVisibility", PyvtkMRMLMarkupsDisplayNode_GetPropertiesLabelVisibility, METH_VARARGS,
   "GetPropertiesLabelVisibility(self) -> bool\nC++: virtual bool GetPropertiesLabelVisibility()\n\nControl visibility of information box.\n"},
  {"PropertiesLabelVisibilityOn", PyvtkMRMLMarkupsDisplayNode_PropertiesLabelVisibilityOn, METH_VARARGS,
   "PropertiesLabelVisibilityOn(self) -> None\nC++: virtual void PropertiesLabelVisibilityOn()\n\nControl visibility of information box.\n"},
  {"PropertiesLabelVisibilityOff", PyvtkMRMLMarkupsDisplayNode_PropertiesLabelVisibilityOff, METH_VARARGS,
   "PropertiesLabelVisibilityOff(self) -> None\nC++: virtual void PropertiesLabelVisibilityOff()\n\nControl visibility of information box.\n"},
  {"SetFillVisibility", PyvtkMRMLMarkupsDisplayNode_SetFillVisibility, METH_VARARGS,
   "SetFillVisibility(self, _arg:bool) -> None\nC++: virtual void SetFillVisibility(bool _arg)\n\nControl visibility of representation fill.\n"},
  {"GetFillVisibility", PyvtkMRMLMarkupsDisplayNode_GetFillVisibility, METH_VARARGS,
   "GetFillVisibility(self) -> bool\nC++: virtual bool GetFillVisibility()\n\nControl visibility of representation fill.\n"},
  {"FillVisibilityOn", PyvtkMRMLMarkupsDisplayNode_FillVisibilityOn, METH_VARARGS,
   "FillVisibilityOn(self) -> None\nC++: virtual void FillVisibilityOn()\n\nControl visibility of representation fill.\n"},
  {"FillVisibilityOff", PyvtkMRMLMarkupsDisplayNode_FillVisibilityOff, METH_VARARGS,
   "FillVisibilityOff(self) -> None\nC++: virtual void FillVisibilityOff()\n\nControl visibility of representation fill.\n"},
  {"SetOutlineVisibility", PyvtkMRMLMarkupsDisplayNode_SetOutlineVisibility, METH_VARARGS,
   "SetOutlineVisibility(self, _arg:bool) -> None\nC++: virtual void SetOutlineVisibility(bool _arg)\n\nControl visibility of representation outline.\n"},
  {"GetOutlineVisibility", PyvtkMRMLMarkupsDisplayNode_GetOutlineVisibility, METH_VARARGS,
   "GetOutlineVisibility(self) -> bool\nC++: virtual bool GetOutlineVisibility()\n\nControl visibility of representation outline.\n"},
  {"OutlineVisibilityOn", PyvtkMRMLMarkupsDisplayNode_OutlineVisibilityOn, METH_VARARGS,
   "OutlineVisibilityOn(self) -> None\nC++: virtual void OutlineVisibilityOn()\n\nControl visibility of representation outline.\n"},
  {"OutlineVisibilityOff", PyvtkMRMLMarkupsDisplayNode_OutlineVisibilityOff, METH_VARARGS,
   "OutlineVisibilityOff(self) -> None\nC++: virtual void OutlineVisibilityOff()\n\nControl visibility of representation outline.\n"},
  {"SetFillOpacity", PyvtkMRMLMarkupsDisplayNode_SetFillOpacity, METH_VARARGS,
   "SetFillOpacity(self, _arg:float) -> None\nC++: virtual void SetFillOpacity(double _arg)\n\nControl opacity of representation fill.\n"},
  {"GetFillOpacity", PyvtkMRMLMarkupsDisplayNode_GetFillOpacity, METH_VARARGS,
   "GetFillOpacity(self) -> float\nC++: virtual double GetFillOpacity()\n\nControl opacity of representation fill.\n"},
  {"FillOpacityOn", PyvtkMRMLMarkupsDisplayNode_FillOpacityOn, METH_VARARGS,
   "FillOpacityOn(self) -> None\nC++: virtual void FillOpacityOn()\n\nControl opacity of representation fill.\n"},
  {"FillOpacityOff", PyvtkMRMLMarkupsDisplayNode_FillOpacityOff, METH_VARARGS,
   "FillOpacityOff(self) -> None\nC++: virtual void FillOpacityOff()\n\nControl opacity of representation fill.\n"},
  {"SetOutlineOpacity", PyvtkMRMLMarkupsDisplayNode_SetOutlineOpacity, METH_VARARGS,
   "SetOutlineOpacity(self, _arg:float) -> None\nC++: virtual void SetOutlineOpacity(double _arg)\n\nControl opacity of representation edges.\n"},
  {"GetOutlineOpacity", PyvtkMRMLMarkupsDisplayNode_GetOutlineOpacity, METH_VARARGS,
   "GetOutlineOpacity(self) -> float\nC++: virtual double GetOutlineOpacity()\n\nControl opacity of representation edges.\n"},
  {"OutlineOpacityOn", PyvtkMRMLMarkupsDisplayNode_OutlineOpacityOn, METH_VARARGS,
   "OutlineOpacityOn(self) -> None\nC++: virtual void OutlineOpacityOn()\n\nControl opacity of representation edges.\n"},
  {"OutlineOpacityOff", PyvtkMRMLMarkupsDisplayNode_OutlineOpacityOff, METH_VARARGS,
   "OutlineOpacityOff(self) -> None\nC++: virtual void OutlineOpacityOff()\n\nControl opacity of representation edges.\n"},
  {"GetMinimumGlyphType", PyvtkMRMLMarkupsDisplayNode_GetMinimumGlyphType, METH_VARARGS,
   "GetMinimumGlyphType() -> int\nC++: static int GetMinimumGlyphType()\n\nReturn the min/max glyph types, for iterating over them in tcl\n"},
  {"GetMaximumGlyphType", PyvtkMRMLMarkupsDisplayNode_GetMaximumGlyphType, METH_VARARGS,
   "GetMaximumGlyphType() -> int\nC++: static int GetMaximumGlyphType()\n\nReturn the min/max glyph types, for iterating over them in tcl\n"},
  {"SetGlyphType", PyvtkMRMLMarkupsDisplayNode_SetGlyphType, METH_VARARGS,
   "SetGlyphType(self, _arg:int) -> None\nC++: virtual void SetGlyphType(int _arg)\n\nThe glyph type used to display this fiducial\n"},
  {"GetGlyphType", PyvtkMRMLMarkupsDisplayNode_GetGlyphType, METH_VARARGS,
   "GetGlyphType(self) -> int\nC++: virtual int GetGlyphType()\n\nThe glyph type used to display this fiducial\n"},
  {"GlyphTypeIs3D", PyvtkMRMLMarkupsDisplayNode_GlyphTypeIs3D, METH_VARARGS,
   "GlyphTypeIs3D(self, glyphType:int) -> int\nC++: int GlyphTypeIs3D(int glyphType)\nGlyphTypeIs3D(self) -> int\nC++: int GlyphTypeIs3D()\n\nReturns 1 if the type is a 3d one, 0 else\n"},
  {"GetGlyphTypeAsString", PyvtkMRMLMarkupsDisplayNode_GetGlyphTypeAsString, METH_VARARGS,
   "GetGlyphTypeAsString(self) -> str\nC++: const char *GetGlyphTypeAsString()\nGetGlyphTypeAsString(g:int) -> str\nC++: static const char *GetGlyphTypeAsString(int g)\n\nReturn a string representing the glyph type, set it from a string\n"},
  {"SetGlyphTypeFromString", PyvtkMRMLMarkupsDisplayNode_SetGlyphTypeFromString, METH_VARARGS,
   "SetGlyphTypeFromString(self, glyphString:str) -> None\nC++: void SetGlyphTypeFromString(const char *glyphString)\n\nReturn a string representing the glyph type, set it from a string\n"},
  {"GetGlyphTypeFromString", PyvtkMRMLMarkupsDisplayNode_GetGlyphTypeFromString, METH_VARARGS,
   "GetGlyphTypeFromString(__a:str) -> int\nC++: static int GetGlyphTypeFromString(const char *)\n\nReturn a string representing the glyph type, set it from a string\n"},
  {"SetSnapMode", PyvtkMRMLMarkupsDisplayNode_SetSnapMode, METH_VARARGS,
   "SetSnapMode(self, _arg:int) -> None\nC++: virtual void SetSnapMode(int _arg)\n\nSpecifies if position of control points are snapped to selected\nsurfaces\n\\sa SnapModes\n"},
  {"GetSnapMode", PyvtkMRMLMarkupsDisplayNode_GetSnapMode, METH_VARARGS,
   "GetSnapMode(self) -> int\nC++: virtual int GetSnapMode()\n\nSpecifies if position of control points are snapped to selected\nsurfaces\n\\sa SnapModes\n"},
  {"GetSnapModeAsString", PyvtkMRMLMarkupsDisplayNode_GetSnapModeAsString, METH_VARARGS,
   "GetSnapModeAsString(g:int) -> str\nC++: static const char *GetSnapModeAsString(int g)\n\nSpecifies if position of control points are snapped to selected\nsurfaces\n\\sa SnapModes\n"},
  {"GetSnapModeFromString", PyvtkMRMLMarkupsDisplayNode_GetSnapModeFromString, METH_VARARGS,
   "GetSnapModeFromString(__a:str) -> int\nC++: static int GetSnapModeFromString(const char *)\n\nSpecifies if position of control points are snapped to selected\nsurfaces\n\\sa SnapModes\n"},
  {"SetGlyphScale", PyvtkMRMLMarkupsDisplayNode_SetGlyphScale, METH_VARARGS,
   "SetGlyphScale(self, _arg:float) -> None\nC++: virtual void SetGlyphScale(double _arg)\n\nGet/Set markup point size relative to the window size. This value\nis only used in slice views and only if SliceUseGlyphScale is set\nto true. Diameter of the point is defined as percentage of \"window\nsize\". \"Window size\" is computed as diagonal size of the screen\nmultiplied by ScreenScaleFactor. Currently ScreenScaleFactor is\nset to to a fixed value of 0.2 (therefore glyph scale = 1.00\ncorresponds to 20% of the screen diagonal size), but this factor\nmay be made configurable in the future.\n"},
  {"GetGlyphScale", PyvtkMRMLMarkupsDisplayNode_GetGlyphScale, METH_VARARGS,
   "GetGlyphScale(self) -> float\nC++: virtual double GetGlyphScale()\n\nGet/Set markup point size relative to the window size. This value\nis only used in slice views and only if SliceUseGlyphScale is set\nto true. Diameter of the point is defined as percentage of \"window\nsize\". \"Window size\" is computed as diagonal size of the screen\nmultiplied by ScreenScaleFactor. Currently ScreenScaleFactor is\nset to to a fixed value of 0.2 (therefore glyph scale = 1.00\ncorresponds to 20% of the screen diagonal size), but this factor\nmay be made configurable in the future.\n"},
  {"SetGlyphSize", PyvtkMRMLMarkupsDisplayNode_SetGlyphSize, METH_VARARGS,
   "SetGlyphSize(self, _arg:float) -> None\nC++: virtual void SetGlyphSize(double _arg)\n\nGet/Set absolute markup point size. This value is used in 3D\nviews. This value is used in slice views if SliceUseGlyphScale is\nset to false. Diameter of the point is defined as \"scale\"\npercentage of diagonal size of the window.\n"},
  {"GetGlyphSize", PyvtkMRMLMarkupsDisplayNode_GetGlyphSize, METH_VARARGS,
   "GetGlyphSize(self) -> float\nC++: virtual double GetGlyphSize()\n\nGet/Set absolute markup point size. This value is used in 3D\nviews. This value is used in slice views if SliceUseGlyphScale is\nset to false. Diameter of the point is defined as \"scale\"\npercentage of diagonal size of the window.\n"},
  {"SetUseGlyphScale", PyvtkMRMLMarkupsDisplayNode_SetUseGlyphScale, METH_VARARGS,
   "SetUseGlyphScale(self, _arg:bool) -> None\nC++: virtual void SetUseGlyphScale(bool _arg)\n\nThis flag controls if GlyphScale relative or GlyphSize absolute\nsize is used to determine size of point glyphs. On by default\n(GlyphScale is used for point sizing in 2D views).\n\\sa SetGlyphScale, SetGlyphSize\n"},
  {"GetUseGlyphScale", PyvtkMRMLMarkupsDisplayNode_GetUseGlyphScale, METH_VARARGS,
   "GetUseGlyphScale(self) -> bool\nC++: virtual bool GetUseGlyphScale()\n\nThis flag controls if GlyphScale relative or GlyphSize absolute\nsize is used to determine size of point glyphs. On by default\n(GlyphScale is used for point sizing in 2D views).\n\\sa SetGlyphScale, SetGlyphSize\n"},
  {"UseGlyphScaleOn", PyvtkMRMLMarkupsDisplayNode_UseGlyphScaleOn, METH_VARARGS,
   "UseGlyphScaleOn(self) -> None\nC++: virtual void UseGlyphScaleOn()\n\nThis flag controls if GlyphScale relative or GlyphSize absolute\nsize is used to determine size of point glyphs. On by default\n(GlyphScale is used for point sizing in 2D views).\n\\sa SetGlyphScale, SetGlyphSize\n"},
  {"UseGlyphScaleOff", PyvtkMRMLMarkupsDisplayNode_UseGlyphScaleOff, METH_VARARGS,
   "UseGlyphScaleOff(self) -> None\nC++: virtual void UseGlyphScaleOff()\n\nThis flag controls if GlyphScale relative or GlyphSize absolute\nsize is used to determine size of point glyphs. On by default\n(GlyphScale is used for point sizing in 2D views).\n\\sa SetGlyphScale, SetGlyphSize\n"},
  {"SetSliceProjection", PyvtkMRMLMarkupsDisplayNode_SetSliceProjection, METH_VARARGS,
   "SetSliceProjection(self, _arg:bool) -> None\nC++: virtual void SetSliceProjection(bool _arg)\n\nSet SliceProjection flag that controls if the projection of\nmarkups is visible or not in 2D viewers on slices on which it is\nnormally not visible. Off by default\n\\sa SliceIntersectionVisibility, SliceProjectionColor\n"},
  {"GetSliceProjection", PyvtkMRMLMarkupsDisplayNode_GetSliceProjection, METH_VARARGS,
   "GetSliceProjection(self) -> bool\nC++: virtual bool GetSliceProjection()\n\nSet SliceProjection flag that controls if the projection of\nmarkups is visible or not in 2D viewers on slices on which it is\nnormally not visible. Off by default\n\\sa SliceIntersectionVisibility, SliceProjectionColor\n"},
  {"SliceProjectionOn", PyvtkMRMLMarkupsDisplayNode_SliceProjectionOn, METH_VARARGS,
   "SliceProjectionOn(self) -> None\nC++: virtual void SliceProjectionOn()\n\nSet SliceProjection flag that controls if the projection of\nmarkups is visible or not in 2D viewers on slices on which it is\nnormally not visible. Off by default\n\\sa SliceIntersectionVisibility, SliceProjectionColor\n"},
  {"SliceProjectionOff", PyvtkMRMLMarkupsDisplayNode_SliceProjectionOff, METH_VARARGS,
   "SliceProjectionOff(self) -> None\nC++: virtual void SliceProjectionOff()\n\nSet SliceProjection flag that controls if the projection of\nmarkups is visible or not in 2D viewers on slices on which it is\nnormally not visible. Off by default\n\\sa SliceIntersectionVisibility, SliceProjectionColor\n"},
  {"SetSliceProjectionUseFiducialColor", PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionUseFiducialColor, METH_VARARGS,
   "SetSliceProjectionUseFiducialColor(self, _arg:bool) -> None\nC++: virtual void SetSliceProjectionUseFiducialColor(bool _arg)\n\nSet projection color to be the same as the fiducial color On by\ndefault\n"},
  {"GetSliceProjectionUseFiducialColor", PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionUseFiducialColor, METH_VARARGS,
   "GetSliceProjectionUseFiducialColor(self) -> bool\nC++: virtual bool GetSliceProjectionUseFiducialColor()\n\nSet projection color to be the same as the fiducial color On by\ndefault\n"},
  {"SliceProjectionUseFiducialColorOn", PyvtkMRMLMarkupsDisplayNode_SliceProjectionUseFiducialColorOn, METH_VARARGS,
   "SliceProjectionUseFiducialColorOn(self) -> None\nC++: virtual void SliceProjectionUseFiducialColorOn()\n\nSet projection color to be the same as the fiducial color On by\ndefault\n"},
  {"SliceProjectionUseFiducialColorOff", PyvtkMRMLMarkupsDisplayNode_SliceProjectionUseFiducialColorOff, METH_VARARGS,
   "SliceProjectionUseFiducialColorOff(self) -> None\nC++: virtual void SliceProjectionUseFiducialColorOff()\n\nSet projection color to be the same as the fiducial color On by\ndefault\n"},
  {"SetSliceProjectionOutlinedBehindSlicePlane", PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionOutlinedBehindSlicePlane, METH_VARARGS,
   "SetSliceProjectionOutlinedBehindSlicePlane(self, _arg:bool)\n    -> None\nC++: virtual void SetSliceProjectionOutlinedBehindSlicePlane(\n    bool _arg)\n\nSet projection's view different if under/over/in the plane Off by\ndefault\n"},
  {"GetSliceProjectionOutlinedBehindSlicePlane", PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionOutlinedBehindSlicePlane, METH_VARARGS,
   "GetSliceProjectionOutlinedBehindSlicePlane(self) -> bool\nC++: virtual bool GetSliceProjectionOutlinedBehindSlicePlane()\n\nSet projection's view different if under/over/in the plane Off by\ndefault\n"},
  {"SliceProjectionOutlinedBehindSlicePlaneOn", PyvtkMRMLMarkupsDisplayNode_SliceProjectionOutlinedBehindSlicePlaneOn, METH_VARARGS,
   "SliceProjectionOutlinedBehindSlicePlaneOn(self) -> None\nC++: virtual void SliceProjectionOutlinedBehindSlicePlaneOn()\n\nSet projection's view different if under/over/in the plane Off by\ndefault\n"},
  {"SliceProjectionOutlinedBehindSlicePlaneOff", PyvtkMRMLMarkupsDisplayNode_SliceProjectionOutlinedBehindSlicePlaneOff, METH_VARARGS,
   "SliceProjectionOutlinedBehindSlicePlaneOff(self) -> None\nC++: virtual void SliceProjectionOutlinedBehindSlicePlaneOff()\n\nSet projection's view different if under/over/in the plane Off by\ndefault\n"},
  {"SetSliceProjectionColor", PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionColor, METH_VARARGS,
   "SetSliceProjectionColor(self, _arg1:float, _arg2:float,\n    _arg3:float) -> None\nC++: virtual void SetSliceProjectionColor(double _arg1,\n    double _arg2, double _arg3)\nSetSliceProjectionColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSliceProjectionColor(const double _arg[3])\n\nSet color of the projection on the 2D viewers White (1.0, 1.0,\n1.0) by default.\n"},
  {"GetSliceProjectionColor", PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionColor, METH_VARARGS,
   "GetSliceProjectionColor(self) -> (float, float, float)\nC++: virtual double *GetSliceProjectionColor()\n\nSet color of the projection on the 2D viewers White (1.0, 1.0,\n1.0) by default.\n"},
  {"SetSliceProjectionOpacity", PyvtkMRMLMarkupsDisplayNode_SetSliceProjectionOpacity, METH_VARARGS,
   "SetSliceProjectionOpacity(self, _arg:float) -> None\nC++: virtual void SetSliceProjectionOpacity(double _arg)\n\nSet opacity of projection on the 2D viewers 0.6 by default\n"},
  {"GetSliceProjectionOpacityMinValue", PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionOpacityMinValue, METH_VARARGS,
   "GetSliceProjectionOpacityMinValue(self) -> float\nC++: virtual double GetSliceProjectionOpacityMinValue()\n\nSet opacity of projection on the 2D viewers 0.6 by default\n"},
  {"GetSliceProjectionOpacityMaxValue", PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionOpacityMaxValue, METH_VARARGS,
   "GetSliceProjectionOpacityMaxValue(self) -> float\nC++: virtual double GetSliceProjectionOpacityMaxValue()\n\nSet opacity of projection on the 2D viewers 0.6 by default\n"},
  {"GetSliceProjectionOpacity", PyvtkMRMLMarkupsDisplayNode_GetSliceProjectionOpacity, METH_VARARGS,
   "GetSliceProjectionOpacity(self) -> float\nC++: virtual double GetSliceProjectionOpacity()\n\nSet opacity of projection on the 2D viewers 0.6 by default\n"},
  {"SetCurveLineSizeMode", PyvtkMRMLMarkupsDisplayNode_SetCurveLineSizeMode, METH_VARARGS,
   "SetCurveLineSizeMode(self, _arg:int) -> None\nC++: virtual void SetCurveLineSizeMode(int _arg)\n\nConfigure mode of determining line radius of markup curves.\nDefault is relative thickness. Available modes in \\sa\nCurveLineSizeModes\n"},
  {"GetCurveLineSizeMode", PyvtkMRMLMarkupsDisplayNode_GetCurveLineSizeMode, METH_VARARGS,
   "GetCurveLineSizeMode(self) -> int\nC++: virtual int GetCurveLineSizeMode()\n\nConfigure mode of determining line radius of markup curves.\nDefault is relative thickness. Available modes in \\sa\nCurveLineSizeModes\n"},
  {"GetCurveLineSizeModeAsString", PyvtkMRMLMarkupsDisplayNode_GetCurveLineSizeModeAsString, METH_VARARGS,
   "GetCurveLineSizeModeAsString(self) -> str\nC++: const char *GetCurveLineSizeModeAsString()\nGetCurveLineSizeModeAsString(mode:int) -> str\nC++: static const char *GetCurveLineSizeModeAsString(int mode)\n\nConfigure mode of determining line radius of markup curves.\nDefault is relative thickness. Available modes in \\sa\nCurveLineSizeModes\n"},
  {"SetCurveLineSizeModeFromString", PyvtkMRMLMarkupsDisplayNode_SetCurveLineSizeModeFromString, METH_VARARGS,
   "SetCurveLineSizeModeFromString(self, modeString:str) -> None\nC++: void SetCurveLineSizeModeFromString(const char *modeString)\n\nConfigure mode of determining line radius of markup curves.\nDefault is relative thickness. Available modes in \\sa\nCurveLineSizeModes\n"},
  {"GetCurveLineSizeModeFromString", PyvtkMRMLMarkupsDisplayNode_GetCurveLineSizeModeFromString, METH_VARARGS,
   "GetCurveLineSizeModeFromString(__a:str) -> int\nC++: static int GetCurveLineSizeModeFromString(const char *)\n\nConfigure mode of determining line radius of markup curves.\nDefault is relative thickness. Available modes in \\sa\nCurveLineSizeModes\n"},
  {"GetLineThickness", PyvtkMRMLMarkupsDisplayNode_GetLineThickness, METH_VARARGS,
   "GetLineThickness(self) -> float\nC++: virtual double GetLineThickness()\n\nConfigure line thickness Thickness is specified relative to\nmarkup point size (1.0 means line diameter is the same as\ndiameter of point glyphs). This relative value is used if \\sa\nCurveLineSizeMode is UseLineThickness For absolute control of\nthickness, \\sa LineDiameter should be used.\n"},
  {"SetLineThickness", PyvtkMRMLMarkupsDisplayNode_SetLineThickness, METH_VARARGS,
   "SetLineThickness(self, _arg:float) -> None\nC++: virtual void SetLineThickness(double _arg)\n\nConfigure line thickness Thickness is specified relative to\nmarkup point size (1.0 means line diameter is the same as\ndiameter of point glyphs). This relative value is used if \\sa\nCurveLineSizeMode is UseLineThickness For absolute control of\nthickness, \\sa LineDiameter should be used.\n"},
  {"GetLineDiameter", PyvtkMRMLMarkupsDisplayNode_GetLineDiameter, METH_VARARGS,
   "GetLineDiameter(self) -> float\nC++: virtual double GetLineDiameter()\n\nConfigure line diameter Diameter is specified in absolute mm\nvalue This absolute value is used if \\sa CurveLineSizeMode is\nUseLineDiameter For relative control of diameter, \\sa\nLineThickness should be used.\n"},
  {"SetLineDiameter", PyvtkMRMLMarkupsDisplayNode_SetLineDiameter, METH_VARARGS,
   "SetLineDiameter(self, _arg:float) -> None\nC++: virtual void SetLineDiameter(double _arg)\n\nConfigure line diameter Diameter is specified in absolute mm\nvalue This absolute value is used if \\sa CurveLineSizeMode is\nUseLineDiameter For relative control of diameter, \\sa\nLineThickness should be used.\n"},
  {"GetLineColorFadingStart", PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingStart, METH_VARARGS,
   "GetLineColorFadingStart(self) -> float\nC++: virtual double GetLineColorFadingStart()\n\nConfigure the line color fading appearance Default value = 1.0\n"},
  {"SetLineColorFadingStart", PyvtkMRMLMarkupsDisplayNode_SetLineColorFadingStart, METH_VARARGS,
   "SetLineColorFadingStart(self, _arg:float) -> None\nC++: virtual void SetLineColorFadingStart(double _arg)\n\nConfigure the line color fading appearance Default value = 1.0\n"},
  {"GetLineColorFadingEnd", PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingEnd, METH_VARARGS,
   "GetLineColorFadingEnd(self) -> float\nC++: virtual double GetLineColorFadingEnd()\n\nConfigure the line color fading appearance Default value = 10.0\n"},
  {"SetLineColorFadingEnd", PyvtkMRMLMarkupsDisplayNode_SetLineColorFadingEnd, METH_VARARGS,
   "SetLineColorFadingEnd(self, _arg:float) -> None\nC++: virtual void SetLineColorFadingEnd(double _arg)\n\nConfigure the line color fading appearance Default value = 10.0\n"},
  {"SetLineColorFadingSaturation", PyvtkMRMLMarkupsDisplayNode_SetLineColorFadingSaturation, METH_VARARGS,
   "SetLineColorFadingSaturation(self, _arg:float) -> None\nC++: virtual void SetLineColorFadingSaturation(double _arg)\n\nConfigures the line color fading appearance Default value = 1.0\n"},
  {"GetLineColorFadingSaturationMinValue", PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingSaturationMinValue, METH_VARARGS,
   "GetLineColorFadingSaturationMinValue(self) -> float\nC++: virtual double GetLineColorFadingSaturationMinValue()\n\nConfigures the line color fading appearance Default value = 1.0\n"},
  {"GetLineColorFadingSaturationMaxValue", PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingSaturationMaxValue, METH_VARARGS,
   "GetLineColorFadingSaturationMaxValue(self) -> float\nC++: virtual double GetLineColorFadingSaturationMaxValue()\n\nConfigures the line color fading appearance Default value = 1.0\n"},
  {"GetLineColorFadingSaturation", PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingSaturation, METH_VARARGS,
   "GetLineColorFadingSaturation(self) -> float\nC++: virtual double GetLineColorFadingSaturation()\n\nConfigures the line color fading appearance Default value = 1.0\n"},
  {"SetLineColorFadingHueOffset", PyvtkMRMLMarkupsDisplayNode_SetLineColorFadingHueOffset, METH_VARARGS,
   "SetLineColorFadingHueOffset(self, _arg:float) -> None\nC++: virtual void SetLineColorFadingHueOffset(double _arg)\n\nConfigures the line color fading appearance Default value = 0.0\n"},
  {"GetLineColorFadingHueOffsetMinValue", PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingHueOffsetMinValue, METH_VARARGS,
   "GetLineColorFadingHueOffsetMinValue(self) -> float\nC++: virtual double GetLineColorFadingHueOffsetMinValue()\n\nConfigures the line color fading appearance Default value = 0.0\n"},
  {"GetLineColorFadingHueOffsetMaxValue", PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingHueOffsetMaxValue, METH_VARARGS,
   "GetLineColorFadingHueOffsetMaxValue(self) -> float\nC++: virtual double GetLineColorFadingHueOffsetMaxValue()\n\nConfigures the line color fading appearance Default value = 0.0\n"},
  {"GetLineColorFadingHueOffset", PyvtkMRMLMarkupsDisplayNode_GetLineColorFadingHueOffset, METH_VARARGS,
   "GetLineColorFadingHueOffset(self) -> float\nC++: virtual double GetLineColorFadingHueOffset()\n\nConfigures the line color fading appearance Default value = 0.0\n"},
  {"SetLineColorNodeID", PyvtkMRMLMarkupsDisplayNode_SetLineColorNodeID, METH_VARARGS,
   "SetLineColorNodeID(self, lineColorNodeID:str) -> None\nC++: virtual void SetLineColorNodeID(const char *lineColorNodeID)\n\nSet the line color node ID used for the projection on the line\nactors on the 2D viewers. Setting a line color node allows to\ndefine any arbitrary color mapping. Setting a line color node\nwill overwrite the settings given by the color, opacity and\nLineColorFading variables of the displayNode.\n"},
  {"GetLineColorNodeID", PyvtkMRMLMarkupsDisplayNode_GetLineColorNodeID, METH_VARARGS,
   "GetLineColorNodeID(self) -> str\nC++: const char *GetLineColorNodeID()\n\nGet the line color node ID used for the projection on the line\nactors on the 2D viewers.\n"},
  {"GetLineColorNode", PyvtkMRMLMarkupsDisplayNode_GetLineColorNode, METH_VARARGS,
   "GetLineColorNode(self) -> vtkMRMLProceduralColorNode\nC++: vtkMRMLProceduralColorNode *GetLineColorNode()\n\nGet the line color node used for the projection on the line\nactors on the 2D viewers.\n"},
  {"GetLineColorNodeReferenceRole", PyvtkMRMLMarkupsDisplayNode_GetLineColorNodeReferenceRole, METH_VARARGS,
   "GetLineColorNodeReferenceRole(self) -> str\nC++: virtual const char *GetLineColorNodeReferenceRole()\n\nGet the line color node used for the projection on the line\nactors on the 2D viewers.\n"},
  {"GetOccludedVisibility", PyvtkMRMLMarkupsDisplayNode_GetOccludedVisibility, METH_VARARGS,
   "GetOccludedVisibility(self) -> bool\nC++: virtual bool GetOccludedVisibility()\n\nDisplays the occluded regions of the markup on top of other\nobjects. Opacity can be adjusted with OccludedOpacity\n\\sa SetOccludedOpacity, GetOccludedOpacity\n"},
  {"SetOccludedVisibility", PyvtkMRMLMarkupsDisplayNode_SetOccludedVisibility, METH_VARARGS,
   "SetOccludedVisibility(self, _arg:bool) -> None\nC++: virtual void SetOccludedVisibility(bool _arg)\n\nDisplays the occluded regions of the markup on top of other\nobjects. Opacity can be adjusted with OccludedOpacity\n\\sa SetOccludedOpacity, GetOccludedOpacity\n"},
  {"OccludedVisibilityOn", PyvtkMRMLMarkupsDisplayNode_OccludedVisibilityOn, METH_VARARGS,
   "OccludedVisibilityOn(self) -> None\nC++: virtual void OccludedVisibilityOn()\n\nDisplays the occluded regions of the markup on top of other\nobjects. Opacity can be adjusted with OccludedOpacity\n\\sa SetOccludedOpacity, GetOccludedOpacity\n"},
  {"OccludedVisibilityOff", PyvtkMRMLMarkupsDisplayNode_OccludedVisibilityOff, METH_VARARGS,
   "OccludedVisibilityOff(self) -> None\nC++: virtual void OccludedVisibilityOff()\n\nDisplays the occluded regions of the markup on top of other\nobjects. Opacity can be adjusted with OccludedOpacity\n\\sa SetOccludedOpacity, GetOccludedOpacity\n"},
  {"GetOccludedOpacity", PyvtkMRMLMarkupsDisplayNode_GetOccludedOpacity, METH_VARARGS,
   "GetOccludedOpacity(self) -> float\nC++: virtual double GetOccludedOpacity()\n\nOpacity of the occluded parts of the markup. 0.0 results in the\nmarkup being fully transparent, while 1.0 is fully opaque.\n\\sa SetOccludedVisibility, GetOccludedVisibility\n"},
  {"SetOccludedOpacity", PyvtkMRMLMarkupsDisplayNode_SetOccludedOpacity, METH_VARARGS,
   "SetOccludedOpacity(self, _arg:float) -> None\nC++: virtual void SetOccludedOpacity(double _arg)\n\nOpacity of the occluded parts of the markup. 0.0 results in the\nmarkup being fully transparent, while 1.0 is fully opaque.\n\\sa SetOccludedVisibility, GetOccludedVisibility\n"},
  {"GetTextProperty", PyvtkMRMLMarkupsDisplayNode_GetTextProperty, METH_VARARGS,
   "GetTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\nText property object that controls the display properties of text\nactors in 2D and 3D. The text object property controls background\ncolor/opacity, frame size/color, font, etc. This function always\nreturns a valid vtkTextProperty pointer.\n"},
  {"SetActiveColor", PyvtkMRMLMarkupsDisplayNode_SetActiveColor, METH_VARARGS,
   "SetActiveColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetActiveColor(double _arg1, double _arg2,\n    double _arg3)\nSetActiveColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetActiveColor(const double _arg[3])\n\nSet the active color of the markup. This color is used when the\nmouse pointer hovers over a markup.\n"},
  {"GetActiveColor", PyvtkMRMLMarkupsDisplayNode_GetActiveColor, METH_VARARGS,
   "GetActiveColor(self) -> (float, float, float)\nC++: virtual double *GetActiveColor()\n\nGet the active color of the markup. This color is used when the\nmouse pointer hovers over a markup.\n"},
  {"GetHandlesInteractive", PyvtkMRMLMarkupsDisplayNode_GetHandlesInteractive, METH_VARARGS,
   "GetHandlesInteractive(self) -> bool\nC++: virtual bool GetHandlesInteractive()\n\nThe visibility and interactability of the interaction handles\n"},
  {"SetHandlesInteractive", PyvtkMRMLMarkupsDisplayNode_SetHandlesInteractive, METH_VARARGS,
   "SetHandlesInteractive(self, _arg:bool) -> None\nC++: virtual void SetHandlesInteractive(bool _arg)\n\nThe visibility and interactability of the interaction handles\n"},
  {"HandlesInteractiveOn", PyvtkMRMLMarkupsDisplayNode_HandlesInteractiveOn, METH_VARARGS,
   "HandlesInteractiveOn(self) -> None\nC++: virtual void HandlesInteractiveOn()\n\nThe visibility and interactability of the interaction handles\n"},
  {"HandlesInteractiveOff", PyvtkMRMLMarkupsDisplayNode_HandlesInteractiveOff, METH_VARARGS,
   "HandlesInteractiveOff(self) -> None\nC++: virtual void HandlesInteractiveOff()\n\nThe visibility and interactability of the interaction handles\n"},
  {"GetTranslationHandleVisibility", PyvtkMRMLMarkupsDisplayNode_GetTranslationHandleVisibility, METH_VARARGS,
   "GetTranslationHandleVisibility(self) -> bool\nC++: virtual bool GetTranslationHandleVisibility()\n\nThe visibility and interactability of the interaction handles\n"},
  {"SetTranslationHandleVisibility", PyvtkMRMLMarkupsDisplayNode_SetTranslationHandleVisibility, METH_VARARGS,
   "SetTranslationHandleVisibility(self, _arg:bool) -> None\nC++: virtual void SetTranslationHandleVisibility(bool _arg)\n\nThe visibility and interactability of the interaction handles\n"},
  {"TranslationHandleVisibilityOn", PyvtkMRMLMarkupsDisplayNode_TranslationHandleVisibilityOn, METH_VARARGS,
   "TranslationHandleVisibilityOn(self) -> None\nC++: virtual void TranslationHandleVisibilityOn()\n\nThe visibility and interactability of the interaction handles\n"},
  {"TranslationHandleVisibilityOff", PyvtkMRMLMarkupsDisplayNode_TranslationHandleVisibilityOff, METH_VARARGS,
   "TranslationHandleVisibilityOff(self) -> None\nC++: virtual void TranslationHandleVisibilityOff()\n\nThe visibility and interactability of the interaction handles\n"},
  {"GetRotationHandleVisibility", PyvtkMRMLMarkupsDisplayNode_GetRotationHandleVisibility, METH_VARARGS,
   "GetRotationHandleVisibility(self) -> bool\nC++: virtual bool GetRotationHandleVisibility()\n\nThe visibility and interactability of the interaction handles\n"},
  {"SetRotationHandleVisibility", PyvtkMRMLMarkupsDisplayNode_SetRotationHandleVisibility, METH_VARARGS,
   "SetRotationHandleVisibility(self, _arg:bool) -> None\nC++: virtual void SetRotationHandleVisibility(bool _arg)\n\nThe visibility and interactability of the interaction handles\n"},
  {"RotationHandleVisibilityOn", PyvtkMRMLMarkupsDisplayNode_RotationHandleVisibilityOn, METH_VARARGS,
   "RotationHandleVisibilityOn(self) -> None\nC++: virtual void RotationHandleVisibilityOn()\n\nThe visibility and interactability of the interaction handles\n"},
  {"RotationHandleVisibilityOff", PyvtkMRMLMarkupsDisplayNode_RotationHandleVisibilityOff, METH_VARARGS,
   "RotationHandleVisibilityOff(self) -> None\nC++: virtual void RotationHandleVisibilityOff()\n\nThe visibility and interactability of the interaction handles\n"},
  {"GetScaleHandleVisibility", PyvtkMRMLMarkupsDisplayNode_GetScaleHandleVisibility, METH_VARARGS,
   "GetScaleHandleVisibility(self) -> bool\nC++: virtual bool GetScaleHandleVisibility()\n\nThe visibility and interactability of the interaction handles\n"},
  {"SetScaleHandleVisibility", PyvtkMRMLMarkupsDisplayNode_SetScaleHandleVisibility, METH_VARARGS,
   "SetScaleHandleVisibility(self, _arg:bool) -> None\nC++: virtual void SetScaleHandleVisibility(bool _arg)\n\nThe visibility and interactability of the interaction handles\n"},
  {"ScaleHandleVisibilityOn", PyvtkMRMLMarkupsDisplayNode_ScaleHandleVisibilityOn, METH_VARARGS,
   "ScaleHandleVisibilityOn(self) -> None\nC++: virtual void ScaleHandleVisibilityOn()\n\nThe visibility and interactability of the interaction handles\n"},
  {"ScaleHandleVisibilityOff", PyvtkMRMLMarkupsDisplayNode_ScaleHandleVisibilityOff, METH_VARARGS,
   "ScaleHandleVisibilityOff(self) -> None\nC++: virtual void ScaleHandleVisibilityOff()\n\nThe visibility and interactability of the interaction handles\n"},
  {"SetHandleVisibility", PyvtkMRMLMarkupsDisplayNode_SetHandleVisibility, METH_VARARGS,
   "SetHandleVisibility(self, handleType:int, visibility:bool) -> None\nC++: void SetHandleVisibility(int handleType, bool visibility)\n\nThe visibility and interactability of the interaction handles\n"},
  {"GetHandleVisibility", PyvtkMRMLMarkupsDisplayNode_GetHandleVisibility, METH_VARARGS,
   "GetHandleVisibility(self, handleType:int) -> bool\nC++: bool GetHandleVisibility(int handleType)\n\nThe visibility and interactability of the interaction handles\n"},
  {"SetInteractionHandleScale", PyvtkMRMLMarkupsDisplayNode_SetInteractionHandleScale, METH_VARARGS,
   "SetInteractionHandleScale(self, _arg:float) -> None\nC++: virtual void SetInteractionHandleScale(double _arg)\n\nGet/Set interaction handle size relative to the window size.\nDiameter of the interaction handle points is defined as \"scale\"\npercentage of diagonal size of the window.\n"},
  {"GetInteractionHandleScale", PyvtkMRMLMarkupsDisplayNode_GetInteractionHandleScale, METH_VARARGS,
   "GetInteractionHandleScale(self) -> float\nC++: virtual double GetInteractionHandleScale()\n\nGet/Set interaction handle size relative to the window size.\nDiameter of the interaction handle points is defined as \"scale\"\npercentage of diagonal size of the window.\n"},
  {"SetRotationHandleComponentVisibility", PyvtkMRMLMarkupsDisplayNode_SetRotationHandleComponentVisibility, METH_VARARGS,
   "SetRotationHandleComponentVisibility(self, _arg1:bool, _arg2:bool,\n     _arg3:bool, _arg4:bool) -> None\nC++: virtual void SetRotationHandleComponentVisibility(bool _arg1,\n     bool _arg2, bool _arg3, bool _arg4)\nSetRotationHandleComponentVisibility(self, _arg:(bool, bool, bool,\n     bool)) -> None\nC++: virtual void SetRotationHandleComponentVisibility(\n    const bool _arg[4])\n\nGet/Set the visibility of the individual handle axes The order of\nthe vector is: [X, Y, Z, ViewPlane] \"ViewPlane\" scale/translation\nallows transformations to take place along the active view plane.\n(ex. center translation point and ROI corner scale handles.\n"},
  {"GetRotationHandleComponentVisibility", PyvtkMRMLMarkupsDisplayNode_GetRotationHandleComponentVisibility, METH_VARARGS,
   "GetRotationHandleComponentVisibility(self) -> (bool, bool, bool,\n    bool)\nC++: virtual bool *GetRotationHandleComponentVisibility()\n\nGet/Set the visibility of the individual handle axes The order of\nthe vector is: [X, Y, Z, ViewPlane] \"ViewPlane\" scale/translation\nallows transformations to take place along the active view plane.\n(ex. center translation point and ROI corner scale handles.\n"},
  {"SetScaleHandleComponentVisibility", PyvtkMRMLMarkupsDisplayNode_SetScaleHandleComponentVisibility, METH_VARARGS,
   "SetScaleHandleComponentVisibility(self, _arg1:bool, _arg2:bool,\n    _arg3:bool, _arg4:bool) -> None\nC++: virtual void SetScaleHandleComponentVisibility(bool _arg1,\n    bool _arg2, bool _arg3, bool _arg4)\nSetScaleHandleComponentVisibility(self, _arg:(bool, bool, bool,\n    bool)) -> None\nC++: virtual void SetScaleHandleComponentVisibility(\n    const bool _arg[4])\n\nGet/Set the visibility of the individual handle axes The order of\nthe vector is: [X, Y, Z, ViewPlane] \"ViewPlane\" scale/translation\nallows transformations to take place along the active view plane.\n(ex. center translation point and ROI corner scale handles.\n"},
  {"GetScaleHandleComponentVisibility", PyvtkMRMLMarkupsDisplayNode_GetScaleHandleComponentVisibility, METH_VARARGS,
   "GetScaleHandleComponentVisibility(self) -> (bool, bool, bool,\n    bool)\nC++: virtual bool *GetScaleHandleComponentVisibility()\n\nGet/Set the visibility of the individual handle axes The order of\nthe vector is: [X, Y, Z, ViewPlane] \"ViewPlane\" scale/translation\nallows transformations to take place along the active view plane.\n(ex. center translation point and ROI corner scale handles.\n"},
  {"SetTranslationHandleComponentVisibility", PyvtkMRMLMarkupsDisplayNode_SetTranslationHandleComponentVisibility, METH_VARARGS,
   "SetTranslationHandleComponentVisibility(self, _arg1:bool,\n    _arg2:bool, _arg3:bool, _arg4:bool) -> None\nC++: virtual void SetTranslationHandleComponentVisibility(\n    bool _arg1, bool _arg2, bool _arg3, bool _arg4)\nSetTranslationHandleComponentVisibility(self, _arg:(bool, bool,\n    bool, bool)) -> None\nC++: virtual void SetTranslationHandleComponentVisibility(\n    const bool _arg[4])\n\nGet/Set the visibility of the individual handle axes The order of\nthe vector is: [X, Y, Z, ViewPlane] \"ViewPlane\" scale/translation\nallows transformations to take place along the active view plane.\n(ex. center translation point and ROI corner scale handles.\n"},
  {"GetTranslationHandleComponentVisibility", PyvtkMRMLMarkupsDisplayNode_GetTranslationHandleComponentVisibility, METH_VARARGS,
   "GetTranslationHandleComponentVisibility(self) -> (bool, bool,\n    bool, bool)\nC++: virtual bool *GetTranslationHandleComponentVisibility()\n\nGet/Set the visibility of the individual handle axes The order of\nthe vector is: [X, Y, Z, ViewPlane] \"ViewPlane\" scale/translation\nallows transformations to take place along the active view plane.\n(ex. center translation point and ROI corner scale handles.\n"},
  {"GetScalarDataSet", PyvtkMRMLMarkupsDisplayNode_GetScalarDataSet, METH_VARARGS,
   "GetScalarDataSet(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetScalarDataSet() override;\n\nGet data set containing the scalar arrays for this node type. For\nmarkups it is the curve poly data\n"},
  {"GetActiveScalarArray", PyvtkMRMLMarkupsDisplayNode_GetActiveScalarArray, METH_VARARGS,
   "GetActiveScalarArray(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetActiveScalarArray() override;\n\nReturn the current active scalar array (based on active scalar\nname and location)\n"},
  {"UpdateAssignedAttribute", PyvtkMRMLMarkupsDisplayNode_UpdateAssignedAttribute, METH_VARARGS,
   "UpdateAssignedAttribute(self) -> None\nC++: virtual void UpdateAssignedAttribute() override;\n\nUpdate scalar range and update markups pipeline when the active\nscalar array is changed\n"},
  {"SetScalarVisibility", PyvtkMRMLMarkupsDisplayNode_SetScalarVisibility, METH_VARARGS,
   "SetScalarVisibility(self, visibility:int) -> None\nC++: virtual void SetScalarVisibility(int visibility) override;\n\nSet the scalar visibility of the display node.\n\\sa ScalarVisibility, GetScalarVisibility(),\n    ScalarVisibilityOn(),\nScalarVisibilityOff()\n"},
  {"GetCanDisplayScaleHandles", PyvtkMRMLMarkupsDisplayNode_GetCanDisplayScaleHandles, METH_VARARGS,
   "GetCanDisplayScaleHandles(self) -> bool\nC++: virtual bool GetCanDisplayScaleHandles()\n\nGet flag indicating if the markups node can display scale handles\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsDisplayNode_Doc =
  "vtkMRMLMarkupsDisplayNode - MRML node to represent display properties\nfor markups\n\n"
  "Superclass: vtkMRMLDisplayNode\n\n"
  "vtkMRMLMarkupsDisplayNode nodes store display properties of markups,\n"
  "keeping elements that are applicable to all parts of the markups in\n"
  "this superclass\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsDisplayNode", // tp_name
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
  PyvtkMRMLMarkupsDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsDisplayNode_StaticNew()
{
  return vtkMRMLMarkupsDisplayNode::New();
}

PyObject *PyvtkMRMLMarkupsDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsDisplayNode_Type, PyvtkMRMLMarkupsDisplayNode_Methods,
    "vtkMRMLMarkupsDisplayNode",
 &PyvtkMRMLMarkupsDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLDisplayNode");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLMarkupsDisplayNode_ComponentType_Type);
  PyVTKEnum_Add(&PyvtkMRMLMarkupsDisplayNode_ComponentType_Type, "vtkMRMLMarkupsDisplayNode.ComponentType");

  o = (PyObject *)&PyvtkMRMLMarkupsDisplayNode_ComponentType_Type;
  if (PyDict_SetItemString(d, "ComponentType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLMarkupsDisplayNode_SnapModes_Type);
  PyVTKEnum_Add(&PyvtkMRMLMarkupsDisplayNode_SnapModes_Type, "vtkMRMLMarkupsDisplayNode.SnapModes");

  o = (PyObject *)&PyvtkMRMLMarkupsDisplayNode_SnapModes_Type;
  if (PyDict_SetItemString(d, "SnapModes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLMarkupsDisplayNode_GlyphShapes_Type);
  PyVTKEnum_Add(&PyvtkMRMLMarkupsDisplayNode_GlyphShapes_Type, "vtkMRMLMarkupsDisplayNode.GlyphShapes");

  o = (PyObject *)&PyvtkMRMLMarkupsDisplayNode_GlyphShapes_Type;
  if (PyDict_SetItemString(d, "GlyphShapes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLMarkupsDisplayNode_CurveLineSizeModes_Type);
  PyVTKEnum_Add(&PyvtkMRMLMarkupsDisplayNode_CurveLineSizeModes_Type, "vtkMRMLMarkupsDisplayNode.CurveLineSizeModes");

  o = (PyObject *)&PyvtkMRMLMarkupsDisplayNode_CurveLineSizeModes_Type;
  if (PyDict_SetItemString(d, "CurveLineSizeModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkMRMLMarkupsDisplayNode::ComponentType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "ComponentNone", vtkMRMLMarkupsDisplayNode::ComponentNone },
        { "ComponentControlPoint", vtkMRMLMarkupsDisplayNode::ComponentControlPoint },
        { "ComponentCenterPoint", vtkMRMLMarkupsDisplayNode::ComponentCenterPoint },
        { "ComponentLine", vtkMRMLMarkupsDisplayNode::ComponentLine },
        { "ComponentPlane", vtkMRMLMarkupsDisplayNode::ComponentPlane },
        { "ComponentRotationHandle", vtkMRMLMarkupsDisplayNode::ComponentRotationHandle },
        { "ComponentTranslationHandle", vtkMRMLMarkupsDisplayNode::ComponentTranslationHandle },
        { "ComponentScaleHandle", vtkMRMLMarkupsDisplayNode::ComponentScaleHandle },
        { "Component_Last", vtkMRMLMarkupsDisplayNode::Component_Last },
      };

    o = PyvtkMRMLMarkupsDisplayNode_ComponentType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLMarkupsDisplayNode::SnapModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "SnapModeUnconstrained", vtkMRMLMarkupsDisplayNode::SnapModeUnconstrained },
        { "SnapModeToVisibleSurface", vtkMRMLMarkupsDisplayNode::SnapModeToVisibleSurface },
        { "SnapMode_Last", vtkMRMLMarkupsDisplayNode::SnapMode_Last },
      };

    o = PyvtkMRMLMarkupsDisplayNode_SnapModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 16; c++)
  {
    typedef vtkMRMLMarkupsDisplayNode::GlyphShapes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[16] = {
        { "GlyphTypeInvalid", vtkMRMLMarkupsDisplayNode::GlyphTypeInvalid },
        { "StarBurst2D", vtkMRMLMarkupsDisplayNode::StarBurst2D },
        { "Cross2D", vtkMRMLMarkupsDisplayNode::Cross2D },
        { "CrossDot2D", vtkMRMLMarkupsDisplayNode::CrossDot2D },
        { "ThickCross2D", vtkMRMLMarkupsDisplayNode::ThickCross2D },
        { "Dash2D", vtkMRMLMarkupsDisplayNode::Dash2D },
        { "Sphere3D", vtkMRMLMarkupsDisplayNode::Sphere3D },
        { "Vertex2D", vtkMRMLMarkupsDisplayNode::Vertex2D },
        { "Circle2D", vtkMRMLMarkupsDisplayNode::Circle2D },
        { "Triangle2D", vtkMRMLMarkupsDisplayNode::Triangle2D },
        { "Square2D", vtkMRMLMarkupsDisplayNode::Square2D },
        { "Diamond2D", vtkMRMLMarkupsDisplayNode::Diamond2D },
        { "Arrow2D", vtkMRMLMarkupsDisplayNode::Arrow2D },
        { "ThickArrow2D", vtkMRMLMarkupsDisplayNode::ThickArrow2D },
        { "HookedArrow2D", vtkMRMLMarkupsDisplayNode::HookedArrow2D },
        { "GlyphType_Last", vtkMRMLMarkupsDisplayNode::GlyphType_Last },
      };

    o = PyvtkMRMLMarkupsDisplayNode_GlyphShapes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "ResetToDefaultsEvent", vtkMRMLMarkupsDisplayNode::ResetToDefaultsEvent },
        { "JumpToPointEvent", vtkMRMLMarkupsDisplayNode::JumpToPointEvent },
        { "ActionEvent", vtkMRMLMarkupsDisplayNode::ActionEvent },
        { "CustomActionEvent1", vtkMRMLMarkupsDisplayNode::CustomActionEvent1 },
        { "CustomActionEvent2", vtkMRMLMarkupsDisplayNode::CustomActionEvent2 },
        { "CustomActionEvent3", vtkMRMLMarkupsDisplayNode::CustomActionEvent3 },
        { "CustomActionEvent4", vtkMRMLMarkupsDisplayNode::CustomActionEvent4 },
        { "CustomActionEvent5", vtkMRMLMarkupsDisplayNode::CustomActionEvent5 },
        { "CustomActionEvent6", vtkMRMLMarkupsDisplayNode::CustomActionEvent6 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMRMLMarkupsDisplayNode::CurveLineSizeModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "UseLineThickness", vtkMRMLMarkupsDisplayNode::UseLineThickness },
        { "UseLineDiameter", vtkMRMLMarkupsDisplayNode::UseLineDiameter },
        { "CurveLineSizeMode_Last", vtkMRMLMarkupsDisplayNode::CurveLineSizeMode_Last },
      };

    o = PyvtkMRMLMarkupsDisplayNode_CurveLineSizeModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMarkupsDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

