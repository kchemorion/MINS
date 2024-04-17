// python wrapper for vtkPolyDataToFractionalLabelmapFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPolyDataToFractionalLabelmapFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataToFractionalLabelmapFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkPolyDataToFractionalLabelmapFilter_ClassNew(); }


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataToFractionalLabelmapFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataToFractionalLabelmapFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataToFractionalLabelmapFilter *tempr = vtkPolyDataToFractionalLabelmapFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataToFractionalLabelmapFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataToFractionalLabelmapFilter::NewInstance());

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
PyvtkPolyDataToFractionalLabelmapFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyDataToFractionalLabelmapFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyDataToFractionalLabelmapFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientedImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkPolyDataToFractionalLabelmapFilter::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  vtkOrientedImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData"))
  {
    if (ap.IsBound())
    {
      op->SetOutput(temp0);
    }
    else
    {
      op->vtkPolyDataToFractionalLabelmapFilter::SetOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_SetOutputImageToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputImageToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetOutputImageToWorldMatrix(temp0);
    }
    else
    {
      op->vtkPolyDataToFractionalLabelmapFilter::SetOutputImageToWorldMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_GetOutputImageToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputImageToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->GetOutputImageToWorldMatrix(temp0);
    }
    else
    {
      op->vtkPolyDataToFractionalLabelmapFilter::GetOutputImageToWorldMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_GetOutputOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputOrigin() :
      op->vtkPolyDataToFractionalLabelmapFilter::GetOutputOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_GetOutputOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

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
      op->GetOutputOrigin(temp0);
    }
    else
    {
      op->vtkPolyDataToFractionalLabelmapFilter::GetOutputOrigin(temp0);
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
PyvtkPolyDataToFractionalLabelmapFilter_GetOutputOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolyDataToFractionalLabelmapFilter_GetOutputOrigin_s1(self, args);
    case 1:
      return PyvtkPolyDataToFractionalLabelmapFilter_GetOutputOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputOrigin");
  return nullptr;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_SetOutputOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputOrigin(temp0);
    }
    else
    {
      op->vtkPolyDataToFractionalLabelmapFilter::SetOutputOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_SetOutputOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOutputOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyDataToFractionalLabelmapFilter::SetOutputOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_SetOutputOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPolyDataToFractionalLabelmapFilter_SetOutputOrigin_s1(self, args);
    case 3:
      return PyvtkPolyDataToFractionalLabelmapFilter_SetOutputOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputOrigin");
  return nullptr;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_GetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputSpacing() :
      op->vtkPolyDataToFractionalLabelmapFilter::GetOutputSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_GetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

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
      op->GetOutputSpacing(temp0);
    }
    else
    {
      op->vtkPolyDataToFractionalLabelmapFilter::GetOutputSpacing(temp0);
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
PyvtkPolyDataToFractionalLabelmapFilter_GetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolyDataToFractionalLabelmapFilter_GetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkPolyDataToFractionalLabelmapFilter_GetOutputSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputSpacing");
  return nullptr;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacing(temp0);
    }
    else
    {
      op->vtkPolyDataToFractionalLabelmapFilter::SetOutputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyDataToFractionalLabelmapFilter::SetOutputSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPolyDataToFractionalLabelmapFilter_SetOutputSpacing_s1(self, args);
    case 3:
      return PyvtkPolyDataToFractionalLabelmapFilter_SetOutputSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return nullptr;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_DeleteCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteCache();
    }
    else
    {
      op->vtkPolyDataToFractionalLabelmapFilter::DeleteCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_SetNumberOfOffsets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfOffsets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfOffsets(temp0);
    }
    else
    {
      op->vtkPolyDataToFractionalLabelmapFilter::SetNumberOfOffsets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataToFractionalLabelmapFilter_GetNumberOfOffsets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOffsets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataToFractionalLabelmapFilter *op = static_cast<vtkPolyDataToFractionalLabelmapFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOffsets() :
      op->vtkPolyDataToFractionalLabelmapFilter::GetNumberOfOffsets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataToFractionalLabelmapFilter_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataToFractionalLabelmapFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataToFractionalLabelmapFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataToFractionalLabelmapFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkPolyDataToFractionalLabelmapFilter\nC++: static vtkPolyDataToFractionalLabelmapFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataToFractionalLabelmapFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyDataToFractionalLabelmapFilter\nC++: vtkPolyDataToFractionalLabelmapFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyDataToFractionalLabelmapFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyDataToFractionalLabelmapFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetOutput", PyvtkPolyDataToFractionalLabelmapFilter_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkOrientedImageData\nC++: virtual vtkOrientedImageData *GetOutput()\n\n"},
  {"SetOutput", PyvtkPolyDataToFractionalLabelmapFilter_SetOutput, METH_VARARGS,
   "SetOutput(self, output:vtkOrientedImageData) -> None\nC++: virtual void SetOutput(vtkOrientedImageData *output)\n\n"},
  {"SetOutputImageToWorldMatrix", PyvtkPolyDataToFractionalLabelmapFilter_SetOutputImageToWorldMatrix, METH_VARARGS,
   "SetOutputImageToWorldMatrix(self, imageToWorldMatrix:vtkMatrix4x4)\n     -> None\nC++: void SetOutputImageToWorldMatrix(\n    vtkMatrix4x4 *imageToWorldMatrix)\n\n"},
  {"GetOutputImageToWorldMatrix", PyvtkPolyDataToFractionalLabelmapFilter_GetOutputImageToWorldMatrix, METH_VARARGS,
   "GetOutputImageToWorldMatrix(self, imageToWorldMatrix:vtkMatrix4x4)\n     -> None\nC++: void GetOutputImageToWorldMatrix(\n    vtkMatrix4x4 *imageToWorldMatrix)\n\n"},
  {"GetOutputOrigin", PyvtkPolyDataToFractionalLabelmapFilter_GetOutputOrigin, METH_VARARGS,
   "GetOutputOrigin(self) -> (float, float, float)\nC++: double *GetOutputOrigin() override;\nGetOutputOrigin(self, origin:[float, float, float]) -> None\nC++: void GetOutputOrigin(double origin[3]) override;\n\n"},
  {"SetOutputOrigin", PyvtkPolyDataToFractionalLabelmapFilter_SetOutputOrigin, METH_VARARGS,
   "SetOutputOrigin(self, origin:(float, float, float)) -> None\nC++: void SetOutputOrigin(const double origin[3]) override;\nSetOutputOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetOutputOrigin(double x, double y, double z) override;\n\n"},
  {"GetOutputSpacing", PyvtkPolyDataToFractionalLabelmapFilter_GetOutputSpacing, METH_VARARGS,
   "GetOutputSpacing(self) -> (float, float, float)\nC++: double *GetOutputSpacing() override;\nGetOutputSpacing(self, spacing:[float, float, float]) -> None\nC++: void GetOutputSpacing(double spacing[3]) override;\n\n"},
  {"SetOutputSpacing", PyvtkPolyDataToFractionalLabelmapFilter_SetOutputSpacing, METH_VARARGS,
   "SetOutputSpacing(self, spacing:(float, float, float)) -> None\nC++: void SetOutputSpacing(const double spacing[3]) override;\nSetOutputSpacing(self, x:float, y:float, z:float) -> None\nC++: void SetOutputSpacing(double x, double y, double z) override;\n\n"},
  {"DeleteCache", PyvtkPolyDataToFractionalLabelmapFilter_DeleteCache, METH_VARARGS,
   "DeleteCache(self) -> None\nC++: void DeleteCache()\n\nThis method deletes the currently stored cache variables\n"},
  {"SetNumberOfOffsets", PyvtkPolyDataToFractionalLabelmapFilter_SetNumberOfOffsets, METH_VARARGS,
   "SetNumberOfOffsets(self, _arg:int) -> None\nC++: virtual void SetNumberOfOffsets(int _arg)\n\n"},
  {"GetNumberOfOffsets", PyvtkPolyDataToFractionalLabelmapFilter_GetNumberOfOffsets, METH_VARARGS,
   "GetNumberOfOffsets(self) -> int\nC++: virtual int GetNumberOfOffsets()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolyDataToFractionalLabelmapFilter_Doc =
  "vtkPolyDataToFractionalLabelmapFilter - no description provided.\n\n"
  "Superclass: vtkPolyDataToImageStencil\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataToFractionalLabelmapFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkPolyDataToFractionalLabelmapFilter", // tp_name
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
  PyvtkPolyDataToFractionalLabelmapFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataToFractionalLabelmapFilter_StaticNew()
{
  return vtkPolyDataToFractionalLabelmapFilter::New();
}

PyObject *PyvtkPolyDataToFractionalLabelmapFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyDataToFractionalLabelmapFilter_Type, PyvtkPolyDataToFractionalLabelmapFilter_Methods,
    "vtkPolyDataToFractionalLabelmapFilter",
 &PyvtkPolyDataToFractionalLabelmapFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataToImageStencil");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataToFractionalLabelmapFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataToFractionalLabelmapFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataToFractionalLabelmapFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(VTK_CHAR);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_FRACTIONAL_DATA_TYPE", o);
    Py_DECREF(o);
  }
}

