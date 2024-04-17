// python wrapper for vtkSlicerColorLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerColorLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerColorLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerColorLogic_ClassNew(); }


static PyObject *
PyvtkSlicerColorLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerColorLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerColorLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerColorLogic *op = static_cast<vtkSlicerColorLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerColorLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerColorLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerColorLogic *tempr = vtkSlicerColorLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerColorLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerColorLogic *op = static_cast<vtkSlicerColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerColorLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerColorLogic::NewInstance());

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
PyvtkSlicerColorLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerColorLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerColorLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerColorLogic *op = static_cast<vtkSlicerColorLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerColorLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerColorLogic_GetDefaultLabelMapColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultLabelMapColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerColorLogic *op = static_cast<vtkSlicerColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultLabelMapColorNodeID() :
      op->vtkSlicerColorLogic::GetDefaultLabelMapColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerColorLogic_GetDefaultEditorColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultEditorColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerColorLogic *op = static_cast<vtkSlicerColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultEditorColorNodeID() :
      op->vtkSlicerColorLogic::GetDefaultEditorColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerColorLogic_GetDefaultChartColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultChartColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerColorLogic *op = static_cast<vtkSlicerColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultChartColorNodeID() :
      op->vtkSlicerColorLogic::GetDefaultChartColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerColorLogic_FindDefaultColorFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindDefaultColorFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerColorLogic *op = static_cast<vtkSlicerColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->FindDefaultColorFiles() :
      op->vtkSlicerColorLogic::FindDefaultColorFiles());

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
PyvtkSlicerColorLogic_FindUserColorFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindUserColorFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerColorLogic *op = static_cast<vtkSlicerColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->FindUserColorFiles() :
      op->vtkSlicerColorLogic::FindUserColorFiles());

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
PyvtkSlicerColorLogic_AddDefaultColorLegendDisplayNode_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AddDefaultColorLegendDisplayNode");

  vtkMRMLDisplayableNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode"))
  {
    vtkMRMLColorLegendDisplayNode *tempr = vtkSlicerColorLogic::AddDefaultColorLegendDisplayNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerColorLogic_AddDefaultColorLegendDisplayNode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AddDefaultColorLegendDisplayNode");

  vtkMRMLDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayNode"))
  {
    vtkMRMLColorLegendDisplayNode *tempr = vtkSlicerColorLogic::AddDefaultColorLegendDisplayNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerColorLogic_AddDefaultColorLegendDisplayNode_Methods[] = {
  {"AddDefaultColorLegendDisplayNode", PyvtkSlicerColorLogic_AddDefaultColorLegendDisplayNode_s1, METH_VARARGS | METH_STATIC,
   "V *vtkMRMLDisplayableNode"},
  {"AddDefaultColorLegendDisplayNode", PyvtkSlicerColorLogic_AddDefaultColorLegendDisplayNode_s2, METH_VARARGS | METH_STATIC,
   "V *vtkMRMLDisplayNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSlicerColorLogic_AddDefaultColorLegendDisplayNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSlicerColorLogic_AddDefaultColorLegendDisplayNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddDefaultColorLegendDisplayNode");
  return nullptr;
}


static PyObject *
PyvtkSlicerColorLogic_GetNthColorLegendDisplayNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNthColorLegendDisplayNode");

  vtkMRMLDisplayableNode *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode") &&
      ap.GetValue(temp1))
  {
    vtkMRMLColorLegendDisplayNode *tempr = vtkSlicerColorLogic::GetNthColorLegendDisplayNode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerColorLogic_GetNumberOfColorLegendDisplayNodes(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfColorLegendDisplayNodes");

  vtkMRMLDisplayableNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode"))
  {
    int tempr = vtkSlicerColorLogic::GetNumberOfColorLegendDisplayNodes(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerColorLogic_GetColorLegendDisplayNode_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetColorLegendDisplayNode");

  vtkMRMLDisplayableNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableNode"))
  {
    vtkMRMLColorLegendDisplayNode *tempr = vtkSlicerColorLogic::GetColorLegendDisplayNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerColorLogic_GetColorLegendDisplayNode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetColorLegendDisplayNode");

  vtkMRMLDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayNode"))
  {
    vtkMRMLColorLegendDisplayNode *tempr = vtkSlicerColorLogic::GetColorLegendDisplayNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerColorLogic_GetColorLegendDisplayNode_Methods[] = {
  {"GetColorLegendDisplayNode", PyvtkSlicerColorLogic_GetColorLegendDisplayNode_s1, METH_VARARGS | METH_STATIC,
   "V *vtkMRMLDisplayableNode"},
  {"GetColorLegendDisplayNode", PyvtkSlicerColorLogic_GetColorLegendDisplayNode_s2, METH_VARARGS | METH_STATIC,
   "V *vtkMRMLDisplayNode"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSlicerColorLogic_GetColorLegendDisplayNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSlicerColorLogic_GetColorLegendDisplayNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColorLegendDisplayNode");
  return nullptr;
}

static PyMethodDef PyvtkSlicerColorLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerColorLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerColorLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerColorLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerColorLogic\nC++: static vtkSlicerColorLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerColorLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerColorLogic\nC++: vtkSlicerColorLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerColorLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerColorLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDefaultLabelMapColorNodeID", PyvtkSlicerColorLogic_GetDefaultLabelMapColorNodeID, METH_VARARGS,
   "GetDefaultLabelMapColorNodeID(self) -> str\nC++: const char *GetDefaultLabelMapColorNodeID() override;\n\nReturn a default color node id for a label map\n"},
  {"GetDefaultEditorColorNodeID", PyvtkSlicerColorLogic_GetDefaultEditorColorNodeID, METH_VARARGS,
   "GetDefaultEditorColorNodeID(self) -> str\nC++: const char *GetDefaultEditorColorNodeID() override;\n\nReturn a default color node id for the editor\n"},
  {"GetDefaultChartColorNodeID", PyvtkSlicerColorLogic_GetDefaultChartColorNodeID, METH_VARARGS,
   "GetDefaultChartColorNodeID(self) -> str\nC++: const char *GetDefaultChartColorNodeID() override;\n\nReturn a default color node id for the charts\n"},
  {"FindDefaultColorFiles", PyvtkSlicerColorLogic_FindDefaultColorFiles, METH_VARARGS,
   "FindDefaultColorFiles(self) -> (str, ...)\nC++: std::vector<std::string> FindDefaultColorFiles() override;\n\nlook for color files in the Base/Logic/Resources/ColorFiles\ndirectory and put their names in the ColorFiles list. Look in any\nuser defined color files paths and put them in the UserColorFiles\nlist.\n"},
  {"FindUserColorFiles", PyvtkSlicerColorLogic_FindUserColorFiles, METH_VARARGS,
   "FindUserColorFiles(self) -> (str, ...)\nC++: std::vector<std::string> FindUserColorFiles() override;\n\n"},
  {"AddDefaultColorLegendDisplayNode", PyvtkSlicerColorLogic_AddDefaultColorLegendDisplayNode, METH_VARARGS,
   "AddDefaultColorLegendDisplayNode(\n    displayableNode:vtkMRMLDisplayableNode)\n    -> vtkMRMLColorLegendDisplayNode\nC++: static vtkMRMLColorLegendDisplayNode *AddDefaultColorLegendDisplayNode(\n    vtkMRMLDisplayableNode *displayableNode)\nAddDefaultColorLegendDisplayNode(displayNode:vtkMRMLDisplayNode)\n    -> vtkMRMLColorLegendDisplayNode\nC++: static vtkMRMLColorLegendDisplayNode *AddDefaultColorLegendDisplayNode(\n    vtkMRMLDisplayNode *displayNode)\n\nCreate a color legend display node for a displayable node and\nobserve it. If there is already a color legend display node for\nthe first (non-color-legend) display node then that is returned.\n@param displayableNode - displayable node for which color legend\n    should be created.\n@return the newly created (or already existing) color legend\n    display node. Nullptr in case of an error.\n"},
  {"GetNthColorLegendDisplayNode", PyvtkSlicerColorLogic_GetNthColorLegendDisplayNode, METH_VARARGS,
   "GetNthColorLegendDisplayNode(\n    displayableNode:vtkMRMLDisplayableNode, n:int)\n    -> vtkMRMLColorLegendDisplayNode\nC++: static vtkMRMLColorLegendDisplayNode *GetNthColorLegendDisplayNode(\n    vtkMRMLDisplayableNode *displayableNode, int n)\n\nReturn n-th color legend display node.\n\\param displayableNode displayable node with color legend display\nnodes\n\\param n color legend node index\n\\return already existing color legend display node (or nullptr if\nthere is no such display node)\n\\sa GetNumberOfColorLegendDisplayNodes\n"},
  {"GetNumberOfColorLegendDisplayNodes", PyvtkSlicerColorLogic_GetNumberOfColorLegendDisplayNodes, METH_VARARGS,
   "GetNumberOfColorLegendDisplayNodes(\n    displayableNode:vtkMRMLDisplayableNode) -> int\nC++: static int GetNumberOfColorLegendDisplayNodes(\n    vtkMRMLDisplayableNode *displayableNode)\n\nReturn number of color legend display nodes.\n\\sa GetNthColorLegendDisplayNode\n"},
  {"GetColorLegendDisplayNode", PyvtkSlicerColorLogic_GetColorLegendDisplayNode, METH_VARARGS,
   "GetColorLegendDisplayNode(displayableNode:vtkMRMLDisplayableNode)\n    -> vtkMRMLColorLegendDisplayNode\nC++: static vtkMRMLColorLegendDisplayNode *GetColorLegendDisplayNode(\n    vtkMRMLDisplayableNode *displayableNode)\nGetColorLegendDisplayNode(displayNode:vtkMRMLDisplayNode)\n    -> vtkMRMLColorLegendDisplayNode\nC++: static vtkMRMLColorLegendDisplayNode *GetColorLegendDisplayNode(\n    vtkMRMLDisplayNode *displayNode)\n\nGet color legend node corresponding to the first valid display\nnode of the input displayable node. Valid display node is any\nnon-color-legend display node. If not found then nullptr is\nreturned.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerColorLogic_Doc =
  "vtkSlicerColorLogic - no description provided.\n\n"
  "Superclass: vtkMRMLColorLogic\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerColorLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerColorsModuleLogicPython.vtkSlicerColorLogic", // tp_name
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
  PyvtkSlicerColorLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerColorLogic_StaticNew()
{
  return vtkSlicerColorLogic::New();
}

PyObject *PyvtkSlicerColorLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerColorLogic_Type, PyvtkSlicerColorLogic_Methods,
    "vtkSlicerColorLogic",
 &PyvtkSlicerColorLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLColorLogic");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerColorLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerColorLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerColorLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

