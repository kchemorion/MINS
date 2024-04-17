// python wrapper for vtkMRMLTransformableNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLTransformableNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLTransformableNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLTransformableNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLStorableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLStorableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLStorableNode_ClassNew
#endif

static PyObject *
PyvtkMRMLTransformableNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTransformableNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLTransformableNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLTransformableNode *tempr = vtkMRMLTransformableNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTransformableNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLTransformableNode::NewInstance());

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
PyvtkMRMLTransformableNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLTransformableNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLTransformableNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = op->CreateNodeInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetNodeTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_SetAndObserveTransformNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveTransformNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetAndObserveTransformNodeID(temp0) :
      op->vtkMRMLTransformableNode::SetAndObserveTransformNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_GetParentTransformNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentTransformNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTransformNode *tempr = (ap.IsBound() ?
      op->GetParentTransformNode() :
      op->vtkMRMLTransformableNode::GetParentTransformNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->ProcessMRMLEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLTransformableNode::ProcessMRMLEvents(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_CanApplyNonLinearTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanApplyNonLinearTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanApplyNonLinearTransforms() :
      op->vtkMRMLTransformableNode::CanApplyNonLinearTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_ApplyTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->ApplyTransformMatrix(temp0);
    }
    else
    {
      op->vtkMRMLTransformableNode::ApplyTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->ApplyTransform(temp0);
    }
    else
    {
      op->vtkMRMLTransformableNode::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_TransformPointToWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPointToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformPointToWorld(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTransformableNode::TransformPointToWorld(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTransformableNode_TransformPointToWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPointToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector3d *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d") &&
      ap.GetSpecialObject(temp1, "vtkVector3d"))
  {
    if (ap.IsBound())
    {
      op->TransformPointToWorld(*temp0, *temp1);
    }
    else
    {
      op->vtkMRMLTransformableNode::TransformPointToWorld(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMRMLTransformableNode_TransformPointToWorld_Methods[] = {
  {"TransformPointToWorld", PyvtkMRMLTransformableNode_TransformPointToWorld_s1, METH_VARARGS,
   "@PP *d *d"},
  {"TransformPointToWorld", PyvtkMRMLTransformableNode_TransformPointToWorld_s2, METH_VARARGS,
   "@WW vtkVector3d &vtkVector3d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLTransformableNode_TransformPointToWorld(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLTransformableNode_TransformPointToWorld_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformPointToWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLTransformableNode_TransformPointFromWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPointFromWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformPointFromWorld(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTransformableNode::TransformPointFromWorld(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTransformableNode_TransformPointFromWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPointFromWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector3d *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d") &&
      ap.GetSpecialObject(temp1, "vtkVector3d"))
  {
    if (ap.IsBound())
    {
      op->TransformPointFromWorld(*temp0, *temp1);
    }
    else
    {
      op->vtkMRMLTransformableNode::TransformPointFromWorld(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMRMLTransformableNode_TransformPointFromWorld_Methods[] = {
  {"TransformPointFromWorld", PyvtkMRMLTransformableNode_TransformPointFromWorld_s1, METH_VARARGS,
   "@PP *d *d"},
  {"TransformPointFromWorld", PyvtkMRMLTransformableNode_TransformPointFromWorld_s2, METH_VARARGS,
   "@WW vtkVector3d &vtkVector3d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLTransformableNode_TransformPointFromWorld(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLTransformableNode_TransformPointFromWorld_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformPointFromWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLTransformableNode_GetTransformNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTransformNodeID() :
      op->vtkMRMLTransformableNode::GetTransformNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTransformableNode_HardenTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HardenTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTransformableNode *op = static_cast<vtkMRMLTransformableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HardenTransform() :
      op->vtkMRMLTransformableNode::HardenTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTransformableNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLTransformableNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLTransformableNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLTransformableNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLTransformableNode\nC++: static vtkMRMLTransformableNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLTransformableNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLTransformableNode\nC++: vtkMRMLTransformableNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLTransformableNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLTransformableNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLTransformableNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override = 0;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLTransformableNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override = 0;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"SetAndObserveTransformNodeID", PyvtkMRMLTransformableNode_SetAndObserveTransformNodeID, METH_VARARGS,
   "SetAndObserveTransformNodeID(self, transformNodeID:str) -> bool\nC++: bool SetAndObserveTransformNodeID(\n    const char *transformNodeID)\n\nSet a reference to transform node Returns true on success. The\nmethod will fail if a child transform of a transform node is\nattempted to be set as parent to prevent circular reference. If\ncurrent node or new parent transform node is not added to the\nscene yet then circular reference is not checked and it is the\ndeveloper's responsibility no child transform is set as parent.\n"},
  {"GetParentTransformNode", PyvtkMRMLTransformableNode_GetParentTransformNode, METH_VARARGS,
   "GetParentTransformNode(self) -> vtkMRMLTransformNode\nC++: vtkMRMLTransformNode *GetParentTransformNode()\n\nAssociated transform MRML node\n"},
  {"ProcessMRMLEvents", PyvtkMRMLTransformableNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Transform\nnodes\n"},
  {"CanApplyNonLinearTransforms", PyvtkMRMLTransformableNode_CanApplyNonLinearTransforms, METH_VARARGS,
   "CanApplyNonLinearTransforms(self) -> bool\nC++: virtual bool CanApplyNonLinearTransforms()\n\nReturns true if the transformable node can apply non-linear\ntransforms. A transformable node is always expected to apply\nlinear transforms.\n\\sa ApplyTransformMatrix, ApplyTransform\n"},
  {"ApplyTransformMatrix", PyvtkMRMLTransformableNode_ApplyTransformMatrix, METH_VARARGS,
   "ApplyTransformMatrix(self, transformMatrix:vtkMatrix4x4) -> None\nC++: virtual void ApplyTransformMatrix(\n    vtkMatrix4x4 *transformMatrix)\n\nConvenience function to allow transforming a node by specifying a\ntransformation matrix.\n\\sa ApplyTransformMatrix, ApplyTransform\n"},
  {"ApplyTransform", PyvtkMRMLTransformableNode_ApplyTransform, METH_VARARGS,
   "ApplyTransform(self, transform:vtkAbstractTransform) -> None\nC++: virtual void ApplyTransform(vtkAbstractTransform *transform)\n\nTransforms the node with the provided non-linear transform.\n\\sa SetAndObserveTransformNodeID, ApplyTransformMatrix,\n    CanApplyNonLinearTransforms\n"},
  {"TransformPointToWorld", PyvtkMRMLTransformableNode_TransformPointToWorld, METH_VARARGS,
   "TransformPointToWorld(self, inLocal:(float, float, float),\n    outWorld:[float, float, float]) -> None\nC++: virtual void TransformPointToWorld(const double inLocal[3],\n    double outWorld[3])\nTransformPointToWorld(self, inLocal:vtkVector3d,\n    outWorld:vtkVector3d) -> None\nC++: virtual void TransformPointToWorld(\n    const vtkVector3d &inLocal, vtkVector3d &outWorld)\n\nUtility function to convert a point position in the node's\ncoordinate system to world coordinate system. Note for transform\nnodes: the node coordinate system is transformed by all the\nparent transforms, but not by the transform that is stored in the\ncurrent node. To get all the transform, including that is stored\nin the current transform node,\nvtkMRMLTransformNode::GetTransformBetweenNodes() method can be\nused.\n\\sa TransformPointFromWorld, SetAndObserveTransformNodeID\n"},
  {"TransformPointFromWorld", PyvtkMRMLTransformableNode_TransformPointFromWorld, METH_VARARGS,
   "TransformPointFromWorld(self, inWorld:(float, float, float),\n    outLocal:[float, float, float]) -> None\nC++: virtual void TransformPointFromWorld(const double inWorld[3],\n     double outLocal[3])\nTransformPointFromWorld(self, inWorld:vtkVector3d,\n    outLocal:vtkVector3d) -> None\nC++: virtual void TransformPointFromWorld(\n    const vtkVector3d &inWorld, vtkVector3d &outLocal)\n\nUtility function to convert a point position in world coordinate\nsystem to markup node's coordinate system\n\\sa TransformPointToWorld, SetAndObserveTransformNodeID\n"},
  {"GetTransformNodeID", PyvtkMRMLTransformableNode_GetTransformNodeID, METH_VARARGS,
   "GetTransformNodeID(self) -> str\nC++: const char *GetTransformNodeID()\n\nGet referenced transform node id\n"},
  {"HardenTransform", PyvtkMRMLTransformableNode_HardenTransform, METH_VARARGS,
   "HardenTransform(self) -> bool\nC++: bool HardenTransform()\n\nApply the associated transform to the transformable node. Return\ntrue on success, false otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLTransformableNode_Doc =
  "vtkMRMLTransformableNode - MRML node for representing a node with a\ntransform.\n\n"
  "Superclass: vtkMRMLStorableNode\n\n"
  "A superclass for other nodes that can have a transform to parent node\n"
  "like volume, model and transformation nodes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLTransformableNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLTransformableNode", // tp_name
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
  PyvtkMRMLTransformableNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLTransformableNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLTransformableNode_Type, PyvtkMRMLTransformableNode_Methods,
    "vtkMRMLTransformableNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLStorableNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyLong_FromLong(vtkMRMLTransformableNode::TransformModifiedEvent);
  if (o)
  {
    PyDict_SetItemString(d, "TransformModifiedEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLTransformableNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLTransformableNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLTransformableNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

