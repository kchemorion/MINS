// python wrapper for vtkMRMLSliceIntersectionInteractionRepresentationHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLSliceIntersectionInteractionRepresentationHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSliceIntersectionInteractionRepresentationHelper(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_ClassNew(); }


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLSliceIntersectionInteractionRepresentationHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentationHelper *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLSliceIntersectionInteractionRepresentationHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLSliceIntersectionInteractionRepresentationHelper *tempr = vtkMRMLSliceIntersectionInteractionRepresentationHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentationHelper *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentationHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceIntersectionInteractionRepresentationHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLSliceIntersectionInteractionRepresentationHelper::NewInstance());

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
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLSliceIntersectionInteractionRepresentationHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentationHelper *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentationHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLSliceIntersectionInteractionRepresentationHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_IntersectWithFinitePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithFinitePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentationHelper *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentationHelper *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    int tempr = (ap.IsBound() ?
      op->IntersectWithFinitePlane(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkMRMLSliceIntersectionInteractionRepresentationHelper::IntersectWithFinitePlane(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_GetIntersectionWithSliceViewBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntersectionWithSliceViewBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentationHelper *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentationHelper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetIntersectionWithSliceViewBoundaries(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentationHelper::GetIntersectionWithSliceViewBoundaries(temp0, temp1, temp2, temp3);
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

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_GetSliceViewBoundariesXY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceViewBoundariesXY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentationHelper *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentationHelper *>(vp);

  vtkMRMLSliceNode *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSliceViewBoundariesXY(temp0, temp1);
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentationHelper::GetSliceViewBoundariesXY(temp0, temp1);
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
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_GetLineTipsFromIntersectingSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineTipsFromIntersectingSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentationHelper *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentationHelper *>(vp);

  vtkMRMLSliceNode *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->GetLineTipsFromIntersectingSliceNode(temp0, temp1, temp2, temp3) :
      op->vtkMRMLSliceIntersectionInteractionRepresentationHelper::GetLineTipsFromIntersectingSliceNode(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_ComputeHandleToWorldTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeHandleToWorldTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentationHelper *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentationHelper *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  vtkMatrix4x4 *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeHandleToWorldTransformMatrix(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentationHelper::ComputeHandleToWorldTransformMatrix(temp0, temp1, temp2);
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
PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_RotationMatrixFromVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationMatrixFromVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLSliceIntersectionInteractionRepresentationHelper *op = static_cast<vtkMRMLSliceIntersectionInteractionRepresentationHelper *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  vtkMatrix4x4 *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkMatrix4x4"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->RotationMatrixFromVectors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLSliceIntersectionInteractionRepresentationHelper::RotationMatrixFromVectors(temp0, temp1, temp2);
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

static PyMethodDef PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_Methods[] = {
  {"IsTypeOf", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nStandard methods for instances of this class.\n"},
  {"IsA", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nStandard methods for instances of this class.\n"},
  {"SafeDownCast", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLSliceIntersectionInteractionRepresentationHelper\nC++: static vtkMRMLSliceIntersectionInteractionRepresentationHelper *SafeDownCast(\n    vtkObjectBase *o)\n\nStandard methods for instances of this class.\n"},
  {"NewInstance", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_NewInstance, METH_VARARGS,
   "NewInstance(self)\n    -> vtkMRMLSliceIntersectionInteractionRepresentationHelper\nC++: vtkMRMLSliceIntersectionInteractionRepresentationHelper *NewInstance(\n    )\n\nStandard methods for instances of this class.\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nStandard methods for instances of this class.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nStandard methods for instances of this class.\n"},
  {"IntersectWithFinitePlane", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_IntersectWithFinitePlane, METH_VARARGS,
   "IntersectWithFinitePlane(self, n:[float, float, float], o:[float,\n    float, float], pOrigin:[float, float, float], px:[float,\n    float, float], py:[float, float, float], x0:[float, float,\n    float], x1:[float, float, float]) -> int\nC++: int IntersectWithFinitePlane(double n[3], double o[3],\n    double pOrigin[3], double px[3], double py[3], double x0[3],\n    double x1[3])\n\n"},
  {"GetIntersectionWithSliceViewBoundaries", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_GetIntersectionWithSliceViewBoundaries, METH_VARARGS,
   "GetIntersectionWithSliceViewBoundaries(self, pointA:[float, ...],\n    pointB:[float, ...], sliceViewBounds:[float, ...],\n    intersectionPoint:[float, ...]) -> None\nC++: void GetIntersectionWithSliceViewBoundaries(double *pointA,\n    double *pointB, double *sliceViewBounds,\n    double *intersectionPoint)\n\nCompute intersection between a 2D line and the slice view\nboundaries\n"},
  {"GetSliceViewBoundariesXY", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_GetSliceViewBoundariesXY, METH_VARARGS,
   "GetSliceViewBoundariesXY(self, sliceNode:vtkMRMLSliceNode,\n    sliceViewBounds:[float, ...]) -> None\nC++: void GetSliceViewBoundariesXY(vtkMRMLSliceNode *sliceNode,\n    double *sliceViewBounds)\n\nGet boundaries of the slice view associated with a given\nvtkMRMLSliceNode\n"},
  {"GetLineTipsFromIntersectingSliceNode", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_GetLineTipsFromIntersectingSliceNode, METH_VARARGS,
   "GetLineTipsFromIntersectingSliceNode(self,\n    intersectingSliceNode:vtkMRMLSliceNode,\n    intersectingXYToXY:vtkMatrix4x4, intersectionLineTip1:[float,\n    float, float], intersectionLineTip2:[float, float, float])\n    -> int\nC++: int GetLineTipsFromIntersectingSliceNode(\n    vtkMRMLSliceNode *intersectingSliceNode,\n    vtkMatrix4x4 *intersectingXYToXY,\n    double intersectionLineTip1[3],\n    double intersectionLineTip2[3])\n\n"},
  {"ComputeHandleToWorldTransformMatrix", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_ComputeHandleToWorldTransformMatrix, METH_VARARGS,
   "ComputeHandleToWorldTransformMatrix(self, handlePosition:[float,\n    float], handleOrientation:[float, float],\n    handleToWorldTransformMatrix:vtkMatrix4x4) -> None\nC++: void ComputeHandleToWorldTransformMatrix(\n    double handlePosition[2], double handleOrientation[2],\n    vtkMatrix4x4 *handleToWorldTransformMatrix)\n\n"},
  {"RotationMatrixFromVectors", PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_RotationMatrixFromVectors, METH_VARARGS,
   "RotationMatrixFromVectors(self, vector1:[float, float],\n    vector2:[float, float], rotationMatrixHom:vtkMatrix4x4)\n    -> None\nC++: void RotationMatrixFromVectors(double vector1[2],\n    double vector2[2], vtkMatrix4x4 *rotationMatrixHom)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_Doc =
  "vtkMRMLSliceIntersectionInteractionRepresentationHelper - utility\nclass to compute slice intersection interactions\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLSliceIntersectionInteractionRepresentationHelper", // tp_name
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
  PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_StaticNew()
{
  return vtkMRMLSliceIntersectionInteractionRepresentationHelper::New();
}

PyObject *PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_Type, PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_Methods,
    "vtkMRMLSliceIntersectionInteractionRepresentationHelper",
 &PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSliceIntersectionInteractionRepresentationHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSliceIntersectionInteractionRepresentationHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSliceIntersectionInteractionRepresentationHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

