// python wrapper for vtkMRMLSliceIntersectionRepresentation2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSliceIntersectionRepresentation2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSliceIntersectionRepresentation2D(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSliceIntersectionRepresentation2D_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceIntersectionRepresentation2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSliceIntersectionRepresentation2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSliceIntersectionRepresentation2D *tempr = vtkMRMLSliceIntersectionRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceIntersectionRepresentation2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSliceIntersectionRepresentation2D::NewInstance());

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
PyvtkMRMLSliceIntersectionRepresentation2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSliceIntersectionRepresentation2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSliceIntersectionRepresentation2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_SetSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  vtkMRMLSliceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode"))
  {
    if (ap.IsBound())
    {
      op->SetSliceNode(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionRepresentation2D::SetSliceNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_GetSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceNode *tempr = (ap.IsBound() ?
      op->GetSliceNode() :
      op->vtkMRMLSliceIntersectionRepresentation2D::GetSliceNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_AddIntersectingSliceLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntersectingSliceLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  vtkMRMLSliceLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceLogic"))
  {
    if (ap.IsBound())
    {
      op->AddIntersectingSliceLogic(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionRepresentation2D::AddIntersectingSliceLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_RemoveIntersectingSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIntersectingSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  vtkMRMLSliceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode"))
  {
    if (ap.IsBound())
    {
      op->RemoveIntersectingSliceNode(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionRepresentation2D::RemoveIntersectingSliceNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_UpdateIntersectingSliceNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateIntersectingSliceNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateIntersectingSliceNodes();
    }
    else
    {
      op->vtkMRMLSliceIntersectionRepresentation2D::UpdateIntersectingSliceNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_RemoveAllIntersectingSliceNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIntersectingSliceNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllIntersectingSliceNodes();
    }
    else
    {
      op->vtkMRMLSliceIntersectionRepresentation2D::RemoveAllIntersectingSliceNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionRepresentation2D::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionRepresentation2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkMRMLSliceIntersectionRepresentation2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_SetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  vtkMRMLApplicationLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLApplicationLogic"))
  {
    if (ap.IsBound())
    {
      op->SetMRMLApplicationLogic(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionRepresentation2D::SetMRMLApplicationLogic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_GetMRMLApplicationLogic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMRMLApplicationLogic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLApplicationLogic *tempr = (ap.IsBound() ?
      op->GetMRMLApplicationLogic() :
      op->vtkMRMLSliceIntersectionRepresentation2D::GetMRMLApplicationLogic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_GetSliceIntersectionPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIntersectionPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSliceIntersectionPoint() :
      op->vtkMRMLSliceIntersectionRepresentation2D::GetSliceIntersectionPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionRepresentation2D_TransformIntersectingSlices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformIntersectingSlices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionRepresentation2D *op = static_cast<vtkMRMLSliceIntersectionRepresentation2D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->TransformIntersectingSlices(temp0);
    }
    else
    {
      op->vtkMRMLSliceIntersectionRepresentation2D::TransformIntersectingSlices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSliceIntersectionRepresentation2D_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSliceIntersectionRepresentation2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkMRMLSliceIntersectionRepresentation2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkMRMLSliceIntersectionRepresentation2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLSliceIntersectionRepresentation2D\nC++: static vtkMRMLSliceIntersectionRepresentation2D *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkMRMLSliceIntersectionRepresentation2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSliceIntersectionRepresentation2D\nC++: vtkMRMLSliceIntersectionRepresentation2D *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSliceIntersectionRepresentation2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nStandard methods for instances of this class.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSliceIntersectionRepresentation2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nStandard methods for instances of this class.\n"},
  {"SetSliceNode", PyvtkMRMLSliceIntersectionRepresentation2D_SetSliceNode, METH_VARARGS,
   "SetSliceNode(self, sliceNode:vtkMRMLSliceNode) -> None\nC++: void SetSliceNode(vtkMRMLSliceNode *sliceNode)\n\n"},
  {"GetSliceNode", PyvtkMRMLSliceIntersectionRepresentation2D_GetSliceNode, METH_VARARGS,
   "GetSliceNode(self) -> vtkMRMLSliceNode\nC++: vtkMRMLSliceNode *GetSliceNode()\n\n"},
  {"AddIntersectingSliceLogic", PyvtkMRMLSliceIntersectionRepresentation2D_AddIntersectingSliceLogic, METH_VARARGS,
   "AddIntersectingSliceLogic(self, sliceLogic:vtkMRMLSliceLogic)\n    -> None\nC++: void AddIntersectingSliceLogic(vtkMRMLSliceLogic *sliceLogic)\n\n"},
  {"RemoveIntersectingSliceNode", PyvtkMRMLSliceIntersectionRepresentation2D_RemoveIntersectingSliceNode, METH_VARARGS,
   "RemoveIntersectingSliceNode(self, sliceNode:vtkMRMLSliceNode)\n    -> None\nC++: void RemoveIntersectingSliceNode(vtkMRMLSliceNode *sliceNode)\n\n"},
  {"UpdateIntersectingSliceNodes", PyvtkMRMLSliceIntersectionRepresentation2D_UpdateIntersectingSliceNodes, METH_VARARGS,
   "UpdateIntersectingSliceNodes(self) -> None\nC++: void UpdateIntersectingSliceNodes()\n\n"},
  {"RemoveAllIntersectingSliceNodes", PyvtkMRMLSliceIntersectionRepresentation2D_RemoveAllIntersectingSliceNodes, METH_VARARGS,
   "RemoveAllIntersectingSliceNodes(self) -> None\nC++: void RemoveAllIntersectingSliceNodes()\n\n"},
  {"GetActors2D", PyvtkMRMLSliceIntersectionRepresentation2D_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkMRMLSliceIntersectionRepresentation2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"RenderOverlay", PyvtkMRMLSliceIntersectionRepresentation2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"SetMRMLApplicationLogic", PyvtkMRMLSliceIntersectionRepresentation2D_SetMRMLApplicationLogic, METH_VARARGS,
   "SetMRMLApplicationLogic(self, __a:vtkMRMLApplicationLogic) -> None\nC++: void SetMRMLApplicationLogic(vtkMRMLApplicationLogic *)\n\n"},
  {"GetMRMLApplicationLogic", PyvtkMRMLSliceIntersectionRepresentation2D_GetMRMLApplicationLogic, METH_VARARGS,
   "GetMRMLApplicationLogic(self) -> vtkMRMLApplicationLogic\nC++: virtual vtkMRMLApplicationLogic *GetMRMLApplicationLogic()\n\n"},
  {"GetSliceIntersectionPoint", PyvtkMRMLSliceIntersectionRepresentation2D_GetSliceIntersectionPoint, METH_VARARGS,
   "GetSliceIntersectionPoint(self) -> (float, float, float)\nC++: double *GetSliceIntersectionPoint()\n\n"},
  {"TransformIntersectingSlices", PyvtkMRMLSliceIntersectionRepresentation2D_TransformIntersectingSlices, METH_VARARGS,
   "TransformIntersectingSlices(self,\n    rotatedSliceToSliceTransformMatrix:vtkMatrix4x4) -> None\nC++: void TransformIntersectingSlices(\n    vtkMatrix4x4 *rotatedSliceToSliceTransformMatrix)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSliceIntersectionRepresentation2D_Doc =
  "vtkMRMLSliceIntersectionRepresentation2D - represent intersections of\nother slice views in the current slice view\n\n"
  "Superclass: vtkMRMLAbstractWidgetRepresentation\n\n"
  "@sa\n"
  "vtkSliceIntersectionWidget vtkWidgetRepresentation vtkAbstractWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceIntersectionRepresentation2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLSliceIntersectionRepresentation2D", // tp_name
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
  PyvtkMRMLSliceIntersectionRepresentation2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSliceIntersectionRepresentation2D_StaticNew()
{
  return vtkMRMLSliceIntersectionRepresentation2D::New();
}

PyObject *PyvtkMRMLSliceIntersectionRepresentation2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSliceIntersectionRepresentation2D_Type, PyvtkMRMLSliceIntersectionRepresentation2D_Methods,
    "vtkMRMLSliceIntersectionRepresentation2D",
 &PyvtkMRMLSliceIntersectionRepresentation2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractWidgetRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSliceIntersectionRepresentation2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSliceIntersectionRepresentation2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSliceIntersectionRepresentation2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

