// python wrapper for vtkSlicerROIWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSlicerROIWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerROIWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerROIWidget_ClassNew(); }

#ifndef DECLARED_PyvtkSlicerMarkupsWidget_ClassNew
extern "C" { PyObject *PyvtkSlicerMarkupsWidget_ClassNew(); }
#define DECLARED_PyvtkSlicerMarkupsWidget_ClassNew
#endif

static PyObject *
PyvtkSlicerROIWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerROIWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerROIWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerROIWidget *op = static_cast<vtkSlicerROIWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerROIWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerROIWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerROIWidget *tempr = vtkSlicerROIWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerROIWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerROIWidget *op = static_cast<vtkSlicerROIWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerROIWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerROIWidget::NewInstance());

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
PyvtkSlicerROIWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerROIWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerROIWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerROIWidget *op = static_cast<vtkSlicerROIWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerROIWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerROIWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerROIWidget *op = static_cast<vtkSlicerROIWidget *>(vp);

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
      op->vtkSlicerROIWidget::CreateDefaultRepresentation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerROIWidget_FlipROIHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipROIHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerROIWidget *op = static_cast<vtkSlicerROIWidget *>(vp);

  bool temp0 = false;
  bool temp1 = false;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->FlipROIHandles(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerROIWidget::FlipROIHandles(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerROIWidget_CreateInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerROIWidget *op = static_cast<vtkSlicerROIWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerMarkupsWidget *tempr = (ap.IsBound() ?
      op->CreateInstance() :
      op->vtkSlicerROIWidget::CreateInstance());

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

static PyMethodDef PyvtkSlicerROIWidget_Methods[] = {
  {"IsTypeOf", PyvtkSlicerROIWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerROIWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerROIWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerROIWidget\nC++: static vtkSlicerROIWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerROIWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerROIWidget\nC++: vtkSlicerROIWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerROIWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerROIWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateDefaultRepresentation", PyvtkSlicerROIWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self,\n    markupsDisplayNode:vtkMRMLMarkupsDisplayNode,\n    viewNode:vtkMRMLAbstractViewNode, renderer:vtkRenderer)\n    -> None\nC++: void CreateDefaultRepresentation(\n    vtkMRMLMarkupsDisplayNode *markupsDisplayNode,\n    vtkMRMLAbstractViewNode *viewNode, vtkRenderer *renderer)\n    override;\n\nCreate the default widget representation and initializes the\nwidget and representation.\n"},
  {"FlipROIHandles", PyvtkSlicerROIWidget_FlipROIHandles, METH_VARARGS,
   "FlipROIHandles(self, flipLRHandle:bool, flipAPHandle:bool,\n    flipISHandle:bool) -> None\nC++: void FlipROIHandles(bool flipLRHandle, bool flipAPHandle,\n    bool flipISHandle)\n\nFlip the selected index across the specified axis. Ex. Switch\nbetween L--R face. Used when the user drags an ROI handle across\nthe ROI origin.\n"},
  {"CreateInstance", PyvtkSlicerROIWidget_CreateInstance, METH_VARARGS,
   "CreateInstance(self) -> vtkSlicerMarkupsWidget\nC++: vtkSlicerMarkupsWidget *CreateInstance() override;\n\nCreate instance of the markups widget\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerROIWidget_Doc =
  "vtkSlicerROIWidget - Create an ROI representation\n\n"
  "Superclass: vtkSlicerMarkupsWidget\n\n"
  "The vtkSlicerROIWidget is used to create an ROI widget.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerROIWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleVTKWidgetsPython.vtkSlicerROIWidget", // tp_name
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
  PyvtkSlicerROIWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerROIWidget_StaticNew()
{
  return vtkSlicerROIWidget::New();
}

PyObject *PyvtkSlicerROIWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerROIWidget_Type, PyvtkSlicerROIWidget_Methods,
    "vtkSlicerROIWidget",
 &PyvtkSlicerROIWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSlicerMarkupsWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "WidgetStateSymmetricScale", vtkSlicerROIWidget::WidgetStateSymmetricScale },
        { "WidgetStateMarkupsROI_Last", vtkSlicerROIWidget::WidgetStateMarkupsROI_Last },
        { "WidgetEventSymmetricScaleStart", vtkSlicerROIWidget::WidgetEventSymmetricScaleStart },
        { "WidgetEventSymmetricScaleEnd", vtkSlicerROIWidget::WidgetEventSymmetricScaleEnd },
        { "WidgetEventMarkupsROI_Last", vtkSlicerROIWidget::WidgetEventMarkupsROI_Last },
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

void PyVTKAddFile_vtkSlicerROIWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerROIWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerROIWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

