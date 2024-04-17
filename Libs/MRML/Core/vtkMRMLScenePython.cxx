// python wrapper for vtkMRMLScene
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLScene.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLScene(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLScene_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLScene_StateType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLScene.StateType", // tp_name
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
PyObject *PyvtkMRMLScene_StateType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLScene_StateType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLScene_SceneEventType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLScene.SceneEventType", // tp_name
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
PyObject *PyvtkMRMLScene_SceneEventType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMRMLScene_SceneEventType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMRMLScene_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLScene::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLScene::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLScene *tempr = vtkMRMLScene::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLScene *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLScene::NewInstance());

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
PyvtkMRMLScene_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLScene::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLScene::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetURL(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetURL(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetURL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetURL() :
      op->vtkMRMLScene::GetURL());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetRootDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRootDirectory(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetRootDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetRootDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRootDirectory() :
      op->vtkMRMLScene::GetRootDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_Connect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Connect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLMessageCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkMRMLMessageCollection")))
  {
    int tempr = (ap.IsBound() ?
      op->Connect(temp0) :
      op->vtkMRMLScene::Connect(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_Import(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Import");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLMessageCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkMRMLMessageCollection")))
  {
    int tempr = (ap.IsBound() ?
      op->Import(temp0) :
      op->vtkMRMLScene::Import(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_Commit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Commit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  vtkMRMLMessageCollection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkMRMLMessageCollection")))
  {
    int tempr = (ap.IsBound() ?
      op->Commit(temp0, temp1) :
      op->vtkMRMLScene::Commit(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->Clear(temp0);
    }
    else
    {
      op->vtkMRMLScene::Clear(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_ResetNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetNodes();
    }
    else
    {
      op->vtkMRMLScene::ResetNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_CreateNodeByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeByClass(temp0) :
      op->vtkMRMLScene::CreateNodeByClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_RegisterNodeClass_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterNodeClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RegisterNodeClass(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScene::RegisterNodeClass(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLScene_RegisterNodeClass_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterNodeClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->RegisterNodeClass(temp0);
    }
    else
    {
      op->vtkMRMLScene::RegisterNodeClass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLScene_RegisterNodeClass(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLScene_RegisterNodeClass_s1(self, args);
    case 1:
      return PyvtkMRMLScene_RegisterNodeClass_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RegisterNodeClass");
  return nullptr;
}


static PyObject *
PyvtkMRMLScene_RegisterAbstractNodeClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAbstractNodeClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RegisterAbstractNodeClass(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScene::RegisterAbstractNodeClass(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetClassNameByTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassNameByTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetClassNameByTag(temp0) :
      op->vtkMRMLScene::GetClassNameByTag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetTagByClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTagByClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTagByClassName(temp0) :
      op->vtkMRMLScene::GetTagByClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetTypeDisplayNameByClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeDisplayNameByClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetTypeDisplayNameByClassName(temp0) :
      op->vtkMRMLScene::GetTypeDisplayNameByClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_AddDefaultNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDefaultNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->AddDefaultNode(temp0);
    }
    else
    {
      op->vtkMRMLScene::AddDefaultNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetDefaultNodeByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNodeByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetDefaultNodeByClass(temp0) :
      op->vtkMRMLScene::GetDefaultNodeByClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_RemoveAllDefaultNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDefaultNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllDefaultNodes();
    }
    else
    {
      op->vtkMRMLScene::RemoveAllDefaultNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetNodes() :
      op->vtkMRMLScene::GetNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_AddNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->AddNode(temp0) :
      op->vtkMRMLScene::AddNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_AddNewNodeByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNewNodeByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  std::string temp0;
  std::string temp1 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->AddNewNodeByClass(temp0, temp1) :
      op->vtkMRMLScene::AddNewNodeByClass(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_AddNewNodeByClassWithID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNewNodeByClassWithID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  std::string temp0;
  std::string temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->AddNewNodeByClassWithID(temp0, temp1, temp2) :
      op->vtkMRMLScene::AddNewNodeByClassWithID(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_CopyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CopyNode(temp0) :
      op->vtkMRMLScene::CopyNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_NodeAdded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NodeAdded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->NodeAdded(temp0);
    }
    else
    {
      op->vtkMRMLScene::NodeAdded(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLScene_NodeAdded_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NodeAdded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NodeAdded();
    }
    else
    {
      op->vtkMRMLScene::NodeAdded();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLScene_NodeAdded(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLScene_NodeAdded_s1(self, args);
    case 0:
      return PyvtkMRMLScene_NodeAdded_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "NodeAdded");
  return nullptr;
}


static PyObject *
PyvtkMRMLScene_RemoveNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveNode(temp0);
    }
    else
    {
      op->vtkMRMLScene::RemoveNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsNodePresent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNodePresent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    int tempr = (ap.IsBound() ?
      op->IsNodePresent(temp0) :
      op->vtkMRMLScene::IsNodePresent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkMRMLScene::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNextNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetNextNode() :
      op->vtkMRMLScene::GetNextNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNextNodeByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextNodeByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetNextNodeByClass(temp0) :
      op->vtkMRMLScene::GetNextNodeByClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNodesByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodesByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetNodesByName(temp0) :
      op->vtkMRMLScene::GetNodesByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetFirstNodeByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstNodeByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetFirstNodeByName(temp0) :
      op->vtkMRMLScene::GetFirstNodeByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetFirstNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(size2);
  int *temp2 = store2.Data();
  bool temp3 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetFirstNode(temp0, temp1, temp2, temp3) :
      op->vtkMRMLScene::GetFirstNode(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNodeByID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeByID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetNodeByID(temp0) :
      op->vtkMRMLScene::GetNodeByID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNodesByClassByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodesByClassByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetNodesByClassByName(temp0, temp1) :
      op->vtkMRMLScene::GetNodesByClassByName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkMRMLScene::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNthNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetNthNode(temp0) :
      op->vtkMRMLScene::GetNthNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNthNodeByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetNthNodeByClass(temp0, temp1) :
      op->vtkMRMLScene::GetNthNodeByClass(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetFirstNodeByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstNodeByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetFirstNodeByClass(temp0) :
      op->vtkMRMLScene::GetFirstNodeByClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNumberOfNodesByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodesByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodesByClass(temp0) :
      op->vtkMRMLScene::GetNumberOfNodesByClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNodesByClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodesByClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetNodesByClass(temp0) :
      op->vtkMRMLScene::GetNodesByClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetSingletonNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingletonNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetSingletonNode(temp0, temp1) :
      op->vtkMRMLScene::GetSingletonNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLScene_GetSingletonNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingletonNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetSingletonNode(temp0) :
      op->vtkMRMLScene::GetSingletonNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLScene_GetSingletonNode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLScene_GetSingletonNode_s1(self, args);
    case 1:
      return PyvtkMRMLScene_GetSingletonNode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSingletonNode");
  return nullptr;
}


static PyObject *
PyvtkMRMLScene_GetNumberOfRegisteredNodeClasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegisteredNodeClasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegisteredNodeClasses() :
      op->vtkMRMLScene::GetNumberOfRegisteredNodeClasses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNthRegisteredNodeClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthRegisteredNodeClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetNthRegisteredNodeClass(temp0) :
      op->vtkMRMLScene::GetNthRegisteredNodeClass(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsNodeClassRegistered(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNodeClassRegistered");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsNodeClassRegistered(temp0) :
      op->vtkMRMLScene::IsNodeClassRegistered(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNumberOfRegisteredAbstractNodeClasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegisteredAbstractNodeClasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegisteredAbstractNodeClasses() :
      op->vtkMRMLScene::GetNumberOfRegisteredAbstractNodeClasses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNthRegisteredAbstractNodeClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthRegisteredAbstractNodeClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthRegisteredAbstractNodeClassName(temp0) :
      op->vtkMRMLScene::GetNthRegisteredAbstractNodeClassName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNthRegisteredAbstractNodeTypeDisplayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthRegisteredAbstractNodeTypeDisplayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthRegisteredAbstractNodeTypeDisplayName(temp0) :
      op->vtkMRMLScene::GetNthRegisteredAbstractNodeTypeDisplayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GenerateUniqueName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUniqueName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GenerateUniqueName(temp0) :
      op->vtkMRMLScene::GenerateUniqueName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetUniqueNameByString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniqueNameByString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUniqueNameByString(temp0) :
      op->vtkMRMLScene::GetUniqueNameByString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_InsertAfterNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertAfterNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  vtkMRMLNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLNode"))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->InsertAfterNode(temp0, temp1) :
      op->vtkMRMLScene::InsertAfterNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_InsertBeforeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertBeforeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  vtkMRMLNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLNode"))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->InsertBeforeNode(temp0, temp1) :
      op->vtkMRMLScene::InsertBeforeNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetUndoOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetUndoOn();
    }
    else
    {
      op->vtkMRMLScene::SetUndoOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetUndoOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetUndoOff();
    }
    else
    {
      op->vtkMRMLScene::SetUndoOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetUndoFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndoFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUndoFlag() :
      op->vtkMRMLScene::GetUndoFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetUndoFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndoFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUndoFlag(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetUndoFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_Undo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Undo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Undo();
    }
    else
    {
      op->vtkMRMLScene::Undo();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_Redo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Redo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Redo();
    }
    else
    {
      op->vtkMRMLScene::Redo();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_ClearUndoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearUndoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearUndoStack();
    }
    else
    {
      op->vtkMRMLScene::ClearUndoStack();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_ClearRedoStack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearRedoStack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearRedoStack();
    }
    else
    {
      op->vtkMRMLScene::ClearRedoStack();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNumberOfUndoLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUndoLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfUndoLevels() :
      op->vtkMRMLScene::GetNumberOfUndoLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNumberOfRedoLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRedoLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRedoLevels() :
      op->vtkMRMLScene::GetNumberOfRedoLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SaveStateForUndo_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveStateForUndo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveStateForUndo();
    }
    else
    {
      op->vtkMRMLScene::SaveStateForUndo();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLScene_SaveStateForUndo_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveStateForUndo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->SaveStateForUndo(temp0);
    }
    else
    {
      op->vtkMRMLScene::SaveStateForUndo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLScene_SaveStateForUndo_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveStateForUndo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->SaveStateForUndo(temp0);
    }
    else
    {
      op->vtkMRMLScene::SaveStateForUndo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLScene_SaveStateForUndo_Methods[] = {
  {"SaveStateForUndo", PyvtkMRMLScene_SaveStateForUndo_s2, METH_VARARGS,
   "@V *vtkMRMLNode"},
  {"SaveStateForUndo", PyvtkMRMLScene_SaveStateForUndo_s3, METH_VARARGS,
   "@V *vtkCollection"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLScene_SaveStateForUndo(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLScene_SaveStateForUndo_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLScene_SaveStateForUndo_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SaveStateForUndo");
  return nullptr;
}


static PyObject *
PyvtkMRMLScene_AddReferencedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddReferencedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  vtkMRMLNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->AddReferencedNodeID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScene::AddReferencedNodeID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsNodeReferencingNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsNodeReferencingNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->IsNodeReferencingNodeID(temp0, temp1) :
      op->vtkMRMLScene::IsNodeReferencingNodeID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNumberOfNodeReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeReferences() :
      op->vtkMRMLScene::GetNumberOfNodeReferences());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNthReferencingNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthReferencingNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetNthReferencingNode(temp0) :
      op->vtkMRMLScene::GetNthReferencingNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetNthReferencedID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthReferencedID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthReferencedID(temp0) :
      op->vtkMRMLScene::GetNthReferencedID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_RemoveReferencedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveReferencedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  vtkMRMLNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveReferencedNodeID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScene::RemoveReferencedNodeID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_RemoveNodeReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNodeReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveNodeReferences(temp0);
    }
    else
    {
      op->vtkMRMLScene::RemoveNodeReferences(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_RemoveReferencesToNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveReferencesToNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveReferencesToNode(temp0);
    }
    else
    {
      op->vtkMRMLScene::RemoveReferencesToNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_UpdateNodeReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNodeReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkCollection")))
  {
    if (ap.IsBound())
    {
      op->UpdateNodeReferences(temp0);
    }
    else
    {
      op->vtkMRMLScene::UpdateNodeReferences(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_CopyNodeReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyNodeReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->CopyNodeReferences(temp0);
    }
    else
    {
      op->vtkMRMLScene::CopyNodeReferences(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_CopyNodeChangedIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyNodeChangedIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->CopyNodeChangedIDs(temp0);
    }
    else
    {
      op->vtkMRMLScene::CopyNodeChangedIDs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_UpdateNodeChangedIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNodeChangedIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateNodeChangedIDs();
    }
    else
    {
      op->vtkMRMLScene::UpdateNodeChangedIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_RemoveUnusedNodeReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnusedNodeReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveUnusedNodeReferences();
    }
    else
    {
      op->vtkMRMLScene::RemoveUnusedNodeReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsReservedID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsReservedID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsReservedID(temp0) :
      op->vtkMRMLScene::IsReservedID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_AddReservedID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddReservedID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddReservedID(temp0);
    }
    else
    {
      op->vtkMRMLScene::AddReservedID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_RemoveReservedIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveReservedIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveReservedIDs();
    }
    else
    {
      op->vtkMRMLScene::RemoveReservedIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetChangedID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChangedID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetChangedID(temp0) :
      op->vtkMRMLScene::GetChangedID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetReferencedNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferencedNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetReferencedNodes(temp0, temp1) :
      op->vtkMRMLScene::GetReferencedNodes(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetReferencedSubScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferencedSubScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  vtkMRMLScene *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->GetReferencedSubScene(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScene::GetReferencedSubScene(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsFilePathRelative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsFilePathRelative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsFilePathRelative(temp0) :
      op->vtkMRMLScene::IsFilePathRelative(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetLoadFromXMLString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoadFromXMLString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoadFromXMLString(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetLoadFromXMLString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetLoadFromXMLString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoadFromXMLString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLoadFromXMLString() :
      op->vtkMRMLScene::GetLoadFromXMLString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetSaveToXMLString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveToXMLString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveToXMLString(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetSaveToXMLString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetSaveToXMLString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveToXMLString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSaveToXMLString() :
      op->vtkMRMLScene::GetSaveToXMLString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetReadDataOnLoad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadDataOnLoad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadDataOnLoad(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetReadDataOnLoad(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetReadDataOnLoad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadDataOnLoad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadDataOnLoad() :
      op->vtkMRMLScene::GetReadDataOnLoad());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetSceneXMLString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSceneXMLString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSceneXMLString(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetSceneXMLString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetSceneXMLString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneXMLString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetSceneXMLString() :
      &op->vtkMRMLScene::GetSceneXMLString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetSubjectHierarchyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubjectHierarchyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSubjectHierarchyNode *tempr = (ap.IsBound() ?
      op->GetSubjectHierarchyNode() :
      op->vtkMRMLScene::GetSubjectHierarchyNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetCacheManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCacheManager *tempr = (ap.IsBound() ?
      op->GetCacheManager() :
      op->vtkMRMLScene::GetCacheManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetCacheManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkCacheManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCacheManager"))
  {
    if (ap.IsBound())
    {
      op->SetCacheManager(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetCacheManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetDataIOManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataIOManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataIOManager *tempr = (ap.IsBound() ?
      op->GetDataIOManager() :
      op->vtkMRMLScene::GetDataIOManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetDataIOManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataIOManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkDataIOManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataIOManager"))
  {
    if (ap.IsBound())
    {
      op->SetDataIOManager(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetDataIOManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetURIHandlerCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetURIHandlerCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetURIHandlerCollection() :
      op->vtkMRMLScene::GetURIHandlerCollection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetURIHandlerCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetURIHandlerCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->SetURIHandlerCollection(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetURIHandlerCollection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetUserTagTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserTagTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTagTable *tempr = (ap.IsBound() ?
      op->GetUserTagTable() :
      op->vtkMRMLScene::GetUserTagTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetUserTagTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserTagTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkTagTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTagTable"))
  {
    if (ap.IsBound())
    {
      op->SetUserTagTable(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetUserTagTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_FindURIHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindURIHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkURIHandler *tempr = (ap.IsBound() ?
      op->FindURIHandler(temp0) :
      op->vtkMRMLScene::FindURIHandler(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_FindURIHandlerByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindURIHandlerByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkURIHandler *tempr = (ap.IsBound() ?
      op->FindURIHandlerByName(temp0) :
      op->vtkMRMLScene::FindURIHandlerByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_AddURIHandler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddURIHandler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkURIHandler *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkURIHandler"))
  {
    if (ap.IsBound())
    {
      op->AddURIHandler(temp0);
    }
    else
    {
      op->vtkMRMLScene::AddURIHandler(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStates() :
      op->vtkMRMLScene::GetStates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsBatchProcessing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsBatchProcessing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsBatchProcessing() :
      op->vtkMRMLScene::IsBatchProcessing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsClosing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsClosing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsClosing() :
      op->vtkMRMLScene::IsClosing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsImporting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsImporting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsImporting() :
      op->vtkMRMLScene::IsImporting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsRestoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRestoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRestoring() :
      op->vtkMRMLScene::IsRestoring());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsUndoing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsUndoing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsUndoing() :
      op->vtkMRMLScene::IsUndoing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_IsRedoing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRedoing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRedoing() :
      op->vtkMRMLScene::IsRedoing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_StartState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  unsigned long temp0;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->StartState(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScene::StartState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_EndState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EndState(temp0);
    }
    else
    {
      op->vtkMRMLScene::EndState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_ProgressState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProgressState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  unsigned long temp0;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->ProgressState(temp0, temp1);
    }
    else
    {
      op->vtkMRMLScene::ProgressState(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetLastLoadedVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLoadedVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLastLoadedVersion() :
      op->vtkMRMLScene::GetLastLoadedVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetLastLoadedVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastLoadedVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastLoadedVersion(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetLastLoadedVersion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetLastLoadedExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLoadedExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLastLoadedExtensions() :
      op->vtkMRMLScene::GetLastLoadedExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetLastLoadedExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastLoadedExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastLoadedExtensions(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetLastLoadedExtensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVersion() :
      op->vtkMRMLScene::GetVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVersion(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetVersion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetExtensions() :
      op->vtkMRMLScene::GetExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtensions(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetExtensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_ParseVersion(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ParseVersion");

  const char *temp0 = nullptr;
  std::string temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    bool tempr = vtkMRMLScene::ParseVersion(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_CopyRegisteredNodesToScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyRegisteredNodesToScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->CopyRegisteredNodesToScene(temp0);
    }
    else
    {
      op->vtkMRMLScene::CopyRegisteredNodesToScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_CopySingletonNodesToScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopySingletonNodesToScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->CopySingletonNodesToScene(temp0);
    }
    else
    {
      op->vtkMRMLScene::CopySingletonNodesToScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_CopyDefaultNodesToScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDefaultNodesToScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->CopyDefaultNodesToScene(temp0);
    }
    else
    {
      op->vtkMRMLScene::CopyDefaultNodesToScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetModifiedSinceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiedSinceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkCollection")))
  {
    bool tempr = (ap.IsBound() ?
      op->GetModifiedSinceRead(temp0) :
      op->vtkMRMLScene::GetModifiedSinceRead(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetStoredTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStoredTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetStoredTime() :
      op->vtkMRMLScene::GetStoredTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetStorableNodesModifiedSinceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStorableNodesModifiedSinceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkCollection")))
  {
    bool tempr = (ap.IsBound() ?
      op->GetStorableNodesModifiedSinceRead(temp0) :
      op->vtkMRMLScene::GetStorableNodesModifiedSinceRead(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SetStorableNodesModifiedSinceRead_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStorableNodesModifiedSinceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetStorableNodesModifiedSinceRead();
    }
    else
    {
      op->vtkMRMLScene::SetStorableNodesModifiedSinceRead();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLScene_SetStorableNodesModifiedSinceRead_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetStorableNodesModifiedSinceRead");

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    vtkMRMLScene::SetStorableNodesModifiedSinceRead(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLScene_SetStorableNodesModifiedSinceRead(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLScene_SetStorableNodesModifiedSinceRead_s1(self, args);
    case 1:
      return PyvtkMRMLScene_SetStorableNodesModifiedSinceRead_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStorableNodesModifiedSinceRead");
  return nullptr;
}


static PyObject *
PyvtkMRMLScene_SetMaximumNumberOfSavedUndoStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSavedUndoStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSavedUndoStates(temp0);
    }
    else
    {
      op->vtkMRMLScene::SetMaximumNumberOfSavedUndoStates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_GetMaximumNumberOfSavedUndoStates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSavedUndoStates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSavedUndoStates() :
      op->vtkMRMLScene::GetMaximumNumberOfSavedUndoStates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_WriteToMRB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToMRB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkImageData")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    bool tempr = (ap.IsBound() ?
      op->WriteToMRB(temp0, temp1, temp2) :
      op->vtkMRMLScene::WriteToMRB(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_ReadFromMRB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromMRB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = false;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    bool tempr = (ap.IsBound() ?
      op->ReadFromMRB(temp0, temp1, temp2) :
      op->vtkMRMLScene::ReadFromMRB(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_UnpackSlicerDataBundle(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UnpackSlicerDataBundle");

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    std::string tempr = vtkMRMLScene::UnpackSlicerDataBundle(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SaveSceneToSlicerDataBundleDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveSceneToSlicerDataBundleDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  const char *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  vtkMRMLMessageCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkImageData")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkMRMLMessageCollection")))
  {
    bool tempr = (ap.IsBound() ?
      op->SaveSceneToSlicerDataBundleDirectory(temp0, temp1, temp2) :
      op->vtkMRMLScene::SaveSceneToSlicerDataBundleDirectory(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_SaveSceneScreenshot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveSceneScreenshot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLScene *op = static_cast<vtkMRMLScene *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SaveSceneScreenshot(temp0);
    }
    else
    {
      op->vtkMRMLScene::SaveSceneScreenshot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_PercentEncode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PercentEncode");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkMRMLScene::PercentEncode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLScene_CreateUniqueFileName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateUniqueFileName");

  std::string temp0;
  std::string temp1 = "";
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    std::string tempr = vtkMRMLScene::CreateUniqueFileName(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLScene_Methods[] = {
  {"IsTypeOf", PyvtkMRMLScene_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLScene_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLScene_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLScene\nC++: static vtkMRMLScene *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLScene_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLScene\nC++: vtkMRMLScene *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLScene_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLScene_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetURL", PyvtkMRMLScene_SetURL, METH_VARARGS,
   "SetURL(self, url:str) -> None\nC++: void SetURL(const char *url)\n\nSet URL (file name) of the scene\n"},
  {"GetURL", PyvtkMRMLScene_GetURL, METH_VARARGS,
   "GetURL(self) -> str\nC++: const char *GetURL()\n\nGet URL (file name) of the scene\n"},
  {"SetRootDirectory", PyvtkMRMLScene_SetRootDirectory, METH_VARARGS,
   "SetRootDirectory(self, dir:str) -> None\nC++: void SetRootDirectory(const char *dir)\n\nSet Root directory, where URL is pointing\n"},
  {"GetRootDirectory", PyvtkMRMLScene_GetRootDirectory, METH_VARARGS,
   "GetRootDirectory(self) -> str\nC++: const char *GetRootDirectory()\n\nGet Root directory, where URL is pointing\n"},
  {"Connect", PyvtkMRMLScene_Connect, METH_VARARGS,
   "Connect(self, userMessages:vtkMRMLMessageCollection=...) -> int\nC++: int Connect(vtkMRMLMessageCollection *userMessages=nullptr)\n\nCreate new scene from URL\nIf userMessages is not nullptr then the method may add messages\nto it about issues encountered during the operation. Returns\nnonzero on success.\n"},
  {"Import", PyvtkMRMLScene_Import, METH_VARARGS,
   "Import(self, userMessages:vtkMRMLMessageCollection=...) -> int\nC++: int Import(vtkMRMLMessageCollection *userMessages=nullptr)\n\nAdd the scene into the existing scene (no clear) from URL file\nor from \\sa SceneXMLString XML string.\n\nReturns nonzero on success.\n\n\\sa SetURL(), GetLoadFromXMLString(), SetSceneXMLString()\nIf userMessages is not nullptr then the method may add messages\nto it about issues encountered during the operation.\n"},
  {"Commit", PyvtkMRMLScene_Commit, METH_VARARGS,
   "Commit(self, url:str=...,\n    userMessages:vtkMRMLMessageCollection=...) -> int\nC++: int Commit(const char *url=nullptr,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nSave scene into URL If userMessages is not nullptr then the\nmethod may add messages to it about issues encountered during the\noperation. Returns nonzero on success\n"},
  {"Clear", PyvtkMRMLScene_Clear, METH_VARARGS,
   "Clear(self, removeSingletons:int=0) -> None\nC++: void Clear(int removeSingletons=0)\n\nRemove nodes and clear undo/redo stacks.\n\\param removeSingletons If set to true then it removes\nall singleton nodes (interaction, color, view nodes etc.) from\nthe scene. If it is set to false then it just resets singleton\nnodes to their default state.\n"},
  {"ResetNodes", PyvtkMRMLScene_ResetNodes, METH_VARARGS,
   "ResetNodes(self) -> None\nC++: void ResetNodes()\n\nReset all nodes to their constructor's state\n"},
  {"CreateNodeByClass", PyvtkMRMLScene_CreateNodeByClass, METH_VARARGS,
   "CreateNodeByClass(self, className:str) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeByClass(const char *className)\n\nCreate node with a given class\n\nResult of this method may be different than creating a node\ndirectly (using its own constructor), as this method ensures the\nnew node properties are initialized based on the associated\ndefault node. Default node may be specified in the scene, using\nAddDefaultNode() method.\n\note A default node is associated with an other node if it belongs\nto the class hierarchy of that node.\n\n\\warning This method does NOT add the new node to the scene.\nTo create a new node and add it to the scene in one step, use\nAddNewNodeByClass().\n\n\\sa AddDefaultNode(), AddNewNodeByClass()\n"},
  {"RegisterNodeClass", PyvtkMRMLScene_RegisterNodeClass, METH_VARARGS,
   "RegisterNodeClass(self, node:vtkMRMLNode, tagName:str) -> None\nC++: void RegisterNodeClass(vtkMRMLNode *node,\n    const char *tagName)\nRegisterNodeClass(self, node:vtkMRMLNode) -> None\nC++: void RegisterNodeClass(vtkMRMLNode *node)\n\nRegister a node class to the scene so that the scene can later\ncreate the same node type from a tag or a class name.\n\nThis is mainly used during scene loading. The XML element names\nare used to instantiate the nodes.\n\nnode is an instance of the class to instantiate when\nCreateNodeByClass() is called with a corresponding className\nretrieved using GetClassNameByTag().tagName can be 0 or an XML\ntag a custom tagName. If tagName is 0 (default), the node\nGetNodeTagName() is used. Otherwise, tagName is used.\n\nThe signature with tagName != 0 is useful to add support for\nscene backward compatibility. Calls with an obsolete tag should\nbe wrapped with: \\#if MRML_APPLICATION_SUPPORT_VERSION <\n0x0X0Y0Zand \\#endif where X is the major version of Slicer scene\nto support, Y the minor and Z the patch version.\n\n\\sa CreateNodeByClass(), GetClassNameByTag()\n"},
  {"RegisterAbstractNodeClass", PyvtkMRMLScene_RegisterAbstractNodeClass, METH_VARARGS,
   "RegisterAbstractNodeClass(self, className:str,\n    typeDisplayName:str) -> None\nC++: void RegisterAbstractNodeClass(std::string className,\n    std::string typeDisplayName)\n\nRegister abstract node type display name.\n\nThis is used by GetTypeDisplayNameByClassName for an abstract\nclass (Volume, Markups, etc), for example in a node selector.\nSince abstract base classes cannot be instantiated,\nRegisterNodeClass cannot be used for this purpose.\n\n\\sa RegisterNodeClass(vtkMRMLNode* node),\n    GetTypeDisplayNameByClassName\n"},
  {"GetClassNameByTag", PyvtkMRMLScene_GetClassNameByTag, METH_VARARGS,
   "GetClassNameByTag(self, tagName:str) -> str\nC++: const char *GetClassNameByTag(const char *tagName)\n\nAdd a path to the list.\n"},
  {"GetTagByClassName", PyvtkMRMLScene_GetTagByClassName, METH_VARARGS,
   "GetTagByClassName(self, className:str) -> str\nC++: const char *GetTagByClassName(const char *className)\n\nAdd a path to the list.\n"},
  {"GetTypeDisplayNameByClassName", PyvtkMRMLScene_GetTypeDisplayNameByClassName, METH_VARARGS,
   "GetTypeDisplayNameByClassName(self, className:str) -> str\nC++: std::string GetTypeDisplayNameByClassName(\n    std::string className)\n\nGet type display name which is shown in the GUI.\n"},
  {"AddDefaultNode", PyvtkMRMLScene_AddDefaultNode, METH_VARARGS,
   "AddDefaultNode(self, node:vtkMRMLNode) -> None\nC++: void AddDefaultNode(vtkMRMLNode *node)\n\nSet a default node for node creation and reset. One default node\ncan be specified for each node class. It is useful for overriding\ndefault values that are set in a node's constructor.\n"},
  {"GetDefaultNodeByClass", PyvtkMRMLScene_GetDefaultNodeByClass, METH_VARARGS,
   "GetDefaultNodeByClass(self, className:str) -> vtkMRMLNode\nC++: vtkMRMLNode *GetDefaultNodeByClass(const char *className)\n\n"},
  {"RemoveAllDefaultNodes", PyvtkMRMLScene_RemoveAllDefaultNodes, METH_VARARGS,
   "RemoveAllDefaultNodes(self) -> None\nC++: void RemoveAllDefaultNodes()\n\nDeletes all default node values from the scene.\n"},
  {"GetNodes", PyvtkMRMLScene_GetNodes, METH_VARARGS,
   "GetNodes(self) -> vtkCollection\nC++: vtkCollection *GetNodes()\n\nReturn collection of nodes\n"},
  {"AddNode", PyvtkMRMLScene_AddNode, METH_VARARGS,
   "AddNode(self, nodeToAdd:vtkMRMLNode) -> vtkMRMLNode\nC++: vtkMRMLNode *AddNode(vtkMRMLNode *nodeToAdd)\n\nAdd a node to the scene and send\n    vtkMRMLScene::NodeAboutToBeAddedEvent,\nvtkMRMLScene::NodeAddedEvent and vtkMRMLScene::SceneModified\nevents.\n\nA unique ID (e.g. \"vtkMRMLModeNode1\", \"vtkMRMLScalarVolumeNode4\")\nis generated and set to the node. If the node has no name (i.e.\nvtkMRMLNode::GetName() == 0), a unique name is given to the node\n(e.g. \"Model\" if it's the first model node added into the scene,\n\"Model_1\" if it's the second, etc. If node is a singleton, and a\nnode of the same class with the same singleton tag already exists\nin the scene, nodeToAdd is NOT added but its properties are\ncopied (c.f. vtkMRMLNode::CopyWithScene()) into the already\nexisting singleton node. That node is then returned.\n"},
  {"AddNewNodeByClass", PyvtkMRMLScene_AddNewNodeByClass, METH_VARARGS,
   "AddNewNodeByClass(self, className:str, nodeBaseName:str=...)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *AddNewNodeByClass(std::string className,\n    std::string nodeBaseName=\"\")\n\nInstantiate and add a node to the scene.\n\nThis is the preferred way to create and add a new node to the\nscene. It ensures that the new node properties are initialized\nconsidering its default nodes.\n\nThe method calls CreateNodeByClass(), vtkMRMLNode::SetName() and\nAddNode().\n\note Instead of calling SetName() after creating the node, prefer\npassing nodeBaseName, indeed the method AddNode() ensures that\nthe final node name is unique in the scene by appending a suffix\nif needed.\n\n\\sa CreateNodeByClass(), vtkMRMLNode::SetName(), AddNode()\n\\sa AddDefaultNode()\n\\sa GenerateUniqueName()\n"},
  {"AddNewNodeByClassWithID", PyvtkMRMLScene_AddNewNodeByClassWithID, METH_VARARGS,
   "AddNewNodeByClassWithID(self, className:str, nodeBaseName:str,\n    nodeID:str) -> vtkMRMLNode\nC++: vtkMRMLNode *AddNewNodeByClassWithID(std::string className,\n    std::string nodeBaseName, std::string nodeID)\n\nInstantiates and adds a new node to the scene with the specified\n    ID\n\nIf the node is reserved, or another node already exists with the\nsame ID, then NULL will be returned This should only be used if\nit is important that the node is added to the scene with a\nspecific ID\n\nThe method calls CreateNodeByClass(), vtkMRMLNode::SetName(),\nvtkMRMLNode::SetID(), and AddNode().\n\\sa AddNewNodeByClass(), CreateNodeByClass(),\n    vtkMRMLNode::SetName(), vtkMRMLNode::SetID(), AddNode()\n"},
  {"CopyNode", PyvtkMRMLScene_CopyNode, METH_VARARGS,
   "CopyNode(self, n:vtkMRMLNode) -> vtkMRMLNode\nC++: vtkMRMLNode *CopyNode(vtkMRMLNode *n)\n\nAdd a copy of a node to the scene.\n"},
  {"NodeAdded", PyvtkMRMLScene_NodeAdded, METH_VARARGS,
   "NodeAdded(self, n:vtkMRMLNode) -> None\nC++: void NodeAdded(vtkMRMLNode *n)\nNodeAdded(self) -> None\nC++: void NodeAdded()\n\nInvoke a vtkMRMLScene::NodeAddedEvent.\n\nThis function is used after adding a bunch of nodes with\nAddNodeNoNotify()\n"},
  {"RemoveNode", PyvtkMRMLScene_RemoveNode, METH_VARARGS,
   "RemoveNode(self, n:vtkMRMLNode) -> None\nC++: void RemoveNode(vtkMRMLNode *n)\n\nRemove a path from the list.\n"},
  {"IsNodePresent", PyvtkMRMLScene_IsNodePresent, METH_VARARGS,
   "IsNodePresent(self, n:vtkMRMLNode) -> int\nC++: int IsNodePresent(vtkMRMLNode *n)\n\nDetermine whether a particular node is present.\n\nReturns its position in the list.\n"},
  {"InitTraversal", PyvtkMRMLScene_InitTraversal, METH_VARARGS,
   "InitTraversal(self) -> None\nC++: void InitTraversal()\n\n\\deprecated This method is deprecated, kept for backward\ncompatibility but it will be removed in the future. The problem\nis that it changes the node collection's internal iterator, which\nmay cause unintended side effects in caller functions that also\nuse the node collection's internal iterator. Use other methods\ninstead (GetNodes(), GetNodesByClass(), etc.) or traverse\ncollection returned by GetNodes() using a collection iterator.\n"},
  {"GetNextNode", PyvtkMRMLScene_GetNextNode, METH_VARARGS,
   "GetNextNode(self) -> vtkMRMLNode\nC++: vtkMRMLNode *GetNextNode()\n\n\\deprecated This method is deprecated, kept for backward\ncompatibility but it will be removed in the future. The problem\nis that it changes the node collection's internal iterator, which\nmay cause unintended side effects in caller functions that also\nuse the node collection's internal iterator. Use other methods\ninstead (GetNodes(), GetNodesByClass(), etc.) or traverse\ncollection returned by GetNodes() using a collection iterator.\n"},
  {"GetNextNodeByClass", PyvtkMRMLScene_GetNextNodeByClass, METH_VARARGS,
   "GetNextNodeByClass(self, className:str) -> vtkMRMLNode\nC++: vtkMRMLNode *GetNextNodeByClass(const char *className)\n\n\\deprecated This method is deprecated, kept for backward\ncompatibility but it will be removed in the future. The problem\nis that it changes the node collection's internal iterator, which\nmay cause unintended side effects in caller functions that also\nuse the node collection's internal iterator. Use other methods\ninstead (GetNodes(), GetNodesByClass(), etc.) or traverse\ncollection returned by GetNodes() using a collection iterator.\n"},
  {"GetNodesByName", PyvtkMRMLScene_GetNodesByName, METH_VARARGS,
   "GetNodesByName(self, name:str) -> vtkCollection\nC++: vtkCollection *GetNodesByName(const char *name)\n\nGet nodes having the specified name\n"},
  {"GetFirstNodeByName", PyvtkMRMLScene_GetFirstNodeByName, METH_VARARGS,
   "GetFirstNodeByName(self, name:str) -> vtkMRMLNode\nC++: vtkMRMLNode *GetFirstNodeByName(const char *name)\n\n"},
  {"GetFirstNode", PyvtkMRMLScene_GetFirstNode, METH_VARARGS,
   "GetFirstNode(self, byName:str=..., byClass:str=...,\n    byHideFromEditors:(int, ...)=..., exactNameMatch:bool=True)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *GetFirstNode(const char *byName=nullptr,\n    const char *byClass=nullptr,\n    const int *byHideFromEditors=nullptr,\n    bool exactNameMatch=true)\n\nReturn the first node in the scene that matches the filtering\ncriteria if specified.\n\nBy default, byName will be compared using an exact match.\nIfexactNameMatch is set to false, the node will be returned if\nits name starts with byName. If the pointer byHideFromEditors is\nnot set, the function will return both the nodes hidden from\neditors as well as the nodes visible in editors. If the\npointerbyHideFromEditors is set, the function will only return\nthe nodes that are either hidden from editors or the nodes that\nare visible in editors.\n"},
  {"GetNodeByID", PyvtkMRMLScene_GetNodeByID, METH_VARARGS,
   "GetNodeByID(self, name:str) -> vtkMRMLNode\nC++: vtkMRMLNode *GetNodeByID(std::string name)\n\n"},
  {"GetNodesByClassByName", PyvtkMRMLScene_GetNodesByClassByName, METH_VARARGS,
   "GetNodesByClassByName(self, className:str, name:str)\n    -> vtkCollection\nC++: vtkCollection *GetNodesByClassByName(const char *className,\n    const char *name)\n\nGet nodes of a specified class having the specified name.\n\\warning You are responsible for deleting the collection.\n"},
  {"GetNumberOfNodes", PyvtkMRMLScene_GetNumberOfNodes, METH_VARARGS,
   "GetNumberOfNodes(self) -> int\nC++: int GetNumberOfNodes()\n\nGet number of nodes in the scene\n"},
  {"GetNthNode", PyvtkMRMLScene_GetNthNode, METH_VARARGS,
   "GetNthNode(self, n:int) -> vtkMRMLNode\nC++: vtkMRMLNode *GetNthNode(int n)\n\nGet n-th node in the scene\n"},
  {"GetNthNodeByClass", PyvtkMRMLScene_GetNthNodeByClass, METH_VARARGS,
   "GetNthNodeByClass(self, n:int, className:str) -> vtkMRMLNode\nC++: vtkMRMLNode *GetNthNodeByClass(int n, const char *className)\n\nGet n-th node of a specified class in the scene\n"},
  {"GetFirstNodeByClass", PyvtkMRMLScene_GetFirstNodeByClass, METH_VARARGS,
   "GetFirstNodeByClass(self, className:str) -> vtkMRMLNode\nC++: vtkMRMLNode *GetFirstNodeByClass(const char *className)\n\nConvenience function for getting 0-th node of a specified class\nin the scene\n"},
  {"GetNumberOfNodesByClass", PyvtkMRMLScene_GetNumberOfNodesByClass, METH_VARARGS,
   "GetNumberOfNodesByClass(self, className:str) -> int\nC++: int GetNumberOfNodesByClass(const char *className)\n\nGet number of nodes of a specified class in the scene\n"},
  {"GetNodesByClass", PyvtkMRMLScene_GetNodesByClass, METH_VARARGS,
   "GetNodesByClass(self, className:str) -> vtkCollection\nC++: vtkCollection *GetNodesByClass(const char *className)\n\n\\warning You are responsible for deleting the returned\n    collection.\n"},
  {"GetSingletonNode", PyvtkMRMLScene_GetSingletonNode, METH_VARARGS,
   "GetSingletonNode(self, singletonTag:str, className:str)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *GetSingletonNode(const char *singletonTag,\n    const char *className)\nGetSingletonNode(self, n:vtkMRMLNode) -> vtkMRMLNode\nC++: vtkMRMLNode *GetSingletonNode(vtkMRMLNode *n)\n\nSearch and return the singleton of type className with\n    asingletonTag tag.\n\nReturn 0 if such node can't be found in the scene.\n"},
  {"GetNumberOfRegisteredNodeClasses", PyvtkMRMLScene_GetNumberOfRegisteredNodeClasses, METH_VARARGS,
   "GetNumberOfRegisteredNodeClasses(self) -> int\nC++: int GetNumberOfRegisteredNodeClasses()\n\nGet the number of registered node classes (is probably greater\nthan the current number of nodes instantiated in the scene)\n"},
  {"GetNthRegisteredNodeClass", PyvtkMRMLScene_GetNthRegisteredNodeClass, METH_VARARGS,
   "GetNthRegisteredNodeClass(self, n:int) -> vtkMRMLNode\nC++: vtkMRMLNode *GetNthRegisteredNodeClass(int n)\n\nGet the nth registered node class, returns nullptr if n is out of\nthe range 0-GetNumberOfRegisteredNodeClasses Useful for iterating\nthrough nodes to find all the possible storage nodes.\n"},
  {"IsNodeClassRegistered", PyvtkMRMLScene_IsNodeClassRegistered, METH_VARARGS,
   "IsNodeClassRegistered(self, className:str) -> bool\nC++: bool IsNodeClassRegistered(const std::string &className)\n\nReturn True if className is a registered node.\n\n\\sa RegisterNodeClass(vtkMRMLNode* node)\n"},
  {"GetNumberOfRegisteredAbstractNodeClasses", PyvtkMRMLScene_GetNumberOfRegisteredAbstractNodeClasses, METH_VARARGS,
   "GetNumberOfRegisteredAbstractNodeClasses(self) -> int\nC++: int GetNumberOfRegisteredAbstractNodeClasses()\n\nGet the number of registered abstract node classes\n"},
  {"GetNthRegisteredAbstractNodeClassName", PyvtkMRMLScene_GetNthRegisteredAbstractNodeClassName, METH_VARARGS,
   "GetNthRegisteredAbstractNodeClassName(self, n:int) -> str\nC++: std::string GetNthRegisteredAbstractNodeClassName(int n)\n\nGet the nth registered abstract node class name. Returns empty\nstring if out of range.\n"},
  {"GetNthRegisteredAbstractNodeTypeDisplayName", PyvtkMRMLScene_GetNthRegisteredAbstractNodeTypeDisplayName, METH_VARARGS,
   "GetNthRegisteredAbstractNodeTypeDisplayName(self, n:int) -> str\nC++: std::string GetNthRegisteredAbstractNodeTypeDisplayName(\n    int n)\n\nGet the nth registered abstract node type display name. Returns\nempty string if out of range.\n"},
  {"GenerateUniqueName", PyvtkMRMLScene_GenerateUniqueName, METH_VARARGS,
   "GenerateUniqueName(self, baseName:str) -> str\nC++: std::string GenerateUniqueName(const std::string &baseName)\n\nGenerate a node name that is unique in the scene.\nCalling this function successively with the same baseName returns\na different name: e.g. baseName1, baseName2, baseName3\n"},
  {"GetUniqueNameByString", PyvtkMRMLScene_GetUniqueNameByString, METH_VARARGS,
   "GetUniqueNameByString(self, baseName:str) -> str\nC++: const char *GetUniqueNameByString(const char *baseName)\n\n\\deprecated GetUniqueNameByString Obsolete utility function that\nprovides an unsafe API for GenerateUniqueName()\n\\sa GenerateUniqueName, GenerateUniqueID\n"},
  {"InsertAfterNode", PyvtkMRMLScene_InsertAfterNode, METH_VARARGS,
   "InsertAfterNode(self, item:vtkMRMLNode, newItem:vtkMRMLNode)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *InsertAfterNode(vtkMRMLNode *item,\n    vtkMRMLNode *newItem)\n\ninsert a node in the scene after a specified node\n"},
  {"InsertBeforeNode", PyvtkMRMLScene_InsertBeforeNode, METH_VARARGS,
   "InsertBeforeNode(self, item:vtkMRMLNode, newItem:vtkMRMLNode)\n    -> vtkMRMLNode\nC++: vtkMRMLNode *InsertBeforeNode(vtkMRMLNode *item,\n    vtkMRMLNode *newItem)\n\ninsert a node in the scene before a specified node\n"},
  {"SetUndoOn", PyvtkMRMLScene_SetUndoOn, METH_VARARGS,
   "SetUndoOn(self) -> None\nC++: void SetUndoOn()\n\nSet undo on/off\n"},
  {"SetUndoOff", PyvtkMRMLScene_SetUndoOff, METH_VARARGS,
   "SetUndoOff(self) -> None\nC++: void SetUndoOff()\n\n"},
  {"GetUndoFlag", PyvtkMRMLScene_GetUndoFlag, METH_VARARGS,
   "GetUndoFlag(self) -> bool\nC++: bool GetUndoFlag()\n\n"},
  {"SetUndoFlag", PyvtkMRMLScene_SetUndoFlag, METH_VARARGS,
   "SetUndoFlag(self, flag:bool) -> None\nC++: void SetUndoFlag(bool flag)\n\n"},
  {"Undo", PyvtkMRMLScene_Undo, METH_VARARGS,
   "Undo(self) -> None\nC++: void Undo()\n\nundo, set the scene to previous state\n"},
  {"Redo", PyvtkMRMLScene_Redo, METH_VARARGS,
   "Redo(self) -> None\nC++: void Redo()\n\nredo, set the scene to previously undone\n"},
  {"ClearUndoStack", PyvtkMRMLScene_ClearUndoStack, METH_VARARGS,
   "ClearUndoStack(self) -> None\nC++: void ClearUndoStack()\n\nclear Undo stack, delete undo history\n"},
  {"ClearRedoStack", PyvtkMRMLScene_ClearRedoStack, METH_VARARGS,
   "ClearRedoStack(self) -> None\nC++: void ClearRedoStack()\n\nclear Redo stack, delete redo history\n"},
  {"GetNumberOfUndoLevels", PyvtkMRMLScene_GetNumberOfUndoLevels, METH_VARARGS,
   "GetNumberOfUndoLevels(self) -> int\nC++: int GetNumberOfUndoLevels()\n\nreturns number of undo steps in the history buffer\n"},
  {"GetNumberOfRedoLevels", PyvtkMRMLScene_GetNumberOfRedoLevels, METH_VARARGS,
   "GetNumberOfRedoLevels(self) -> int\nC++: int GetNumberOfRedoLevels()\n\nreturns number of redo steps in the history buffer\n"},
  {"SaveStateForUndo", PyvtkMRMLScene_SaveStateForUndo, METH_VARARGS,
   "SaveStateForUndo(self) -> None\nC++: void SaveStateForUndo()\nSaveStateForUndo(self, node:vtkMRMLNode) -> None\nC++: void SaveStateForUndo(vtkMRMLNode *node)\nSaveStateForUndo(self, nodes:vtkCollection) -> None\nC++: void SaveStateForUndo(vtkCollection *nodes)\n\nSave current state in the undo buffer\n"},
  {"AddReferencedNodeID", PyvtkMRMLScene_AddReferencedNodeID, METH_VARARGS,
   "AddReferencedNodeID(self, id:str, refrencingNode:vtkMRMLNode)\n    -> None\nC++: void AddReferencedNodeID(const char *id,\n    vtkMRMLNode *refrencingNode)\n\nThe Scene maintains a map (NodeReferences) to keep track of the\nrelationship between node IDs and the nodes referencing those\nIDs.  Each node can use the call AddReferencedNodeID() to tell\nthe scene that is 'has an interest' in the given ID so that the\nscene can notify that node when the ID has been remapped.   It\ndoes this notification through the UpdateNodeReferences() call.\n"},
  {"IsNodeReferencingNodeID", PyvtkMRMLScene_IsNodeReferencingNodeID, METH_VARARGS,
   "IsNodeReferencingNodeID(self, referencingNode:vtkMRMLNode, id:str)\n     -> bool\nC++: bool IsNodeReferencingNodeID(vtkMRMLNode *referencingNode,\n    const char *id)\n\n"},
  {"GetNumberOfNodeReferences", PyvtkMRMLScene_GetNumberOfNodeReferences, METH_VARARGS,
   "GetNumberOfNodeReferences(self) -> int\nC++: int GetNumberOfNodeReferences()\n\nGet the total number of node references (number of\n    ReferencedID-ReferencingNode pairs).\n\n\\warning Only for testing and debugging.\n"},
  {"GetNthReferencingNode", PyvtkMRMLScene_GetNthReferencingNode, METH_VARARGS,
   "GetNthReferencingNode(self, n:int) -> vtkMRMLNode\nC++: vtkMRMLNode *GetNthReferencingNode(int n)\n\nGet the ReferencingNode component of the n-th\nReferencedID-ReferencingNode pair. Only for testing and\ndebugging.\n"},
  {"GetNthReferencedID", PyvtkMRMLScene_GetNthReferencedID, METH_VARARGS,
   "GetNthReferencedID(self, n:int) -> str\nC++: const char *GetNthReferencedID(int n)\n\nGet the ReferencedID component of the n-th\nReferencedID-ReferencingNode pair. Only for testing and\ndebugging.\n"},
  {"RemoveReferencedNodeID", PyvtkMRMLScene_RemoveReferencedNodeID, METH_VARARGS,
   "RemoveReferencedNodeID(self, id:str, refrencingNode:vtkMRMLNode)\n    -> None\nC++: void RemoveReferencedNodeID(const char *id,\n    vtkMRMLNode *refrencingNode)\n\n"},
  {"RemoveNodeReferences", PyvtkMRMLScene_RemoveNodeReferences, METH_VARARGS,
   "RemoveNodeReferences(self, node:vtkMRMLNode) -> None\nC++: void RemoveNodeReferences(vtkMRMLNode *node)\n\n"},
  {"RemoveReferencesToNode", PyvtkMRMLScene_RemoveReferencesToNode, METH_VARARGS,
   "RemoveReferencesToNode(self, node:vtkMRMLNode) -> None\nC++: void RemoveReferencesToNode(vtkMRMLNode *node)\n\n"},
  {"UpdateNodeReferences", PyvtkMRMLScene_UpdateNodeReferences, METH_VARARGS,
   "UpdateNodeReferences(self, checkNodes:vtkCollection=...) -> None\nC++: void UpdateNodeReferences(vtkCollection *checkNodes=nullptr)\n\nNotify nodes about node ID changes.\n\nvtkMRMLNode::UpdateReferenceID() is called for all the nodes that\nrefer to a node with a changed ID.\n\nIf checkNodes is not nullptr, then only those nodes are notified\nthat are part of the checkNodes collection.\n"},
  {"CopyNodeReferences", PyvtkMRMLScene_CopyNodeReferences, METH_VARARGS,
   "CopyNodeReferences(self, scene:vtkMRMLScene) -> None\nC++: void CopyNodeReferences(vtkMRMLScene *scene)\n\n"},
  {"CopyNodeChangedIDs", PyvtkMRMLScene_CopyNodeChangedIDs, METH_VARARGS,
   "CopyNodeChangedIDs(self, scene:vtkMRMLScene) -> None\nC++: void CopyNodeChangedIDs(vtkMRMLScene *scene)\n\n"},
  {"UpdateNodeChangedIDs", PyvtkMRMLScene_UpdateNodeChangedIDs, METH_VARARGS,
   "UpdateNodeChangedIDs(self) -> None\nC++: void UpdateNodeChangedIDs()\n\nChange node IDs based on the ReferencedIDChanges list.\n"},
  {"RemoveUnusedNodeReferences", PyvtkMRMLScene_RemoveUnusedNodeReferences, METH_VARARGS,
   "RemoveUnusedNodeReferences(self) -> None\nC++: void RemoveUnusedNodeReferences()\n\n"},
  {"IsReservedID", PyvtkMRMLScene_IsReservedID, METH_VARARGS,
   "IsReservedID(self, id:str) -> bool\nC++: bool IsReservedID(const std::string &id)\n\n"},
  {"AddReservedID", PyvtkMRMLScene_AddReservedID, METH_VARARGS,
   "AddReservedID(self, id:str) -> None\nC++: void AddReservedID(const char *id)\n\n"},
  {"RemoveReservedIDs", PyvtkMRMLScene_RemoveReservedIDs, METH_VARARGS,
   "RemoveReservedIDs(self) -> None\nC++: void RemoveReservedIDs()\n\n"},
  {"GetChangedID", PyvtkMRMLScene_GetChangedID, METH_VARARGS,
   "GetChangedID(self, id:str) -> str\nC++: const char *GetChangedID(const char *id)\n\nget the new id of the node that is different from one in the mrml\nfile or nullptr if id has not changed\n"},
  {"GetReferencedNodes", PyvtkMRMLScene_GetReferencedNodes, METH_VARARGS,
   "GetReferencedNodes(self, node:vtkMRMLNode, recursive:bool=True)\n    -> vtkCollection\nC++: vtkCollection *GetReferencedNodes(vtkMRMLNode *node,\n    bool recursive=true)\n\nReturn collection of all nodes referenced directly or indirectly\n    bynode.\n\n\\param recursive All referenced nodes recursively if true,\n  only directly referenced nodes if false. Default is true.\n\nThe node itself is in first place in the collection. No duplicate\nin the list. For a node to be referenced by another node, the\nlatter must call AddReferencedNodeID().\n\n\\warning You are responsible for deleting the returned\n    collection.\n\n\\sa GetReferencedSubScene()\n"},
  {"GetReferencedSubScene", PyvtkMRMLScene_GetReferencedSubScene, METH_VARARGS,
   "GetReferencedSubScene(self, node:vtkMRMLNode,\n    newScene:vtkMRMLScene) -> None\nC++: void GetReferencedSubScene(vtkMRMLNode *node,\n    vtkMRMLScene *newScene)\n\nGet a sub-scene containing all nodes directly or indirectly\nreferenced by the input node.\n\note GetReferencedNodes() is internally called.\n\n\\sa AddReferencedNodeID(), GetReferencedNodes()\n"},
  {"IsFilePathRelative", PyvtkMRMLScene_IsFilePathRelative, METH_VARARGS,
   "IsFilePathRelative(self, filepath:str) -> int\nC++: int IsFilePathRelative(const char *filepath)\n\n"},
  {"SetLoadFromXMLString", PyvtkMRMLScene_SetLoadFromXMLString, METH_VARARGS,
   "SetLoadFromXMLString(self, _arg:int) -> None\nC++: virtual void SetLoadFromXMLString(int _arg)\n\nThis property controls whether Import() loads a scene from an XML\nstring or from an XML file.\n\nIf true, contents is loaded from SceneXMLString. If false,\ncontents is loaded from the URL file.\n\\sa Import(), SetSceneXMLString(), SetURL(), SetSaveToXMLString()\n"},
  {"GetLoadFromXMLString", PyvtkMRMLScene_GetLoadFromXMLString, METH_VARARGS,
   "GetLoadFromXMLString(self) -> int\nC++: virtual int GetLoadFromXMLString()\n\n"},
  {"SetSaveToXMLString", PyvtkMRMLScene_SetSaveToXMLString, METH_VARARGS,
   "SetSaveToXMLString(self, _arg:int) -> None\nC++: virtual void SetSaveToXMLString(int _arg)\n\nThis property controls whether Commit() should save the scene as\nan XML string or an XML file.\n\nIf true, the contents generated by Commit() will be in\nSceneXMLString. If false, the contents will be saved into the URL\nfile.\n\\sa Commit(), GetSceneXMLString(), SetURL(),\n    SetLoadFromXMLString()\n"},
  {"GetSaveToXMLString", PyvtkMRMLScene_GetSaveToXMLString, METH_VARARGS,
   "GetSaveToXMLString(self) -> int\nC++: virtual int GetSaveToXMLString()\n\n"},
  {"SetReadDataOnLoad", PyvtkMRMLScene_SetReadDataOnLoad, METH_VARARGS,
   "SetReadDataOnLoad(self, _arg:int) -> None\nC++: virtual void SetReadDataOnLoad(int _arg)\n\n"},
  {"GetReadDataOnLoad", PyvtkMRMLScene_GetReadDataOnLoad, METH_VARARGS,
   "GetReadDataOnLoad(self) -> int\nC++: virtual int GetReadDataOnLoad()\n\n"},
  {"SetSceneXMLString", PyvtkMRMLScene_SetSceneXMLString, METH_VARARGS,
   "SetSceneXMLString(self, xmlString:str) -> None\nC++: void SetSceneXMLString(const std::string &xmlString)\n\nSet the XML string to read from by Import() if\nGetLoadFromXMLString() is true.\n\n\\sa Import(), GetLoadFromXMLString(), GetSceneXMLString()\n"},
  {"GetSceneXMLString", PyvtkMRMLScene_GetSceneXMLString, METH_VARARGS,
   "GetSceneXMLString(self) -> str\nC++: const std::string &GetSceneXMLString()\n\nReturns the saved scene with an XML format if SaveToXMLString\nis true and Commit() was called prior.\n\n\\sa Commit(), SetSaveToXMLString()\n"},
  {"GetSubjectHierarchyNode", PyvtkMRMLScene_GetSubjectHierarchyNode, METH_VARARGS,
   "GetSubjectHierarchyNode(self) -> vtkMRMLSubjectHierarchyNode\nC++: vtkMRMLSubjectHierarchyNode *GetSubjectHierarchyNode()\n\n"},
  {"GetCacheManager", PyvtkMRMLScene_GetCacheManager, METH_VARARGS,
   "GetCacheManager(self) -> vtkCacheManager\nC++: virtual vtkCacheManager *GetCacheManager()\n\n"},
  {"SetCacheManager", PyvtkMRMLScene_SetCacheManager, METH_VARARGS,
   "SetCacheManager(self, __a:vtkCacheManager) -> None\nC++: virtual void SetCacheManager(vtkCacheManager *)\n\n"},
  {"GetDataIOManager", PyvtkMRMLScene_GetDataIOManager, METH_VARARGS,
   "GetDataIOManager(self) -> vtkDataIOManager\nC++: virtual vtkDataIOManager *GetDataIOManager()\n\n"},
  {"SetDataIOManager", PyvtkMRMLScene_SetDataIOManager, METH_VARARGS,
   "SetDataIOManager(self, __a:vtkDataIOManager) -> None\nC++: virtual void SetDataIOManager(vtkDataIOManager *)\n\n"},
  {"GetURIHandlerCollection", PyvtkMRMLScene_GetURIHandlerCollection, METH_VARARGS,
   "GetURIHandlerCollection(self) -> vtkCollection\nC++: virtual vtkCollection *GetURIHandlerCollection()\n\n"},
  {"SetURIHandlerCollection", PyvtkMRMLScene_SetURIHandlerCollection, METH_VARARGS,
   "SetURIHandlerCollection(self, __a:vtkCollection) -> None\nC++: virtual void SetURIHandlerCollection(vtkCollection *)\n\n"},
  {"GetUserTagTable", PyvtkMRMLScene_GetUserTagTable, METH_VARARGS,
   "GetUserTagTable(self) -> vtkTagTable\nC++: virtual vtkTagTable *GetUserTagTable()\n\n"},
  {"SetUserTagTable", PyvtkMRMLScene_SetUserTagTable, METH_VARARGS,
   "SetUserTagTable(self, __a:vtkTagTable) -> None\nC++: virtual void SetUserTagTable(vtkTagTable *)\n\n"},
  {"FindURIHandler", PyvtkMRMLScene_FindURIHandler, METH_VARARGS,
   "FindURIHandler(self, URI:str) -> vtkURIHandler\nC++: vtkURIHandler *FindURIHandler(const char *URI)\n\nFind a URI handler in the collection that can work on the\npassed URI.\n\nReturns nullptr on failure\n"},
  {"FindURIHandlerByName", PyvtkMRMLScene_FindURIHandlerByName, METH_VARARGS,
   "FindURIHandlerByName(self, name:str) -> vtkURIHandler\nC++: vtkURIHandler *FindURIHandlerByName(const char *name)\n\nReturns a URIHandler of a specific type if its name is known.\n"},
  {"AddURIHandler", PyvtkMRMLScene_AddURIHandler, METH_VARARGS,
   "AddURIHandler(self, handler:vtkURIHandler) -> None\nC++: void AddURIHandler(vtkURIHandler *handler)\n\nAdd a URI handler to the collection.\n"},
  {"GetStates", PyvtkMRMLScene_GetStates, METH_VARARGS,
   "GetStates(self) -> int\nC++: int GetStates()\n\nReturns the current state of the scene.\n\nIt is a combination of all current states. Returns 0 if the scene\nhas no current state flag.\n\n\\sa IsBatchProcessing, IsClosing, IsImporting, IsRestoring\n\\sa StartState, EndState\n"},
  {"IsBatchProcessing", PyvtkMRMLScene_IsBatchProcessing, METH_VARARGS,
   "IsBatchProcessing(self) -> bool\nC++: bool IsBatchProcessing()\n\nReturn true if the scene is in BatchProcess state, false\notherwise\n"},
  {"IsClosing", PyvtkMRMLScene_IsClosing, METH_VARARGS,
   "IsClosing(self) -> bool\nC++: bool IsClosing()\n\nReturn true if the scene is in Close state, false otherwise\n"},
  {"IsImporting", PyvtkMRMLScene_IsImporting, METH_VARARGS,
   "IsImporting(self) -> bool\nC++: bool IsImporting()\n\nReturn true if the scene is in Import state, false otherwise\n"},
  {"IsRestoring", PyvtkMRMLScene_IsRestoring, METH_VARARGS,
   "IsRestoring(self) -> bool\nC++: bool IsRestoring()\n\nReturn true if the scene is in Restore state, false otherwise\n"},
  {"IsUndoing", PyvtkMRMLScene_IsUndoing, METH_VARARGS,
   "IsUndoing(self) -> bool\nC++: bool IsUndoing()\n\nReturn true if the scene is in Undo state (in the process of\nundoing node changes), false otherwise\n"},
  {"IsRedoing", PyvtkMRMLScene_IsRedoing, METH_VARARGS,
   "IsRedoing(self) -> bool\nC++: bool IsRedoing()\n\nReturn true if the scene is in Redo state (in the process of\nredoing node changes), false otherwise\n"},
  {"StartState", PyvtkMRMLScene_StartState, METH_VARARGS,
   "StartState(self, state:int, anticipatedMaxProgress:int=0) -> None\nC++: void StartState(unsigned long state,\n    int anticipatedMaxProgress=0)\n\nFlag the scene as being in a state mode.\n\nA matching EndState( state) must be called later. Nested states\nare supported as long as they all have their own EndState()\ncalls. StartState() fires the state start event if it isn't\nalready in that state, e.g. \\link vtkMRMLScene::StartImportEvent\nStartImportEvent \\endlink if state is \\link\nvtkMRMLScene::ImportState ImportState \\endlink. If the state is\n\\link vtkMRMLScene::BatchProcessState BatchProcessState \\endlink,\n\\link vtkMRMLScene::CloseState CloseState \\endlink,\n\\link vtkMRMLScene::ImportState ImportState \\endlink\nor \\link vtkMRMLScene::RestoreState RestoreState \\endlink and if\nthe scene is not already in a \\link\nvtkMRMLScene::BatchProcessState BatchProcessState \\endlink state,\nit also fires the event \\link\nvtkMRMLScene::StartBatchProcessEvent StartBatchProcessEvent\n\\endlink.\n\nExample:scene->StartState(vtkMRMLScene::ImportState);\n// fires: StartBatchProcessEvent, StartImportEvent\nscene->StartState(vtkMRMLScene::ImportState);\n// doesn't fire anything\nscene->StartState(vtkMRMLScene::RestoreState);\n// fires: StartRestoreEvent\nscene->EndState(vtkMRMLScene::RestoreState);\n// fires: EndRestoreEvent\nscene->EndState(vtkMRMLScene::ImportState);\n// doesn't fire anything\nscene->EndState(vtkMRMLScene::ImportState);\n// fires: EndImportEvent, StartBatchProcessEvent\n\nStartState() internally pushes the state into a stack.\n\n\\sa EndState, GetStates\n"},
  {"EndState", PyvtkMRMLScene_EndState, METH_VARARGS,
   "EndState(self, state:int) -> None\nC++: void EndState(unsigned long state)\n\nUnflag the scene as being in a state mode.\n\nEndState() fires the state end event if the scene is no longer in\nthe state mode. A matching StartState( state) must be called\nprior. e.g. vtkMRMLScene::EndImportEvent if state is \\link\nvtkMRMLScene::ImportState ImportState \\endlink.\n\nEndState() internally pops the state out of the stack.\n"},
  {"ProgressState", PyvtkMRMLScene_ProgressState, METH_VARARGS,
   "ProgressState(self, state:int, progress:int=0) -> None\nC++: void ProgressState(unsigned long state, int progress=0)\n\nTODO: Report progress of the current state.\n"},
  {"GetLastLoadedVersion", PyvtkMRMLScene_GetLastLoadedVersion, METH_VARARGS,
   "GetLastLoadedVersion(self) -> str\nC++: virtual char *GetLastLoadedVersion()\n\nThe version of the last loaded scene file.\n"},
  {"SetLastLoadedVersion", PyvtkMRMLScene_SetLastLoadedVersion, METH_VARARGS,
   "SetLastLoadedVersion(self, _arg:str) -> None\nC++: virtual void SetLastLoadedVersion(const char *_arg)\n\n"},
  {"GetLastLoadedExtensions", PyvtkMRMLScene_GetLastLoadedExtensions, METH_VARARGS,
   "GetLastLoadedExtensions(self) -> str\nC++: virtual char *GetLastLoadedExtensions()\n\nThe extensions used in the last loaded scene file.\n"},
  {"SetLastLoadedExtensions", PyvtkMRMLScene_SetLastLoadedExtensions, METH_VARARGS,
   "SetLastLoadedExtensions(self, _arg:str) -> None\nC++: virtual void SetLastLoadedExtensions(const char *_arg)\n\n"},
  {"GetVersion", PyvtkMRMLScene_GetVersion, METH_VARARGS,
   "GetVersion(self) -> str\nC++: virtual char *GetVersion()\n\nThe current software version.\n"},
  {"SetVersion", PyvtkMRMLScene_SetVersion, METH_VARARGS,
   "SetVersion(self, _arg:str) -> None\nC++: virtual void SetVersion(const char *_arg)\n\n"},
  {"GetExtensions", PyvtkMRMLScene_GetExtensions, METH_VARARGS,
   "GetExtensions(self) -> str\nC++: virtual char *GetExtensions()\n\nThe current software extensions (optional software components).\nIt is up to the application to define a format, it can be for\nexample a semicolon-separated list of strings.\n"},
  {"SetExtensions", PyvtkMRMLScene_SetExtensions, METH_VARARGS,
   "SetExtensions(self, _arg:str) -> None\nC++: virtual void SetExtensions(const char *_arg)\n\n"},
  {"ParseVersion", PyvtkMRMLScene_ParseVersion, METH_VARARGS,
   "ParseVersion(versionString:str, application:str, major:int,\n    minor:int, patch:int, revision:int) -> bool\nC++: static bool ParseVersion(const char *versionString,\n    std::string &application, int &major, int &minor, int &patch,\n    int &revision)\n\nParse version string. Return true if version is successfully\nparsed.\n"},
  {"CopyRegisteredNodesToScene", PyvtkMRMLScene_CopyRegisteredNodesToScene, METH_VARARGS,
   "CopyRegisteredNodesToScene(self, scene:vtkMRMLScene) -> None\nC++: void CopyRegisteredNodesToScene(vtkMRMLScene *scene)\n\nCopies all registered nodes into the parameter scene.\n"},
  {"CopySingletonNodesToScene", PyvtkMRMLScene_CopySingletonNodesToScene, METH_VARARGS,
   "CopySingletonNodesToScene(self, scene:vtkMRMLScene) -> None\nC++: void CopySingletonNodesToScene(vtkMRMLScene *scene)\n\nCopies all singleton nodes into the parameter scene.\n"},
  {"CopyDefaultNodesToScene", PyvtkMRMLScene_CopyDefaultNodesToScene, METH_VARARGS,
   "CopyDefaultNodesToScene(self, scene:vtkMRMLScene) -> None\nC++: void CopyDefaultNodesToScene(vtkMRMLScene *scene)\n\nCopies all default nodes into the parameter scene. Does not\nremove existing default nodes.\n"},
  {"GetModifiedSinceRead", PyvtkMRMLScene_GetModifiedSinceRead, METH_VARARGS,
   "GetModifiedSinceRead(self, modifiedNodes:vtkCollection=...)\n    -> bool\nC++: bool GetModifiedSinceRead(\n    vtkCollection *modifiedNodes=nullptr)\n\nReturns true if the scene has been \"significantly\" modified\nsince the last saved state. If modifiedNodes is provided then it\nreturns the list of nodes that have been found to be modified.\n"},
  {"GetStoredTime", PyvtkMRMLScene_GetStoredTime, METH_VARARGS,
   "GetStoredTime(self) -> int\nC++: virtual vtkMTimeType GetStoredTime()\n\nTimestamp of the scene's last saved state.\n"},
  {"GetStorableNodesModifiedSinceRead", PyvtkMRMLScene_GetStorableNodesModifiedSinceRead, METH_VARARGS,
   "GetStorableNodesModifiedSinceRead(self,\n    modifiedStorableNodes:vtkCollection=...) -> bool\nC++: bool GetStorableNodesModifiedSinceRead(\n    vtkCollection *modifiedStorableNodes=nullptr)\n\nSearch the scene for storable nodes that are \"ModifiedSinceRead\".\n\nReturns true if at least 1 matching node is found. If\nmodifiedStorableNodes is passed the modified nodes are appended.\nNote that the nodes see their reference count being incremented\nwhile being in the list. Don't forget to clear it as soon as you\ndon't need it.\n"},
  {"SetStorableNodesModifiedSinceRead", PyvtkMRMLScene_SetStorableNodesModifiedSinceRead, METH_VARARGS,
   "SetStorableNodesModifiedSinceRead(self) -> None\nC++: void SetStorableNodesModifiedSinceRead()\nSetStorableNodesModifiedSinceRead(storableNodes:vtkCollection)\n    -> None\nC++: static void SetStorableNodesModifiedSinceRead(\n    vtkCollection *storableNodes)\n\nSearch the scene for storable nodes that are not\n    \"ModifiedSinceRead\".\n\nUseful after loading a scene from a temporary directory and\ndeleting the files.\n\\sa SetStorableNodesModifiedSinceRead(vtkCollection*)\n"},
  {"SetMaximumNumberOfSavedUndoStates", PyvtkMRMLScene_SetMaximumNumberOfSavedUndoStates, METH_VARARGS,
   "SetMaximumNumberOfSavedUndoStates(self, stackSize:int) -> None\nC++: void SetMaximumNumberOfSavedUndoStates(int stackSize)\n\nSets the maximum number of saved undo states and removes the\n    oldest saved states so that the number of saved\nstates is less than the new maximum\n"},
  {"GetMaximumNumberOfSavedUndoStates", PyvtkMRMLScene_GetMaximumNumberOfSavedUndoStates, METH_VARARGS,
   "GetMaximumNumberOfSavedUndoStates(self) -> int\nC++: virtual int GetMaximumNumberOfSavedUndoStates()\n\n"},
  {"WriteToMRB", PyvtkMRMLScene_WriteToMRB, METH_VARARGS,
   "WriteToMRB(self, filename:str, thumbnail:vtkImageData=...,\n    userMessages:vtkMRMLMessageCollection=...) -> bool\nC++: bool WriteToMRB(const char *filename,\n    vtkImageData *thumbnail=nullptr,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nWrite the scene to a MRML scene bundle (.mrb) file.\nIf thumbnail image is provided then it is saved in the scene's\nroot folder. If userMessages is not nullptr then the method may\nadd messages to it about issues encountered during the operation.\nReturns false if the save failed\n"},
  {"ReadFromMRB", PyvtkMRMLScene_ReadFromMRB, METH_VARARGS,
   "ReadFromMRB(self, fullName:str, clear:bool=False,\n    userMessages:vtkMRMLMessageCollection=...) -> bool\nC++: bool ReadFromMRB(const char *fullName, bool clear=false,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nRead the scene from a MRML scene bundle (.mrb) file\nIf userMessages is not nullptr then the method may add messages\nto it about issues encountered during the operation.\n"},
  {"UnpackSlicerDataBundle", PyvtkMRMLScene_UnpackSlicerDataBundle, METH_VARARGS,
   "UnpackSlicerDataBundle(sdbFilePath:str, temporaryDirectory:str,\n    userMessages:vtkMRMLMessageCollection=...) -> str\nC++: static std::string UnpackSlicerDataBundle(\n    const char *sdbFilePath, const char *temporaryDirectory,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nUnpack the file into a temp directory and return the scene file\ninside. Note that the first mrml file found in the extracted\ndirectory will be used. If userMessages is not nullptr then the\nmethod may add messages to it about issues encountered during the\noperation.\n"},
  {"SaveSceneToSlicerDataBundleDirectory", PyvtkMRMLScene_SaveSceneToSlicerDataBundleDirectory, METH_VARARGS,
   "SaveSceneToSlicerDataBundleDirectory(self, sdbDir:str,\n    thumbnail:vtkImageData=...,\n    userMessages:vtkMRMLMessageCollection=...) -> bool\nC++: bool SaveSceneToSlicerDataBundleDirectory(const char *sdbDir,\n     vtkImageData *thumbnail=nullptr,\n    vtkMRMLMessageCollection *userMessages=nullptr)\n\nSave the scene into a self contained directory, sdbDir\nIf thumbnail image is provided then it is saved in the scene's\nroot folder. If userMessages is not nullptr then the method may\nadd messages to it about issues encountered during the operation.\nReturns false if the save failed\n"},
  {"SaveSceneScreenshot", PyvtkMRMLScene_SaveSceneScreenshot, METH_VARARGS,
   "SaveSceneScreenshot(self, thumbnail:vtkImageData) -> None\nC++: void SaveSceneScreenshot(vtkImageData *thumbnail)\n\nUtility function to write the scene thumbnail to a file in the\n    scene's root folder.\n"},
  {"PercentEncode", PyvtkMRMLScene_PercentEncode, METH_VARARGS,
   "PercentEncode(s:str) -> str\nC++: static std::string PercentEncode(std::string s)\n\nConvert reserved characters into percent notation to avoid issues\nwith filenames containing things that might be mistaken, for\nexample, for windows drive letters.  Used internally by\nSaveSceneToSlicerDataBundleDirectory. This is not a general\npurpose implementation; it preserves commonly used characters for\nfilenames but avoids known issue like slashes or colons. Ideally\na version from vtksys or similar should be used, but nothing\nseems to be available.\nhttps://en.wikipedia.org/wiki/Percent-encoding See\nhttps://github.com/Slicer/Slicer/issues/2605\n"},
  {"CreateUniqueFileName", PyvtkMRMLScene_CreateUniqueFileName, METH_VARARGS,
   "CreateUniqueFileName(filename:str, knownExtension:str=...) -> str\nC++: static std::string CreateUniqueFileName(\n    const std::string &filename,\n    const std::string &knownExtension=\"\")\n\nCreates a unique (non-existent) file name by adding an index\nafter base file name. knownExtension specifies the extension the\nindex should be inserted before. It is necessary to provide\nextension, because there is no reliable way of correctly\ndetermining extension automatically (for example, file extension\nof some.file.nii.gz could be gz, nii.gz, or file.nii.gz and only\none of them is correct).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLScene_Doc =
  "vtkMRMLScene - A set of MRML Nodes that supports serialization and\nundo/redo.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMRMLScene represents and provides methods to manipulate a list of\n"
  "MRML objects. The list is core and duplicate entries are not\n"
  "prevented.\n"
  "\\sa vtkMRMLNode\n"
  "\\sa vtkCollection\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLScene_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLScene", // tp_name
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
  PyvtkMRMLScene_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLScene_StaticNew()
{
  return vtkMRMLScene::New();
}

PyObject *PyvtkMRMLScene_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLScene_Type, PyvtkMRMLScene_Methods,
    "vtkMRMLScene",
 &PyvtkMRMLScene_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMRMLScene_StateType_Type);
  PyVTKEnum_Add(&PyvtkMRMLScene_StateType_Type, "vtkMRMLScene.StateType");

  o = (PyObject *)&PyvtkMRMLScene_StateType_Type;
  if (PyDict_SetItemString(d, "StateType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMRMLScene_SceneEventType_Type);
  PyVTKEnum_Add(&PyvtkMRMLScene_SceneEventType_Type, "vtkMRMLScene.SceneEventType");

  o = (PyObject *)&PyvtkMRMLScene_SceneEventType_Type;
  if (PyDict_SetItemString(d, "SceneEventType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkMRMLScene::StateType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "BatchProcessState", vtkMRMLScene::BatchProcessState },
        { "CloseState", vtkMRMLScene::CloseState },
        { "ImportState", vtkMRMLScene::ImportState },
        { "RestoreState", vtkMRMLScene::RestoreState },
        { "SaveState", vtkMRMLScene::SaveState },
        { "UndoState", vtkMRMLScene::UndoState },
        { "RedoState", vtkMRMLScene::RedoState },
      };

    o = PyvtkMRMLScene_StateType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 34; c++)
  {
    typedef vtkMRMLScene::SceneEventType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[34] = {
        { "NodeAboutToBeAddedEvent", vtkMRMLScene::NodeAboutToBeAddedEvent },
        { "NodeAddedEvent", vtkMRMLScene::NodeAddedEvent },
        { "NodeAboutToBeRemovedEvent", vtkMRMLScene::NodeAboutToBeRemovedEvent },
        { "NodeRemovedEvent", vtkMRMLScene::NodeRemovedEvent },
        { "NodeClassRegisteredEvent", vtkMRMLScene::NodeClassRegisteredEvent },
        { "NewSceneEvent", vtkMRMLScene::NewSceneEvent },
        { "MetadataAddedEvent", vtkMRMLScene::MetadataAddedEvent },
        { "ImportProgressFeedbackEvent", vtkMRMLScene::ImportProgressFeedbackEvent },
        { "SaveProgressFeedbackEvent", vtkMRMLScene::SaveProgressFeedbackEvent },
        { "StateEvent", vtkMRMLScene::StateEvent },
        { "StartEvent", vtkMRMLScene::StartEvent },
        { "EndEvent", vtkMRMLScene::EndEvent },
        { "ProgressEvent", vtkMRMLScene::ProgressEvent },
        { "StartBatchProcessEvent", vtkMRMLScene::StartBatchProcessEvent },
        { "EndBatchProcessEvent", vtkMRMLScene::EndBatchProcessEvent },
        { "ProgressBatchProcessEvent", vtkMRMLScene::ProgressBatchProcessEvent },
        { "StartCloseEvent", vtkMRMLScene::StartCloseEvent },
        { "EndCloseEvent", vtkMRMLScene::EndCloseEvent },
        { "ProgressCloseEvent", vtkMRMLScene::ProgressCloseEvent },
        { "StartImportEvent", vtkMRMLScene::StartImportEvent },
        { "EndImportEvent", vtkMRMLScene::EndImportEvent },
        { "ProgressImportEvent", vtkMRMLScene::ProgressImportEvent },
        { "StartRestoreEvent", vtkMRMLScene::StartRestoreEvent },
        { "EndRestoreEvent", vtkMRMLScene::EndRestoreEvent },
        { "ProgressRestoreEvent", vtkMRMLScene::ProgressRestoreEvent },
        { "StartSaveEvent", vtkMRMLScene::StartSaveEvent },
        { "EndSaveEvent", vtkMRMLScene::EndSaveEvent },
        { "ProgressSaveEvent", vtkMRMLScene::ProgressSaveEvent },
        { "StartUndoEvent", vtkMRMLScene::StartUndoEvent },
        { "EndUndoEvent", vtkMRMLScene::EndUndoEvent },
        { "ProgressUndoEvent", vtkMRMLScene::ProgressUndoEvent },
        { "StartRedoEvent", vtkMRMLScene::StartRedoEvent },
        { "EndRedoEvent", vtkMRMLScene::EndRedoEvent },
        { "ProgressRedoEvent", vtkMRMLScene::ProgressRedoEvent },
      };

    o = PyvtkMRMLScene_SceneEventType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLScene(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLScene_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLScene", o) != 0)
  {
    Py_DECREF(o);
  }

}

