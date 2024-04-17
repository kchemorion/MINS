// python wrapper for vtkSlicerSubjectHierarchyModuleLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerSubjectHierarchyModuleLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerSubjectHierarchyModuleLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerSubjectHierarchyModuleLogic_ClassNew(); }


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerSubjectHierarchyModuleLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSubjectHierarchyModuleLogic *op = static_cast<vtkSlicerSubjectHierarchyModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerSubjectHierarchyModuleLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerSubjectHierarchyModuleLogic *tempr = vtkSlicerSubjectHierarchyModuleLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSubjectHierarchyModuleLogic *op = static_cast<vtkSlicerSubjectHierarchyModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerSubjectHierarchyModuleLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerSubjectHierarchyModuleLogic::NewInstance());

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
PyvtkSlicerSubjectHierarchyModuleLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerSubjectHierarchyModuleLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSubjectHierarchyModuleLogic *op = static_cast<vtkSlicerSubjectHierarchyModuleLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerSubjectHierarchyModuleLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_InsertDicomSeriesInHierarchy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "InsertDicomSeriesInHierarchy");

  vtkMRMLSubjectHierarchyNode *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMRMLSubjectHierarchyNode") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    long long tempr = vtkSlicerSubjectHierarchyModuleLogic::InsertDicomSeriesInHierarchy(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_AreItemsInSameBranch(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AreItemsInSameBranch");

  vtkMRMLSubjectHierarchyNode *temp0 = nullptr;
  long long temp1;
  long long temp2;
  std::string temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMRMLSubjectHierarchyNode") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    long long tempr = vtkSlicerSubjectHierarchyModuleLogic::AreItemsInSameBranch(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_AreNodesInSameBranch(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AreNodesInSameBranch");

  vtkMRMLNode *temp0 = nullptr;
  vtkMRMLNode *temp1 = nullptr;
  std::string temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      ap.GetVTKObject(temp1, "vtkMRMLNode") &&
      ap.GetValue(temp2))
  {
    long long tempr = vtkSlicerSubjectHierarchyModuleLogic::AreNodesInSameBranch(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_IsPatientTag(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsPatientTag");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkSlicerSubjectHierarchyModuleLogic::IsPatientTag(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_IsStudyTag(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsStudyTag");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkSlicerSubjectHierarchyModuleLogic::IsStudyTag(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_TransformBranch(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformBranch");

  vtkMRMLSubjectHierarchyNode *temp0 = nullptr;
  long long temp1;
  vtkMRMLTransformNode *temp2 = nullptr;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkMRMLSubjectHierarchyNode") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkMRMLTransformNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkSlicerSubjectHierarchyModuleLogic::TransformBranch(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_HardenTransformOnBranch(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HardenTransformOnBranch");

  vtkMRMLSubjectHierarchyNode *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSubjectHierarchyNode") &&
      ap.GetValue(temp1))
  {
    vtkSlicerSubjectHierarchyModuleLogic::HardenTransformOnBranch(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_CloneSubjectHierarchyItem(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CloneSubjectHierarchyItem");

  vtkMRMLSubjectHierarchyNode *temp0 = nullptr;
  long long temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLSubjectHierarchyNode") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    long long tempr = vtkSlicerSubjectHierarchyModuleLogic::CloneSubjectHierarchyItem(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerSubjectHierarchyModuleLogic_GetSubjectHierarchyNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubjectHierarchyNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerSubjectHierarchyModuleLogic *op = static_cast<vtkSlicerSubjectHierarchyModuleLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSubjectHierarchyNode *tempr = (ap.IsBound() ?
      op->GetSubjectHierarchyNode() :
      op->vtkSlicerSubjectHierarchyModuleLogic::GetSubjectHierarchyNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerSubjectHierarchyModuleLogic_Methods[] = {
  {"IsTypeOf", PyvtkSlicerSubjectHierarchyModuleLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerSubjectHierarchyModuleLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerSubjectHierarchyModuleLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkSlicerSubjectHierarchyModuleLogic\nC++: static vtkSlicerSubjectHierarchyModuleLogic *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerSubjectHierarchyModuleLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerSubjectHierarchyModuleLogic\nC++: vtkSlicerSubjectHierarchyModuleLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerSubjectHierarchyModuleLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerSubjectHierarchyModuleLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"InsertDicomSeriesInHierarchy", PyvtkSlicerSubjectHierarchyModuleLogic_InsertDicomSeriesInHierarchy, METH_VARARGS,
   "InsertDicomSeriesInHierarchy(shNode:vtkMRMLSubjectHierarchyNode,\n    subjectId:str, studyInstanceUID:str, seriesInstanceUID:str)\n    -> int\nC++: static vtkIdType InsertDicomSeriesInHierarchy(\n    vtkMRMLSubjectHierarchyNode *shNode, const char *subjectId,\n    const char *studyInstanceUID, const char *seriesInstanceUID)\n\nPlace series in subject hierarchy. Create subject and study node\nif needed\n\\return Series subject hierarchy node of the inserted series\n"},
  {"AreItemsInSameBranch", PyvtkSlicerSubjectHierarchyModuleLogic_AreItemsInSameBranch, METH_VARARGS,
   "AreItemsInSameBranch(shNode:vtkMRMLSubjectHierarchyNode,\n    item1:int, item2:int, lowestCommonLevel:str) -> int\nC++: static vtkIdType AreItemsInSameBranch(\n    vtkMRMLSubjectHierarchyNode *shNode, vtkIdType item1,\n    vtkIdType item2, std::string lowestCommonLevel)\n\nDetermine if two subject hierarchy items are in the same branch\n(share the same parent)\n\\param shNode Subject hierarchy to search in\n\\param item1 First item to check\n\\param item2 Second item to check\n\\param lowestCommonLevel Lowest level on which they have to share\nan ancestor\n\\return The common parent if the two items share a parent  on the\nspecified level, INVALID_ITEM_ID otherwise\n"},
  {"AreNodesInSameBranch", PyvtkSlicerSubjectHierarchyModuleLogic_AreNodesInSameBranch, METH_VARARGS,
   "AreNodesInSameBranch(node1:vtkMRMLNode, node2:vtkMRMLNode,\n    lowestCommonLevel:str) -> int\nC++: static vtkIdType AreNodesInSameBranch(vtkMRMLNode *node1,\n    vtkMRMLNode *node2, std::string lowestCommonLevel)\n\nDetermine if two data nodes are in the same branch in subject\nhierarchy (share the same parent)\n\\param node1 First node to check. Can be subject hierarchy node\n    or a node associated with one\n\\param node2 Second node to check\n\\param lowestCommonLevel Lowest level on which they have to share\nan ancestor\n\\return The common parent if the two nodes share a parent on the\n    specified level, INVALID_ITEM_ID otherwise\n"},
  {"IsPatientTag", PyvtkSlicerSubjectHierarchyModuleLogic_IsPatientTag, METH_VARARGS,
   "IsPatientTag(tagName:str) -> bool\nC++: static bool IsPatientTag(std::string tagName)\n\nDetermine if a tag name is a patient tag (not attribute, but tag\n- without prefix!)\n"},
  {"IsStudyTag", PyvtkSlicerSubjectHierarchyModuleLogic_IsStudyTag, METH_VARARGS,
   "IsStudyTag(tagName:str) -> bool\nC++: static bool IsStudyTag(std::string tagName)\n\nDetermine if a tag name is a study tag (not attribute, but tag -\nwithout prefix!)\n"},
  {"TransformBranch", PyvtkSlicerSubjectHierarchyModuleLogic_TransformBranch, METH_VARARGS,
   "TransformBranch(shNode:vtkMRMLSubjectHierarchyNode, itemID:int,\n    transformNode:vtkMRMLTransformNode,\n    hardenExistingTransforms:bool=True) -> None\nC++: static void TransformBranch(\n    vtkMRMLSubjectHierarchyNode *shNode, vtkIdType itemID,\n    vtkMRMLTransformNode *transformNode,\n    bool hardenExistingTransforms=true)\n\nApply transform node as parent transform on subject hierarchy\nnode and on all children, recursively\n\\param shNode Subject hierarchy where item can be found\n\\param itemID Subject hierarchy item defining branch to apply\n    transform on\n\\param transformNode Transform node to apply. If nullptr, then\n    any existing transform is removed\n\\param hardenExistingTransforms Mode of handling already\n    transformed nodes. If true (default), then the possible\n    parent transforms\n  of target nodes are hardened before applying the specified\ntransform. If false, then the already applied parent transforms\nare\n  transformed with the specified transform (Note: this latter\napproach may result in unwanted transformations of other nodes)\n"},
  {"HardenTransformOnBranch", PyvtkSlicerSubjectHierarchyModuleLogic_HardenTransformOnBranch, METH_VARARGS,
   "HardenTransformOnBranch(shNode:vtkMRMLSubjectHierarchyNode,\n    itemID:int) -> None\nC++: static void HardenTransformOnBranch(\n    vtkMRMLSubjectHierarchyNode *shNode, vtkIdType itemID)\n\nHarden transform on subject hierarchy item and on all children,\nrecursively\n\\param shNode Subject hierarchy where item can be found\n\\param itemID Subject hierarchy item defining branch to harden\n    transform on\n"},
  {"CloneSubjectHierarchyItem", PyvtkSlicerSubjectHierarchyModuleLogic_CloneSubjectHierarchyItem, METH_VARARGS,
   "CloneSubjectHierarchyItem(shNode:vtkMRMLSubjectHierarchyNode,\n    itemID:int, name:str=...) -> int\nC++: static vtkIdType CloneSubjectHierarchyItem(\n    vtkMRMLSubjectHierarchyNode *shNode, vtkIdType itemID,\n    const char *name=nullptr)\n\nClone subject hierarchy node, the associated data node, and its\ndisplay and storage nodes\n\\param itemID Subject hierarchy item to clone\n\\param name Custom name. If omitted, then default postfix is\n    added from \\sa node\n\\return Clone subject hierarchy node\n"},
  {"GetSubjectHierarchyNode", PyvtkSlicerSubjectHierarchyModuleLogic_GetSubjectHierarchyNode, METH_VARARGS,
   "GetSubjectHierarchyNode(self) -> vtkMRMLSubjectHierarchyNode\nC++: vtkMRMLSubjectHierarchyNode *GetSubjectHierarchyNode()\n\nConvenience function to get subject hierarchy node from the logic\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerSubjectHierarchyModuleLogic_Doc =
  "vtkSlicerSubjectHierarchyModuleLogic - slicer logic class for volumes\nmanipulation\n\n"
  "Superclass: vtkSlicerModuleLogic\n\n"
  "This class manages the logic associated with reading, saving, and\n"
  "changing propertied of the volumes\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerSubjectHierarchyModuleLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerSubjectHierarchyModuleLogicPython.vtkSlicerSubjectHierarchyModuleLogic", // tp_name
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
  PyvtkSlicerSubjectHierarchyModuleLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerSubjectHierarchyModuleLogic_StaticNew()
{
  return vtkSlicerSubjectHierarchyModuleLogic::New();
}

PyObject *PyvtkSlicerSubjectHierarchyModuleLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerSubjectHierarchyModuleLogic_Type, PyvtkSlicerSubjectHierarchyModuleLogic_Methods,
    "vtkSlicerSubjectHierarchyModuleLogic",
 &PyvtkSlicerSubjectHierarchyModuleLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSlicerModuleLogic");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerSubjectHierarchyModuleLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerSubjectHierarchyModuleLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerSubjectHierarchyModuleLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

