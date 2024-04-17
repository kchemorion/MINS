// python wrapper for vtkMRMLAnnotationRulerNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAnnotationRulerNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAnnotationRulerNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAnnotationRulerNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAnnotationLinesNode_ClassNew
extern "C" { PyObject *PyvtkMRMLAnnotationLinesNode_ClassNew(); }
#define DECLARED_PyvtkMRMLAnnotationLinesNode_ClassNew
#endif

static PyObject *
PyvtkMRMLAnnotationRulerNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAnnotationRulerNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAnnotationRulerNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAnnotationRulerNode *tempr = vtkMRMLAnnotationRulerNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAnnotationRulerNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAnnotationRulerNode::NewInstance());

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
PyvtkMRMLAnnotationRulerNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAnnotationRulerNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAnnotationRulerNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLAnnotationRulerNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLAnnotationRulerNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLAnnotationRulerNode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

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
      op->vtkMRMLAnnotationRulerNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->UpdateScene(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

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
      op->vtkMRMLAnnotationRulerNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLAnnotationRulerNode_GetPosition1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPosition1(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::GetPosition1(temp0);
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
PyvtkMRMLAnnotationRulerNode_GetPosition1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition1() :
      op->vtkMRMLAnnotationRulerNode::GetPosition1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationRulerNode_GetPosition1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLAnnotationRulerNode_GetPosition1_s1(self, args);
    case 0:
      return PyvtkMRMLAnnotationRulerNode_GetPosition1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition1");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_GetPositionWorldCoordinates1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionWorldCoordinates1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPositionWorldCoordinates1(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::GetPositionWorldCoordinates1(temp0);
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
PyvtkMRMLAnnotationRulerNode_SetPosition1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetPosition1(temp0) :
      op->vtkMRMLAnnotationRulerNode::SetPosition1(temp0));

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
PyvtkMRMLAnnotationRulerNode_SetPosition1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

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
      op->SetPosition1(temp0, temp1, temp2) :
      op->vtkMRMLAnnotationRulerNode::SetPosition1(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationRulerNode_SetPosition1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLAnnotationRulerNode_SetPosition1_s1(self, args);
    case 3:
      return PyvtkMRMLAnnotationRulerNode_SetPosition1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition1");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SetPositionWorldCoordinates1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionWorldCoordinates1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetPositionWorldCoordinates1(temp0) :
      op->vtkMRMLAnnotationRulerNode::SetPositionWorldCoordinates1(temp0));

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
PyvtkMRMLAnnotationRulerNode_GetPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPosition2(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::GetPosition2(temp0);
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
PyvtkMRMLAnnotationRulerNode_GetPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition2() :
      op->vtkMRMLAnnotationRulerNode::GetPosition2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationRulerNode_GetPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLAnnotationRulerNode_GetPosition2_s1(self, args);
    case 0:
      return PyvtkMRMLAnnotationRulerNode_GetPosition2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition2");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_GetPositionWorldCoordinates2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionWorldCoordinates2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPositionWorldCoordinates2(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::GetPositionWorldCoordinates2(temp0);
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
PyvtkMRMLAnnotationRulerNode_SetPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetPosition2(temp0) :
      op->vtkMRMLAnnotationRulerNode::SetPosition2(temp0));

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
PyvtkMRMLAnnotationRulerNode_SetPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

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
      op->SetPosition2(temp0, temp1, temp2) :
      op->vtkMRMLAnnotationRulerNode::SetPosition2(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAnnotationRulerNode_SetPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLAnnotationRulerNode_SetPosition2_s1(self, args);
    case 3:
      return PyvtkMRMLAnnotationRulerNode_SetPosition2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition2");
  return nullptr;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SetPositionWorldCoordinates2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionWorldCoordinates2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->SetPositionWorldCoordinates2(temp0) :
      op->vtkMRMLAnnotationRulerNode::SetPositionWorldCoordinates2(temp0));

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
PyvtkMRMLAnnotationRulerNode_GetDistanceAnnotationFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationFormat() :
      op->vtkMRMLAnnotationRulerNode::GetDistanceAnnotationFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SetDistanceAnnotationFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceAnnotationFormat(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::SetDistanceAnnotationFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_GetDistanceAnnotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationScale() :
      op->vtkMRMLAnnotationRulerNode::GetDistanceAnnotationScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SetDistanceAnnotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceAnnotationScale(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::SetDistanceAnnotationScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_GetDistanceAnnotationVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationVisibility() :
      op->vtkMRMLAnnotationRulerNode::GetDistanceAnnotationVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SetDistanceAnnotationVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceAnnotationVisibility(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::SetDistanceAnnotationVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SetRuler(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRuler");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  long long temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SetRuler(temp0, temp1, temp2) :
      op->vtkMRMLAnnotationRulerNode::SetRuler(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_GetPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPointColor() :
      op->vtkMRMLAnnotationRulerNode::GetPointColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SetPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPointColor(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::SetPointColor(temp0);
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
PyvtkMRMLAnnotationRulerNode_GetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLineColor() :
      op->vtkMRMLAnnotationRulerNode::GetLineColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetLineColor(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::SetLineColor(temp0);
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
PyvtkMRMLAnnotationRulerNode_GetDistanceAnnotationTextColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationTextColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDistanceAnnotationTextColor() :
      op->vtkMRMLAnnotationRulerNode::GetDistanceAnnotationTextColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SetDistanceAnnotationTextColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationTextColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetDistanceAnnotationTextColor(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::SetDistanceAnnotationTextColor(temp0);
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
PyvtkMRMLAnnotationRulerNode_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

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
      op->vtkMRMLAnnotationRulerNode::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLAnnotationRulerNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_GetDistanceMeasurement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMeasurement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceMeasurement() :
      op->vtkMRMLAnnotationRulerNode::GetDistanceMeasurement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_GetModelID1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelID1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetModelID1() :
      op->vtkMRMLAnnotationRulerNode::GetModelID1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SetModelID1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelID1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModelID1(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::SetModelID1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_GetModelID2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelID2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetModelID2() :
      op->vtkMRMLAnnotationRulerNode::GetModelID2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAnnotationRulerNode_SetModelID2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelID2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAnnotationRulerNode *op = static_cast<vtkMRMLAnnotationRulerNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModelID2(temp0);
    }
    else
    {
      op->vtkMRMLAnnotationRulerNode::SetModelID2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAnnotationRulerNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAnnotationRulerNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAnnotationRulerNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAnnotationRulerNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLAnnotationRulerNode\nC++: static vtkMRMLAnnotationRulerNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAnnotationRulerNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAnnotationRulerNode\nC++: vtkMRMLAnnotationRulerNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAnnotationRulerNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAnnotationRulerNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLAnnotationRulerNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"GetNodeTagName", PyvtkMRMLAnnotationRulerNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetIcon", PyvtkMRMLAnnotationRulerNode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: const char *GetIcon() override;\n\n"},
  {"Copy", PyvtkMRMLAnnotationRulerNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"UpdateScene", PyvtkMRMLAnnotationRulerNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"ProcessMRMLEvents", PyvtkMRMLAnnotationRulerNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"GetPosition1", PyvtkMRMLAnnotationRulerNode_GetPosition1, METH_VARARGS,
   "GetPosition1(self, position:[float, float, float]) -> None\nC++: void GetPosition1(double position[3])\nGetPosition1(self) -> Pointer\nC++: double *GetPosition1()\n\n"},
  {"GetPositionWorldCoordinates1", PyvtkMRMLAnnotationRulerNode_GetPositionWorldCoordinates1, METH_VARARGS,
   "GetPositionWorldCoordinates1(self, position:[float, float, float,\n    float]) -> None\nC++: void GetPositionWorldCoordinates1(double position[4])\n\n"},
  {"SetPosition1", PyvtkMRMLAnnotationRulerNode_SetPosition1, METH_VARARGS,
   "SetPosition1(self, newControl:[float, float, float]) -> int\nC++: int SetPosition1(double newControl[3])\nSetPosition1(self, nC1:float, nC2:float, nC3:float) -> int\nC++: int SetPosition1(double nC1, double nC2, double nC3)\n\n"},
  {"SetPositionWorldCoordinates1", PyvtkMRMLAnnotationRulerNode_SetPositionWorldCoordinates1, METH_VARARGS,
   "SetPositionWorldCoordinates1(self, newControl:[float, float,\n    float, float]) -> int\nC++: int SetPositionWorldCoordinates1(double newControl[4])\n\n"},
  {"GetPosition2", PyvtkMRMLAnnotationRulerNode_GetPosition2, METH_VARARGS,
   "GetPosition2(self, position:[float, float, float]) -> None\nC++: void GetPosition2(double position[3])\nGetPosition2(self) -> Pointer\nC++: double *GetPosition2()\n\n"},
  {"GetPositionWorldCoordinates2", PyvtkMRMLAnnotationRulerNode_GetPositionWorldCoordinates2, METH_VARARGS,
   "GetPositionWorldCoordinates2(self, position:[float, float, float,\n    float]) -> None\nC++: void GetPositionWorldCoordinates2(double position[4])\n\n"},
  {"SetPosition2", PyvtkMRMLAnnotationRulerNode_SetPosition2, METH_VARARGS,
   "SetPosition2(self, newControl:[float, float, float]) -> int\nC++: int SetPosition2(double newControl[3])\nSetPosition2(self, nC1:float, nC2:float, nC3:float) -> int\nC++: int SetPosition2(double nC1, double nC2, double nC3)\n\n"},
  {"SetPositionWorldCoordinates2", PyvtkMRMLAnnotationRulerNode_SetPositionWorldCoordinates2, METH_VARARGS,
   "SetPositionWorldCoordinates2(self, newControl:[float, float,\n    float, float]) -> int\nC++: int SetPositionWorldCoordinates2(double newControl[4])\n\n"},
  {"GetDistanceAnnotationFormat", PyvtkMRMLAnnotationRulerNode_GetDistanceAnnotationFormat, METH_VARARGS,
   "GetDistanceAnnotationFormat(self) -> str\nC++: virtual char *GetDistanceAnnotationFormat()\n\nget/set the distance annotation format, it's in standard sprintf\nnotation\n"},
  {"SetDistanceAnnotationFormat", PyvtkMRMLAnnotationRulerNode_SetDistanceAnnotationFormat, METH_VARARGS,
   "SetDistanceAnnotationFormat(self, _arg:str) -> None\nC++: virtual void SetDistanceAnnotationFormat(const char *_arg)\n\nget/set the distance annotation format, it's in standard sprintf\nnotation\n"},
  {"GetDistanceAnnotationScale", PyvtkMRMLAnnotationRulerNode_GetDistanceAnnotationScale, METH_VARARGS,
   "GetDistanceAnnotationScale(self) -> float\nC++: double GetDistanceAnnotationScale()\n\nKP Define - should be part of AnnotationRulerDisplayNode\n"},
  {"SetDistanceAnnotationScale", PyvtkMRMLAnnotationRulerNode_SetDistanceAnnotationScale, METH_VARARGS,
   "SetDistanceAnnotationScale(self, init:float) -> None\nC++: void SetDistanceAnnotationScale(double init)\n\nKP Define - should be part of AnnotationRulerDisplayNode\n"},
  {"GetDistanceAnnotationVisibility", PyvtkMRMLAnnotationRulerNode_GetDistanceAnnotationVisibility, METH_VARARGS,
   "GetDistanceAnnotationVisibility(self) -> int\nC++: int GetDistanceAnnotationVisibility()\n\nget/set the distance annotation visibility\n"},
  {"SetDistanceAnnotationVisibility", PyvtkMRMLAnnotationRulerNode_SetDistanceAnnotationVisibility, METH_VARARGS,
   "SetDistanceAnnotationVisibility(self, flag:int) -> None\nC++: void SetDistanceAnnotationVisibility(int flag)\n\nget/set the distance annotation visibility\n"},
  {"SetRuler", PyvtkMRMLAnnotationRulerNode_SetRuler, METH_VARARGS,
   "SetRuler(self, line1Id:int, sel:int, vis:int) -> int\nC++: int SetRuler(vtkIdType line1Id, int sel, int vis)\n\n"},
  {"GetPointColor", PyvtkMRMLAnnotationRulerNode_GetPointColor, METH_VARARGS,
   "GetPointColor(self) -> Pointer\nC++: double *GetPointColor()\n\nget/set the point representation color\n"},
  {"SetPointColor", PyvtkMRMLAnnotationRulerNode_SetPointColor, METH_VARARGS,
   "SetPointColor(self, initColor:[float, float, float]) -> None\nC++: void SetPointColor(double initColor[3])\n\nget/set the point representation color\n"},
  {"GetLineColor", PyvtkMRMLAnnotationRulerNode_GetLineColor, METH_VARARGS,
   "GetLineColor(self) -> Pointer\nC++: double *GetLineColor()\n\nget/set the line representation color\n"},
  {"SetLineColor", PyvtkMRMLAnnotationRulerNode_SetLineColor, METH_VARARGS,
   "SetLineColor(self, newColor:[float, float, float]) -> None\nC++: void SetLineColor(double newColor[3])\n\nget/set the line representation color\n"},
  {"GetDistanceAnnotationTextColor", PyvtkMRMLAnnotationRulerNode_GetDistanceAnnotationTextColor, METH_VARARGS,
   "GetDistanceAnnotationTextColor(self) -> Pointer\nC++: double *GetDistanceAnnotationTextColor()\n\nget/set the distance annotation text color\n"},
  {"SetDistanceAnnotationTextColor", PyvtkMRMLAnnotationRulerNode_SetDistanceAnnotationTextColor, METH_VARARGS,
   "SetDistanceAnnotationTextColor(self, initColor:[float, float,\n    float]) -> None\nC++: void SetDistanceAnnotationTextColor(double initColor[3])\n\nget/set the distance annotation text color\n"},
  {"ApplyTransform", PyvtkMRMLAnnotationRulerNode_ApplyTransform, METH_VARARGS,
   "ApplyTransform(self, transform:vtkAbstractTransform) -> None\nC++: void ApplyTransform(vtkAbstractTransform *transform)\n    override;\n\ntransform utility functions\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLAnnotationRulerNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"GetDistanceMeasurement", PyvtkMRMLAnnotationRulerNode_GetDistanceMeasurement, METH_VARARGS,
   "GetDistanceMeasurement(self) -> float\nC++: double GetDistanceMeasurement()\n\nCalculate the distance between world coordinates of the two end\npoints\n"},
  {"GetModelID1", PyvtkMRMLAnnotationRulerNode_GetModelID1, METH_VARARGS,
   "GetModelID1(self) -> str\nC++: virtual char *GetModelID1()\n\nget/set the id of the model the first and second end of the ruler\nis constrained upon\n"},
  {"SetModelID1", PyvtkMRMLAnnotationRulerNode_SetModelID1, METH_VARARGS,
   "SetModelID1(self, _arg:str) -> None\nC++: virtual void SetModelID1(const char *_arg)\n\n"},
  {"GetModelID2", PyvtkMRMLAnnotationRulerNode_GetModelID2, METH_VARARGS,
   "GetModelID2(self) -> str\nC++: virtual char *GetModelID2()\n\n"},
  {"SetModelID2", PyvtkMRMLAnnotationRulerNode_SetModelID2, METH_VARARGS,
   "SetModelID2(self, _arg:str) -> None\nC++: virtual void SetModelID2(const char *_arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAnnotationRulerNode_Doc =
  "vtkMRMLAnnotationRulerNode - no description provided.\n\n"
  "Superclass: vtkMRMLAnnotationLinesNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAnnotationRulerNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerAnnotationsModuleMRMLPython.vtkMRMLAnnotationRulerNode", // tp_name
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
  PyvtkMRMLAnnotationRulerNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAnnotationRulerNode_StaticNew()
{
  return vtkMRMLAnnotationRulerNode::New();
}

PyObject *PyvtkMRMLAnnotationRulerNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAnnotationRulerNode_Type, PyvtkMRMLAnnotationRulerNode_Methods,
    "vtkMRMLAnnotationRulerNode",
 &PyvtkMRMLAnnotationRulerNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAnnotationLinesNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "RulerNodeAddedEvent", vtkMRMLAnnotationRulerNode::RulerNodeAddedEvent },
        { "ValueModifiedEvent", vtkMRMLAnnotationRulerNode::ValueModifiedEvent },
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

void PyVTKAddFile_vtkMRMLAnnotationRulerNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAnnotationRulerNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAnnotationRulerNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

