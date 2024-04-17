// python wrapper for vtkSlicerAngleWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSlicerAngleWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerAngleWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerAngleWidget_ClassNew(); }

#ifndef DECLARED_PyvtkSlicerMarkupsWidget_ClassNew
extern "C" { PyObject *PyvtkSlicerMarkupsWidget_ClassNew(); }
#define DECLARED_PyvtkSlicerMarkupsWidget_ClassNew
#endif

static PyObject *
PyvtkSlicerAngleWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerAngleWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAngleWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAngleWidget *op = static_cast<vtkSlicerAngleWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerAngleWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAngleWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerAngleWidget *tempr = vtkSlicerAngleWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAngleWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAngleWidget *op = static_cast<vtkSlicerAngleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerAngleWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerAngleWidget::NewInstance());

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
PyvtkSlicerAngleWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerAngleWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAngleWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAngleWidget *op = static_cast<vtkSlicerAngleWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerAngleWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerAngleWidget_CreateInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAngleWidget *op = static_cast<vtkSlicerAngleWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerMarkupsWidget *tempr = (ap.IsBound() ?
      op->CreateInstance() :
      op->vtkSlicerAngleWidget::CreateInstance());

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
PyvtkSlicerAngleWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerAngleWidget *op = static_cast<vtkSlicerAngleWidget *>(vp);

  vtkMRMLMarkupsDisplayNode *temp0 = nullptr;
  vtkMRMLAbstractViewNode *temp1 = nullptr;
  vtkRenderer *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsDisplayNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLAbstractViewNode") &&
      ap.GetVTKObject(temp2, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerAngleWidget::CreateDefaultRepresentation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerAngleWidget_Methods[] = {
  {"IsTypeOf", PyvtkSlicerAngleWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerAngleWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerAngleWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerAngleWidget\nC++: static vtkSlicerAngleWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerAngleWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerAngleWidget\nC++: vtkSlicerAngleWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerAngleWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerAngleWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateInstance", PyvtkSlicerAngleWidget_CreateInstance, METH_VARARGS,
   "CreateInstance(self) -> vtkSlicerMarkupsWidget\nC++: vtkSlicerMarkupsWidget *CreateInstance() override;\n\nCreate instance of the markups widget\n"},
  {"CreateDefaultRepresentation", PyvtkSlicerAngleWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self,\n    markupsDisplayNode:vtkMRMLMarkupsDisplayNode,\n    viewNode:vtkMRMLAbstractViewNode, renderer:vtkRenderer)\n    -> None\nC++: void CreateDefaultRepresentation(\n    vtkMRMLMarkupsDisplayNode *markupsDisplayNode,\n    vtkMRMLAbstractViewNode *viewNode, vtkRenderer *renderer)\n    override;\n\nCreate the default widget representation and initializes the\nwidget and representation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerAngleWidget_Doc =
  "vtkSlicerAngleWidget - create an angle with a set of 3 points\n\n"
  "Superclass: vtkSlicerMarkupsWidget\n\n"
  "The vtkSlicerAngleWidget is used to create an angle widget with a set\n"
  "of 3 points.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerAngleWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleVTKWidgetsPython.vtkSlicerAngleWidget", // tp_name
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
  PyvtkSlicerAngleWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerAngleWidget_StaticNew()
{
  return vtkSlicerAngleWidget::New();
}

PyObject *PyvtkSlicerAngleWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerAngleWidget_Type, PyvtkSlicerAngleWidget_Methods,
    "vtkSlicerAngleWidget",
 &PyvtkSlicerAngleWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSlicerMarkupsWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerAngleWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerAngleWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerAngleWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

