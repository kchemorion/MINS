// python wrapper for vtkMRMLMarkupsDisplayableManagerHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMarkupsDisplayableManagerHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsDisplayableManagerHelper(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsDisplayableManagerHelper_ClassNew(); }


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsDisplayableManagerHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsDisplayableManagerHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsDisplayableManagerHelper *tempr = vtkMRMLMarkupsDisplayableManagerHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsDisplayableManagerHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsDisplayableManagerHelper::NewInstance());

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
PyvtkMRMLMarkupsDisplayableManagerHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsDisplayableManagerHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsDisplayableManagerHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_GetDisplayableManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayableManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsDisplayableManager *tempr = (ap.IsBound() ?
      op->GetDisplayableManager() :
      op->vtkMRMLMarkupsDisplayableManagerHelper::GetDisplayableManager());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_SetDisplayableManager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayableManager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  vtkMRMLMarkupsDisplayableManager *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayableManager"))
  {
    if (ap.IsBound())
    {
      op->SetDisplayableManager(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayableManagerHelper::SetDisplayableManager(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_GetWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  vtkMRMLMarkupsDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayNode"))
  {
    vtkSlicerMarkupsWidget *tempr = (ap.IsBound() ?
      op->GetWidget(temp0) :
      op->vtkMRMLMarkupsDisplayableManagerHelper::GetWidget(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_GetWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    vtkSlicerMarkupsWidget *tempr = (ap.IsBound() ?
      op->GetWidget(temp0) :
      op->vtkMRMLMarkupsDisplayableManagerHelper::GetWidget(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsDisplayableManagerHelper_GetWidget_Methods[] = {
  {"GetWidget", PyvtkMRMLMarkupsDisplayableManagerHelper_GetWidget_s1, METH_VARARGS,
   "@V *vtkMRMLMarkupsDisplayNode"},
  {"GetWidget", PyvtkMRMLMarkupsDisplayableManagerHelper_GetWidget_s2, METH_VARARGS,
   "@V *vtkMRMLMarkupsNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_GetWidget(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLMarkupsDisplayableManagerHelper_GetWidget_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetWidget");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_RemoveAllWidgetsAndNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllWidgetsAndNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllWidgetsAndNodes();
    }
    else
    {
      op->vtkMRMLMarkupsDisplayableManagerHelper::RemoveAllWidgetsAndNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_AddMarkupsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMarkupsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->AddMarkupsNode(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayableManagerHelper::AddMarkupsNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_RemoveMarkupsNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveMarkupsNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveMarkupsNode(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayableManagerHelper::RemoveMarkupsNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_AddDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  vtkMRMLMarkupsDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayNode"))
  {
    if (ap.IsBound())
    {
      op->AddDisplayNode(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayableManagerHelper::AddDisplayNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_RemoveDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  vtkMRMLMarkupsDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveDisplayNode(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayableManagerHelper::RemoveDisplayNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_DeleteWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  vtkSlicerMarkupsWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSlicerMarkupsWidget"))
  {
    if (ap.IsBound())
    {
      op->DeleteWidget(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayableManagerHelper::DeleteWidget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_AddObservations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddObservations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->AddObservations(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayableManagerHelper::AddObservations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsDisplayableManagerHelper_RemoveObservations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveObservations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsDisplayableManagerHelper *op = static_cast<vtkMRMLMarkupsDisplayableManagerHelper *>(vp);

  vtkMRMLMarkupsNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveObservations(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsDisplayableManagerHelper::RemoveObservations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsDisplayableManagerHelper_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsDisplayableManagerHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsDisplayableManagerHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsDisplayableManagerHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLMarkupsDisplayableManagerHelper\nC++: static vtkMRMLMarkupsDisplayableManagerHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsDisplayableManagerHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsDisplayableManagerHelper\nC++: vtkMRMLMarkupsDisplayableManagerHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsDisplayableManagerHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsDisplayableManagerHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDisplayableManager", PyvtkMRMLMarkupsDisplayableManagerHelper_GetDisplayableManager, METH_VARARGS,
   "GetDisplayableManager(self) -> vtkMRMLMarkupsDisplayableManager\nC++: virtual vtkMRMLMarkupsDisplayableManager *GetDisplayableManager(\n    )\n\n"},
  {"SetDisplayableManager", PyvtkMRMLMarkupsDisplayableManagerHelper_SetDisplayableManager, METH_VARARGS,
   "SetDisplayableManager(self, __a:vtkMRMLMarkupsDisplayableManager)\n    -> None\nC++: void SetDisplayableManager(\n    vtkMRMLMarkupsDisplayableManager *)\n\n"},
  {"GetWidget", PyvtkMRMLMarkupsDisplayableManagerHelper_GetWidget, METH_VARARGS,
   "GetWidget(self, markupsDisplayNode:vtkMRMLMarkupsDisplayNode)\n    -> vtkSlicerMarkupsWidget\nC++: vtkSlicerMarkupsWidget *GetWidget(\n    vtkMRMLMarkupsDisplayNode *markupsDisplayNode)\nGetWidget(self, markupsNode:vtkMRMLMarkupsNode)\n    -> vtkSlicerMarkupsWidget\nC++: vtkSlicerMarkupsWidget *GetWidget(\n    vtkMRMLMarkupsNode *markupsNode)\n\nSet all widget status to manipulate Get a vtkSlicerMarkupsWidget*\ngiven a node\n"},
  {"RemoveAllWidgetsAndNodes", PyvtkMRMLMarkupsDisplayableManagerHelper_RemoveAllWidgetsAndNodes, METH_VARARGS,
   "RemoveAllWidgetsAndNodes(self) -> None\nC++: void RemoveAllWidgetsAndNodes()\n\nRemove all widgets, intersection widgets, nodes\n"},
  {"AddMarkupsNode", PyvtkMRMLMarkupsDisplayableManagerHelper_AddMarkupsNode, METH_VARARGS,
   "AddMarkupsNode(self, node:vtkMRMLMarkupsNode) -> None\nC++: void AddMarkupsNode(vtkMRMLMarkupsNode *node)\n\n"},
  {"RemoveMarkupsNode", PyvtkMRMLMarkupsDisplayableManagerHelper_RemoveMarkupsNode, METH_VARARGS,
   "RemoveMarkupsNode(self, node:vtkMRMLMarkupsNode) -> None\nC++: void RemoveMarkupsNode(vtkMRMLMarkupsNode *node)\n\n"},
  {"AddDisplayNode", PyvtkMRMLMarkupsDisplayableManagerHelper_AddDisplayNode, METH_VARARGS,
   "AddDisplayNode(self, displayNode:vtkMRMLMarkupsDisplayNode)\n    -> None\nC++: void AddDisplayNode(vtkMRMLMarkupsDisplayNode *displayNode)\n\n"},
  {"RemoveDisplayNode", PyvtkMRMLMarkupsDisplayableManagerHelper_RemoveDisplayNode, METH_VARARGS,
   "RemoveDisplayNode(self, displayNode:vtkMRMLMarkupsDisplayNode)\n    -> None\nC++: void RemoveDisplayNode(\n    vtkMRMLMarkupsDisplayNode *displayNode)\n\n"},
  {"DeleteWidget", PyvtkMRMLMarkupsDisplayableManagerHelper_DeleteWidget, METH_VARARGS,
   "DeleteWidget(self, widget:vtkSlicerMarkupsWidget) -> None\nC++: void DeleteWidget(vtkSlicerMarkupsWidget *widget)\n\n"},
  {"AddObservations", PyvtkMRMLMarkupsDisplayableManagerHelper_AddObservations, METH_VARARGS,
   "AddObservations(self, node:vtkMRMLMarkupsNode) -> None\nC++: void AddObservations(vtkMRMLMarkupsNode *node)\n\n"},
  {"RemoveObservations", PyvtkMRMLMarkupsDisplayableManagerHelper_RemoveObservations, METH_VARARGS,
   "RemoveObservations(self, node:vtkMRMLMarkupsNode) -> None\nC++: void RemoveObservations(vtkMRMLMarkupsNode *node)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsDisplayableManagerHelper_Doc =
  "vtkMRMLMarkupsDisplayableManagerHelper - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsDisplayableManagerHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLDisplayableManagerPython.vtkMRMLMarkupsDisplayableManagerHelper", // tp_name
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
  PyvtkMRMLMarkupsDisplayableManagerHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsDisplayableManagerHelper_StaticNew()
{
  return vtkMRMLMarkupsDisplayableManagerHelper::New();
}

PyObject *PyvtkMRMLMarkupsDisplayableManagerHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsDisplayableManagerHelper_Type, PyvtkMRMLMarkupsDisplayableManagerHelper_Methods,
    "vtkMRMLMarkupsDisplayableManagerHelper",
 &PyvtkMRMLMarkupsDisplayableManagerHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMarkupsDisplayableManagerHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsDisplayableManagerHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsDisplayableManagerHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

