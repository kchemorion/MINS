// python wrapper for vtkOrientedImageData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOrientedImageData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrientedImageData(PyObject *dict); }
extern "C" { PyObject *PyvtkOrientedImageData_ClassNew(); }


static PyObject *
PyvtkOrientedImageData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrientedImageData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientedImageData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrientedImageData *tempr = vtkOrientedImageData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientedImageData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientedImageData::NewInstance());

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
PyvtkOrientedImageData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOrientedImageData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOrientedImageData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkOrientedImageData::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkOrientedImageData::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_CopyDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->CopyDirections(temp0);
    }
    else
    {
      op->vtkOrientedImageData::CopyDirections(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_SetDirections_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

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
      op->SetDirections(temp0);
    }
    else
    {
      op->vtkOrientedImageData::SetDirections(temp0);
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
PyvtkOrientedImageData_SetDirections_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

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
      op->SetDirections(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkOrientedImageData::SetDirections(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOrientedImageData_SetDirections(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOrientedImageData_SetDirections_s1(self, args);
    case 9:
      return PyvtkOrientedImageData_SetDirections_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDirections");
  return nullptr;
}


static PyObject *
PyvtkOrientedImageData_GetDirections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

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
      op->GetDirections(temp0);
    }
    else
    {
      op->vtkOrientedImageData::GetDirections(temp0);
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
PyvtkOrientedImageData_GetMinSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinSpacing() :
      op->vtkOrientedImageData::GetMinSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_GetMaxSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxSpacing() :
      op->vtkOrientedImageData::GetMaxSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_GetDirectionMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetDirectionMatrix(temp0);
    }
    else
    {
      op->vtkOrientedImageData::GetDirectionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOrientedImageData_GetDirectionMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix3x3 *tempr = (ap.IsBound() ?
      op->GetDirectionMatrix() :
      op->vtkOrientedImageData::GetDirectionMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOrientedImageData_GetDirectionMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOrientedImageData_GetDirectionMatrix_s1(self, args);
    case 0:
      return PyvtkOrientedImageData_GetDirectionMatrix_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDirectionMatrix");
  return nullptr;
}


static PyObject *
PyvtkOrientedImageData_SetDirectionMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetDirectionMatrix(temp0);
    }
    else
    {
      op->vtkOrientedImageData::SetDirectionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOrientedImageData_SetDirectionMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->SetDirectionMatrix(temp0);
    }
    else
    {
      op->vtkOrientedImageData::SetDirectionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOrientedImageData_SetDirectionMatrix_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionMatrix(temp0);
    }
    else
    {
      op->vtkOrientedImageData::SetDirectionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOrientedImageData_SetDirectionMatrix_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

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
      op->SetDirectionMatrix(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkOrientedImageData::SetDirectionMatrix(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOrientedImageData_SetDirectionMatrix_Methods[] = {
  {"SetDirectionMatrix", PyvtkOrientedImageData_SetDirectionMatrix_s1, METH_VARARGS,
   "@V *vtkMatrix4x4"},
  {"SetDirectionMatrix", PyvtkOrientedImageData_SetDirectionMatrix_s2, METH_VARARGS,
   "@V *vtkMatrix3x3"},
  {"SetDirectionMatrix", PyvtkOrientedImageData_SetDirectionMatrix_s3, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOrientedImageData_SetDirectionMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOrientedImageData_SetDirectionMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkOrientedImageData_SetDirectionMatrix_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDirectionMatrix");
  return nullptr;
}


static PyObject *
PyvtkOrientedImageData_GetImageToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetImageToWorldMatrix(temp0);
    }
    else
    {
      op->vtkOrientedImageData::GetImageToWorldMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_SetImageToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetImageToWorldMatrix(temp0);
    }
    else
    {
      op->vtkOrientedImageData::SetImageToWorldMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_SetGeometryFromImageToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryFromImageToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetGeometryFromImageToWorldMatrix(temp0);
    }
    else
    {
      op->vtkOrientedImageData::SetGeometryFromImageToWorldMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeBounds();
    }
    else
    {
      op->vtkOrientedImageData::ComputeBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_GetWorldToImageMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToImageMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetWorldToImageMatrix(temp0);
    }
    else
    {
      op->vtkOrientedImageData::GetWorldToImageMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedImageData_IsEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedImageData *op = static_cast<vtkOrientedImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsEmpty() :
      op->vtkOrientedImageData::IsEmpty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOrientedImageData_Methods[] = {
  {"IsTypeOf", PyvtkOrientedImageData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOrientedImageData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOrientedImageData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOrientedImageData\nC++: static vtkOrientedImageData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOrientedImageData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOrientedImageData\nC++: vtkOrientedImageData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOrientedImageData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOrientedImageData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ShallowCopy", PyvtkOrientedImageData_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow copy\n"},
  {"DeepCopy", PyvtkOrientedImageData_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nDeep copy\n"},
  {"CopyDirections", PyvtkOrientedImageData_CopyDirections, METH_VARARGS,
   "CopyDirections(self, src:vtkDataObject) -> None\nC++: virtual void CopyDirections(vtkDataObject *src)\n\nCopy orientation information only\n"},
  {"SetDirections", PyvtkOrientedImageData_SetDirections, METH_VARARGS,
   "SetDirections(self, dirs:[[float, float, float], [float, float,\n    float], [float, float, float]]) -> None\nC++: void SetDirections(double dirs[3][3])\nSetDirections(self, ir:float, ia:float, is_:float, jr:float,\n    ja:float, js:float, kr:float, ka:float, ks:float) -> None\nC++: void SetDirections(double ir, double ia, double is,\n    double jr, double ja, double js, double kr, double ka,\n    double ks)\n\nSet directions only\n"},
  {"GetDirections", PyvtkOrientedImageData_GetDirections, METH_VARARGS,
   "GetDirections(self, dirs:[[float, float, float], [float, float,\n    float], [float, float, float]]) -> None\nC++: void GetDirections(double dirs[3][3])\n\n"},
  {"GetMinSpacing", PyvtkOrientedImageData_GetMinSpacing, METH_VARARGS,
   "GetMinSpacing(self) -> float\nC++: double GetMinSpacing()\n\nUtility function that returns the min spacing between the 3\norientations\n"},
  {"GetMaxSpacing", PyvtkOrientedImageData_GetMaxSpacing, METH_VARARGS,
   "GetMaxSpacing(self) -> float\nC++: double GetMaxSpacing()\n\nUtility function that returns the max spacing between the 3\norientations\n"},
  {"GetDirectionMatrix", PyvtkOrientedImageData_GetDirectionMatrix, METH_VARARGS,
   "GetDirectionMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void GetDirectionMatrix(vtkMatrix4x4 *mat)\nGetDirectionMatrix(self) -> vtkMatrix3x3\nC++: virtual vtkMatrix3x3 *GetDirectionMatrix()\n\n"},
  {"SetDirectionMatrix", PyvtkOrientedImageData_SetDirectionMatrix, METH_VARARGS,
   "SetDirectionMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void SetDirectionMatrix(vtkMatrix4x4 *mat)\nSetDirectionMatrix(self, m:vtkMatrix3x3) -> None\nC++: virtual void SetDirectionMatrix(vtkMatrix3x3 *m)\nSetDirectionMatrix(self, elements:(float, float, float, float,\n    float, float, float, float, float)) -> None\nC++: virtual void SetDirectionMatrix(const double elements[9])\nSetDirectionMatrix(self, e00:float, e01:float, e02:float,\n    e10:float, e11:float, e12:float, e20:float, e21:float,\n    e22:float) -> None\nC++: virtual void SetDirectionMatrix(double e00, double e01,\n    double e02, double e10, double e11, double e12, double e20,\n    double e21, double e22)\n\n"},
  {"GetImageToWorldMatrix", PyvtkOrientedImageData_GetImageToWorldMatrix, METH_VARARGS,
   "GetImageToWorldMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void GetImageToWorldMatrix(vtkMatrix4x4 *mat)\n\nGet the geometry matrix that includes the spacing and origin\ninformation\n"},
  {"SetImageToWorldMatrix", PyvtkOrientedImageData_SetImageToWorldMatrix, METH_VARARGS,
   "SetImageToWorldMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void SetImageToWorldMatrix(vtkMatrix4x4 *mat)\n\nConvenience method to set the directions, spacing, and origin\nfrom a matrix\n"},
  {"SetGeometryFromImageToWorldMatrix", PyvtkOrientedImageData_SetGeometryFromImageToWorldMatrix, METH_VARARGS,
   "SetGeometryFromImageToWorldMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void SetGeometryFromImageToWorldMatrix(vtkMatrix4x4 *mat)\n\nSame as SetImageToWorldMatrix. Kept for backward compatibility.\n"},
  {"ComputeBounds", PyvtkOrientedImageData_ComputeBounds, METH_VARARGS,
   "ComputeBounds(self) -> None\nC++: void ComputeBounds() override;\n\nCompute image bounds (xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"GetWorldToImageMatrix", PyvtkOrientedImageData_GetWorldToImageMatrix, METH_VARARGS,
   "GetWorldToImageMatrix(self, mat:vtkMatrix4x4) -> None\nC++: void GetWorldToImageMatrix(vtkMatrix4x4 *mat)\n\nGet the inverse of the geometry matrix\n"},
  {"IsEmpty", PyvtkOrientedImageData_IsEmpty, METH_VARARGS,
   "IsEmpty(self) -> bool\nC++: bool IsEmpty()\n\nDetermines whether the image data is empty (if the extent has 0\nvoxels then it is)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOrientedImageData_Doc =
  "vtkOrientedImageData - Image data containing orientation information\n\n"
  "Superclass: vtkImageData\n\n"
  "This extends vtkImageData to arbitrary grid orientation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOrientedImageData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkOrientedImageData", // tp_name
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
  PyvtkOrientedImageData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrientedImageData_StaticNew()
{
  return vtkOrientedImageData::New();
}

PyObject *PyvtkOrientedImageData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOrientedImageData_Type, PyvtkOrientedImageData_Methods,
    "vtkOrientedImageData",
 &PyvtkOrientedImageData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageData");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrientedImageData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrientedImageData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrientedImageData", o) != 0)
  {
    Py_DECREF(o);
  }

}

