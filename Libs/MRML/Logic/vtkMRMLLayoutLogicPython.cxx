// python wrapper for vtkMRMLLayoutLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLLayoutLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLLayoutLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLLayoutLogic_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractLogic_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractLogic_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractLogic_ClassNew
#endif

static PyObject *
PyvtkMRMLLayoutLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLLayoutLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutLogic *op = static_cast<vtkMRMLLayoutLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLLayoutLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLLayoutLogic *tempr = vtkMRMLLayoutLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutLogic *op = static_cast<vtkMRMLLayoutLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLLayoutLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLLayoutLogic::NewInstance());

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
PyvtkMRMLLayoutLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLLayoutLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutLogic *op = static_cast<vtkMRMLLayoutLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLLayoutLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutLogic_AddDefaultLayouts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDefaultLayouts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutLogic *op = static_cast<vtkMRMLLayoutLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddDefaultLayouts();
    }
    else
    {
      op->vtkMRMLLayoutLogic::AddDefaultLayouts();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutLogic_GetViewFromElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewFromElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutLogic *op = static_cast<vtkMRMLLayoutLogic *>(vp);

  vtkXMLDataElement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkXMLDataElement"))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->GetViewFromElement(temp0) :
      op->vtkMRMLLayoutLogic::GetViewFromElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutLogic_GetViewNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutLogic *op = static_cast<vtkMRMLLayoutLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetViewNodes() :
      op->vtkMRMLLayoutLogic::GetViewNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutLogic_GetLayoutNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutLogic *op = static_cast<vtkMRMLLayoutLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLLayoutNode *tempr = (ap.IsBound() ?
      op->GetLayoutNode() :
      op->vtkMRMLLayoutLogic::GetLayoutNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutLogic_MaximizeView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaximizeView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutLogic *op = static_cast<vtkMRMLLayoutLogic *>(vp);

  vtkMRMLAbstractViewNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLAbstractViewNode"))
  {
    if (ap.IsBound())
    {
      op->MaximizeView(temp0);
    }
    else
    {
      op->vtkMRMLLayoutLogic::MaximizeView(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutLogic_CreateMaximizedViewLayoutDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateMaximizedViewLayoutDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutLogic *op = static_cast<vtkMRMLLayoutLogic *>(vp);

  int temp0;
  vtkMRMLAbstractViewNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLAbstractViewNode"))
  {
    if (ap.IsBound())
    {
      op->CreateMaximizedViewLayoutDescription(temp0, temp1);
    }
    else
    {
      op->vtkMRMLLayoutLogic::CreateMaximizedViewLayoutDescription(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLLayoutLogic_GetMaximizedViewLayoutDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximizedViewLayoutDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLLayoutLogic *op = static_cast<vtkMRMLLayoutLogic *>(vp);

  vtkMRMLAbstractViewNode *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLAbstractViewNode") &&
      ap.GetValue(temp1))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetMaximizedViewLayoutDescription(temp0, temp1) :
      op->vtkMRMLLayoutLogic::GetMaximizedViewLayoutDescription(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLLayoutLogic_Methods[] = {
  {"IsTypeOf", PyvtkMRMLLayoutLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLLayoutLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLLayoutLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLLayoutLogic\nC++: static vtkMRMLLayoutLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLLayoutLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLLayoutLogic\nC++: vtkMRMLLayoutLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLLayoutLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLLayoutLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddDefaultLayouts", PyvtkMRMLLayoutLogic_AddDefaultLayouts, METH_VARARGS,
   "AddDefaultLayouts(self) -> None\nC++: virtual void AddDefaultLayouts()\n\nAdd all the layout descriptions of the known layouts TBD: could\nbe done in vtkMRMLLayoutNode directly... not sure what's best.\n"},
  {"GetViewFromElement", PyvtkMRMLLayoutLogic_GetViewFromElement, METH_VARARGS,
   "GetViewFromElement(self, element:vtkXMLDataElement) -> vtkMRMLNode\nC++: vtkMRMLNode *GetViewFromElement(vtkXMLDataElement *element)\n\nReturns the best node that fits the description given in the XML\nattributes in the element. The attributes should be precise\nenough to match a unique node in the scene. Returns 0 if no node\ncan be found.\n"},
  {"GetViewNodes", PyvtkMRMLLayoutLogic_GetViewNodes, METH_VARARGS,
   "GetViewNodes(self) -> vtkCollection\nC++: virtual vtkCollection *GetViewNodes()\n\nReturns the up-to-date list of all the nodes that are mapped in\nthe current layout.\n"},
  {"GetLayoutNode", PyvtkMRMLLayoutLogic_GetLayoutNode, METH_VARARGS,
   "GetLayoutNode(self) -> vtkMRMLLayoutNode\nC++: virtual vtkMRMLLayoutNode *GetLayoutNode()\n\nReturns the unique layout node of the scene. The logic scan the\nscene at first and if it can't find a layout node, it creates\none.\n"},
  {"MaximizeView", PyvtkMRMLLayoutLogic_MaximizeView, METH_VARARGS,
   "MaximizeView(self, viewToMaximize:vtkMRMLAbstractViewNode) -> None\nC++: void MaximizeView(vtkMRMLAbstractViewNode *viewToMaximize)\n\nConvenient function that creates and set a layout made of only 1\nview.\n\\sa CreateMaximizedViewLayoutDescription(),\nvtkMRMLLayoutNode::SetLayoutDescription(),\nvtkMRMLLayoutNode::SlicerLayoutCustomView,\nvtkMRMLLayoutNode::SetViewArrangement\n"},
  {"CreateMaximizedViewLayoutDescription", PyvtkMRMLLayoutLogic_CreateMaximizedViewLayoutDescription, METH_VARARGS,
   "CreateMaximizedViewLayoutDescription(self, layout:int,\n    viewToMaximize:vtkMRMLAbstractViewNode) -> None\nC++: void CreateMaximizedViewLayoutDescription(int layout,\n    vtkMRMLAbstractViewNode *viewToMaximize)\n\nCreate a layout description that maximizes a view. Note that the\nview node must be a singleton.\n\\sa MaximizeView()\n"},
  {"GetMaximizedViewLayoutDescription", PyvtkMRMLLayoutLogic_GetMaximizedViewLayoutDescription, METH_VARARGS,
   "GetMaximizedViewLayoutDescription(self,\n    viewToMaximize:vtkMRMLAbstractViewNode,\n    currentLayoutDescription:str) -> str\nC++: std::string GetMaximizedViewLayoutDescription(\n    vtkMRMLAbstractViewNode *viewToMaximize,\n    const char *currentLayoutDescription)\n\nReturns layout description that shows the specified view\nmaximized.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLLayoutLogic_Doc =
  "vtkMRMLLayoutLogic - MRML logic class for layout manipulation\n\n"
  "Superclass: vtkMRMLAbstractLogic\n\n"
  "This class manages the logic associated with reading, saving, and\n"
  "changing propertied of the colors\n\n"
  "vtkMRMLLayoutLogic is a logic that controls the layout node and the\n"
  "view nodes in a MRML scene. It ensures that at least one 3D view and\n"
  "three slice views are always in the MRML scene (after a scene is\n"
  "closed or imported). The logic keeps an up-to-date list of the\n"
  "different MRML view nodes (3D, slice ...) that are mapped into the\n"
  "layout. A typical use case would be:  vtkMRMLScene* scene =\n"
  "vtkMRMLScene::New(); vtkMRMLLayoutLogic* layoutLogic =\n"
  "vtkMRMLLayoutLogic::New(); layoutLogic->SetMRMLScene(scene);\n"
  "layoutLogic->GetLayoutNode()->SetViewArrangement(\n"
  "  vtkMRMLLayoutNode::SlicerLayoutConventionalView); vtkCollection*\n"
  "views = layoutLogic->GetViewNodes(); vtkMRMLViewNode* viewNode =\n"
  "vtkMRMLViewNode::SafeDownCast(\n"
  "  views->GetItemAsObject(0)); vtkMRMLSliceNode* redNode =\n"
  "vtkMRMLSliceNode::SafeDownCast(\n"
  "  views->GetItemAsObject(1)); vtkMRMLSliceNode* yellowNode =\n"
  "vtkMRMLSliceNode::SafeDownCast(\n"
  "  views->GetItemAsObject(2)); vtkMRMLSliceNode* greenNode =\n"
  "vtkMRMLSliceNode::SafeDownCast(\n"
  "  views->GetItemAsObject(3));  When vtkMRMLScene::Clear() is called,\n"
  "vtkMRMLLayoutNode::Copy() is called with an empty layout node, it\n"
  "sets the view arrangement to None. So when the scene is\n"
  "created/closed/imported, the view arrangement is restored to its\n"
  "previous valid layout.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLLayoutLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLLayoutLogic", // tp_name
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
  PyvtkMRMLLayoutLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLLayoutLogic_StaticNew()
{
  return vtkMRMLLayoutLogic::New();
}

PyObject *PyvtkMRMLLayoutLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLLayoutLogic_Type, PyvtkMRMLLayoutLogic_Methods,
    "vtkMRMLLayoutLogic",
 &PyvtkMRMLLayoutLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractLogic_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLLayoutLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLLayoutLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLLayoutLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

