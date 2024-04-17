// python wrapper for vtkProjectMarkupsCurvePointsFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkProjectMarkupsCurvePointsFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProjectMarkupsCurvePointsFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkProjectMarkupsCurvePointsFilter_ClassNew(); }


static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProjectMarkupsCurvePointsFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectMarkupsCurvePointsFilter *op = static_cast<vtkProjectMarkupsCurvePointsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectMarkupsCurvePointsFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProjectMarkupsCurvePointsFilter *tempr = vtkProjectMarkupsCurvePointsFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectMarkupsCurvePointsFilter *op = static_cast<vtkProjectMarkupsCurvePointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProjectMarkupsCurvePointsFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectMarkupsCurvePointsFilter::NewInstance());

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
PyvtkProjectMarkupsCurvePointsFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProjectMarkupsCurvePointsFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectMarkupsCurvePointsFilter *op = static_cast<vtkProjectMarkupsCurvePointsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProjectMarkupsCurvePointsFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_SetInputCurveNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCurveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectMarkupsCurvePointsFilter *op = static_cast<vtkProjectMarkupsCurvePointsFilter *>(vp);

  vtkMRMLMarkupsCurveNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMarkupsCurveNode"))
  {
    if (ap.IsBound())
    {
      op->SetInputCurveNode(temp0);
    }
    else
    {
      op->vtkProjectMarkupsCurvePointsFilter::SetInputCurveNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_ConstrainPointsToSurface(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConstrainPointsToSurface");

  vtkPoints *temp0 = nullptr;
  vtkDoubleArray *temp1 = nullptr;
  vtkPolyData *temp2 = nullptr;
  vtkPoints *temp3 = nullptr;
  double temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkDoubleArray") &&
      ap.GetVTKObject(temp2, "vtkPolyData") &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      ap.GetValue(temp4))
  {
    bool tempr = vtkProjectMarkupsCurvePointsFilter::ConstrainPointsToSurface(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_SetMaximumSearchRadiusTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSearchRadiusTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectMarkupsCurvePointsFilter *op = static_cast<vtkProjectMarkupsCurvePointsFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumSearchRadiusTolerance(temp0);
    }
    else
    {
      op->vtkProjectMarkupsCurvePointsFilter::SetMaximumSearchRadiusTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_GetMaximumSearchRadiusTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSearchRadiusTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectMarkupsCurvePointsFilter *op = static_cast<vtkProjectMarkupsCurvePointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumSearchRadiusTolerance() :
      op->vtkProjectMarkupsCurvePointsFilter::GetMaximumSearchRadiusTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectMarkupsCurvePointsFilter *op = static_cast<vtkProjectMarkupsCurvePointsFilter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkProjectMarkupsCurvePointsFilter::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectMarkupsCurvePointsFilter *op = static_cast<vtkProjectMarkupsCurvePointsFilter *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1);
    }
    else
    {
      op->vtkProjectMarkupsCurvePointsFilter::SetInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkProjectMarkupsCurvePointsFilter_SetInputData_s1(self, args);
    case 2:
      return PyvtkProjectMarkupsCurvePointsFilter_SetInputData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}


static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectMarkupsCurvePointsFilter *op = static_cast<vtkProjectMarkupsCurvePointsFilter *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkProjectMarkupsCurvePointsFilter::SetInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectMarkupsCurvePointsFilter *op = static_cast<vtkProjectMarkupsCurvePointsFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkProjectMarkupsCurvePointsFilter::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectMarkupsCurvePointsFilter_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkProjectMarkupsCurvePointsFilter_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkProjectMarkupsCurvePointsFilter_SetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return nullptr;
}

static PyMethodDef PyvtkProjectMarkupsCurvePointsFilter_Methods[] = {
  {"IsTypeOf", PyvtkProjectMarkupsCurvePointsFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProjectMarkupsCurvePointsFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProjectMarkupsCurvePointsFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkProjectMarkupsCurvePointsFilter\nC++: static vtkProjectMarkupsCurvePointsFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProjectMarkupsCurvePointsFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProjectMarkupsCurvePointsFilter\nC++: vtkProjectMarkupsCurvePointsFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProjectMarkupsCurvePointsFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProjectMarkupsCurvePointsFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputCurveNode", PyvtkProjectMarkupsCurvePointsFilter_SetInputCurveNode, METH_VARARGS,
   "SetInputCurveNode(self, inputCurveNode:vtkMRMLMarkupsCurveNode)\n    -> None\nC++: void SetInputCurveNode(\n    vtkMRMLMarkupsCurveNode *inputCurveNode)\n\nSets the input curve node.\n\nThe surface model to project to is retrieved using\nvtkMRMLMarkupsCurveNode::GetSurfaceConstraintNode() and the input\ncurve's control points are retrieved using\nvtkMRMLMarkupsCurveNode::GetControlPointPositionsWorld().\n\nIf the inputCurveNode does not have a surface constraint node,\nthis filter acts as a pass through and leave the points\nunchanged.\n\nIt does not take ownership of the node and will not extend its\nlifetime.\n\nIf the inputCurveNode is deleted during this object's lifetime it\nwill be as if nullptr was passed into this function.\n"},
  {"ConstrainPointsToSurface", PyvtkProjectMarkupsCurvePointsFilter_ConstrainPointsToSurface, METH_VARARGS,
   "ConstrainPointsToSurface(originalPoints:vtkPoints,\n    normalVectors:vtkDoubleArray, surfacePolydata:vtkPolyData,\n    surfacePoints:vtkPoints, maximumSearchRadiusTolerance:float)\n    -> bool\nC++: static bool ConstrainPointsToSurface(\n    vtkPoints *originalPoints, vtkDoubleArray *normalVectors,\n    vtkPolyData *surfacePolydata, vtkPoints *surfacePoints,\n    double maximumSearchRadiusTolerance)\n\nConstrain points to a specified model surface.\n\n\\param originalPoints The points to constrain.\n\\param normalVectors The normals for the originalPoints.\n\\param surfacePolydata The surface to constrain to.\n\\param[out] surfacePoints The points data structure to put the\n    constrained points in.\n\\param maximumSearchRadiusTolerance Maximum distance a point can\n    be constrained, specified as a percentage\n    of the model's bounding box diagonal in world coordinate\nsystem. Valid range for this is 0 to 1.\n\\return true if successful, false otherwise.\n\n\\sa vtkMRMLMarkupsCurveNode::ConstrainPointsToSurface\n"},
  {"SetMaximumSearchRadiusTolerance", PyvtkProjectMarkupsCurvePointsFilter_SetMaximumSearchRadiusTolerance, METH_VARARGS,
   "SetMaximumSearchRadiusTolerance(self,\n    maximumSearchRadiusTolerance:float) -> None\nC++: void SetMaximumSearchRadiusTolerance(\n    double maximumSearchRadiusTolerance)\n\nSet/Get maximumSearchRadiusTolerance defining the allowable\nprojection distance.\n\nIt is specified as a percentage of the model's bounding box\ndiagonal in world coordinate system.\n\n\\sa ConstrainPointsToSurface()\n\\sa vtkBoundingBox::GetDiagonalLength()\n"},
  {"GetMaximumSearchRadiusTolerance", PyvtkProjectMarkupsCurvePointsFilter_GetMaximumSearchRadiusTolerance, METH_VARARGS,
   "GetMaximumSearchRadiusTolerance(self) -> float\nC++: double GetMaximumSearchRadiusTolerance()\n\n"},
  {"SetInputData", PyvtkProjectMarkupsCurvePointsFilter_SetInputData, METH_VARARGS,
   "SetInputData(self, __a:vtkDataObject) -> None\nC++: void SetInputData(vtkDataObject *)\nSetInputData(self, __a:int, __b:vtkDataObject) -> None\nC++: void SetInputData(int, vtkDataObject *)\n\nAssign a data object as input. Note that this method does not\nestablish a pipeline connection. Use SetInputConnection() to\nsetup a pipeline connection.\n"},
  {"SetInputConnection", PyvtkProjectMarkupsCurvePointsFilter_SetInputConnection, METH_VARARGS,
   "SetInputConnection(self, port:int, input:vtkAlgorithmOutput)\n    -> None\nC++: virtual void SetInputConnection(int port,\n    vtkAlgorithmOutput *input)\nSetInputConnection(self, input:vtkAlgorithmOutput) -> None\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nSet the connection for the given input port index.  Each input\nport of a filter has a specific purpose.  A port may have zero or\nmore connections and the required number is specified by each\nfilter.  Setting the connection with this method removes all\nother connections from the port.  To add more than one connection\nuse AddInputConnection().\n\n* The input for the connection is the output port of another\n* filter, which is obtained with GetOutputPort().  Typical usage\n  is\n\n* filter2->SetInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProjectMarkupsCurvePointsFilter_Doc =
  "vtkProjectMarkupsCurvePointsFilter - Projects curve points from a\nvtkMRMLMarkupsCurveNode to the surface of a model.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "If the inputCurveNode set by SetInputCurveNode does not have a\n"
  "surface constraint node, this filter will act as a pass through and\n"
  "leave the points unchanged.\n\n"
  "The intended use is for vtkMRMLMarkupsCurveNode to project generated\n"
  "points along a curve to a surface. It is expected that the points\n"
  "given to SetInputData/SetInputConnection are actually along the curve\n"
  "defined by the curve node's control point positions world.\n\n"
  "This class is not meant to be a general purpose point projection\n"
  "filter.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProjectMarkupsCurvePointsFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkProjectMarkupsCurvePointsFilter", // tp_name
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
  PyvtkProjectMarkupsCurvePointsFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProjectMarkupsCurvePointsFilter_StaticNew()
{
  return vtkProjectMarkupsCurvePointsFilter::New();
}

PyObject *PyvtkProjectMarkupsCurvePointsFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProjectMarkupsCurvePointsFilter_Type, PyvtkProjectMarkupsCurvePointsFilter_Methods,
    "vtkProjectMarkupsCurvePointsFilter",
 &PyvtkProjectMarkupsCurvePointsFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProjectMarkupsCurvePointsFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProjectMarkupsCurvePointsFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProjectMarkupsCurvePointsFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

