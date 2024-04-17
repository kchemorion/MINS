// python wrapper for vtkMRMLTensorVolumeNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLTensorVolumeNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLTensorVolumeNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLTensorVolumeNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLScalarVolumeNode_ClassNew
extern "C" { PyObject *PyvtkMRMLScalarVolumeNode_ClassNew(); }
#define DECLARED_PyvtkMRMLScalarVolumeNode_ClassNew
#endif

static PyObject *
PyvtkMRMLTensorVolumeNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLTensorVolumeNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLTensorVolumeNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLTensorVolumeNode *tempr = vtkMRMLTensorVolumeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLTensorVolumeNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLTensorVolumeNode::NewInstance());

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
PyvtkMRMLTensorVolumeNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLTensorVolumeNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLTensorVolumeNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLTensorVolumeNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->CopyContent(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTensorVolumeNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLTensorVolumeNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLTensorVolumeNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLTensorVolumeNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateReferenceID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLTensorVolumeNode::UpdateReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_GetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrder() :
      op->vtkMRMLTensorVolumeNode::GetOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_SetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrder(temp0);
    }
    else
    {
      op->vtkMRMLTensorVolumeNode::SetOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_SetMeasurementFrameMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    if (ap.IsBound())
    {
      op->SetMeasurementFrameMatrix(temp0);
    }
    else
    {
      op->vtkMRMLTensorVolumeNode::SetMeasurementFrameMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTensorVolumeNode_SetMeasurementFrameMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    if (ap.IsBound())
    {
      op->SetMeasurementFrameMatrix(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkMRMLTensorVolumeNode::SetMeasurementFrameMatrix(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTensorVolumeNode_SetMeasurementFrameMatrix_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetMeasurementFrameMatrix(temp0);
    }
    else
    {
      op->vtkMRMLTensorVolumeNode::SetMeasurementFrameMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTensorVolumeNode_SetMeasurementFrameMatrix_Methods[] = {
  {"SetMeasurementFrameMatrix", PyvtkMRMLTensorVolumeNode_SetMeasurementFrameMatrix_s1, METH_VARARGS,
   "@A *d[3]"},
  {"SetMeasurementFrameMatrix", PyvtkMRMLTensorVolumeNode_SetMeasurementFrameMatrix_s3, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLTensorVolumeNode_SetMeasurementFrameMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLTensorVolumeNode_SetMeasurementFrameMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkMRMLTensorVolumeNode_SetMeasurementFrameMatrix_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMeasurementFrameMatrix");
  return nullptr;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_GetMeasurementFrameMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  double save0[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    vtkPythonArgs::Save(*temp0, *save0, size0[0]*size0[1]);

    if (ap.IsBound())
    {
      op->GetMeasurementFrameMatrix(temp0);
    }
    else
    {
      op->vtkMRMLTensorVolumeNode::GetMeasurementFrameMatrix(temp0);
    }

    if (vtkPythonArgs::HasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(0, *temp0, 2, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLTensorVolumeNode_GetMeasurementFrameMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetMeasurementFrameMatrix(temp0);
    }
    else
    {
      op->vtkMRMLTensorVolumeNode::GetMeasurementFrameMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTensorVolumeNode_GetMeasurementFrameMatrix_Methods[] = {
  {"GetMeasurementFrameMatrix", PyvtkMRMLTensorVolumeNode_GetMeasurementFrameMatrix_s1, METH_VARARGS,
   "@A *d[3]"},
  {"GetMeasurementFrameMatrix", PyvtkMRMLTensorVolumeNode_GetMeasurementFrameMatrix_s2, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLTensorVolumeNode_GetMeasurementFrameMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLTensorVolumeNode_GetMeasurementFrameMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMeasurementFrameMatrix");
  return nullptr;
}


static PyObject *
PyvtkMRMLTensorVolumeNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLTensorVolumeNode *op = static_cast<vtkMRMLTensorVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLTensorVolumeNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLTensorVolumeNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLTensorVolumeNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLTensorVolumeNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLTensorVolumeNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLTensorVolumeNode\nC++: static vtkMRMLTensorVolumeNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLTensorVolumeNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLTensorVolumeNode\nC++: vtkMRMLTensorVolumeNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLTensorVolumeNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLTensorVolumeNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLTensorVolumeNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"CopyContent", PyvtkMRMLTensorVolumeNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLTensorVolumeNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"GetNodeTagName", PyvtkMRMLTensorVolumeNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"UpdateReferences", PyvtkMRMLTensorVolumeNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nUpdates this node if it depends on other nodes when the node is\ndeleted in the scene\n"},
  {"UpdateReferenceID", PyvtkMRMLTensorVolumeNode_UpdateReferenceID, METH_VARARGS,
   "UpdateReferenceID(self, oldID:str, newID:str) -> None\nC++: void UpdateReferenceID(const char *oldID, const char *newID)\n    override;\n\nDescription: Update the stored reference to another node in the\nscene\n"},
  {"GetOrder", PyvtkMRMLTensorVolumeNode_GetOrder, METH_VARARGS,
   "GetOrder(self) -> int\nC++: virtual int GetOrder()\n\n\n"},
  {"SetOrder", PyvtkMRMLTensorVolumeNode_SetOrder, METH_VARARGS,
   "SetOrder(self, _arg:int) -> None\nC++: virtual void SetOrder(int _arg)\n\n"},
  {"SetMeasurementFrameMatrix", PyvtkMRMLTensorVolumeNode_SetMeasurementFrameMatrix, METH_VARARGS,
   "SetMeasurementFrameMatrix(self, mf:((float, float, float), (float,\n     float, float), (float, float, float))) -> None\nC++: void SetMeasurementFrameMatrix(const double mf[3][3])\nSetMeasurementFrameMatrix(self, xr:float, xa:float, xs:float,\n    yr:float, ya:float, ys:float, zr:float, za:float, zs:float)\n    -> None\nC++: void SetMeasurementFrameMatrix(const double xr,\n    const double xa, const double xs, const double yr,\n    const double ya, const double ys, const double zr,\n    const double za, const double zs)\nSetMeasurementFrameMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void SetMeasurementFrameMatrix(vtkMatrix4x4 *mat)\n\nSet the Measurement frame matrix from 3x3 array\n"},
  {"GetMeasurementFrameMatrix", PyvtkMRMLTensorVolumeNode_GetMeasurementFrameMatrix, METH_VARARGS,
   "GetMeasurementFrameMatrix(self, mf:[[float, float, float], [float,\n     float, float], [float, float, float]]) -> None\nC++: void GetMeasurementFrameMatrix(double mf[3][3])\nGetMeasurementFrameMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void GetMeasurementFrameMatrix(vtkMatrix4x4 *mat)\n\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLTensorVolumeNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLTensorVolumeNode_Doc =
  "vtkMRMLTensorVolumeNode - MRML node for representing diffusion\nweighted MRI volume.\n\n"
  "Superclass: vtkMRMLScalarVolumeNode\n\n"
  "Diffusion Weighted Volume nodes describe data sets that encode\n"
  "diffusion weighted images. These images are the basis for computing\n"
  "the diffusion tensor. The node is a container for the necessary\n"
  "information to interpret DW images:\n"
  "1. Gradient information.\n"
  "2. B value for each gradient.\n"
  "3. Measurement frame that relates the coordinate system where the\n"
  "   gradients are given to RAS.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLTensorVolumeNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLTensorVolumeNode", // tp_name
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
  PyvtkMRMLTensorVolumeNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLTensorVolumeNode_StaticNew()
{
  return vtkMRMLTensorVolumeNode::New();
}

PyObject *PyvtkMRMLTensorVolumeNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLTensorVolumeNode_Type, PyvtkMRMLTensorVolumeNode_Methods,
    "vtkMRMLTensorVolumeNode",
 &PyvtkMRMLTensorVolumeNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLScalarVolumeNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLTensorVolumeNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLTensorVolumeNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLTensorVolumeNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

