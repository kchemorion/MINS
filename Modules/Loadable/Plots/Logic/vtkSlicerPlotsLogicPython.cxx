// python wrapper for vtkSlicerPlotsLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerPlotsLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerPlotsLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerPlotsLogic_ClassNew(); }


static PyObject *
PyvtkSlicerPlotsLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerPlotsLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlotsLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlotsLogic *op = static_cast<vtkSlicerPlotsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerPlotsLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlotsLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerPlotsLogic *tempr = vtkSlicerPlotsLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlotsLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlotsLogic *op = static_cast<vtkSlicerPlotsLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerPlotsLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerPlotsLogic::NewInstance());

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
PyvtkSlicerPlotsLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerPlotsLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlotsLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlotsLogic *op = static_cast<vtkSlicerPlotsLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerPlotsLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlotsLogic_GetLayoutWithPlot(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLayoutWithPlot");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerPlotsLogic::GetLayoutWithPlot(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlotsLogic_CloneSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloneSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlotsLogic *op = static_cast<vtkSlicerPlotsLogic *>(vp);

  vtkMRMLPlotSeriesNode *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLPlotSeriesNode") &&
      ap.GetValue(temp1))
  {
    vtkMRMLPlotSeriesNode *tempr = (ap.IsBound() ?
      op->CloneSeries(temp0, temp1) :
      op->vtkSlicerPlotsLogic::CloneSeries(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlotsLogic_ShowChartInLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowChartInLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlotsLogic *op = static_cast<vtkSlicerPlotsLogic *>(vp);

  vtkMRMLPlotChartNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLPlotChartNode"))
  {
    if (ap.IsBound())
    {
      op->ShowChartInLayout(temp0);
    }
    else
    {
      op->vtkSlicerPlotsLogic::ShowChartInLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerPlotsLogic_GetFirstPlotChartForSeries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstPlotChartForSeries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerPlotsLogic *op = static_cast<vtkSlicerPlotsLogic *>(vp);

  vtkMRMLPlotSeriesNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLPlotSeriesNode"))
  {
    vtkMRMLPlotChartNode *tempr = (ap.IsBound() ?
      op->GetFirstPlotChartForSeries(temp0) :
      op->vtkSlicerPlotsLogic::GetFirstPlotChartForSeries(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerPlotsLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerPlotsLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerPlotsLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerPlotsLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerPlotsLogic\nC++: static vtkSlicerPlotsLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerPlotsLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerPlotsLogic\nC++: vtkSlicerPlotsLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerPlotsLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerPlotsLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetLayoutWithPlot", PyvtkSlicerPlotsLogic_GetLayoutWithPlot, METH_VARARGS,
   "GetLayoutWithPlot(currentLayout:int) -> int\nC++: static int GetLayoutWithPlot(int currentLayout)\n\nReturns ID of the layout that is similar to current layout but\nalso contains a table view\n"},
  {"CloneSeries", PyvtkSlicerPlotsLogic_CloneSeries, METH_VARARGS,
   "CloneSeries(self, source:vtkMRMLPlotSeriesNode, name:str)\n    -> vtkMRMLPlotSeriesNode\nC++: vtkMRMLPlotSeriesNode *CloneSeries(\n    vtkMRMLPlotSeriesNode *source, const char *name)\n\nCreate a deep copy of a source and add it to the current scene.\n\\sa GetMRMLScene()\n"},
  {"ShowChartInLayout", PyvtkSlicerPlotsLogic_ShowChartInLayout, METH_VARARGS,
   "ShowChartInLayout(self, chartNode:vtkMRMLPlotChartNode) -> None\nC++: void ShowChartInLayout(vtkMRMLPlotChartNode *chartNode)\n\nShow chart in view layout. Switches to a layout that contains a\nplot and propagates\n"},
  {"GetFirstPlotChartForSeries", PyvtkSlicerPlotsLogic_GetFirstPlotChartForSeries, METH_VARARGS,
   "GetFirstPlotChartForSeries(self, seriesNode:vtkMRMLPlotSeriesNode)\n     -> vtkMRMLPlotChartNode\nC++: vtkMRMLPlotChartNode *GetFirstPlotChartForSeries(\n    vtkMRMLPlotSeriesNode *seriesNode)\n\nFinds the first plot chart that contains the specified series\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerPlotsLogic_Doc =
  "vtkSlicerPlotsLogic - Slicer logic class for double array manipulation\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
  "This class manages the logic associated with reading, saving, and\n"
  "changing propertied of the double array nodes\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerPlotsLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerPlotsModuleLogicPython.vtkSlicerPlotsLogic", // tp_name
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
  PyvtkSlicerPlotsLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerPlotsLogic_StaticNew()
{
  return vtkSlicerPlotsLogic::New();
}

PyObject *PyvtkSlicerPlotsLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerPlotsLogic_Type, PyvtkSlicerPlotsLogic_Methods,
    "vtkSlicerPlotsLogic",
 &PyvtkSlicerPlotsLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerPlotsLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerPlotsLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerPlotsLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

