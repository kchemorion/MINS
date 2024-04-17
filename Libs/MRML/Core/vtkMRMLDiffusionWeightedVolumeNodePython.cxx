// python wrapper for vtkMRMLDiffusionWeightedVolumeNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLDiffusionWeightedVolumeNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDiffusionWeightedVolumeNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDiffusionWeightedVolumeNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLScalarVolumeNode_ClassNew
extern "C" { PyObject *PyvtkMRMLScalarVolumeNode_ClassNew(); }
#define DECLARED_PyvtkMRMLScalarVolumeNode_ClassNew
#endif

static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDiffusionWeightedVolumeNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDiffusionWeightedVolumeNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDiffusionWeightedVolumeNode *tempr = vtkMRMLDiffusionWeightedVolumeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDiffusionWeightedVolumeNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDiffusionWeightedVolumeNode::NewInstance());

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
PyvtkMRMLDiffusionWeightedVolumeNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDiffusionWeightedVolumeNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDiffusionWeightedVolumeNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLDiffusionWeightedVolumeNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionWeightedVolumeNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLDiffusionWeightedVolumeNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_SetNumberOfGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfGradients(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionWeightedVolumeNode::SetNumberOfGradients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_GetNumberOfGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGradients() :
      op->vtkMRMLDiffusionWeightedVolumeNode::GetNumberOfGradients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_SetDiffusionGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetDiffusionGradient(temp0, temp1);
    }
    else
    {
      op->vtkMRMLDiffusionWeightedVolumeNode::SetDiffusionGradient(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_SetDiffusionGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetDiffusionGradients(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionWeightedVolumeNode::SetDiffusionGradients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_GetDiffusionGradient_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDiffusionGradient(temp0) :
      op->vtkMRMLDiffusionWeightedVolumeNode::GetDiffusionGradient(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_GetDiffusionGradient_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetDiffusionGradient(temp0, temp1);
    }
    else
    {
      op->vtkMRMLDiffusionWeightedVolumeNode::GetDiffusionGradient(temp0, temp1);
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
PyvtkMRMLDiffusionWeightedVolumeNode_GetDiffusionGradient(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLDiffusionWeightedVolumeNode_GetDiffusionGradient_s1(self, args);
    case 2:
      return PyvtkMRMLDiffusionWeightedVolumeNode_GetDiffusionGradient_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDiffusionGradient");
  return nullptr;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_GetDiffusionGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetDiffusionGradients() :
      op->vtkMRMLDiffusionWeightedVolumeNode::GetDiffusionGradients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_SetBValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBValue(temp0, temp1);
    }
    else
    {
      op->vtkMRMLDiffusionWeightedVolumeNode::SetBValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_SetBValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetBValues(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionWeightedVolumeNode::SetBValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_GetBValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBValue(temp0) :
      op->vtkMRMLDiffusionWeightedVolumeNode::GetBValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_GetBValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetBValues() :
      op->vtkMRMLDiffusionWeightedVolumeNode::GetBValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_SetMeasurementFrameMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

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
      op->vtkMRMLDiffusionWeightedVolumeNode::SetMeasurementFrameMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_SetMeasurementFrameMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

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
      op->vtkMRMLDiffusionWeightedVolumeNode::SetMeasurementFrameMatrix(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_SetMeasurementFrameMatrix_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

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
      op->vtkMRMLDiffusionWeightedVolumeNode::SetMeasurementFrameMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDiffusionWeightedVolumeNode_SetMeasurementFrameMatrix_Methods[] = {
  {"SetMeasurementFrameMatrix", PyvtkMRMLDiffusionWeightedVolumeNode_SetMeasurementFrameMatrix_s1, METH_VARARGS,
   "@A *d[3]"},
  {"SetMeasurementFrameMatrix", PyvtkMRMLDiffusionWeightedVolumeNode_SetMeasurementFrameMatrix_s3, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_SetMeasurementFrameMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLDiffusionWeightedVolumeNode_SetMeasurementFrameMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkMRMLDiffusionWeightedVolumeNode_SetMeasurementFrameMatrix_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMeasurementFrameMatrix");
  return nullptr;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_GetMeasurementFrameMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

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
      op->vtkMRMLDiffusionWeightedVolumeNode::GetMeasurementFrameMatrix(temp0);
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
PyvtkMRMLDiffusionWeightedVolumeNode_GetMeasurementFrameMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

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
      op->vtkMRMLDiffusionWeightedVolumeNode::GetMeasurementFrameMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDiffusionWeightedVolumeNode_GetMeasurementFrameMatrix_Methods[] = {
  {"GetMeasurementFrameMatrix", PyvtkMRMLDiffusionWeightedVolumeNode_GetMeasurementFrameMatrix_s1, METH_VARARGS,
   "@A *d[3]"},
  {"GetMeasurementFrameMatrix", PyvtkMRMLDiffusionWeightedVolumeNode_GetMeasurementFrameMatrix_s2, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_GetMeasurementFrameMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLDiffusionWeightedVolumeNode_GetMeasurementFrameMatrix_Methods;
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
PyvtkMRMLDiffusionWeightedVolumeNode_GetDiffusionWeightedVolumeDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionWeightedVolumeDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDiffusionWeightedVolumeDisplayNode *tempr = (ap.IsBound() ?
      op->GetDiffusionWeightedVolumeDisplayNode() :
      op->vtkMRMLDiffusionWeightedVolumeNode::GetDiffusionWeightedVolumeDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLDiffusionWeightedVolumeNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionWeightedVolumeNode_CreateDefaultDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionWeightedVolumeNode *op = static_cast<vtkMRMLDiffusionWeightedVolumeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultDisplayNodes();
    }
    else
    {
      op->vtkMRMLDiffusionWeightedVolumeNode::CreateDefaultDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDiffusionWeightedVolumeNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDiffusionWeightedVolumeNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDiffusionWeightedVolumeNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDiffusionWeightedVolumeNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLDiffusionWeightedVolumeNode\nC++: static vtkMRMLDiffusionWeightedVolumeNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDiffusionWeightedVolumeNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDiffusionWeightedVolumeNode\nC++: vtkMRMLDiffusionWeightedVolumeNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDiffusionWeightedVolumeNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDiffusionWeightedVolumeNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLDiffusionWeightedVolumeNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLDiffusionWeightedVolumeNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLDiffusionWeightedVolumeNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"SetNumberOfGradients", PyvtkMRMLDiffusionWeightedVolumeNode_SetNumberOfGradients, METH_VARARGS,
   "SetNumberOfGradients(self, val:int) -> None\nC++: void SetNumberOfGradients(int val)\n\n\n"},
  {"GetNumberOfGradients", PyvtkMRMLDiffusionWeightedVolumeNode_GetNumberOfGradients, METH_VARARGS,
   "GetNumberOfGradients(self) -> int\nC++: int GetNumberOfGradients()\n\n"},
  {"SetDiffusionGradient", PyvtkMRMLDiffusionWeightedVolumeNode_SetDiffusionGradient, METH_VARARGS,
   "SetDiffusionGradient(self, val:int, g:(float, float, float))\n    -> None\nC++: void SetDiffusionGradient(int val, const double g[3])\n\n\n"},
  {"SetDiffusionGradients", PyvtkMRMLDiffusionWeightedVolumeNode_SetDiffusionGradients, METH_VARARGS,
   "SetDiffusionGradients(self, grad:vtkDoubleArray) -> None\nC++: void SetDiffusionGradients(vtkDoubleArray *grad)\n\n"},
  {"GetDiffusionGradient", PyvtkMRMLDiffusionWeightedVolumeNode_GetDiffusionGradient, METH_VARARGS,
   "GetDiffusionGradient(self, val:int) -> (float, float, float)\nC++: double *GetDiffusionGradient(int val)\nGetDiffusionGradient(self, val:int, g:[float, float, float])\n    -> None\nC++: void GetDiffusionGradient(int val, double g[3])\n\n"},
  {"GetDiffusionGradients", PyvtkMRMLDiffusionWeightedVolumeNode_GetDiffusionGradients, METH_VARARGS,
   "GetDiffusionGradients(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetDiffusionGradients()\n\n"},
  {"SetBValue", PyvtkMRMLDiffusionWeightedVolumeNode_SetBValue, METH_VARARGS,
   "SetBValue(self, val:int, b:float) -> None\nC++: void SetBValue(int val, const double b)\n\n\n"},
  {"SetBValues", PyvtkMRMLDiffusionWeightedVolumeNode_SetBValues, METH_VARARGS,
   "SetBValues(self, bValue:vtkDoubleArray) -> None\nC++: void SetBValues(vtkDoubleArray *bValue)\n\n"},
  {"GetBValue", PyvtkMRMLDiffusionWeightedVolumeNode_GetBValue, METH_VARARGS,
   "GetBValue(self, val:int) -> float\nC++: double GetBValue(int val)\n\nWork around issue that GetBValue is defined as a macro in\nwindows.h\n"},
  {"GetBValues", PyvtkMRMLDiffusionWeightedVolumeNode_GetBValues, METH_VARARGS,
   "GetBValues(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetBValues()\n\n"},
  {"SetMeasurementFrameMatrix", PyvtkMRMLDiffusionWeightedVolumeNode_SetMeasurementFrameMatrix, METH_VARARGS,
   "SetMeasurementFrameMatrix(self, mf:((float, float, float), (float,\n     float, float), (float, float, float))) -> None\nC++: void SetMeasurementFrameMatrix(const double mf[3][3])\nSetMeasurementFrameMatrix(self, xr:float, xa:float, xs:float,\n    yr:float, ya:float, ys:float, zr:float, za:float, zs:float)\n    -> None\nC++: void SetMeasurementFrameMatrix(const double xr,\n    const double xa, const double xs, const double yr,\n    const double ya, const double ys, const double zr,\n    const double za, const double zs)\nSetMeasurementFrameMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void SetMeasurementFrameMatrix(vtkMatrix4x4 *mat)\n\nSet/Get measurement frame that relates the coordinate system\nwhere the tensor measurements are given with the RAS coordinate\nsystem\n"},
  {"GetMeasurementFrameMatrix", PyvtkMRMLDiffusionWeightedVolumeNode_GetMeasurementFrameMatrix, METH_VARARGS,
   "GetMeasurementFrameMatrix(self, mf:[[float, float, float], [float,\n     float, float], [float, float, float]]) -> None\nC++: void GetMeasurementFrameMatrix(double mf[3][3])\nGetMeasurementFrameMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void GetMeasurementFrameMatrix(vtkMatrix4x4 *mat)\n\n"},
  {"GetDiffusionWeightedVolumeDisplayNode", PyvtkMRMLDiffusionWeightedVolumeNode_GetDiffusionWeightedVolumeDisplayNode, METH_VARARGS,
   "GetDiffusionWeightedVolumeDisplayNode(self)\n    -> vtkMRMLDiffusionWeightedVolumeDisplayNode\nC++: virtual vtkMRMLDiffusionWeightedVolumeDisplayNode *GetDiffusionWeightedVolumeDisplayNode(\n    )\n\nAssociated display MRML node\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLDiffusionWeightedVolumeNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"CreateDefaultDisplayNodes", PyvtkMRMLDiffusionWeightedVolumeNode_CreateDefaultDisplayNodes, METH_VARARGS,
   "CreateDefaultDisplayNodes(self) -> None\nC++: void CreateDefaultDisplayNodes() override;\n\nCreate and observe default display node\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDiffusionWeightedVolumeNode_Doc =
  "vtkMRMLDiffusionWeightedVolumeNode - MRML node for representing\ndiffusion weighted MRI volume\n\n"
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

static PyTypeObject PyvtkMRMLDiffusionWeightedVolumeNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDiffusionWeightedVolumeNode", // tp_name
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
  PyvtkMRMLDiffusionWeightedVolumeNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLDiffusionWeightedVolumeNode_StaticNew()
{
  return vtkMRMLDiffusionWeightedVolumeNode::New();
}

PyObject *PyvtkMRMLDiffusionWeightedVolumeNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDiffusionWeightedVolumeNode_Type, PyvtkMRMLDiffusionWeightedVolumeNode_Methods,
    "vtkMRMLDiffusionWeightedVolumeNode",
 &PyvtkMRMLDiffusionWeightedVolumeNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLScalarVolumeNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLDiffusionWeightedVolumeNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDiffusionWeightedVolumeNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDiffusionWeightedVolumeNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

