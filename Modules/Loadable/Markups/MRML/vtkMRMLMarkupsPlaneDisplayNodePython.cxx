// python wrapper for vtkMRMLMarkupsPlaneDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMRMLMarkupsPlaneDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsPlaneDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsPlaneDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLMarkupsDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLMarkupsDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLMarkupsDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsPlaneDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsPlaneDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsPlaneDisplayNode *tempr = vtkMRMLMarkupsPlaneDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsPlaneDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsPlaneDisplayNode::NewInstance());

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
PyvtkMRMLMarkupsPlaneDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsPlaneDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsPlaneDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLMarkupsPlaneDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLMarkupsPlaneDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLMarkupsPlaneDisplayNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_SetNormalVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalVisibility(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneDisplayNode::SetNormalVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_GetNormalVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNormalVisibility() :
      op->vtkMRMLMarkupsPlaneDisplayNode::GetNormalVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_NormalVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalVisibilityOn();
    }
    else
    {
      op->vtkMRMLMarkupsPlaneDisplayNode::NormalVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_NormalVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalVisibilityOff();
    }
    else
    {
      op->vtkMRMLMarkupsPlaneDisplayNode::NormalVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_SetNormalOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalOpacity(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsPlaneDisplayNode::SetNormalOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsPlaneDisplayNode_GetNormalOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsPlaneDisplayNode *op = static_cast<vtkMRMLMarkupsPlaneDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNormalOpacity() :
      op->vtkMRMLMarkupsPlaneDisplayNode::GetNormalOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsPlaneDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsPlaneDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsPlaneDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsPlaneDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsPlaneDisplayNode\nC++: static vtkMRMLMarkupsPlaneDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsPlaneDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsPlaneDisplayNode\nC++: vtkMRMLMarkupsPlaneDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsPlaneDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsPlaneDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLMarkupsPlaneDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"GetNodeTagName", PyvtkMRMLMarkupsPlaneDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Markups)\n"},
  {"HasCopyContent", PyvtkMRMLMarkupsPlaneDisplayNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"SetNormalVisibility", PyvtkMRMLMarkupsPlaneDisplayNode_SetNormalVisibility, METH_VARARGS,
   "SetNormalVisibility(self, _arg:bool) -> None\nC++: virtual void SetNormalVisibility(bool _arg)\n\nGet/Set the visibility of the plane normal arrow.\n"},
  {"GetNormalVisibility", PyvtkMRMLMarkupsPlaneDisplayNode_GetNormalVisibility, METH_VARARGS,
   "GetNormalVisibility(self) -> bool\nC++: virtual bool GetNormalVisibility()\n\nGet/Set the visibility of the plane normal arrow.\n"},
  {"NormalVisibilityOn", PyvtkMRMLMarkupsPlaneDisplayNode_NormalVisibilityOn, METH_VARARGS,
   "NormalVisibilityOn(self) -> None\nC++: virtual void NormalVisibilityOn()\n\nGet/Set the visibility of the plane normal arrow.\n"},
  {"NormalVisibilityOff", PyvtkMRMLMarkupsPlaneDisplayNode_NormalVisibilityOff, METH_VARARGS,
   "NormalVisibilityOff(self) -> None\nC++: virtual void NormalVisibilityOff()\n\nGet/Set the visibility of the plane normal arrow.\n"},
  {"SetNormalOpacity", PyvtkMRMLMarkupsPlaneDisplayNode_SetNormalOpacity, METH_VARARGS,
   "SetNormalOpacity(self, _arg:float) -> None\nC++: virtual void SetNormalOpacity(double _arg)\n\nGet/Set the opacity of the plane normal arrow.\n"},
  {"GetNormalOpacity", PyvtkMRMLMarkupsPlaneDisplayNode_GetNormalOpacity, METH_VARARGS,
   "GetNormalOpacity(self) -> float\nC++: virtual double GetNormalOpacity()\n\nGet/Set the opacity of the plane normal arrow.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsPlaneDisplayNode_Doc =
  "vtkMRMLMarkupsPlaneDisplayNode - MRML node to represent display\nproperties for markups Plane\n\n"
  "Superclass: vtkMRMLMarkupsDisplayNode\n\n"
  "Adjusts default display parameters for Plane such as fill opacity.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsPlaneDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsPlaneDisplayNode", // tp_name
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
  PyvtkMRMLMarkupsPlaneDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsPlaneDisplayNode_StaticNew()
{
  return vtkMRMLMarkupsPlaneDisplayNode::New();
}

PyObject *PyvtkMRMLMarkupsPlaneDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsPlaneDisplayNode_Type, PyvtkMRMLMarkupsPlaneDisplayNode_Methods,
    "vtkMRMLMarkupsPlaneDisplayNode",
 &PyvtkMRMLMarkupsPlaneDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLMarkupsDisplayNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 11; c++)
  {
    static const struct { const char *name; int value; }
      constants[11] = {
        { "ComponentPlane", vtkMRMLMarkupsPlaneDisplayNode::ComponentPlane },
        { "ComponentPlane_Last", vtkMRMLMarkupsPlaneDisplayNode::ComponentPlane_Last },
        { "HandleLEdge", vtkMRMLMarkupsPlaneDisplayNode::HandleLEdge },
        { "HandleREdge", vtkMRMLMarkupsPlaneDisplayNode::HandleREdge },
        { "HandlePEdge", vtkMRMLMarkupsPlaneDisplayNode::HandlePEdge },
        { "HandleAEdge", vtkMRMLMarkupsPlaneDisplayNode::HandleAEdge },
        { "HandleLPCorner", vtkMRMLMarkupsPlaneDisplayNode::HandleLPCorner },
        { "HandleRPCorner", vtkMRMLMarkupsPlaneDisplayNode::HandleRPCorner },
        { "HandleLACorner", vtkMRMLMarkupsPlaneDisplayNode::HandleLACorner },
        { "HandleRACorner", vtkMRMLMarkupsPlaneDisplayNode::HandleRACorner },
        { "HandlePlane_Last", vtkMRMLMarkupsPlaneDisplayNode::HandlePlane_Last },
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

void PyVTKAddFile_vtkMRMLMarkupsPlaneDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsPlaneDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsPlaneDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

