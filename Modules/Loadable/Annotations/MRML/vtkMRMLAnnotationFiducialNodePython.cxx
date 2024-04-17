// python wrapper for vtkMRMLAnnotationFiducialNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStdString.h"
#include "vtkMRMLAnnotationFiducialNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAnnotationFiducialNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAnnotationFiducialNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAnnotationControlPointsNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAnnotationControlPointsNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAnnotationControlPointsNode_ClassNew
#endif

static PyObject *
PyvtkMRMLAnnotationFiducialNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAnnotationFiducialNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAnnotationFiducialNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAnnotationFiducialNode *tempr = vtkMRMLAnnotationFiducialNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationFiducialNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAnnotationFiducialNode::NewInstance());

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
PyvtkMRMLAnnotationFiducialNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAnnotationFiducialNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAnnotationFiducialNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLAnnotationFiducialNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLAnnotationFiducialNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLAnnotationFiducialNode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_SetFiducial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiducial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetFiducial(temp0, temp1, temp2) :
      op->vtkMRMLAnnotationFiducialNode::SetFiducial(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_SetFiducialLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiducialLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFiducialLabel(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationFiducialNode::SetFiducialLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_GetFiducialLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiducialLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetFiducialLabel() :
      op->vtkMRMLAnnotationFiducialNode::GetFiducialLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_SetFiducialValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiducialValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFiducialValue(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationFiducialNode::SetFiducialValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_GetFiducialValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiducialValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFiducialValue() :
      op->vtkMRMLAnnotationFiducialNode::GetFiducialValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_SetFiducialCoordinates_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiducialCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1 = 1;
  int temp2 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetFiducialCoordinates(temp0, temp1, temp2) :
      op->vtkMRMLAnnotationFiducialNode::SetFiducialCoordinates(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationFiducialNode_SetFiducialCoordinates_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiducialCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SetFiducialCoordinates(temp0, temp1, temp2) :
      op->vtkMRMLAnnotationFiducialNode::SetFiducialCoordinates(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAnnotationFiducialNode_SetFiducialCoordinates_Methods[] = {
  {"SetFiducialCoordinates", PyvtkMRMLAnnotationFiducialNode_SetFiducialCoordinates_s1, METH_VARARGS,
   "@P|ii *d"},
  {"SetFiducialCoordinates", PyvtkMRMLAnnotationFiducialNode_SetFiducialCoordinates_s2, METH_VARARGS,
   "@ddd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLAnnotationFiducialNode_SetFiducialCoordinates(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLAnnotationFiducialNode_SetFiducialCoordinates_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return PyvtkMRMLAnnotationFiducialNode_SetFiducialCoordinates_s1(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFiducialCoordinates");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_SetFiducialWorldCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFiducialWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1 = 1;
  int temp2 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetFiducialWorldCoordinates(temp0, temp1, temp2) :
      op->vtkMRMLAnnotationFiducialNode::SetFiducialWorldCoordinates(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_GetFiducialCoordinates_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiducialCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFiducialCoordinates() :
      op->vtkMRMLAnnotationFiducialNode::GetFiducialCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationFiducialNode_GetFiducialCoordinates_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiducialCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetFiducialCoordinates(temp0) :
      op->vtkMRMLAnnotationFiducialNode::GetFiducialCoordinates(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationFiducialNode_GetFiducialCoordinates(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLAnnotationFiducialNode_GetFiducialCoordinates_s1(self, args);
    case 1:
      return PyvtkMRMLAnnotationFiducialNode_GetFiducialCoordinates_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFiducialCoordinates");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationFiducialNode_GetFiducialWorldCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiducialWorldCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationFiducialNode *op = static_cast<vtkMRMLAnnotationFiducialNode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetFiducialWorldCoordinates(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationFiducialNode::GetFiducialWorldCoordinates(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAnnotationFiducialNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAnnotationFiducialNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAnnotationFiducialNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAnnotationFiducialNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAnnotationFiducialNode\nC++: static vtkMRMLAnnotationFiducialNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAnnotationFiducialNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAnnotationFiducialNode\nC++: vtkMRMLAnnotationFiducialNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAnnotationFiducialNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAnnotationFiducialNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLAnnotationFiducialNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLAnnotationFiducialNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetIcon", PyvtkMRMLAnnotationFiducialNode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: const char *GetIcon() override;\n\n"},
  {"SetFiducial", PyvtkMRMLAnnotationFiducialNode_SetFiducial, METH_VARARGS,
   "SetFiducial(self, newControl:[float, float, float],\n    selectedFlag:int, visibleFlag:int) -> int\nC++: int SetFiducial(double newControl[3], int selectedFlag,\n    int visibleFlag)\n\n"},
  {"SetFiducialLabel", PyvtkMRMLAnnotationFiducialNode_SetFiducialLabel, METH_VARARGS,
   "SetFiducialLabel(self, newLabel:str) -> None\nC++: void SetFiducialLabel(const char *newLabel)\n\nSelected and visible are currently always set to 1 and are\ncontrolled by selected and visible flag\n"},
  {"GetFiducialLabel", PyvtkMRMLAnnotationFiducialNode_GetFiducialLabel, METH_VARARGS,
   "GetFiducialLabel(self) -> str\nC++: vtkStdString GetFiducialLabel()\n\n"},
  {"SetFiducialValue", PyvtkMRMLAnnotationFiducialNode_SetFiducialValue, METH_VARARGS,
   "SetFiducialValue(self, newValue:str) -> None\nC++: void SetFiducialValue(const char *newValue)\n\n"},
  {"GetFiducialValue", PyvtkMRMLAnnotationFiducialNode_GetFiducialValue, METH_VARARGS,
   "GetFiducialValue(self) -> int\nC++: int GetFiducialValue()\n\nreturn atoi(this->GetText(1).c_str());\n"},
  {"SetFiducialCoordinates", PyvtkMRMLAnnotationFiducialNode_SetFiducialCoordinates, METH_VARARGS,
   "SetFiducialCoordinates(self, newCoord:[float, float, float],\n    selFlag:int=1, visFlag:int=1) -> int\nC++: int SetFiducialCoordinates(double newCoord[3], int selFlag=1,\n     int visFlag=1)\nSetFiducialCoordinates(self, x:float, y:float, z:float) -> int\nC++: int SetFiducialCoordinates(double x, double y, double z)\n\n"},
  {"SetFiducialWorldCoordinates", PyvtkMRMLAnnotationFiducialNode_SetFiducialWorldCoordinates, METH_VARARGS,
   "SetFiducialWorldCoordinates(self, newCoord:[float, float, float],\n    selFlag:int=1, visFlag:int=1) -> int\nC++: int SetFiducialWorldCoordinates(double newCoord[3],\n    int selFlag=1, int visFlag=1)\n\n"},
  {"GetFiducialCoordinates", PyvtkMRMLAnnotationFiducialNode_GetFiducialCoordinates, METH_VARARGS,
   "GetFiducialCoordinates(self) -> Pointer\nC++: double *GetFiducialCoordinates()\nGetFiducialCoordinates(self, coord:[float, float, float]) -> bool\nC++: bool GetFiducialCoordinates(double coord[3])\n\n"},
  {"GetFiducialWorldCoordinates", PyvtkMRMLAnnotationFiducialNode_GetFiducialWorldCoordinates, METH_VARARGS,
   "GetFiducialWorldCoordinates(self, point:[float, ...]) -> None\nC++: void GetFiducialWorldCoordinates(double *point)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAnnotationFiducialNode_Doc =
  "vtkMRMLAnnotationFiducialNode - MRML node to represent a fiducial in\nthe Annotations module - deprecated\n\n"
  "Superclass: vtkMRMLAnnotationControlPointsNode\n\n"
  "Annotation nodes contains control points, internally represented as\n"
  "vtkPolyData. An Annotation node contains many control points  and\n"
  "forms the smallest logical unit of tractography that MRML will\n"
  "manage/read/write. Each control point has accompanying data.\n"
  "Visualization parameters for these nodes are controlled by the\n"
  "vtkMRMLAnnotationPointDisplayNode class.\\deprecated Use\n"
  "vtkMRMLMarkupsFiducialNode\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationFiducialNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationFiducialNode", // tp_name
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
  PyvtkMRMLAnnotationFiducialNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAnnotationFiducialNode_StaticNew()
{
  return vtkMRMLAnnotationFiducialNode::New();
}

PyObject *PyvtkMRMLAnnotationFiducialNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAnnotationFiducialNode_Type, PyvtkMRMLAnnotationFiducialNode_Methods,
    "vtkMRMLAnnotationFiducialNode",
 &PyvtkMRMLAnnotationFiducialNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAnnotationControlPointsNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "FiducialNodeAddedEvent", vtkMRMLAnnotationFiducialNode::FiducialNodeAddedEvent },
        { "ValueModifiedEvent", vtkMRMLAnnotationFiducialNode::ValueModifiedEvent },
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

void PyVTKAddFile_vtkMRMLAnnotationFiducialNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAnnotationFiducialNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAnnotationFiducialNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

