// python wrapper for vtkMRMLSliceLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSliceLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSliceLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSliceLogic_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractLogic_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractLogic_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractLogic_ClassNew
#endif

static PyObject *
PyvtkMRMLSliceLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSliceLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSliceLogic *tempr = vtkMRMLSliceLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSliceLogic::NewInstance());

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
PyvtkMRMLSliceLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSliceLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSliceLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetSliceNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceNode *tempr = (ap.IsBound() ?
      op->GetSliceNode() :
      op->vtkMRMLSliceLogic::GetSliceNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceLogic_GetSliceNode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSliceNode");

  vtkMRMLSliceCompositeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceCompositeNode"))
  {
    vtkMRMLSliceNode *tempr = vtkMRMLSliceLogic::GetSliceNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceLogic_GetSliceNode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLSliceLogic_GetSliceNode_s1(self, args);
    case 1:
      return PyvtkMRMLSliceLogic_GetSliceNode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSliceNode");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceLogic_SetSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

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
      op->vtkMRMLSliceLogic::SetSliceNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_AddSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLSliceNode *tempr = (ap.IsBound() ?
      op->AddSliceNode(temp0) :
      op->vtkMRMLSliceLogic::AddSliceNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetSliceCompositeNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceCompositeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceCompositeNode *tempr = (ap.IsBound() ?
      op->GetSliceCompositeNode() :
      op->vtkMRMLSliceLogic::GetSliceCompositeNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceLogic_GetSliceCompositeNode_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSliceCompositeNode");

  vtkMRMLSliceNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode"))
  {
    vtkMRMLSliceCompositeNode *tempr = vtkMRMLSliceLogic::GetSliceCompositeNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceLogic_GetSliceCompositeNode(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLSliceLogic_GetSliceCompositeNode_s1(self, args);
    case 1:
      return PyvtkMRMLSliceLogic_GetSliceCompositeNode_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSliceCompositeNode");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceLogic_SetSliceCompositeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceCompositeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  vtkMRMLSliceCompositeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceCompositeNode"))
  {
    if (ap.IsBound())
    {
      op->SetSliceCompositeNode(temp0);
    }
    else
    {
      op->vtkMRMLSliceLogic::SetSliceCompositeNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetBackgroundLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceLayerLogic *tempr = (ap.IsBound() ?
      op->GetBackgroundLayer() :
      op->vtkMRMLSliceLogic::GetBackgroundLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_SetBackgroundLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  vtkMRMLSliceLayerLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceLayerLogic"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundLayer(temp0);
    }
    else
    {
      op->vtkMRMLSliceLogic::SetBackgroundLayer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetForegroundLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForegroundLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceLayerLogic *tempr = (ap.IsBound() ?
      op->GetForegroundLayer() :
      op->vtkMRMLSliceLogic::GetForegroundLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_SetForegroundLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  vtkMRMLSliceLayerLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceLayerLogic"))
  {
    if (ap.IsBound())
    {
      op->SetForegroundLayer(temp0);
    }
    else
    {
      op->vtkMRMLSliceLogic::SetForegroundLayer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetLabelLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceLayerLogic *tempr = (ap.IsBound() ?
      op->GetLabelLayer() :
      op->vtkMRMLSliceLogic::GetLabelLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_SetLabelLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  vtkMRMLSliceLayerLogic *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceLayerLogic"))
  {
    if (ap.IsBound())
    {
      op->SetLabelLayer(temp0);
    }
    else
    {
      op->vtkMRMLSliceLogic::SetLabelLayer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_SetBackgroundWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundWindowLevel(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceLogic::SetBackgroundWindowLevel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetBackgroundWindowLevelAndRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundWindowLevelAndRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  bool temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->GetBackgroundWindowLevelAndRange(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkMRMLSliceLogic::GetBackgroundWindowLevelAndRange(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceLogic_GetBackgroundWindowLevelAndRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundWindowLevelAndRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->GetBackgroundWindowLevelAndRange(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLSliceLogic::GetBackgroundWindowLevelAndRange(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceLogic_GetBackgroundWindowLevelAndRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkMRMLSliceLogic_GetBackgroundWindowLevelAndRange_s1(self, args);
    case 4:
      return PyvtkMRMLSliceLogic_GetBackgroundWindowLevelAndRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBackgroundWindowLevelAndRange");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceLogic_SetForegroundWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetForegroundWindowLevel(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceLogic::SetForegroundWindowLevel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetForegroundWindowLevelAndRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForegroundWindowLevelAndRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  bool temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->GetForegroundWindowLevelAndRange(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkMRMLSliceLogic::GetForegroundWindowLevelAndRange(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceLogic_GetForegroundWindowLevelAndRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForegroundWindowLevelAndRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->GetForegroundWindowLevelAndRange(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLSliceLogic::GetForegroundWindowLevelAndRange(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceLogic_GetForegroundWindowLevelAndRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkMRMLSliceLogic_GetForegroundWindowLevelAndRange_s1(self, args);
    case 4:
      return PyvtkMRMLSliceLogic_GetForegroundWindowLevelAndRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetForegroundWindowLevelAndRange");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceLogic_GetSliceModelNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceModelNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelNode *tempr = (ap.IsBound() ?
      op->GetSliceModelNode() :
      op->vtkMRMLSliceLogic::GetSliceModelNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetSliceModelDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceModelDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLModelDisplayNode *tempr = (ap.IsBound() ?
      op->GetSliceModelDisplayNode() :
      op->vtkMRMLSliceLogic::GetSliceModelDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetSliceDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceDisplayNode *tempr = (ap.IsBound() ?
      op->GetSliceDisplayNode() :
      op->vtkMRMLSliceLogic::GetSliceDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetSliceModelTransformNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceModelTransformNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLLinearTransformNode *tempr = (ap.IsBound() ?
      op->GetSliceModelTransformNode() :
      op->vtkMRMLSliceLogic::GetSliceModelTransformNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetBlend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageBlend *tempr = (ap.IsBound() ?
      op->GetBlend() :
      op->vtkMRMLSliceLogic::GetBlend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetBlendUVW(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendUVW");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageBlend *tempr = (ap.IsBound() ?
      op->GetBlendUVW() :
      op->vtkMRMLSliceLogic::GetBlendUVW());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetExtractModelTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractModelTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReslice *tempr = (ap.IsBound() ?
      op->GetExtractModelTexture() :
      op->vtkMRMLSliceLogic::GetExtractModelTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetImageDataConnection() :
      op->vtkMRMLSliceLogic::GetImageDataConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_UpdatePipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePipeline();
    }
    else
    {
      op->vtkMRMLSliceLogic::UpdatePipeline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_UpdateImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateImageData();
    }
    else
    {
      op->vtkMRMLSliceLogic::UpdateImageData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_EnterMRMLCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnterMRMLCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->EnterMRMLCallback() :
      op->vtkMRMLSliceLogic::EnterMRMLCallback());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_UpdateSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateSliceNode();
    }
    else
    {
      op->vtkMRMLSliceLogic::UpdateSliceNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_UpdateSliceNodeFromLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSliceNodeFromLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateSliceNodeFromLayout();
    }
    else
    {
      op->vtkMRMLSliceLogic::UpdateSliceNodeFromLayout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_UpdateSliceCompositeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSliceCompositeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateSliceCompositeNode();
    }
    else
    {
      op->vtkMRMLSliceLogic::UpdateSliceCompositeNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetLayerVolumeNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerVolumeNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLVolumeNode *tempr = (ap.IsBound() ?
      op->GetLayerVolumeNode(temp0) :
      op->vtkMRMLSliceLogic::GetLayerVolumeNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetVolumeRASBox(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVolumeRASBox");

  vtkMRMLVolumeNode *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMRMLSliceLogic::GetVolumeRASBox(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetVolumeSliceDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeSliceDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetVolumeSliceDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceLogic::GetVolumeSliceDimensions(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetVolumeSliceSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVolumeSliceSpacing(temp0) :
      op->vtkMRMLSliceLogic::GetVolumeSliceSpacing(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetVolumeSliceBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetVolumeSliceBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceLogic::GetVolumeSliceBounds(temp0, temp1, temp2);
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
PyvtkMRMLSliceLogic_FitSliceToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FitSliceToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->FitSliceToVolume(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceLogic::FitSliceToVolume(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetBackgroundRASBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundRASBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetBackgroundRASBox(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceLogic::GetBackgroundRASBox(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkMRMLSliceLogic_GetBackgroundSliceDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundSliceDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetBackgroundSliceDimensions(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceLogic::GetBackgroundSliceDimensions(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkMRMLSliceLogic_GetBackgroundSliceSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundSliceSpacing() :
      op->vtkMRMLSliceLogic::GetBackgroundSliceSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetBackgroundSliceBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBackgroundSliceBounds(temp0);
    }
    else
    {
      op->vtkMRMLSliceLogic::GetBackgroundSliceBounds(temp0);
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


static PyObject *
PyvtkMRMLSliceLogic_RotateSliceToLowestVolumeAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotateSliceToLowestVolumeAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  bool temp0 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->RotateSliceToLowestVolumeAxes(temp0);
    }
    else
    {
      op->vtkMRMLSliceLogic::RotateSliceToLowestVolumeAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_FitSliceToBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FitSliceToBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FitSliceToBackground(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceLogic::FitSliceToBackground(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_FitSliceToAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FitSliceToAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  int temp0 = -1;
  int temp1 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->FitSliceToAll(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceLogic::FitSliceToAll(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_FitFOVToBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FitFOVToBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->FitFOVToBackground(temp0);
    }
    else
    {
      op->vtkMRMLSliceLogic::FitFOVToBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_ResizeSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ResizeSliceNode(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceLogic::ResizeSliceNode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetLowestVolumeSliceSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowestVolumeSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLowestVolumeSliceSpacing() :
      op->vtkMRMLSliceLogic::GetLowestVolumeSliceSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetLowestVolumeSliceBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowestVolumeSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetLowestVolumeSliceBounds(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceLogic::GetLowestVolumeSliceBounds(temp0, temp1);
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


static PyObject *
PyvtkMRMLSliceLogic_GetSliceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliceOffset() :
      op->vtkMRMLSliceLogic::GetSliceOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_SetSliceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOffset(temp0);
    }
    else
    {
      op->vtkMRMLSliceLogic::SetSliceOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetSliceBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetSliceBounds(temp0);
    }
    else
    {
      op->vtkMRMLSliceLogic::GetSliceBounds(temp0);
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


static PyObject *
PyvtkMRMLSliceLogic_SetSliceExtentsToSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceExtentsToSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSliceExtentsToSliceNode();
    }
    else
    {
      op->vtkMRMLSliceLogic::SetSliceExtentsToSliceNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_StartSliceNodeInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartSliceNodeInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->StartSliceNodeInteraction(temp0);
    }
    else
    {
      op->vtkMRMLSliceLogic::StartSliceNodeInteraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_EndSliceNodeInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndSliceNodeInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndSliceNodeInteraction();
    }
    else
    {
      op->vtkMRMLSliceLogic::EndSliceNodeInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_StartSliceCompositeNodeInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartSliceCompositeNodeInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->StartSliceCompositeNodeInteraction(temp0);
    }
    else
    {
      op->vtkMRMLSliceLogic::StartSliceCompositeNodeInteraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_EndSliceCompositeNodeInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndSliceCompositeNodeInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndSliceCompositeNodeInteraction();
    }
    else
    {
      op->vtkMRMLSliceLogic::EndSliceCompositeNodeInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_StartSliceOffsetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartSliceOffsetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartSliceOffsetInteraction();
    }
    else
    {
      op->vtkMRMLSliceLogic::StartSliceOffsetInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_EndSliceOffsetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndSliceOffsetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndSliceOffsetInteraction();
    }
    else
    {
      op->vtkMRMLSliceLogic::EndSliceOffsetInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_SnapSliceOffsetToIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapSliceOffsetToIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SnapSliceOffsetToIJK();
    }
    else
    {
      op->vtkMRMLSliceLogic::SnapSliceOffsetToIJK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetSliceIndexFromOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIndexFromOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  double temp0;
  vtkMRMLVolumeNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLVolumeNode"))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceIndexFromOffset(temp0, temp1) :
      op->vtkMRMLSliceLogic::GetSliceIndexFromOffset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceLogic_GetSliceIndexFromOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIndexFromOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceIndexFromOffset(temp0) :
      op->vtkMRMLSliceLogic::GetSliceIndexFromOffset(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLSliceLogic_GetSliceIndexFromOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLSliceLogic_GetSliceIndexFromOffset_s1(self, args);
    case 1:
      return PyvtkMRMLSliceLogic_GetSliceIndexFromOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSliceIndexFromOffset");
  return nullptr;
}


static PyObject *
PyvtkMRMLSliceLogic_CreateSliceModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSliceModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateSliceModel();
    }
    else
    {
      op->vtkMRMLSliceLogic::CreateSliceModel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_DeleteSliceModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSliceModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteSliceModel();
    }
    else
    {
      op->vtkMRMLSliceLogic::DeleteSliceModel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_IsSliceModelNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSliceModelNode");

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    bool tempr = vtkMRMLSliceLogic::IsSliceModelNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_IsSliceModelDisplayNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSliceModelDisplayNode");

  vtkMRMLDisplayNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayNode"))
  {
    bool tempr = vtkMRMLSliceLogic::IsSliceModelDisplayNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceLogic_GetEditableLayerAtWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEditableLayerAtWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  bool temp1 = true;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetEditableLayerAtWorldPosition(temp0, temp1, temp2) :
      op->vtkMRMLSliceLogic::GetEditableLayerAtWorldPosition(temp0, temp1, temp2));

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
PyvtkMRMLSliceLogic_GetSliceOffsetRangeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOffsetRangeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceLogic *op = static_cast<vtkMRMLSliceLogic *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetSliceOffsetRangeResolution(temp0, temp1) :
      op->vtkMRMLSliceLogic::GetSliceOffsetRangeResolution(temp0, temp1));

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

static PyMethodDef PyvtkMRMLSliceLogic_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSliceLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLSliceLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLSliceLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLSliceLogic\nC++: static vtkMRMLSliceLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLSliceLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLSliceLogic\nC++: vtkMRMLSliceLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSliceLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSliceLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetSliceNode", PyvtkMRMLSliceLogic_GetSliceNode, METH_VARARGS,
   "GetSliceNode(self) -> vtkMRMLSliceNode\nC++: virtual vtkMRMLSliceNode *GetSliceNode()\nGetSliceNode(node:vtkMRMLSliceCompositeNode) -> vtkMRMLSliceNode\nC++: static vtkMRMLSliceNode *GetSliceNode(\n    vtkMRMLSliceCompositeNode *node)\n\nThe MRML slice node for this slice logic\n"},
  {"SetSliceNode", PyvtkMRMLSliceLogic_SetSliceNode, METH_VARARGS,
   "SetSliceNode(self, newSliceNode:vtkMRMLSliceNode) -> None\nC++: void SetSliceNode(vtkMRMLSliceNode *newSliceNode)\n\n"},
  {"AddSliceNode", PyvtkMRMLSliceLogic_AddSliceNode, METH_VARARGS,
   "AddSliceNode(self, layoutName:str) -> vtkMRMLSliceNode\nC++: vtkMRMLSliceNode *AddSliceNode(const char *layoutName)\n\nConvenience function for adding a slice node and setting it in\nthis logic\n"},
  {"GetSliceCompositeNode", PyvtkMRMLSliceLogic_GetSliceCompositeNode, METH_VARARGS,
   "GetSliceCompositeNode(self) -> vtkMRMLSliceCompositeNode\nC++: virtual vtkMRMLSliceCompositeNode *GetSliceCompositeNode()\nGetSliceCompositeNode(node:vtkMRMLSliceNode)\n    -> vtkMRMLSliceCompositeNode\nC++: static vtkMRMLSliceCompositeNode *GetSliceCompositeNode(\n    vtkMRMLSliceNode *node)\n\nThe MRML slice node for this slice logic\n"},
  {"SetSliceCompositeNode", PyvtkMRMLSliceLogic_SetSliceCompositeNode, METH_VARARGS,
   "SetSliceCompositeNode(self,\n    SliceCompositeNode:vtkMRMLSliceCompositeNode) -> None\nC++: void SetSliceCompositeNode(\n    vtkMRMLSliceCompositeNode *SliceCompositeNode)\n\n"},
  {"GetBackgroundLayer", PyvtkMRMLSliceLogic_GetBackgroundLayer, METH_VARARGS,
   "GetBackgroundLayer(self) -> vtkMRMLSliceLayerLogic\nC++: virtual vtkMRMLSliceLayerLogic *GetBackgroundLayer()\n\nThe background slice layer TODO: this will eventually be\ngeneralized to a list of layers\n"},
  {"SetBackgroundLayer", PyvtkMRMLSliceLogic_SetBackgroundLayer, METH_VARARGS,
   "SetBackgroundLayer(self, BackgroundLayer:vtkMRMLSliceLayerLogic)\n    -> None\nC++: void SetBackgroundLayer(\n    vtkMRMLSliceLayerLogic *BackgroundLayer)\n\n"},
  {"GetForegroundLayer", PyvtkMRMLSliceLogic_GetForegroundLayer, METH_VARARGS,
   "GetForegroundLayer(self) -> vtkMRMLSliceLayerLogic\nC++: virtual vtkMRMLSliceLayerLogic *GetForegroundLayer()\n\nThe foreground slice layer TODO: this will eventually be\ngeneralized to a list of layers\n"},
  {"SetForegroundLayer", PyvtkMRMLSliceLogic_SetForegroundLayer, METH_VARARGS,
   "SetForegroundLayer(self, ForegroundLayer:vtkMRMLSliceLayerLogic)\n    -> None\nC++: void SetForegroundLayer(\n    vtkMRMLSliceLayerLogic *ForegroundLayer)\n\n"},
  {"GetLabelLayer", PyvtkMRMLSliceLogic_GetLabelLayer, METH_VARARGS,
   "GetLabelLayer(self) -> vtkMRMLSliceLayerLogic\nC++: virtual vtkMRMLSliceLayerLogic *GetLabelLayer()\n\nThe Label slice layer TODO: this will eventually be generalized\nto a list of layers\n"},
  {"SetLabelLayer", PyvtkMRMLSliceLogic_SetLabelLayer, METH_VARARGS,
   "SetLabelLayer(self, LabelLayer:vtkMRMLSliceLayerLogic) -> None\nC++: void SetLabelLayer(vtkMRMLSliceLayerLogic *LabelLayer)\n\n"},
  {"SetBackgroundWindowLevel", PyvtkMRMLSliceLogic_SetBackgroundWindowLevel, METH_VARARGS,
   "SetBackgroundWindowLevel(self, window:float, level:float) -> None\nC++: void SetBackgroundWindowLevel(double window, double level)\n\nHelper to set the background layer Window/Level\n"},
  {"GetBackgroundWindowLevelAndRange", PyvtkMRMLSliceLogic_GetBackgroundWindowLevelAndRange, METH_VARARGS,
   "GetBackgroundWindowLevelAndRange(self, window:float, level:float,\n    rangeLow:float, rangeHigh:float, autoWindowLevel:bool) -> None\nC++: void GetBackgroundWindowLevelAndRange(double &window,\n    double &level, double &rangeLow, double &rangeHigh,\n    bool &autoWindowLevel)\nGetBackgroundWindowLevelAndRange(self, window:float, level:float,\n    rangeLow:float, rangeHigh:float) -> None\nC++: void GetBackgroundWindowLevelAndRange(double &window,\n    double &level, double &rangeLow, double &rangeHigh)\n\nHelper to get the background layer Window/Level, intensity range\nand status of automatic Window/Level setting\n"},
  {"SetForegroundWindowLevel", PyvtkMRMLSliceLogic_SetForegroundWindowLevel, METH_VARARGS,
   "SetForegroundWindowLevel(self, window:float, level:float) -> None\nC++: void SetForegroundWindowLevel(double window, double level)\n\nHelper to set the foreground layer Window/Level\n"},
  {"GetForegroundWindowLevelAndRange", PyvtkMRMLSliceLogic_GetForegroundWindowLevelAndRange, METH_VARARGS,
   "GetForegroundWindowLevelAndRange(self, window:float, level:float,\n    rangeLow:float, rangeHigh:float, autoWindowLevel:bool) -> None\nC++: void GetForegroundWindowLevelAndRange(double &window,\n    double &level, double &rangeLow, double &rangeHigh,\n    bool &autoWindowLevel)\nGetForegroundWindowLevelAndRange(self, window:float, level:float,\n    rangeLow:float, rangeHigh:float) -> None\nC++: void GetForegroundWindowLevelAndRange(double &window,\n    double &level, double &rangeLow, double &rangeHigh)\n\nHelper to get the foreground layer Window/Level, intensity range\nand status of automatic Window/Level setting\n"},
  {"GetSliceModelNode", PyvtkMRMLSliceLogic_GetSliceModelNode, METH_VARARGS,
   "GetSliceModelNode(self) -> vtkMRMLModelNode\nC++: virtual vtkMRMLModelNode *GetSliceModelNode()\n\nModel slice plane\n"},
  {"GetSliceModelDisplayNode", PyvtkMRMLSliceLogic_GetSliceModelDisplayNode, METH_VARARGS,
   "GetSliceModelDisplayNode(self) -> vtkMRMLModelDisplayNode\nC++: virtual vtkMRMLModelDisplayNode *GetSliceModelDisplayNode()\n\nModel slice plane display properties. The method is deprecated,\nuse SliceDisplayNode instead.\n"},
  {"GetSliceDisplayNode", PyvtkMRMLSliceLogic_GetSliceDisplayNode, METH_VARARGS,
   "GetSliceDisplayNode(self) -> vtkMRMLSliceDisplayNode\nC++: vtkMRMLSliceDisplayNode *GetSliceDisplayNode()\n\nSlice plane display properties\n"},
  {"GetSliceModelTransformNode", PyvtkMRMLSliceLogic_GetSliceModelTransformNode, METH_VARARGS,
   "GetSliceModelTransformNode(self) -> vtkMRMLLinearTransformNode\nC++: virtual vtkMRMLLinearTransformNode *GetSliceModelTransformNode(\n    )\n\nModel slice plane transform from xy to RAS\n"},
  {"GetBlend", PyvtkMRMLSliceLogic_GetBlend, METH_VARARGS,
   "GetBlend(self) -> vtkImageBlend\nC++: vtkImageBlend *GetBlend()\n\nThe compositing filter TODO: this will eventually be generalized\nto a per-layer compositing function\n"},
  {"GetBlendUVW", PyvtkMRMLSliceLogic_GetBlendUVW, METH_VARARGS,
   "GetBlendUVW(self) -> vtkImageBlend\nC++: vtkImageBlend *GetBlendUVW()\n\n"},
  {"GetExtractModelTexture", PyvtkMRMLSliceLogic_GetExtractModelTexture, METH_VARARGS,
   "GetExtractModelTexture(self) -> vtkImageReslice\nC++: virtual vtkImageReslice *GetExtractModelTexture()\n\nAn image reslice instance to pull a single slice from the volume\nthat represents the filmsheet display output\n"},
  {"GetImageDataConnection", PyvtkMRMLSliceLogic_GetImageDataConnection, METH_VARARGS,
   "GetImageDataConnection(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetImageDataConnection()\n\nthe tail of the pipeline\n-- returns nullptr if none of the inputs exist\n"},
  {"UpdatePipeline", PyvtkMRMLSliceLogic_UpdatePipeline, METH_VARARGS,
   "UpdatePipeline(self) -> None\nC++: void UpdatePipeline()\n\nupdate the pipeline to reflect the current state of the nodes\n"},
  {"UpdateImageData", PyvtkMRMLSliceLogic_UpdateImageData, METH_VARARGS,
   "UpdateImageData(self) -> None\nC++: void UpdateImageData()\n\nInternally used by UpdatePipeline\n"},
  {"EnterMRMLCallback", PyvtkMRMLSliceLogic_EnterMRMLCallback, METH_VARARGS,
   "EnterMRMLCallback(self) -> bool\nC++: virtual bool EnterMRMLCallback()\n\nReimplemented to avoid calling ProcessMRMLSceneEvents when we are\nadding the MRMLModelNode into the scene\n"},
  {"UpdateSliceNode", PyvtkMRMLSliceLogic_UpdateSliceNode, METH_VARARGS,
   "UpdateSliceNode(self) -> None\nC++: void UpdateSliceNode()\n\nManage and synchronize the SliceNode\n"},
  {"UpdateSliceNodeFromLayout", PyvtkMRMLSliceLogic_UpdateSliceNodeFromLayout, METH_VARARGS,
   "UpdateSliceNodeFromLayout(self) -> None\nC++: void UpdateSliceNodeFromLayout()\n\nUpdate slicer node given a layout name\n"},
  {"UpdateSliceCompositeNode", PyvtkMRMLSliceLogic_UpdateSliceCompositeNode, METH_VARARGS,
   "UpdateSliceCompositeNode(self) -> None\nC++: void UpdateSliceCompositeNode()\n\nManage and synchronize the SliceCompositeNode\n"},
  {"GetLayerVolumeNode", PyvtkMRMLSliceLogic_GetLayerVolumeNode, METH_VARARGS,
   "GetLayerVolumeNode(self, layer:int) -> vtkMRMLVolumeNode\nC++: vtkMRMLVolumeNode *GetLayerVolumeNode(int layer)\n\nGet the volume node corresponding to layer (0=background,\n1=foreground, 2=label)\n"},
  {"GetVolumeRASBox", PyvtkMRMLSliceLogic_GetVolumeRASBox, METH_VARARGS,
   "GetVolumeRASBox(volumeNode:vtkMRMLVolumeNode,\n    rasDimensions:[float, float, float], rasCenter:[float, float,\n    float]) -> None\nC++: static void GetVolumeRASBox(vtkMRMLVolumeNode *volumeNode,\n    double rasDimensions[3], double rasCenter[3])\n\nGet the size of the volume, transformed to RAS space\n"},
  {"GetVolumeSliceDimensions", PyvtkMRMLSliceLogic_GetVolumeSliceDimensions, METH_VARARGS,
   "GetVolumeSliceDimensions(self, volumeNode:vtkMRMLVolumeNode,\n    sliceDimensions:[float, float, float], sliceCenter:[float,\n    float, float]) -> None\nC++: void GetVolumeSliceDimensions(vtkMRMLVolumeNode *volumeNode,\n    double sliceDimensions[3], double sliceCenter[3])\n\nGet the size of the volume, transformed to slice space\n"},
  {"GetVolumeSliceSpacing", PyvtkMRMLSliceLogic_GetVolumeSliceSpacing, METH_VARARGS,
   "GetVolumeSliceSpacing(self, volumeNode:vtkMRMLVolumeNode) -> (\n    float, float, float)\nC++: double *GetVolumeSliceSpacing(vtkMRMLVolumeNode *volumeNode)\n\nGet the spacing of the volume, transformed to slice space\n- to be used, for example, to set the slice increment for\n  stepping a single voxel relative to the current slice view\n"},
  {"GetVolumeSliceBounds", PyvtkMRMLSliceLogic_GetVolumeSliceBounds, METH_VARARGS,
   "GetVolumeSliceBounds(self, volumeNode:vtkMRMLVolumeNode,\n    sliceBounds:[float, float, float, float, float, float],\n    useVoxelCenter:bool=False) -> None\nC++: void GetVolumeSliceBounds(vtkMRMLVolumeNode *volumeNode,\n    double sliceBounds[6], bool useVoxelCenter=false)\n\nGet the min/max bounds of the volume\n- note these are not translated by the current slice offset so\n  they can be used to calculate the range (e.g. of a slider) that\noperates in slice space If useVoxelCenter is set to false\n  (default) then bounds of voxel sides are returned (otherwise\n  then bounds of voxels centers are returned).\n"},
  {"FitSliceToVolume", PyvtkMRMLSliceLogic_FitSliceToVolume, METH_VARARGS,
   "FitSliceToVolume(self, volumeNode:vtkMRMLVolumeNode, width:int,\n    height:int) -> None\nC++: void FitSliceToVolume(vtkMRMLVolumeNode *volumeNode,\n    int width, int height)\n\nadjust the node's field of view to match the extent of current\nbackground volume\n"},
  {"GetBackgroundRASBox", PyvtkMRMLSliceLogic_GetBackgroundRASBox, METH_VARARGS,
   "GetBackgroundRASBox(self, rasDimensions:[float, float, float],\n    rasCenter:[float, float, float]) -> None\nC++: void GetBackgroundRASBox(double rasDimensions[3],\n    double rasCenter[3])\n\nGet the size of the volume, transformed to RAS space\n"},
  {"GetBackgroundSliceDimensions", PyvtkMRMLSliceLogic_GetBackgroundSliceDimensions, METH_VARARGS,
   "GetBackgroundSliceDimensions(self, sliceDimensions:[float, float,\n    float], sliceCenter:[float, float, float]) -> None\nC++: void GetBackgroundSliceDimensions(double sliceDimensions[3],\n    double sliceCenter[3])\n\nGet the size of the volume, transformed to slice space\n"},
  {"GetBackgroundSliceSpacing", PyvtkMRMLSliceLogic_GetBackgroundSliceSpacing, METH_VARARGS,
   "GetBackgroundSliceSpacing(self) -> (float, float, float)\nC++: double *GetBackgroundSliceSpacing()\n\nGet the spacing of the volume, transformed to slice space\n- to be used, for example, to set the slice increment for\n  stepping a single voxel relative to the current slice view\n"},
  {"GetBackgroundSliceBounds", PyvtkMRMLSliceLogic_GetBackgroundSliceBounds, METH_VARARGS,
   "GetBackgroundSliceBounds(self, sliceBounds:[float, float, float,\n    float, float, float]) -> None\nC++: void GetBackgroundSliceBounds(double sliceBounds[6])\n\nGet the min/max bounds of the volume\n- note these are not translated by the current slice offset so\n  they can be used to calculate the range (e.g. of a slider) that\noperates in slice space\n"},
  {"RotateSliceToLowestVolumeAxes", PyvtkMRMLSliceLogic_RotateSliceToLowestVolumeAxes, METH_VARARGS,
   "RotateSliceToLowestVolumeAxes(self,\n    forceSlicePlaneToSingleSlice:bool=True) -> None\nC++: void RotateSliceToLowestVolumeAxes(\n    bool forceSlicePlaneToSingleSlice=true)\n\nRotate slice view to match axes of the lowest volume layer\n(background, foreground, label).\n\\param forceSlicePlaneToSingleSlice If the volume is single-slice\nand forceSlicePlaneToSingleSlice\nis enabled then slice view will be aligned with the volume's\nslice plane. If the flag is disabled of the volume has more than\none slice then the slice view will be rotated to the closest\northogonal axis.\n"},
  {"FitSliceToBackground", PyvtkMRMLSliceLogic_FitSliceToBackground, METH_VARARGS,
   "FitSliceToBackground(self, width:int, height:int) -> None\nC++: void FitSliceToBackground(int width, int height)\n\nadjust the node's field of view to match the extent of current\nbackground volume\n"},
  {"FitSliceToAll", PyvtkMRMLSliceLogic_FitSliceToAll, METH_VARARGS,
   "FitSliceToAll(self, width:int=-1, height:int=-1) -> None\nC++: void FitSliceToAll(int width=-1, int height=-1)\n\nadjust the node's field of view to match the extent of all volume\nlayers\n (fits to first non-null layer)\n"},
  {"FitFOVToBackground", PyvtkMRMLSliceLogic_FitFOVToBackground, METH_VARARGS,
   "FitFOVToBackground(self, fov:float) -> None\nC++: void FitFOVToBackground(double fov)\n\nadjust the node's field of view to match the FOV the value fov\nwill be applied to the smallest slice window dimension\n"},
  {"ResizeSliceNode", PyvtkMRMLSliceLogic_ResizeSliceNode, METH_VARARGS,
   "ResizeSliceNode(self, newWidth:float, newHeight:float) -> None\nC++: void ResizeSliceNode(double newWidth, double newHeight)\n\nAdjust dimensions and fov based on the new viewport size. The\nsize should be the viewport size (typically vtkRenderWindow), not\nthe size of the renderers (important if it's in a lightbox mode).\nIt must be called each time the renderwindow size is modified and\neach time the lightbox configuration is changed.\n"},
  {"GetLowestVolumeSliceSpacing", PyvtkMRMLSliceLogic_GetLowestVolumeSliceSpacing, METH_VARARGS,
   "GetLowestVolumeSliceSpacing(self) -> (float, float, float)\nC++: double *GetLowestVolumeSliceSpacing()\n\nGet the spacing of the lowest volume layer (background,\nforeground, label), transformed to slice space\n- to be used, for example, to set the slice increment for\n  stepping a single voxel relative to the current slice view\n- returns first non-null layer\n"},
  {"GetLowestVolumeSliceBounds", PyvtkMRMLSliceLogic_GetLowestVolumeSliceBounds, METH_VARARGS,
   "GetLowestVolumeSliceBounds(self, sliceBounds:[float, float, float,\n     float, float, float], useVoxelCenter:bool=False) -> None\nC++: void GetLowestVolumeSliceBounds(double sliceBounds[6],\n    bool useVoxelCenter=false)\n\nGet the min/max bounds of the lowest volume layer (background,\nforeground, label)\n- note these are not translated by the current slice offset so\n  they can be used to calculate the range (e.g. of a slider) that\noperates in slice space\n- returns first non-null layer If useVoxelCenter is set to false\n  (default) then bounds of voxel sides are returned (otherwise\n  then bounds of voxels centers are returned).\n"},
  {"GetSliceOffset", PyvtkMRMLSliceLogic_GetSliceOffset, METH_VARARGS,
   "GetSliceOffset(self) -> float\nC++: double GetSliceOffset()\n\nGet/Set the current distance from the origin to the slice plane\n"},
  {"SetSliceOffset", PyvtkMRMLSliceLogic_SetSliceOffset, METH_VARARGS,
   "SetSliceOffset(self, offset:float) -> None\nC++: void SetSliceOffset(double offset)\n\n"},
  {"GetSliceBounds", PyvtkMRMLSliceLogic_GetSliceBounds, METH_VARARGS,
   "GetSliceBounds(self, sliceBounds:[float, float, float, float,\n    float, float]) -> None\nC++: void GetSliceBounds(double sliceBounds[6])\n\nGet the largest slice bounding box for all volumes in layers\n"},
  {"SetSliceExtentsToSliceNode", PyvtkMRMLSliceLogic_SetSliceExtentsToSliceNode, METH_VARARGS,
   "SetSliceExtentsToSliceNode(self) -> None\nC++: void SetSliceExtentsToSliceNode()\n\nSet slice extents to all layers\n"},
  {"StartSliceNodeInteraction", PyvtkMRMLSliceLogic_StartSliceNodeInteraction, METH_VARARGS,
   "StartSliceNodeInteraction(self, parameters:int) -> None\nC++: void StartSliceNodeInteraction(unsigned int parameters)\n\nIndicate an interaction with the slice node is beginning. The\nparameters of the slice node being manipulated are passed as a\nbitmask. See vtkMRMLSliceNode::InteractionFlagType.\n"},
  {"EndSliceNodeInteraction", PyvtkMRMLSliceLogic_EndSliceNodeInteraction, METH_VARARGS,
   "EndSliceNodeInteraction(self) -> None\nC++: void EndSliceNodeInteraction()\n\nIndicate an interaction with the slice node has been completed\n"},
  {"StartSliceCompositeNodeInteraction", PyvtkMRMLSliceLogic_StartSliceCompositeNodeInteraction, METH_VARARGS,
   "StartSliceCompositeNodeInteraction(self, parameters:int) -> None\nC++: void StartSliceCompositeNodeInteraction(\n    unsigned int parameters)\n\nIndicate an interaction with the slice composite node is\nbeginning. The parameters of the slice node being manipulated are\npassed as a bitmask. See vtkMRMLSliceNode::InteractionFlagType.\n"},
  {"EndSliceCompositeNodeInteraction", PyvtkMRMLSliceLogic_EndSliceCompositeNodeInteraction, METH_VARARGS,
   "EndSliceCompositeNodeInteraction(self) -> None\nC++: void EndSliceCompositeNodeInteraction()\n\nIndicate an interaction with the slice composite node has been\ncompleted\n"},
  {"StartSliceOffsetInteraction", PyvtkMRMLSliceLogic_StartSliceOffsetInteraction, METH_VARARGS,
   "StartSliceOffsetInteraction(self) -> None\nC++: void StartSliceOffsetInteraction()\n\nIndicate the slice offset value is starting to change\n"},
  {"EndSliceOffsetInteraction", PyvtkMRMLSliceLogic_EndSliceOffsetInteraction, METH_VARARGS,
   "EndSliceOffsetInteraction(self) -> None\nC++: void EndSliceOffsetInteraction()\n\nIndicate the slice offset value has completed its change\n"},
  {"SnapSliceOffsetToIJK", PyvtkMRMLSliceLogic_SnapSliceOffsetToIJK, METH_VARARGS,
   "SnapSliceOffsetToIJK(self) -> None\nC++: void SnapSliceOffsetToIJK()\n\nSet the current distance so that it corresponds to the closest\ncenter of a voxel in IJK space (integer value)\n"},
  {"GetSliceIndexFromOffset", PyvtkMRMLSliceLogic_GetSliceIndexFromOffset, METH_VARARGS,
   "GetSliceIndexFromOffset(self, sliceOffset:float,\n    volumeNode:vtkMRMLVolumeNode) -> int\nC++: int GetSliceIndexFromOffset(double sliceOffset,\n    vtkMRMLVolumeNode *volumeNode)\nGetSliceIndexFromOffset(self, sliceOffset:float) -> int\nC++: int GetSliceIndexFromOffset(double sliceOffset)\n\nGet the DICOM slice index (1-based) from slice offset (distance\nfrom the origin to the slice plane). If the return value is\nnegative then then no slice index can be determined:\nSLICE_INDEX_ROTATED=the slice is rotated compared to the volume\nplanes, SLICE_INDEX_OUT_OF_VOLUME=the slice plane is out of the\nvolume SLICE_INDEX_NO_VOLUME=the specified volume is not\navailable\n"},
  {"CreateSliceModel", PyvtkMRMLSliceLogic_CreateSliceModel, METH_VARARGS,
   "CreateSliceModel(self) -> None\nC++: void CreateSliceModel()\n\nMake a slice model with the current configuration\n"},
  {"DeleteSliceModel", PyvtkMRMLSliceLogic_DeleteSliceModel, METH_VARARGS,
   "DeleteSliceModel(self) -> None\nC++: void DeleteSliceModel()\n\n"},
  {"IsSliceModelNode", PyvtkMRMLSliceLogic_IsSliceModelNode, METH_VARARGS,
   "IsSliceModelNode(mrmlNode:vtkMRMLNode) -> bool\nC++: static bool IsSliceModelNode(vtkMRMLNode *mrmlNode)\n\nReturn true if the node is a model node that has the default\nvolume slice node name suffix, false otherwise\n\\sa SLICE_MODEL_NODE_NAME_SUFFIX\n"},
  {"IsSliceModelDisplayNode", PyvtkMRMLSliceLogic_IsSliceModelDisplayNode, METH_VARARGS,
   "IsSliceModelDisplayNode(mrmlDisplayNode:vtkMRMLDisplayNode)\n    -> bool\nC++: static bool IsSliceModelDisplayNode(\n    vtkMRMLDisplayNode *mrmlDisplayNode)\n\nReturn true if the display node is a volume slice node display\nnode by checking the attribute SliceLogic.IsSliceModelDisplayNode\nReturns false if the attribute is not present, true if the\nattribute is present and not equal to zero\n"},
  {"GetEditableLayerAtWorldPosition", PyvtkMRMLSliceLogic_GetEditableLayerAtWorldPosition, METH_VARARGS,
   "GetEditableLayerAtWorldPosition(self, worldPos:[float, float,\n    float], backgroundVolumeEditable:bool=True,\n    foregroundVolumeEditable:bool=True) -> int\nC++: int GetEditableLayerAtWorldPosition(double worldPos[3],\n    bool backgroundVolumeEditable=true,\n    bool foregroundVolumeEditable=true)\n\nGet volume at the specified world position that should be used\nfor interactions, such as window/level adjustments.\nbackgroundVolumeEditable and foregroundVolumeEditable can be used\nspecify that a volume is not editable (even if it is visible at\nthe given position).\n"},
  {"GetSliceOffsetRangeResolution", PyvtkMRMLSliceLogic_GetSliceOffsetRangeResolution, METH_VARARGS,
   "GetSliceOffsetRangeResolution(self, range:[float, float],\n    resolution:float) -> bool\nC++: bool GetSliceOffsetRangeResolution(double range[2],\n    double &resolution)\n\nGet range and resolution for slice offset sliders. Returns false\nif the information cannot be determined.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSliceLogic_Doc =
  "vtkMRMLSliceLogic - Slicer logic class for slice manipulation.\n\n"
  "Superclass: vtkMRMLAbstractLogic\n\n"
  "This class manages the logic associated with display of slice windows\n"
  "(but not the GUI).  Features of the class include:\n"
  "-- a back-to-front list of MRML volumes to be displayed\n"
  "-- a compositing mode for each volume layer (opacity, outline, glyph,\n"
  "checkerboard, etc)\n"
  "-- each layer is required to provide an RGBA image in the space\n"
  "   defined by the vtkMRMLSliceNode\n\n"
  "This class manages internal vtk pipelines that create an output\n"
  "vtkImageData which can be used by the vtkSlicerSliceGUI class to\n"
  "display the resulting composite image or it can be used as a texture\n"
  "map in a vtkSlicerView. This class can also be used for resampling\n"
  "volumes for further computation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLSliceLogic", // tp_name
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
  PyvtkMRMLSliceLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSliceLogic_StaticNew()
{
  return vtkMRMLSliceLogic::New();
}

PyObject *PyvtkMRMLSliceLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSliceLogic_Type, PyvtkMRMLSliceLogic_Methods,
    "vtkMRMLSliceLogic",
 &PyvtkMRMLSliceLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractLogic_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "CompositeModifiedEvent", vtkMRMLSliceLogic::CompositeModifiedEvent },
        { "LayerNone", vtkMRMLSliceLogic::LayerNone },
        { "LayerBackground", vtkMRMLSliceLogic::LayerBackground },
        { "LayerForeground", vtkMRMLSliceLogic::LayerForeground },
        { "LayerLabel", vtkMRMLSliceLogic::LayerLabel },
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

void PyVTKAddFile_vtkMRMLSliceLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSliceLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSliceLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

