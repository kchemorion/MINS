// python wrapper for vtkMRMLDiffusionTensorDisplayPropertiesNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLDiffusionTensorDisplayPropertiesNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLDiffusionTensorDisplayPropertiesNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLColorTableNode_ClassNew
extern "C" { PyObject *PyvtkMRMLColorTableNode_ClassNew(); }
#define DECLARED_PyvtkMRMLColorTableNode_ClassNew
#endif

static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLDiffusionTensorDisplayPropertiesNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLDiffusionTensorDisplayPropertiesNode *tempr = vtkMRMLDiffusionTensorDisplayPropertiesNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLDiffusionTensorDisplayPropertiesNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::NewInstance());

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
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLDiffusionTensorDisplayPropertiesNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

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
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ScalarInvariantHasKnownScalarRange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ScalarInvariantHasKnownScalarRange");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkMRMLDiffusionTensorDisplayPropertiesNode::ScalarInvariantHasKnownScalarRange(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ScalarInvariantKnownScalarRange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ScalarInvariantKnownScalarRange");

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMRMLDiffusionTensorDisplayPropertiesNode::ScalarInvariantKnownScalarRange(temp0, temp1);

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
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetScalarInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarInvariant() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetScalarInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariant(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetScalarInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToTrace();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetScalarInvariantToTrace();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToRelativeAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToRelativeAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToRelativeAnisotropy();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetScalarInvariantToRelativeAnisotropy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToFractionalAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToFractionalAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToFractionalAnisotropy();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetScalarInvariantToFractionalAnisotropy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToLinearMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToLinearMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToLinearMeasure();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetScalarInvariantToLinearMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToPlanarMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToPlanarMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToPlanarMeasure();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetScalarInvariantToPlanarMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToSphericalMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarInvariantToSphericalMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarInvariantToSphericalMeasure();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetScalarInvariantToSphericalMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetScalarInvariantAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarInvariantAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarInvariantAsString() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetScalarInvariantAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphGeometry() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetGlyphGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphGeometry(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetGlyphGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphGeometryToLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphGeometryToLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphGeometryToLines();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetGlyphGeometryToLines();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphGeometryToTubes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphGeometryToTubes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphGeometryToTubes();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetGlyphGeometryToTubes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphGeometryToEllipsoids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphGeometryToEllipsoids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphGeometryToEllipsoids();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetGlyphGeometryToEllipsoids();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphGeometryToSuperquadrics(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphGeometryToSuperquadrics");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphGeometryToSuperquadrics();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetGlyphGeometryToSuperquadrics();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetFirstGlyphGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstGlyphGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFirstGlyphGeometry() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetFirstGlyphGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetLastGlyphGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastGlyphGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastGlyphGeometry() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetLastGlyphGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphGeometryAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphGeometryAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGlyphGeometryAsString() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetGlyphGeometryAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphGeometryAsString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphGeometryAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGlyphGeometryAsString(temp0) :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetGlyphGeometryAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphGeometryAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphGeometryAsString_s1(self, args);
    case 1:
      return PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphGeometryAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlyphGeometryAsString");
  return nullptr;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphScaleFactor() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetGlyphScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphScaleFactor(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetGlyphScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphExtractEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphExtractEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphExtractEigenvalues() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetGlyphExtractEigenvalues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphExtractEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphExtractEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphExtractEigenvalues(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetGlyphExtractEigenvalues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GlyphExtractEigenvaluesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlyphExtractEigenvaluesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GlyphExtractEigenvaluesOn();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GlyphExtractEigenvaluesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GlyphExtractEigenvaluesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlyphExtractEigenvaluesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GlyphExtractEigenvaluesOff();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GlyphExtractEigenvaluesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphEigenvector() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetGlyphEigenvector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphEigenvector(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetGlyphEigenvector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphEigenvectorToMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphEigenvectorToMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphEigenvectorToMajor();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetGlyphEigenvectorToMajor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphEigenvectorToMiddle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphEigenvectorToMiddle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphEigenvectorToMiddle();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetGlyphEigenvectorToMiddle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphEigenvectorToMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphEigenvectorToMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphEigenvectorToMinor();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetGlyphEigenvectorToMinor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetFirstGlyphEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstGlyphEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFirstGlyphEigenvector() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetFirstGlyphEigenvector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetLastGlyphEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastGlyphEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastGlyphEigenvector() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetLastGlyphEigenvector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphEigenvectorAsString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphEigenvectorAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGlyphEigenvectorAsString() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetGlyphEigenvectorAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphEigenvectorAsString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphEigenvectorAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetGlyphEigenvectorAsString(temp0) :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetGlyphEigenvectorAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphEigenvectorAsString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphEigenvectorAsString_s1(self, args);
    case 1:
      return PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphEigenvectorAsString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlyphEigenvectorAsString");
  return nullptr;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetLineGlyphResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineGlyphResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineGlyphResolution() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetLineGlyphResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetLineGlyphResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineGlyphResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineGlyphResolution(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetLineGlyphResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetTubeGlyphRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubeGlyphRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTubeGlyphRadius() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetTubeGlyphRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetTubeGlyphRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubeGlyphRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTubeGlyphRadius(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetTubeGlyphRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetTubeGlyphNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTubeGlyphNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTubeGlyphNumberOfSides() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetTubeGlyphNumberOfSides());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetTubeGlyphNumberOfSides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTubeGlyphNumberOfSides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTubeGlyphNumberOfSides(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetTubeGlyphNumberOfSides(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetEllipsoidGlyphThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEllipsoidGlyphThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEllipsoidGlyphThetaResolution() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetEllipsoidGlyphThetaResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetEllipsoidGlyphThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEllipsoidGlyphThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEllipsoidGlyphThetaResolution(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetEllipsoidGlyphThetaResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetEllipsoidGlyphPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEllipsoidGlyphPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEllipsoidGlyphPhiResolution() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetEllipsoidGlyphPhiResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetEllipsoidGlyphPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEllipsoidGlyphPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEllipsoidGlyphPhiResolution(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetEllipsoidGlyphPhiResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetSuperquadricGlyphGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperquadricGlyphGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSuperquadricGlyphGamma() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetSuperquadricGlyphGamma());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetSuperquadricGlyphGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuperquadricGlyphGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSuperquadricGlyphGamma(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetSuperquadricGlyphGamma(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetSuperquadricGlyphThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperquadricGlyphThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSuperquadricGlyphThetaResolution() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetSuperquadricGlyphThetaResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetSuperquadricGlyphThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuperquadricGlyphThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSuperquadricGlyphThetaResolution(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetSuperquadricGlyphThetaResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetSuperquadricGlyphPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSuperquadricGlyphPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSuperquadricGlyphPhiResolution() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetSuperquadricGlyphPhiResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetSuperquadricGlyphPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSuperquadricGlyphPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSuperquadricGlyphPhiResolution(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetSuperquadricGlyphPhiResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetColorGlyphBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGlyphBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorGlyphBy() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetColorGlyphBy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetColorGlyphBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGlyphBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorGlyphBy(temp0);
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::SetColorGlyphBy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetFirstColorGlyphBy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFirstColorGlyphBy");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMRMLDiffusionTensorDisplayPropertiesNode::GetFirstColorGlyphBy();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetLastColorGlyphBy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLastColorGlyphBy");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMRMLDiffusionTensorDisplayPropertiesNode::GetLastColorGlyphBy();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetColorGlyphByAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGlyphByAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColorGlyphByAsString() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetColorGlyphByAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ColorGlyphByTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphByTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphByTrace();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::ColorGlyphByTrace();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ColorGlyphByFractionalAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphByFractionalAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphByFractionalAnisotropy();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::ColorGlyphByFractionalAnisotropy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ColorGlyphByLinearMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphByLinearMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorGlyphByLinearMeasure();
    }
    else
    {
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::ColorGlyphByLinearMeasure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetGlyphConnection() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::GetGlyphConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetScalarEnumAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalarEnumAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLDiffusionTensorDisplayPropertiesNode::GetScalarEnumAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetFirstScalarInvariant(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFirstScalarInvariant");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMRMLDiffusionTensorDisplayPropertiesNode::GetFirstScalarInvariant();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetLastScalarInvariant(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLastScalarInvariant");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMRMLDiffusionTensorDisplayPropertiesNode::GetLastScalarInvariant();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLDiffusionTensorDisplayPropertiesNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLDiffusionTensorDisplayPropertiesNode *op = static_cast<vtkMRMLDiffusionTensorDisplayPropertiesNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLDiffusionTensorDisplayPropertiesNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLDiffusionTensorDisplayPropertiesNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLDiffusionTensorDisplayPropertiesNode\nC++: static vtkMRMLDiffusionTensorDisplayPropertiesNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLDiffusionTensorDisplayPropertiesNode\nC++: vtkMRMLDiffusionTensorDisplayPropertiesNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object.\n"},
  {"GetNodeTagName", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"ScalarInvariantHasKnownScalarRange", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ScalarInvariantHasKnownScalarRange, METH_VARARGS,
   "ScalarInvariantHasKnownScalarRange(ScalarInvariant:int) -> bool\nC++: static bool ScalarInvariantHasKnownScalarRange(\n    int ScalarInvariant)\n\n"},
  {"ScalarInvariantKnownScalarRange", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ScalarInvariantKnownScalarRange, METH_VARARGS,
   "ScalarInvariantKnownScalarRange(ScalarInvariant:int, range:[float,\n     float]) -> None\nC++: static void ScalarInvariantKnownScalarRange(\n    int ScalarInvariant, double range[2])\n\n"},
  {"GetScalarInvariant", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetScalarInvariant, METH_VARARGS,
   "GetScalarInvariant(self) -> int\nC++: virtual int GetScalarInvariant()\n\nDisplay Information: Functions to choose scalar invariant\n\nGet type of scalar invariant (tensor-derived scalar, invariant to\ntensor rotation) selected for display.\n"},
  {"SetScalarInvariant", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariant, METH_VARARGS,
   "SetScalarInvariant(self, _arg:int) -> None\nC++: virtual void SetScalarInvariant(int _arg)\n\nGet type of scalar invariant (tensor-derived scalar, invariant to\ntensor rotation) selected for display.\n"},
  {"SetScalarInvariantToTrace", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToTrace, METH_VARARGS,
   "SetScalarInvariantToTrace(self) -> None\nC++: void SetScalarInvariantToTrace()\n\nSet scalar invariant to trace (sum of eigenvalues).\n"},
  {"SetScalarInvariantToRelativeAnisotropy", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToRelativeAnisotropy, METH_VARARGS,
   "SetScalarInvariantToRelativeAnisotropy(self) -> None\nC++: void SetScalarInvariantToRelativeAnisotropy()\n\nSet scalar invariant to relative anisotropy\n"},
  {"SetScalarInvariantToFractionalAnisotropy", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToFractionalAnisotropy, METH_VARARGS,
   "SetScalarInvariantToFractionalAnisotropy(self) -> None\nC++: void SetScalarInvariantToFractionalAnisotropy()\n\nSet scalar invariant to FA (normalized variance of eigenvalues)\n"},
  {"SetScalarInvariantToLinearMeasure", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToLinearMeasure, METH_VARARGS,
   "SetScalarInvariantToLinearMeasure(self) -> None\nC++: void SetScalarInvariantToLinearMeasure()\n\nSet scalar invariant to C_L (Westin's linear measure)\n"},
  {"SetScalarInvariantToPlanarMeasure", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToPlanarMeasure, METH_VARARGS,
   "SetScalarInvariantToPlanarMeasure(self) -> None\nC++: void SetScalarInvariantToPlanarMeasure()\n\nSet scalar invariant to C_P (Westin's planar measure)\n"},
  {"SetScalarInvariantToSphericalMeasure", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetScalarInvariantToSphericalMeasure, METH_VARARGS,
   "SetScalarInvariantToSphericalMeasure(self) -> None\nC++: void SetScalarInvariantToSphericalMeasure()\n\nSet scalar invariant to C_S (Westin's spherical measure)\n"},
  {"GetScalarInvariantAsString", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetScalarInvariantAsString, METH_VARARGS,
   "GetScalarInvariantAsString(self) -> str\nC++: virtual const char *GetScalarInvariantAsString()\n\nTO DO: add the rest of the scalars\n\nReturn a text string describing the ScalarInvariant variable\n"},
  {"GetGlyphGeometry", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphGeometry, METH_VARARGS,
   "GetGlyphGeometry(self) -> int\nC++: virtual int GetGlyphGeometry()\n\nDisplay Information: Functions to choose the type of glyph\ngeometry\n\nGet the type of glyph geometry (line, ellipsoid, etc.)\n"},
  {"SetGlyphGeometry", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphGeometry, METH_VARARGS,
   "SetGlyphGeometry(self, geometry:int) -> None\nC++: void SetGlyphGeometry(int geometry)\n\nSet the type of glyph geometry (line, ellipsoid, etc.) Also\nupdate the glyph polydata source\n"},
  {"SetGlyphGeometryToLines", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphGeometryToLines, METH_VARARGS,
   "SetGlyphGeometryToLines(self) -> None\nC++: void SetGlyphGeometryToLines()\n\n"},
  {"SetGlyphGeometryToTubes", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphGeometryToTubes, METH_VARARGS,
   "SetGlyphGeometryToTubes(self) -> None\nC++: void SetGlyphGeometryToTubes()\n\n"},
  {"SetGlyphGeometryToEllipsoids", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphGeometryToEllipsoids, METH_VARARGS,
   "SetGlyphGeometryToEllipsoids(self) -> None\nC++: void SetGlyphGeometryToEllipsoids()\n\n"},
  {"SetGlyphGeometryToSuperquadrics", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphGeometryToSuperquadrics, METH_VARARGS,
   "SetGlyphGeometryToSuperquadrics(self) -> None\nC++: void SetGlyphGeometryToSuperquadrics()\n\n"},
  {"GetFirstGlyphGeometry", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetFirstGlyphGeometry, METH_VARARGS,
   "GetFirstGlyphGeometry(self) -> int\nC++: int GetFirstGlyphGeometry()\n\nReturn the lowest and highest integers, for use in looping\n"},
  {"GetLastGlyphGeometry", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetLastGlyphGeometry, METH_VARARGS,
   "GetLastGlyphGeometry(self) -> int\nC++: int GetLastGlyphGeometry()\n\n"},
  {"GetGlyphGeometryAsString", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphGeometryAsString, METH_VARARGS,
   "GetGlyphGeometryAsString(self) -> str\nC++: virtual const char *GetGlyphGeometryAsString()\nGetGlyphGeometryAsString(self, __a:int) -> str\nC++: virtual const char *GetGlyphGeometryAsString(int)\n\nReturn a text string describing the GlyphGeometry variable\n"},
  {"GetGlyphScaleFactor", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphScaleFactor, METH_VARARGS,
   "GetGlyphScaleFactor(self) -> float\nC++: virtual double GetGlyphScaleFactor()\n\nDisplay Information: Parameters of glyph geometry\n\nGet the scale factor applied to the glyphs.\n"},
  {"SetGlyphScaleFactor", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphScaleFactor, METH_VARARGS,
   "SetGlyphScaleFactor(self, _arg:float) -> None\nC++: virtual void SetGlyphScaleFactor(double _arg)\n\nSet the scale factor applied to the glyphs.\n"},
  {"GetGlyphExtractEigenvalues", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphExtractEigenvalues, METH_VARARGS,
   "GetGlyphExtractEigenvalues(self) -> int\nC++: virtual int GetGlyphExtractEigenvalues()\n\nWhether the input tensors need eigensystem computation\n"},
  {"SetGlyphExtractEigenvalues", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphExtractEigenvalues, METH_VARARGS,
   "SetGlyphExtractEigenvalues(self, _arg:int) -> None\nC++: virtual void SetGlyphExtractEigenvalues(int _arg)\n\n"},
  {"GlyphExtractEigenvaluesOn", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GlyphExtractEigenvaluesOn, METH_VARARGS,
   "GlyphExtractEigenvaluesOn(self) -> None\nC++: virtual void GlyphExtractEigenvaluesOn()\n\n"},
  {"GlyphExtractEigenvaluesOff", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GlyphExtractEigenvaluesOff, METH_VARARGS,
   "GlyphExtractEigenvaluesOff(self) -> None\nC++: virtual void GlyphExtractEigenvaluesOff()\n\n"},
  {"GetGlyphEigenvector", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphEigenvector, METH_VARARGS,
   "GetGlyphEigenvector(self) -> int\nC++: virtual int GetGlyphEigenvector()\n\nDescription Which eigenvector to display with lines or tubes\nglyphs\n"},
  {"SetGlyphEigenvector", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphEigenvector, METH_VARARGS,
   "SetGlyphEigenvector(self, eigenvector:int) -> None\nC++: void SetGlyphEigenvector(int eigenvector)\n\nDescription Which eigenvector to display with lines or tubes\nglyphs\n\nSet the type of glyph geometry (line, ellipsoid, etc.) Also\nupdate the glyph polydata source\n"},
  {"SetGlyphEigenvectorToMajor", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphEigenvectorToMajor, METH_VARARGS,
   "SetGlyphEigenvectorToMajor(self) -> None\nC++: void SetGlyphEigenvectorToMajor()\n\nUpdate the source if the eigenvector has changed Description\nDisplay major eigenvector with lines or tubes glyphs\n"},
  {"SetGlyphEigenvectorToMiddle", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphEigenvectorToMiddle, METH_VARARGS,
   "SetGlyphEigenvectorToMiddle(self) -> None\nC++: void SetGlyphEigenvectorToMiddle()\n\nDescription Display \"middle\" (second) eigenvector with lines or\ntubes glyphs\n"},
  {"SetGlyphEigenvectorToMinor", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetGlyphEigenvectorToMinor, METH_VARARGS,
   "SetGlyphEigenvectorToMinor(self) -> None\nC++: void SetGlyphEigenvectorToMinor()\n\nDescription Display minor eigenvector with lines or tubes glyphs\n"},
  {"GetFirstGlyphEigenvector", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetFirstGlyphEigenvector, METH_VARARGS,
   "GetFirstGlyphEigenvector(self) -> int\nC++: int GetFirstGlyphEigenvector()\n\nReturn the lowest and highest integers, for use in looping\n"},
  {"GetLastGlyphEigenvector", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetLastGlyphEigenvector, METH_VARARGS,
   "GetLastGlyphEigenvector(self) -> int\nC++: int GetLastGlyphEigenvector()\n\n"},
  {"GetGlyphEigenvectorAsString", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphEigenvectorAsString, METH_VARARGS,
   "GetGlyphEigenvectorAsString(self) -> str\nC++: virtual const char *GetGlyphEigenvectorAsString()\nGetGlyphEigenvectorAsString(self, __a:int) -> str\nC++: virtual const char *GetGlyphEigenvectorAsString(int)\n\nReturn a text string describing GlyphEigenvector variable\n"},
  {"GetLineGlyphResolution", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetLineGlyphResolution, METH_VARARGS,
   "GetLineGlyphResolution(self) -> int\nC++: virtual int GetLineGlyphResolution()\n\nDisplay Information: Parameters of Lines glyph geometry\n\nResolution of lines displayed as tensor glyphs\n"},
  {"SetLineGlyphResolution", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetLineGlyphResolution, METH_VARARGS,
   "SetLineGlyphResolution(self, resolution:int) -> None\nC++: void SetLineGlyphResolution(int resolution)\n\n"},
  {"GetTubeGlyphRadius", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetTubeGlyphRadius, METH_VARARGS,
   "GetTubeGlyphRadius(self) -> float\nC++: virtual double GetTubeGlyphRadius()\n\nUpdate the source if the resolution has changed Display\nInformation: Parameters of Tubes glyph geometry\n\nGet the radius of the tube glyph\n"},
  {"SetTubeGlyphRadius", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetTubeGlyphRadius, METH_VARARGS,
   "SetTubeGlyphRadius(self, radius:float) -> None\nC++: void SetTubeGlyphRadius(double radius)\n\nSet the radius of the tube glyph\n"},
  {"GetTubeGlyphNumberOfSides", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetTubeGlyphNumberOfSides, METH_VARARGS,
   "GetTubeGlyphNumberOfSides(self) -> int\nC++: virtual int GetTubeGlyphNumberOfSides()\n\nUpdate the source if the radius has changed\n\nNumber of sides of tube glyph (3 gives a triangular tube, etc.)\n"},
  {"SetTubeGlyphNumberOfSides", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetTubeGlyphNumberOfSides, METH_VARARGS,
   "SetTubeGlyphNumberOfSides(self, numberOfSides:int) -> None\nC++: void SetTubeGlyphNumberOfSides(int numberOfSides)\n\n"},
  {"GetEllipsoidGlyphThetaResolution", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetEllipsoidGlyphThetaResolution, METH_VARARGS,
   "GetEllipsoidGlyphThetaResolution(self) -> int\nC++: virtual int GetEllipsoidGlyphThetaResolution()\n\nUpdate the source if the numberOfSides has changed Display\nInformation: Parameters of Ellipsoids glyph geometry\n\nNumber of polygons used in longitude direction for sphere that\nwill be scaled by tensor to form ellipsoid.\n"},
  {"SetEllipsoidGlyphThetaResolution", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetEllipsoidGlyphThetaResolution, METH_VARARGS,
   "SetEllipsoidGlyphThetaResolution(self, _arg:int) -> None\nC++: virtual void SetEllipsoidGlyphThetaResolution(int _arg)\n\n"},
  {"GetEllipsoidGlyphPhiResolution", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetEllipsoidGlyphPhiResolution, METH_VARARGS,
   "GetEllipsoidGlyphPhiResolution(self) -> int\nC++: virtual int GetEllipsoidGlyphPhiResolution()\n\nNumber of polygons used in latitude direction for sphere that\nwill be scaled by tensor to form ellipsoid.\n"},
  {"SetEllipsoidGlyphPhiResolution", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetEllipsoidGlyphPhiResolution, METH_VARARGS,
   "SetEllipsoidGlyphPhiResolution(self, _arg:int) -> None\nC++: virtual void SetEllipsoidGlyphPhiResolution(int _arg)\n\n"},
  {"GetSuperquadricGlyphGamma", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetSuperquadricGlyphGamma, METH_VARARGS,
   "GetSuperquadricGlyphGamma(self) -> float\nC++: virtual double GetSuperquadricGlyphGamma()\n\nDisplay Information: Parameters of Superquadrics glyph geometry\n"},
  {"SetSuperquadricGlyphGamma", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetSuperquadricGlyphGamma, METH_VARARGS,
   "SetSuperquadricGlyphGamma(self, _arg:float) -> None\nC++: virtual void SetSuperquadricGlyphGamma(double _arg)\n\n"},
  {"GetSuperquadricGlyphThetaResolution", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetSuperquadricGlyphThetaResolution, METH_VARARGS,
   "GetSuperquadricGlyphThetaResolution(self) -> int\nC++: virtual int GetSuperquadricGlyphThetaResolution()\n\n\n"},
  {"SetSuperquadricGlyphThetaResolution", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetSuperquadricGlyphThetaResolution, METH_VARARGS,
   "SetSuperquadricGlyphThetaResolution(self, _arg:int) -> None\nC++: virtual void SetSuperquadricGlyphThetaResolution(int _arg)\n\n"},
  {"GetSuperquadricGlyphPhiResolution", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetSuperquadricGlyphPhiResolution, METH_VARARGS,
   "GetSuperquadricGlyphPhiResolution(self) -> int\nC++: virtual int GetSuperquadricGlyphPhiResolution()\n\n\n"},
  {"SetSuperquadricGlyphPhiResolution", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetSuperquadricGlyphPhiResolution, METH_VARARGS,
   "SetSuperquadricGlyphPhiResolution(self, _arg:int) -> None\nC++: virtual void SetSuperquadricGlyphPhiResolution(int _arg)\n\n"},
  {"GetColorGlyphBy", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetColorGlyphBy, METH_VARARGS,
   "GetColorGlyphBy(self) -> int\nC++: virtual int GetColorGlyphBy()\n\nDisplay Information: Functions to choose the type of glyph\ncoloring\n\nGet type of scalar invariant (tensor-derived scalar, invariant to\ntensor rotation) selected for display.\n"},
  {"SetColorGlyphBy", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_SetColorGlyphBy, METH_VARARGS,
   "SetColorGlyphBy(self, _arg:int) -> None\nC++: virtual void SetColorGlyphBy(int _arg)\n\nGet type of scalar invariant (tensor-derived scalar, invariant to\ntensor rotation) selected for display.\n"},
  {"GetFirstColorGlyphBy", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetFirstColorGlyphBy, METH_VARARGS,
   "GetFirstColorGlyphBy() -> int\nC++: static int GetFirstColorGlyphBy()\n\nReturn the lowest and highest integers, for use in looping\n"},
  {"GetLastColorGlyphBy", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetLastColorGlyphBy, METH_VARARGS,
   "GetLastColorGlyphBy() -> int\nC++: static int GetLastColorGlyphBy()\n\n"},
  {"GetColorGlyphByAsString", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetColorGlyphByAsString, METH_VARARGS,
   "GetColorGlyphByAsString(self) -> str\nC++: virtual const char *GetColorGlyphByAsString()\n\nReturn a text string describing the ColorGlyphBy\n"},
  {"ColorGlyphByTrace", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ColorGlyphByTrace, METH_VARARGS,
   "ColorGlyphByTrace(self) -> None\nC++: void ColorGlyphByTrace()\n\nSet scalar invariant to trace (sum of eigenvalues).\n"},
  {"ColorGlyphByFractionalAnisotropy", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ColorGlyphByFractionalAnisotropy, METH_VARARGS,
   "ColorGlyphByFractionalAnisotropy(self) -> None\nC++: void ColorGlyphByFractionalAnisotropy()\n\nSet scalar invariant to FA (normalized variance of eigenvalues)\n"},
  {"ColorGlyphByLinearMeasure", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ColorGlyphByLinearMeasure, METH_VARARGS,
   "ColorGlyphByLinearMeasure(self) -> None\nC++: void ColorGlyphByLinearMeasure()\n\nSet scalar invariant to FA (normalized variance of eigenvalues)\n"},
  {"GetGlyphConnection", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetGlyphConnection, METH_VARARGS,
   "GetGlyphConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetGlyphConnection()\n\nTO DO: add the rest of the scalars Convenience functions to get\nan appropriate glyph source\n\nGet a polydata object according to current glyph display settings\n(so a line, sphere, or tube) to use as a source for a glyphing\nfilter.\n"},
  {"GetScalarEnumAsString", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetScalarEnumAsString, METH_VARARGS,
   "GetScalarEnumAsString(val:int) -> str\nC++: static const char *GetScalarEnumAsString(int val)\n\n"},
  {"GetFirstScalarInvariant", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetFirstScalarInvariant, METH_VARARGS,
   "GetFirstScalarInvariant() -> int\nC++: static int GetFirstScalarInvariant()\n\nReturn the lowest and highest integers, for use in looping\n"},
  {"GetLastScalarInvariant", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_GetLastScalarInvariant, METH_VARARGS,
   "GetLastScalarInvariant() -> int\nC++: static int GetLastScalarInvariant()\n\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLDiffusionTensorDisplayPropertiesNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLDiffusionTensorDisplayPropertiesNode_Doc =
  "vtkMRMLDiffusionTensorDisplayPropertiesNode - MRML node for display\nof a diffusion tensor.\n\n"
  "Superclass: vtkMRMLColorTableNode\n\n"
  "This node describes display properties at the (conceptual)\n"
  "single-tensor level. A tensor can be displayed using various scalar\n"
  "invariants and glyphs. This class is used by classes\n"
  "(vtkMRMLFiberBundleDisplayNode,\n"
  "vtkMRMLDiffusionTensorVolumeDisplayNode) that handle higher-level\n"
  "display concepts for many diffusion tensors, such as choosing between\n"
  "scalars/glyphs/etc. for specific display needs. This class inherits\n"
  "from the vtkMRMLColorNode->vtkMRMLColorTableNode superclasses, used\n"
  "for vtkMRMLModelNodes and vtkMRMLVolumeNodes, in order to provide\n"
  "specific lookup tables for the scalar invariant display.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLDiffusionTensorDisplayPropertiesNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLDiffusionTensorDisplayPropertiesNode", // tp_name
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
  PyvtkMRMLDiffusionTensorDisplayPropertiesNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLDiffusionTensorDisplayPropertiesNode_StaticNew()
{
  return vtkMRMLDiffusionTensorDisplayPropertiesNode::New();
}

PyObject *PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLDiffusionTensorDisplayPropertiesNode_Type, PyvtkMRMLDiffusionTensorDisplayPropertiesNode_Methods,
    "vtkMRMLDiffusionTensorDisplayPropertiesNode",
 &PyvtkMRMLDiffusionTensorDisplayPropertiesNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLColorTableNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 33; c++)
  {
    static const struct { const char *name; int value; }
      constants[33] = {
        { "Trace", vtkMRMLDiffusionTensorDisplayPropertiesNode::Trace },
        { "Determinant", vtkMRMLDiffusionTensorDisplayPropertiesNode::Determinant },
        { "RelativeAnisotropy", vtkMRMLDiffusionTensorDisplayPropertiesNode::RelativeAnisotropy },
        { "FractionalAnisotropy", vtkMRMLDiffusionTensorDisplayPropertiesNode::FractionalAnisotropy },
        { "MaxEigenvalue", vtkMRMLDiffusionTensorDisplayPropertiesNode::MaxEigenvalue },
        { "MidEigenvalue", vtkMRMLDiffusionTensorDisplayPropertiesNode::MidEigenvalue },
        { "MinEigenvalue", vtkMRMLDiffusionTensorDisplayPropertiesNode::MinEigenvalue },
        { "LinearMeasure", vtkMRMLDiffusionTensorDisplayPropertiesNode::LinearMeasure },
        { "PlanarMeasure", vtkMRMLDiffusionTensorDisplayPropertiesNode::PlanarMeasure },
        { "SphericalMeasure", vtkMRMLDiffusionTensorDisplayPropertiesNode::SphericalMeasure },
        { "ColorOrientation", vtkMRMLDiffusionTensorDisplayPropertiesNode::ColorOrientation },
        { "D11", vtkMRMLDiffusionTensorDisplayPropertiesNode::D11 },
        { "D22", vtkMRMLDiffusionTensorDisplayPropertiesNode::D22 },
        { "D33", vtkMRMLDiffusionTensorDisplayPropertiesNode::D33 },
        { "Mode", vtkMRMLDiffusionTensorDisplayPropertiesNode::Mode },
        { "ColorMode", vtkMRMLDiffusionTensorDisplayPropertiesNode::ColorMode },
        { "MaxEigenvalueProjX", vtkMRMLDiffusionTensorDisplayPropertiesNode::MaxEigenvalueProjX },
        { "MaxEigenvalueProjY", vtkMRMLDiffusionTensorDisplayPropertiesNode::MaxEigenvalueProjY },
        { "MaxEigenvalueProjZ", vtkMRMLDiffusionTensorDisplayPropertiesNode::MaxEigenvalueProjZ },
        { "MaxEigenvec_ProjX", vtkMRMLDiffusionTensorDisplayPropertiesNode::MaxEigenvec_ProjX },
        { "MaxEigenvec_ProjY", vtkMRMLDiffusionTensorDisplayPropertiesNode::MaxEigenvec_ProjY },
        { "MaxEigenvec_ProjZ", vtkMRMLDiffusionTensorDisplayPropertiesNode::MaxEigenvec_ProjZ },
        { "ParallelDiffusivity", vtkMRMLDiffusionTensorDisplayPropertiesNode::ParallelDiffusivity },
        { "PerpendicularDiffusivity", vtkMRMLDiffusionTensorDisplayPropertiesNode::PerpendicularDiffusivity },
        { "ColorOrientationMiddleEigenvector", vtkMRMLDiffusionTensorDisplayPropertiesNode::ColorOrientationMiddleEigenvector },
        { "ColorOrientationMinEigenvector", vtkMRMLDiffusionTensorDisplayPropertiesNode::ColorOrientationMinEigenvector },
        { "Lines", vtkMRMLDiffusionTensorDisplayPropertiesNode::Lines },
        { "Tubes", vtkMRMLDiffusionTensorDisplayPropertiesNode::Tubes },
        { "Ellipsoids", vtkMRMLDiffusionTensorDisplayPropertiesNode::Ellipsoids },
        { "Superquadrics", vtkMRMLDiffusionTensorDisplayPropertiesNode::Superquadrics },
        { "Major", vtkMRMLDiffusionTensorDisplayPropertiesNode::Major },
        { "Middle", vtkMRMLDiffusionTensorDisplayPropertiesNode::Middle },
        { "Minor", vtkMRMLDiffusionTensorDisplayPropertiesNode::Minor },
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

void PyVTKAddFile_vtkMRMLDiffusionTensorDisplayPropertiesNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLDiffusionTensorDisplayPropertiesNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLDiffusionTensorDisplayPropertiesNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

