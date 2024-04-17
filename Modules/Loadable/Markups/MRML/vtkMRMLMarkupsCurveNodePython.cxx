// python wrapper for vtkMRMLMarkupsCurveNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMarkupsCurveNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsCurveNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsCurveNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLMarkupsNode_ClassNew
extern "C" { PyObject *PyvtkMRMLMarkupsNode_ClassNew(); }
#define DECLARED_PyvtkMRMLMarkupsNode_ClassNew
#endif

static PyObject *
PyvtkMRMLMarkupsCurveNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsCurveNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsCurveNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsCurveNode *tempr = vtkMRMLMarkupsCurveNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsCurveNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsCurveNode::NewInstance());

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
PyvtkMRMLMarkupsCurveNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsCurveNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsCurveNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLMarkupsCurveNode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAddIcon() :
      op->vtkMRMLMarkupsCurveNode::GetAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetPlaceAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlaceAddIcon() :
      op->vtkMRMLMarkupsCurveNode::GetPlaceAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLMarkupsCurveNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLMarkupsCurveNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetMarkupType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMarkupType() :
      op->vtkMRMLMarkupsCurveNode::GetMarkupType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetTypeDisplayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeDisplayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeDisplayName() :
      op->vtkMRMLMarkupsCurveNode::GetTypeDisplayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetDefaultNodeNamePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNodeNamePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultNodeNamePrefix() :
      op->vtkMRMLMarkupsCurveNode::GetDefaultNodeNamePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

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
      op->vtkMRMLMarkupsCurveNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLMarkupsCurveNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurvePointsWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvePointsWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetCurvePointsWorld() :
      op->vtkMRMLMarkupsCurveNode::GetCurvePointsWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurveWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCurveWorld() :
      op->vtkMRMLMarkupsCurveNode::GetCurveWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurveWorldConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveWorldConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetCurveWorldConnection() :
      op->vtkMRMLMarkupsCurveNode::GetCurveWorldConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurveLengthWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveLengthWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  long long temp0 = 0;
  long long temp1 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    double tempr = (ap.IsBound() ?
      op->GetCurveLengthWorld(temp0, temp1) :
      op->vtkMRMLMarkupsCurveNode::GetCurveLengthWorld(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurveLength(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurveLength");

  vtkPoints *temp0 = nullptr;
  bool temp1 = false;
  long long temp2 = 0;
  long long temp3 = -1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    double tempr = vtkMRMLMarkupsCurveNode::GetCurveLength(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurveLengthBetweenStartEndPointsWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveLengthBetweenStartEndPointsWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetCurveLengthBetweenStartEndPointsWorld(temp0, temp1) :
      op->vtkMRMLMarkupsCurveNode::GetCurveLengthBetweenStartEndPointsWorld(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetControlPointLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPointLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  vtkStringArray *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkStringArray") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetControlPointLabels(temp0, temp1) :
      op->vtkMRMLMarkupsCurveNode::SetControlPointLabels(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_ConstrainPointsToSurface(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConstrainPointsToSurface");

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  vtkPolyData *temp2 = nullptr;
  vtkPoints *temp3 = nullptr;
  double temp4 = .25;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetVTKObject(temp2, "vtkPolyData") &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    bool tempr = vtkMRMLMarkupsCurveNode::ConstrainPointsToSurface(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_ResampleCurveWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResampleCurveWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ResampleCurveWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::ResampleCurveWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_ResamplePoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ResamplePoints");

  vtkPoints *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  double temp2;
  bool temp3 = false;
  vtkDoubleArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp4, "vtkDoubleArray")))
  {
    bool tempr = vtkMRMLMarkupsCurveNode::ResamplePoints(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_ResampleStaticControlPointMeasurements(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ResampleStaticControlPointMeasurements");

  vtkCollection *temp0 = nullptr;
  vtkDoubleArray *temp1 = nullptr;
  int temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkCollection") &&
      ap.GetVTKObject(temp1, "vtkDoubleArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    bool tempr = vtkMRMLMarkupsCurveNode::ResampleStaticControlPointMeasurements(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetSampledCurvePointsBetweenStartEndPointsWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampledCurvePointsBetweenStartEndPointsWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  vtkPoints *temp0 = nullptr;
  double temp1;
  long long temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSampledCurvePointsBetweenStartEndPointsWorld(temp0, temp1, temp2, temp3) :
      op->vtkMRMLMarkupsCurveNode::GetSampledCurvePointsBetweenStartEndPointsWorld(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetClosestCurvePointIndexToPositionWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestCurvePointIndexToPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetClosestCurvePointIndexToPositionWorld(temp0) :
      op->vtkMRMLMarkupsCurveNode::GetClosestCurvePointIndexToPositionWorld(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetClosestPointPositionAlongCurveWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestPointPositionAlongCurveWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

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

    long long tempr = (ap.IsBound() ?
      op->GetClosestPointPositionAlongCurveWorld(temp0, temp1) :
      op->vtkMRMLMarkupsCurveNode::GetClosestPointPositionAlongCurveWorld(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetClosestPointPositionAlongCurve(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetClosestPointPositionAlongCurve");

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  vtkPointLocator *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkPointLocator")))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    long long tempr = vtkMRMLMarkupsCurveNode::GetClosestPointPositionAlongCurve(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetFarthestCurvePointIndexToPositionWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFarthestCurvePointIndexToPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetFarthestCurvePointIndexToPositionWorld(temp0) :
      op->vtkMRMLMarkupsCurveNode::GetFarthestCurvePointIndexToPositionWorld(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetFarthestCurvePointIndexToPosition(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFarthestCurvePointIndexToPosition");

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    long long tempr = vtkMRMLMarkupsCurveNode::GetFarthestCurvePointIndexToPosition(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurvePointIndexFromControlPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvePointIndexFromControlPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCurvePointIndexFromControlPointIndex(temp0) :
      op->vtkMRMLMarkupsCurveNode::GetCurvePointIndexFromControlPointIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetPositionAndClosestPointIndexAlongCurve(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPositionAndClosestPointIndexAlongCurve");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  long long temp1;
  long long temp2;
  double temp3;
  vtkPoints *temp4 = nullptr;
  bool temp5 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkPoints") &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = vtkMRMLMarkupsCurveNode::GetPositionAndClosestPointIndexAlongCurve(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurvePointIndexAlongCurveWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvePointIndexAlongCurveWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  long long temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCurvePointIndexAlongCurveWorld(temp0, temp1) :
      op->vtkMRMLMarkupsCurveNode::GetCurvePointIndexAlongCurveWorld(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurvePointIndexAlongCurve(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCurvePointIndexAlongCurve");

  vtkPoints *temp0 = nullptr;
  long long temp1;
  double temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    long long tempr = vtkMRMLMarkupsCurveNode::GetCurvePointIndexAlongCurve(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetPositionAlongCurveWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionAlongCurveWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  long long temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetPositionAlongCurveWorld(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsCurveNode::GetPositionAlongCurveWorld(temp0, temp1, temp2));

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
PyvtkMRMLMarkupsCurveNode_GetCurveDirectionAtPointIndexWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveDirectionAtPointIndexWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  long long temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetCurveDirectionAtPointIndexWorld(temp0, temp1) :
      op->vtkMRMLMarkupsCurveNode::GetCurveDirectionAtPointIndexWorld(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurvePointToWorldTransformAtPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvePointToWorldTransformAtPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  long long temp0;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCurvePointToWorldTransformAtPointIndex(temp0, temp1) :
      op->vtkMRMLMarkupsCurveNode::GetCurvePointToWorldTransformAtPointIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetPointsOnPlaneWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsOnPlaneWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  vtkPlane *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlane") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPointsOnPlaneWorld(temp0, temp1) :
      op->vtkMRMLMarkupsCurveNode::GetPointsOnPlaneWorld(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurveType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurveType() :
      op->vtkMRMLMarkupsCurveNode::GetCurveType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetCurveType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurveType(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetCurveType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurveTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCurveTypeAsString(temp0) :
      op->vtkMRMLMarkupsCurveNode::GetCurveTypeAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetCurveTypeFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveTypeFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurveTypeFromString(temp0) :
      op->vtkMRMLMarkupsCurveNode::GetCurveTypeFromString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetCurveTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurveTypeToLinear();
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetCurveTypeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetCurveTypeToCardinalSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveTypeToCardinalSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurveTypeToCardinalSpline();
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetCurveTypeToCardinalSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetCurveTypeToKochanekSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveTypeToKochanekSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurveTypeToKochanekSpline();
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetCurveTypeToKochanekSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetCurveTypeToPolynomial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveTypeToPolynomial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurveTypeToPolynomial();
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetCurveTypeToPolynomial();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetCurveTypeToShortestDistanceOnSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveTypeToShortestDistanceOnSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  vtkMRMLModelNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkMRMLModelNode")))
  {
    if (ap.IsBound())
    {
      op->SetCurveTypeToShortestDistanceOnSurface(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetCurveTypeToShortestDistanceOnSurface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetShortestDistanceSurfaceNodeReferenceRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShortestDistanceSurfaceNodeReferenceRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetShortestDistanceSurfaceNodeReferenceRole() :
      op->vtkMRMLMarkupsCurveNode::GetShortestDistanceSurfaceNodeReferenceRole());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetShortestDistanceSurfaceNodeReferenceMRMLAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShortestDistanceSurfaceNodeReferenceMRMLAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetShortestDistanceSurfaceNodeReferenceMRMLAttributeName() :
      op->vtkMRMLMarkupsCurveNode::GetShortestDistanceSurfaceNodeReferenceMRMLAttributeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetSurfaceConstraintNodeReferenceRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceConstraintNodeReferenceRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSurfaceConstraintNodeReferenceRole() :
      op->vtkMRMLMarkupsCurveNode::GetSurfaceConstraintNodeReferenceRole());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetSurfaceConstraintNodeReferenceMRMLAttributeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceConstraintNodeReferenceMRMLAttributeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSurfaceConstraintNodeReferenceMRMLAttributeName() :
      op->vtkMRMLMarkupsCurveNode::GetSurfaceConstraintNodeReferenceMRMLAttributeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetAndObserveShortestDistanceSurfaceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveShortestDistanceSurfaceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  vtkMRMLModelNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLModelNode"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveShortestDistanceSurfaceNode(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetAndObserveShortestDistanceSurfaceNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetShortestDistanceSurfaceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShortestDistanceSurfaceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelNode *tempr = (ap.IsBound() ?
      op->GetShortestDistanceSurfaceNode() :
      op->vtkMRMLMarkupsCurveNode::GetShortestDistanceSurfaceNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetAndObserveSurfaceConstraintNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveSurfaceConstraintNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  vtkMRMLModelNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLModelNode"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveSurfaceConstraintNode(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetAndObserveSurfaceConstraintNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetSurfaceConstraintNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceConstraintNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelNode *tempr = (ap.IsBound() ?
      op->GetSurfaceConstraintNode() :
      op->vtkMRMLMarkupsCurveNode::GetSurfaceConstraintNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetSurfaceConstraintMaximumSearchRadiusTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceConstraintMaximumSearchRadiusTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceConstraintMaximumSearchRadiusTolerance(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetSurfaceConstraintMaximumSearchRadiusTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetSurfaceConstraintMaximumSearchRadiusTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceConstraintMaximumSearchRadiusTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSurfaceConstraintMaximumSearchRadiusTolerance() :
      op->vtkMRMLMarkupsCurveNode::GetSurfaceConstraintMaximumSearchRadiusTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetSurfaceCostFunctionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceCostFunctionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSurfaceCostFunctionType() :
      op->vtkMRMLMarkupsCurveNode::GetSurfaceCostFunctionType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetSurfaceCostFunctionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceCostFunctionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceCostFunctionType(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetSurfaceCostFunctionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetSurfaceCostFunctionTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSurfaceCostFunctionTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLMarkupsCurveNode::GetSurfaceCostFunctionTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetSurfaceCostFunctionTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSurfaceCostFunctionTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsCurveNode::GetSurfaceCostFunctionTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetSurfaceDistanceWeightingFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceDistanceWeightingFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSurfaceDistanceWeightingFunction() :
      op->vtkMRMLMarkupsCurveNode::GetSurfaceDistanceWeightingFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetSurfaceDistanceWeightingFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceDistanceWeightingFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceDistanceWeightingFunction(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetSurfaceDistanceWeightingFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_GetNumberOfPointsPerInterpolatingSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerInterpolatingSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerInterpolatingSegment() :
      op->vtkMRMLMarkupsCurveNode::GetNumberOfPointsPerInterpolatingSegment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_SetNumberOfPointsPerInterpolatingSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerInterpolatingSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPointsPerInterpolatingSegment(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::SetNumberOfPointsPerInterpolatingSegment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsCurveNode_UpdateAssignedAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAssignedAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsCurveNode *op = static_cast<vtkMRMLMarkupsCurveNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAssignedAttribute();
    }
    else
    {
      op->vtkMRMLMarkupsCurveNode::UpdateAssignedAttribute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsCurveNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsCurveNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsCurveNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsCurveNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsCurveNode\nC++: static vtkMRMLMarkupsCurveNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsCurveNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsCurveNode\nC++: vtkMRMLMarkupsCurveNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsCurveNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsCurveNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetIcon", PyvtkMRMLMarkupsCurveNode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: const char *GetIcon() override;\n\n"},
  {"GetAddIcon", PyvtkMRMLMarkupsCurveNode_GetAddIcon, METH_VARARGS,
   "GetAddIcon(self) -> str\nC++: const char *GetAddIcon() override;\n\n"},
  {"GetPlaceAddIcon", PyvtkMRMLMarkupsCurveNode_GetPlaceAddIcon, METH_VARARGS,
   "GetPlaceAddIcon(self) -> str\nC++: const char *GetPlaceAddIcon() override;\n\n"},
  {"CreateNodeInstance", PyvtkMRMLMarkupsCurveNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLMarkupsCurveNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetMarkupType", PyvtkMRMLMarkupsCurveNode_GetMarkupType, METH_VARARGS,
   "GetMarkupType(self) -> str\nC++: const char *GetMarkupType() override;\n\nGet markup type internal name\n"},
  {"GetTypeDisplayName", PyvtkMRMLMarkupsCurveNode_GetTypeDisplayName, METH_VARARGS,
   "GetTypeDisplayName(self) -> str\nC++: const char *GetTypeDisplayName() override;\n\nGet node type display name (like \"Closed Curve\", \"Markup\", etc).\n\note Subclasses should override this method to provide a more\nappropriate and translatable name.\n"},
  {"GetDefaultNodeNamePrefix", PyvtkMRMLMarkupsCurveNode_GetDefaultNodeNamePrefix, METH_VARARGS,
   "GetDefaultNodeNamePrefix(self) -> str\nC++: const char *GetDefaultNodeNamePrefix() override;\n\nGet markup short name\n"},
  {"CopyContent", PyvtkMRMLMarkupsCurveNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLMarkupsCurveNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"GetCurvePointsWorld", PyvtkMRMLMarkupsCurveNode_GetCurvePointsWorld, METH_VARARGS,
   "GetCurvePointsWorld(self) -> vtkPoints\nC++: vtkPoints *GetCurvePointsWorld() override;\n\nGet curve points positions in world coordinate system.\n"},
  {"GetCurveWorld", PyvtkMRMLMarkupsCurveNode_GetCurveWorld, METH_VARARGS,
   "GetCurveWorld(self) -> vtkPolyData\nC++: vtkPolyData *GetCurveWorld() override;\n\n"},
  {"GetCurveWorldConnection", PyvtkMRMLMarkupsCurveNode_GetCurveWorldConnection, METH_VARARGS,
   "GetCurveWorldConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetCurveWorldConnection() override;\n\n"},
  {"GetCurveLengthWorld", PyvtkMRMLMarkupsCurveNode_GetCurveLengthWorld, METH_VARARGS,
   "GetCurveLengthWorld(self, startCurvePointIndex:int=0,\n    numberOfCurvePoints:int=-1) -> float\nC++: double GetCurveLengthWorld(vtkIdType startCurvePointIndex=0,\n    vtkIdType numberOfCurvePoints=-1)\n\nGet length of the curve or a section of the curve.\n\\param startCurvePointIndex length computation starts from this\n    curve point index\n\\param numberOfCurvePoints if specified then distances up to the\n    first n points are computed.\n  If <0 then all the points are used.\n\\return sum of distances between the curve points, returns 0 in\n    case of an error\n"},
  {"GetCurveLength", PyvtkMRMLMarkupsCurveNode_GetCurveLength, METH_VARARGS,
   "GetCurveLength(curvePoints:vtkPoints, closedCurve:bool,\n    startCurvePointIndex:int=0, numberOfCurvePoints:int=-1)\n    -> float\nC++: static double GetCurveLength(vtkPoints *curvePoints,\n    bool closedCurve, vtkIdType startCurvePointIndex=0,\n    vtkIdType numberOfCurvePoints=-1)\n\nUtility function to get curve length from a point list.\n\\sa GetCurveLengthWorld\n"},
  {"GetCurveLengthBetweenStartEndPointsWorld", PyvtkMRMLMarkupsCurveNode_GetCurveLengthBetweenStartEndPointsWorld, METH_VARARGS,
   "GetCurveLengthBetweenStartEndPointsWorld(self,\n    startCurvePointIndex:int, endCurvePointIndex:int) -> float\nC++: double GetCurveLengthBetweenStartEndPointsWorld(\n    vtkIdType startCurvePointIndex, vtkIdType endCurvePointIndex)\n\nGet length of a section of the curve between startPointIndex and\nendPointIndex. If endPointIndex < startPointIndex then length\noutside of the section is computed.\n\\param startCurvePointIndex length computation starts from this\n    curve point index\n\\param endCurvePointIndex length computation starts from this\n    curve point index\n\\return sum of distances between the curve points, returns 0 in\n    case of an error\n"},
  {"SetControlPointLabels", PyvtkMRMLMarkupsCurveNode_SetControlPointLabels, METH_VARARGS,
   "SetControlPointLabels(self, labels:vtkStringArray,\n    points:vtkPoints) -> bool\nC++: bool SetControlPointLabels(vtkStringArray *labels,\n    vtkPoints *points)\n\nProvides access to protected\nvtkMRMLMarkupsNode::SetControlPointLabelsWorld\n"},
  {"ConstrainPointsToSurface", PyvtkMRMLMarkupsCurveNode_ConstrainPointsToSurface, METH_VARARGS,
   "ConstrainPointsToSurface(originalPoints:vtkPoints,\n    normalVectors:vtkPoints, surfacePolydata:vtkPolyData,\n    surfacePoints:vtkPoints, maximumSearchRadius:float=.25)\n    -> bool\nC++: static bool ConstrainPointsToSurface(\n    vtkPoints *originalPoints, vtkPoints *normalVectors,\n    vtkPolyData *surfacePolydata, vtkPoints *surfacePoints,\n    double maximumSearchRadius=.25)\n\nConstrain points to a specified model surface Projection to\nsurface is constrained by maximumSearchRadius, specified as a\npercentage of the model's bounding box diagonal in world\ncoordinate system. maximumSearchRadius is valid in the range\nbetween 0 and 1. returns true if successful, false in case of\nerror\n\n\\sa vtkProjectMarkupsCurvePointsFilter::ConstrainPointsToSurface\n"},
  {"ResampleCurveWorld", PyvtkMRMLMarkupsCurveNode_ResampleCurveWorld, METH_VARARGS,
   "ResampleCurveWorld(self, controlPointDistance:float) -> None\nC++: void ResampleCurveWorld(double controlPointDistance)\n\nResample control points to have equal distances in the world\ncoordinate system.\n"},
  {"ResamplePoints", PyvtkMRMLMarkupsCurveNode_ResamplePoints, METH_VARARGS,
   "ResamplePoints(originalPoints:vtkPoints,\n    interpolatedPoints:vtkPoints, samplingDistance:float,\n    closedCurve:bool, pedigreeIdsArray:vtkDoubleArray=...) -> bool\nC++: static bool ResamplePoints(vtkPoints *originalPoints,\n    vtkPoints *interpolatedPoints, double samplingDistance,\n    bool closedCurve, vtkDoubleArray *pedigreeIdsArray=nullptr)\n\nResample control points to have equal distances in the node's\ncoordinate system.\n"},
  {"ResampleStaticControlPointMeasurements", PyvtkMRMLMarkupsCurveNode_ResampleStaticControlPointMeasurements, METH_VARARGS,
   "ResampleStaticControlPointMeasurements(measurements:vtkCollection,\n     curvePointsPedigreeIdsArray:vtkDoubleArray,\n    curvePointsPerControlPoint:int, closedCurve:bool) -> bool\nC++: static bool ResampleStaticControlPointMeasurements(\n    vtkCollection *measurements,\n    vtkDoubleArray *curvePointsPedigreeIdsArray,\n    int curvePointsPerControlPoint, bool closedCurve)\n\nResample static control point measurements using linear\ninterpolation, based on fractional pedigreeIds.\n"},
  {"GetSampledCurvePointsBetweenStartEndPointsWorld", PyvtkMRMLMarkupsCurveNode_GetSampledCurvePointsBetweenStartEndPointsWorld, METH_VARARGS,
   "GetSampledCurvePointsBetweenStartEndPointsWorld(self,\n    sampledPoints:vtkPoints, samplingDistance:float,\n    startCurvePointIndex:int, endCurvePointIndex:int) -> bool\nC++: bool GetSampledCurvePointsBetweenStartEndPointsWorld(\n    vtkPoints *sampledPoints, double samplingDistance,\n    vtkIdType startCurvePointIndex, vtkIdType endCurvePointIndex)\n\nSamples points along the curve at equal distances. If\nendPointIndex < startPointIndex then after the last point, the\ncurve is assumed to continue at the first point.\n"},
  {"GetClosestCurvePointIndexToPositionWorld", PyvtkMRMLMarkupsCurveNode_GetClosestCurvePointIndexToPositionWorld, METH_VARARGS,
   "GetClosestCurvePointIndexToPositionWorld(self, posWorld:(float,\n    float, float)) -> int\nC++: vtkIdType GetClosestCurvePointIndexToPositionWorld(\n    const double posWorld[3])\n\nGet the index of the closest curve point to the world coordinates\n"},
  {"GetClosestPointPositionAlongCurveWorld", PyvtkMRMLMarkupsCurveNode_GetClosestPointPositionAlongCurveWorld, METH_VARARGS,
   "GetClosestPointPositionAlongCurveWorld(self, posWorld:(float,\n    float, float), closestPosWorld:[float, float, float]) -> int\nC++: vtkIdType GetClosestPointPositionAlongCurveWorld(\n    const double posWorld[3], double closestPosWorld[3])\n\nGet position of the closest point along the curve in world\ncoordinates. The found position may be between two curve points.\nReturns index of the found line segment. -1 if failed.\n\\param posWorld: input position\n\\param closestPosWorld: output found closest position\n"},
  {"GetClosestPointPositionAlongCurve", PyvtkMRMLMarkupsCurveNode_GetClosestPointPositionAlongCurve, METH_VARARGS,
   "GetClosestPointPositionAlongCurve(points:vtkPoints, pos:(float,\n    float, float), closestPos:[float, float, float],\n    pointLocator:vtkPointLocator=...) -> int\nC++: static vtkIdType GetClosestPointPositionAlongCurve(\n    vtkPoints *points, const double pos[3], double closestPos[3],\n    vtkPointLocator *pointLocator=nullptr)\n\nGet position of the closest point along the curve in any\ncoordinate system. The found position may be between two curve\npoints. Returns index of the found line segment. -1 if failed.\n\\param points: curve points\n\\param posWorld: input position\n\\param closestPosWorld: output found closest position\n\\param pointLocator: point locator for points. Optional, if not\n    specified then closest point is found by a slow method\n    (iterating through all the points).\n"},
  {"GetFarthestCurvePointIndexToPositionWorld", PyvtkMRMLMarkupsCurveNode_GetFarthestCurvePointIndexToPositionWorld, METH_VARARGS,
   "GetFarthestCurvePointIndexToPositionWorld(self, posWorld:(float,\n    float, float)) -> int\nC++: vtkIdType GetFarthestCurvePointIndexToPositionWorld(\n    const double posWorld[3])\n\nGet index of the farthest curve point from the specified\nreference point in world coordinates. Distance is Euclidean\ndistance, not distance along the curve.\n\\param posWorld Reference point position in world coordinate\n    system\n\\return index of the farthest curve point from refPoint, -1 in\n    case of error\n"},
  {"GetFarthestCurvePointIndexToPosition", PyvtkMRMLMarkupsCurveNode_GetFarthestCurvePointIndexToPosition, METH_VARARGS,
   "GetFarthestCurvePointIndexToPosition(points:vtkPoints, posWorld:(\n    float, float, float)) -> int\nC++: static vtkIdType GetFarthestCurvePointIndexToPosition(\n    vtkPoints *points, const double posWorld[3])\n\nGet index of the farthest curve point from the specified\nreference point in any coordinate system. Distance is Euclidean\ndistance, not distance along the curve.\n\\param posWorld Reference point position in world coordinate\n    system\n\\return index of the farthest curve point from refPoint, -1 in\n    case of error\n"},
  {"GetCurvePointIndexFromControlPointIndex", PyvtkMRMLMarkupsCurveNode_GetCurvePointIndexFromControlPointIndex, METH_VARARGS,
   "GetCurvePointIndexFromControlPointIndex(self,\n    controlPointIndex:int) -> int\nC++: vtkIdType GetCurvePointIndexFromControlPointIndex(\n    int controlPointIndex)\n\nGet curve point index corresponding to a control point. It is\nuseful for calling methods that require curve point index as\ninput.\n"},
  {"GetPositionAndClosestPointIndexAlongCurve", PyvtkMRMLMarkupsCurveNode_GetPositionAndClosestPointIndexAlongCurve, METH_VARARGS,
   "GetPositionAndClosestPointIndexAlongCurve(\n    foundCurvePosition:[float, float, float],\n    foundClosestPointIndex:int, startCurvePointId:int,\n    distanceFromStartPoint:float, curvePoints:vtkPoints,\n    closedCurve:bool) -> bool\nC++: static bool GetPositionAndClosestPointIndexAlongCurve(\n    double foundCurvePosition[3],\n    vtkIdType &foundClosestPointIndex,\n    vtkIdType startCurvePointId, double distanceFromStartPoint,\n    vtkPoints *curvePoints, bool closedCurve)\n\nGet point position along curve. Position is found along the curve\nand not snapped to closest curve point.\n"},
  {"GetCurvePointIndexAlongCurveWorld", PyvtkMRMLMarkupsCurveNode_GetCurvePointIndexAlongCurveWorld, METH_VARARGS,
   "GetCurvePointIndexAlongCurveWorld(self, startCurvePointId:int,\n    distanceFromStartPoint:float) -> int\nC++: vtkIdType GetCurvePointIndexAlongCurveWorld(\n    vtkIdType startCurvePointId, double distanceFromStartPoint)\n\nGet position of a curve point along the curve relative to the\nspecified start point index in world coordinate system.\n\\param startCurvePointId index of the curve point to start the\n    distance measurement from\n\\param distanceFromStartPoint distance from the start point\n\\return found point index, -1 in case of an error\n"},
  {"GetCurvePointIndexAlongCurve", PyvtkMRMLMarkupsCurveNode_GetCurvePointIndexAlongCurve, METH_VARARGS,
   "GetCurvePointIndexAlongCurve(points:vtkPoints,\n    startCurvePointId:int, distanceFromStartPoint:float,\n    curveClosed:bool) -> int\nC++: static vtkIdType GetCurvePointIndexAlongCurve(\n    vtkPoints *points, vtkIdType startCurvePointId,\n    double distanceFromStartPoint, bool curveClosed)\n\nGet position of a curve point along the curve relative to the\nspecified start point index in any coordinate system.\n\\param startCurvePointId index of the curve point to start the\n    distance measurement from\n\\param distanceFromStartPoint distance from the start point\n\\return found point index, -1 in case of an error\n"},
  {"GetPositionAlongCurveWorld", PyvtkMRMLMarkupsCurveNode_GetPositionAlongCurveWorld, METH_VARARGS,
   "GetPositionAlongCurveWorld(self, foundCurvePosition:[float, float,\n     float], startCurvePointId:int, distanceFromStartPoint:float)\n    -> bool\nC++: bool GetPositionAlongCurveWorld(double foundCurvePosition[3],\n     vtkIdType startCurvePointId, double distanceFromStartPoint)\n\nGet position of a point along the curve relative to the specified\nstart point index. The returned position can be between curve\npoints (to match the requested distance as accurately as\npossible).\n\\param startCurvePointId index of the curve point to start the\n    distance measurement from\n\\param distanceFromStartPoint distance from the start point\n\\return true if a point found exactly at the requested distance\n"},
  {"GetCurveDirectionAtPointIndexWorld", PyvtkMRMLMarkupsCurveNode_GetCurveDirectionAtPointIndexWorld, METH_VARARGS,
   "GetCurveDirectionAtPointIndexWorld(self, curvePointIndex:int,\n    directionVectorWorld:[float, float, float]) -> bool\nC++: bool GetCurveDirectionAtPointIndexWorld(\n    vtkIdType curvePointIndex, double directionVectorWorld[3])\n\nGet direction vector at specified curve point index, in World\ncoordinate system.\n\\return true on success.\n"},
  {"GetCurvePointToWorldTransformAtPointIndex", PyvtkMRMLMarkupsCurveNode_GetCurvePointToWorldTransformAtPointIndex, METH_VARARGS,
   "GetCurvePointToWorldTransformAtPointIndex(self,\n    curvePointIndex:int, curvePointToWorld:vtkMatrix4x4) -> bool\nC++: bool GetCurvePointToWorldTransformAtPointIndex(\n    vtkIdType curvePointIndex, vtkMatrix4x4 *curvePointToWorld)\n\nGet transformation from CurvePoint to World coordinate system at\nthe specified curve point index. CurvePoint coordinate system:\n- Origin: position of the curve point.\n- X axis: curve normal direction.\n- Y axis: binormal direction (tangent x normal).\n- Z axis: curve tangent direction.\n\\return true on success.\n"},
  {"GetPointsOnPlaneWorld", PyvtkMRMLMarkupsCurveNode_GetPointsOnPlaneWorld, METH_VARARGS,
   "GetPointsOnPlaneWorld(self, plane:vtkPlane,\n    intersectionPoints:vtkPoints) -> bool\nC++: bool GetPointsOnPlaneWorld(vtkPlane *plane,\n    vtkPoints *intersectionPoints)\n\n"},
  {"GetCurveType", PyvtkMRMLMarkupsCurveNode_GetCurveType, METH_VARARGS,
   "GetCurveType(self) -> int\nC++: int GetCurveType()\n\nType of curve to generate\n"},
  {"SetCurveType", PyvtkMRMLMarkupsCurveNode_SetCurveType, METH_VARARGS,
   "SetCurveType(self, type:int) -> None\nC++: void SetCurveType(int type)\n\n"},
  {"GetCurveTypeAsString", PyvtkMRMLMarkupsCurveNode_GetCurveTypeAsString, METH_VARARGS,
   "GetCurveTypeAsString(self, id:int) -> str\nC++: const char *GetCurveTypeAsString(int id)\n\n"},
  {"GetCurveTypeFromString", PyvtkMRMLMarkupsCurveNode_GetCurveTypeFromString, METH_VARARGS,
   "GetCurveTypeFromString(self, name:str) -> int\nC++: int GetCurveTypeFromString(const char *name)\n\n"},
  {"SetCurveTypeToLinear", PyvtkMRMLMarkupsCurveNode_SetCurveTypeToLinear, METH_VARARGS,
   "SetCurveTypeToLinear(self) -> None\nC++: void SetCurveTypeToLinear()\n\n"},
  {"SetCurveTypeToCardinalSpline", PyvtkMRMLMarkupsCurveNode_SetCurveTypeToCardinalSpline, METH_VARARGS,
   "SetCurveTypeToCardinalSpline(self) -> None\nC++: void SetCurveTypeToCardinalSpline()\n\n"},
  {"SetCurveTypeToKochanekSpline", PyvtkMRMLMarkupsCurveNode_SetCurveTypeToKochanekSpline, METH_VARARGS,
   "SetCurveTypeToKochanekSpline(self) -> None\nC++: void SetCurveTypeToKochanekSpline()\n\n"},
  {"SetCurveTypeToPolynomial", PyvtkMRMLMarkupsCurveNode_SetCurveTypeToPolynomial, METH_VARARGS,
   "SetCurveTypeToPolynomial(self) -> None\nC++: void SetCurveTypeToPolynomial()\n\n"},
  {"SetCurveTypeToShortestDistanceOnSurface", PyvtkMRMLMarkupsCurveNode_SetCurveTypeToShortestDistanceOnSurface, METH_VARARGS,
   "SetCurveTypeToShortestDistanceOnSurface(self,\n    modelNode:vtkMRMLModelNode=...) -> None\nC++: void SetCurveTypeToShortestDistanceOnSurface(\n    vtkMRMLModelNode *modelNode=nullptr)\n\n"},
  {"GetShortestDistanceSurfaceNodeReferenceRole", PyvtkMRMLMarkupsCurveNode_GetShortestDistanceSurfaceNodeReferenceRole, METH_VARARGS,
   "GetShortestDistanceSurfaceNodeReferenceRole(self) -> str\nC++: const char *GetShortestDistanceSurfaceNodeReferenceRole()\n\n\\deprecated GetShortestDistanceSurfaceNodeReferenceRole\n\\sa GetSurfaceConstraintNodeReferenceRole\n"},
  {"GetShortestDistanceSurfaceNodeReferenceMRMLAttributeName", PyvtkMRMLMarkupsCurveNode_GetShortestDistanceSurfaceNodeReferenceMRMLAttributeName, METH_VARARGS,
   "GetShortestDistanceSurfaceNodeReferenceMRMLAttributeName(self)\n    -> str\nC++: const char *GetShortestDistanceSurfaceNodeReferenceMRMLAttributeName(\n    )\n\n\\deprecated\nGetShortestDistanceSurfaceNodeReferenceMRMLAttributeName\n\\sa GetSurfaceConstraintNodeReferenceMRMLAttributeName\n"},
  {"GetSurfaceConstraintNodeReferenceRole", PyvtkMRMLMarkupsCurveNode_GetSurfaceConstraintNodeReferenceRole, METH_VARARGS,
   "GetSurfaceConstraintNodeReferenceRole(self) -> str\nC++: const char *GetSurfaceConstraintNodeReferenceRole()\n\nNode reference role for the surface that is used to project the\ncurve onto\n"},
  {"GetSurfaceConstraintNodeReferenceMRMLAttributeName", PyvtkMRMLMarkupsCurveNode_GetSurfaceConstraintNodeReferenceMRMLAttributeName, METH_VARARGS,
   "GetSurfaceConstraintNodeReferenceMRMLAttributeName(self) -> str\nC++: const char *GetSurfaceConstraintNodeReferenceMRMLAttributeName(\n    )\n\n"},
  {"SetAndObserveShortestDistanceSurfaceNode", PyvtkMRMLMarkupsCurveNode_SetAndObserveShortestDistanceSurfaceNode, METH_VARARGS,
   "SetAndObserveShortestDistanceSurfaceNode(self,\n    modelNode:vtkMRMLModelNode) -> None\nC++: void SetAndObserveShortestDistanceSurfaceNode(\n    vtkMRMLModelNode *modelNode)\n\nThe model node that is used as the surface mesh for finding the\nshortest distance path on the surface mesh. Used by the\nShortestDistanceOnSurface curve type.\\deprecated\nSetAndObserveShortestDistanceSurfaceNode\n\\sa SetAndObserveSurfaceConstraintNode\n"},
  {"GetShortestDistanceSurfaceNode", PyvtkMRMLMarkupsCurveNode_GetShortestDistanceSurfaceNode, METH_VARARGS,
   "GetShortestDistanceSurfaceNode(self) -> vtkMRMLModelNode\nC++: vtkMRMLModelNode *GetShortestDistanceSurfaceNode()\n\n\\deprecated GetShortestDistanceSurfaceNode\n\\sa GetSurfaceConstraintNode\n"},
  {"SetAndObserveSurfaceConstraintNode", PyvtkMRMLMarkupsCurveNode_SetAndObserveSurfaceConstraintNode, METH_VARARGS,
   "SetAndObserveSurfaceConstraintNode(self,\n    modelNode:vtkMRMLModelNode) -> None\nC++: void SetAndObserveSurfaceConstraintNode(\n    vtkMRMLModelNode *modelNode)\n\nSet/Get the model node that is used as the surface mesh for\nfinding the shortest distance path on the surface mesh.\n"},
  {"GetSurfaceConstraintNode", PyvtkMRMLMarkupsCurveNode_GetSurfaceConstraintNode, METH_VARARGS,
   "GetSurfaceConstraintNode(self) -> vtkMRMLModelNode\nC++: vtkMRMLModelNode *GetSurfaceConstraintNode()\n\n"},
  {"SetSurfaceConstraintMaximumSearchRadiusTolerance", PyvtkMRMLMarkupsCurveNode_SetSurfaceConstraintMaximumSearchRadiusTolerance, METH_VARARGS,
   "SetSurfaceConstraintMaximumSearchRadiusTolerance(self,\n    tolerance:float) -> None\nC++: void SetSurfaceConstraintMaximumSearchRadiusTolerance(\n    double tolerance)\n\nSet/Get maximumSearchRadiusTolerance defining the allowable\nprojection distance when projecting curve to surface.\n\nIt is specified as a percentage of the model's bounding box\ndiagonal in world coordinate system.\n"},
  {"GetSurfaceConstraintMaximumSearchRadiusTolerance", PyvtkMRMLMarkupsCurveNode_GetSurfaceConstraintMaximumSearchRadiusTolerance, METH_VARARGS,
   "GetSurfaceConstraintMaximumSearchRadiusTolerance(self) -> float\nC++: double GetSurfaceConstraintMaximumSearchRadiusTolerance()\n\n"},
  {"GetSurfaceCostFunctionType", PyvtkMRMLMarkupsCurveNode_GetSurfaceCostFunctionType, METH_VARARGS,
   "GetSurfaceCostFunctionType(self) -> int\nC++: int GetSurfaceCostFunctionType()\n\nThe method that should be used to combine the distance with the\nscalar value for ShortestDistanceOnSurface curve type. Uses the\nCOST_FUNCTION_X enums from vtkSlicerDijkstraGraphGeodesicPath.\n"},
  {"SetSurfaceCostFunctionType", PyvtkMRMLMarkupsCurveNode_SetSurfaceCostFunctionType, METH_VARARGS,
   "SetSurfaceCostFunctionType(self, surfaceCostFunctionType:int)\n    -> None\nC++: void SetSurfaceCostFunctionType(int surfaceCostFunctionType)\n\n"},
  {"GetSurfaceCostFunctionTypeAsString", PyvtkMRMLMarkupsCurveNode_GetSurfaceCostFunctionTypeAsString, METH_VARARGS,
   "GetSurfaceCostFunctionTypeAsString(surfaceCostFunctionType:int)\n    -> str\nC++: static const char *GetSurfaceCostFunctionTypeAsString(\n    int surfaceCostFunctionType)\n\n"},
  {"GetSurfaceCostFunctionTypeFromString", PyvtkMRMLMarkupsCurveNode_GetSurfaceCostFunctionTypeFromString, METH_VARARGS,
   "GetSurfaceCostFunctionTypeFromString(name:str) -> int\nC++: static int GetSurfaceCostFunctionTypeFromString(\n    const char *name)\n\n"},
  {"GetSurfaceDistanceWeightingFunction", PyvtkMRMLMarkupsCurveNode_GetSurfaceDistanceWeightingFunction, METH_VARARGS,
   "GetSurfaceDistanceWeightingFunction(self) -> str\nC++: const char *GetSurfaceDistanceWeightingFunction()\n\nThe scalar weight function that is used for modifying the weight\non each vertex for ShortestDistanceOnSurface curve type. The the\ncurrently active point scalar array is available as the\n\"activeScalar\" variable.\n"},
  {"SetSurfaceDistanceWeightingFunction", PyvtkMRMLMarkupsCurveNode_SetSurfaceDistanceWeightingFunction, METH_VARARGS,
   "SetSurfaceDistanceWeightingFunction(self, function:str) -> None\nC++: void SetSurfaceDistanceWeightingFunction(\n    const char *function)\n\n"},
  {"GetNumberOfPointsPerInterpolatingSegment", PyvtkMRMLMarkupsCurveNode_GetNumberOfPointsPerInterpolatingSegment, METH_VARARGS,
   "GetNumberOfPointsPerInterpolatingSegment(self) -> int\nC++: int GetNumberOfPointsPerInterpolatingSegment()\n\nGet/set how many curve points are inserted between control\npoints. Higher values are recommended if distance between control\npoints is large.\n"},
  {"SetNumberOfPointsPerInterpolatingSegment", PyvtkMRMLMarkupsCurveNode_SetNumberOfPointsPerInterpolatingSegment, METH_VARARGS,
   "SetNumberOfPointsPerInterpolatingSegment(self,\n    pointsPerSegment:int) -> None\nC++: void SetNumberOfPointsPerInterpolatingSegment(\n    int pointsPerSegment)\n\nGet/set how many curve points are inserted between control\npoints. Higher values are recommended if distance between control\npoints is large.\n"},
  {"UpdateAssignedAttribute", PyvtkMRMLMarkupsCurveNode_UpdateAssignedAttribute, METH_VARARGS,
   "UpdateAssignedAttribute(self) -> None\nC++: virtual void UpdateAssignedAttribute() override;\n\nUpdate scalar range and update markups pipeline when the active\nscalar array is changed\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsCurveNode_Doc =
  "vtkMRMLMarkupsCurveNode - MRML node to represent a curve markup\n\n"
  "Superclass: vtkMRMLMarkupsNode\n\n"
  "Curve Markups nodes contain N control points. Visualization\n"
  "parameters are set in the vtkMRMLMarkupsDisplayNode class.\n\n"
  "Markups is intended to be used for manual marking/editing of point\n"
  "positions.\n\n"
  "Coordinate systems used:\n"
  "- Local: Current node's coordinate system where the position of the\n"
  "  control and curve points are defined. Local coordinates can be\n"
  "  converted to world by concatenating all parent transforms on the\n"
  "  current node.\n"
  "- Surface: Model node's coordinate system where the polydata used for\n"
  "ShortestDistanceOnSurface pathfinding is defined. Surface coordinates\n"
  "can be converted to world by concatenating all parent transforms on\n"
  "  the surface node.\n"
  "- World: Patient coordinate system (RAS)\n\n"
  "Markups measurement pipeline:\n\n"
  "+------------------------------------------vtkMarkupsCurveNode--------\n"
  "---------------------------------------+ |  +-vtkMRMLMarkupsNode-+   \n"
  "                                                         === :\n"
  "Display pipeline | |  |                    |       \n"
  "+-vtkCurveGenerator-+                                                \n"
  "      | |  |   CurveInputPoly=============                   | :\n"
  "Generate interpolated curve from the control points | |  |  \n"
  "Measurements--------+     +---------\342\225\221---------+                    \n"
  "                                  | |  |                    |  |     \n"
  "         \342\225\221                                                         \n"
  "       | |  +--------------------+  |               \342\225\221              \n"
  "                                                  | |                \n"
  "        ++-vtkCurveMeasurementsCalculator-+                          \n"
  "                     | |                         |                   \n"
  "             | : Add measurements as data arrays to the curve | |    \n"
  "                    +----------------\342\225\221----------------+   poly data\n"
  "                                   | |                               \n"
  "          \342\225\221                                                        \n"
  "        | |                                          \342\225\221             \n"
  "                                                   | |               \n"
  "         +---vtkTransformPolyDataFilter----+                         \n"
  "                      | |                         | \n"
  "(CurvePolyToWorldTransformer)  |                                     \n"
  "          | |                        \n"
  "+----------------\342\225\221----------------+                                \n"
  "               | |                                          \342\225\221      \n"
  "                                                          |\n"
  "+------------------------------------------\342\225\221------------------------\n"
  "-----------------------------------------+\n"
  "                                           \342\225\221\n"
  "                        \n"
  "+-----------------\342\225\221-------vtkSlicerCurveRepresentation3D------------\n"
  "----------+\n"
  "                         |                 \342\225\221                       \n"
  "                                   |\n"
  "                         |                 \342\225\221(vtkCleaner in between)\n"
  "                                   |\n"
  "                         |        +--vtkTubeFilter--+                \n"
  "                                 |\n"
  "                         |        |                 =========>\n"
  "vtkPolyDataMapper => vtkActor           |\n"
  "                         |        +-----------------+                \n"
  "                                 |\n"
  "                        \n"
  "+---------------------------------------------------------------------\n"
  "--------+\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsCurveNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsCurveNode", // tp_name
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
  PyvtkMRMLMarkupsCurveNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsCurveNode_StaticNew()
{
  return vtkMRMLMarkupsCurveNode::New();
}

PyObject *PyvtkMRMLMarkupsCurveNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsCurveNode_Type, PyvtkMRMLMarkupsCurveNode_Methods,
    "vtkMRMLMarkupsCurveNode",
 &PyvtkMRMLMarkupsCurveNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLMarkupsNode_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMarkupsCurveNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsCurveNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsCurveNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

