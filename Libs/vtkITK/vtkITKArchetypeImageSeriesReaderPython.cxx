// python wrapper for vtkITKArchetypeImageSeriesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkITKArchetypeImageSeriesReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkITKArchetypeImageSeriesReader(PyObject *dict); }
extern "C" { PyObject *PyvtkITKArchetypeImageSeriesReader_ClassNew(); }


static PyObject *
PyvtkITKArchetypeImageSeriesReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkITKArchetypeImageSeriesReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkITKArchetypeImageSeriesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkITKArchetypeImageSeriesReader *tempr = vtkITKArchetypeImageSeriesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkITKArchetypeImageSeriesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkITKArchetypeImageSeriesReader::NewInstance());

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
PyvtkITKArchetypeImageSeriesReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkITKArchetypeImageSeriesReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetArchetype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArchetype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArchetype(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetArchetype(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetArchetype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArchetype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArchetype() :
      op->vtkITKArchetypeImageSeriesReader::GetArchetype());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfFileNames() :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::vector<std::string> *tempr = (ap.IsBound() ?
      &op->GetFileNames() :
      &op->vtkITKArchetypeImageSeriesReader::GetFileNames());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_AddFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->AddFileName(temp0) :
      op->vtkITKArchetypeImageSeriesReader::AddFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileName(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_ResetFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetFileNames();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::ResetFileNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDefaultDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

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
      op->SetDefaultDataSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetDefaultDataSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDefaultDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultDataSpacing(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetDefaultDataSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDefaultDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkITKArchetypeImageSeriesReader_SetDefaultDataSpacing_s1(self, args);
    case 1:
      return PyvtkITKArchetypeImageSeriesReader_SetDefaultDataSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultDataSpacing");
  return nullptr;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetDefaultDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDefaultDataSpacing() :
      op->vtkITKArchetypeImageSeriesReader::GetDefaultDataSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDefaultDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

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
      op->SetDefaultDataOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetDefaultDataOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDefaultDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultDataOrigin(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetDefaultDataOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDefaultDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkITKArchetypeImageSeriesReader_SetDefaultDataOrigin_s1(self, args);
    case 1:
      return PyvtkITKArchetypeImageSeriesReader_SetDefaultDataOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultDataOrigin");
  return nullptr;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetDefaultDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDefaultDataOrigin() :
      op->vtkITKArchetypeImageSeriesReader::GetDefaultDataOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetFileNameSliceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameSliceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNameSliceOffset(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetFileNameSliceOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetFileNameSliceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameSliceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileNameSliceOffset() :
      op->vtkITKArchetypeImageSeriesReader::GetFileNameSliceOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetFileNameSliceSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNameSliceSpacing(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetFileNameSliceSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetFileNameSliceSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameSliceSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileNameSliceSpacing() :
      op->vtkITKArchetypeImageSeriesReader::GetFileNameSliceSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetFileNameSliceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileNameSliceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileNameSliceCount(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetFileNameSliceCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetFileNameSliceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNameSliceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileNameSliceCount() :
      op->vtkITKArchetypeImageSeriesReader::GetFileNameSliceCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkITKArchetypeImageSeriesReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDesiredCoordinateOrientationToAxial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredCoordinateOrientationToAxial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDesiredCoordinateOrientationToAxial();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetDesiredCoordinateOrientationToAxial();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDesiredCoordinateOrientationToCoronal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredCoordinateOrientationToCoronal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDesiredCoordinateOrientationToCoronal();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetDesiredCoordinateOrientationToCoronal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDesiredCoordinateOrientationToSagittal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredCoordinateOrientationToSagittal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDesiredCoordinateOrientationToSagittal();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetDesiredCoordinateOrientationToSagittal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDesiredCoordinateOrientationToNative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDesiredCoordinateOrientationToNative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDesiredCoordinateOrientationToNative();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetDesiredCoordinateOrientationToNative();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetUseNativeCoordinateOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNativeCoordinateOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetUseNativeCoordinateOrientation() :
      op->vtkITKArchetypeImageSeriesReader::GetUseNativeCoordinateOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToDouble();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToFloat();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToLong();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToInt();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToShort();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToChar();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToNative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToNative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToNative();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarTypeToNative();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetUseNativeOriginOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNativeOriginOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetUseNativeOriginOn();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetUseNativeOriginOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetUseNativeOriginOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNativeOriginOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetUseNativeOriginOff();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetUseNativeOriginOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDICOMImageIOApproach(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDICOMImageIOApproach");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDICOMImageIOApproach(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetDICOMImageIOApproach(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetDICOMImageIOApproachMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDICOMImageIOApproachMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDICOMImageIOApproachMinValue() :
      op->vtkITKArchetypeImageSeriesReader::GetDICOMImageIOApproachMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetDICOMImageIOApproachMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDICOMImageIOApproachMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDICOMImageIOApproachMaxValue() :
      op->vtkITKArchetypeImageSeriesReader::GetDICOMImageIOApproachMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetDICOMImageIOApproach(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDICOMImageIOApproach");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDICOMImageIOApproach() :
      op->vtkITKArchetypeImageSeriesReader::GetDICOMImageIOApproach());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDICOMImageIOApproachToGDCM(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDICOMImageIOApproachToGDCM");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDICOMImageIOApproachToGDCM();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetDICOMImageIOApproachToGDCM();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetDICOMImageIOApproachToDCMTK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDICOMImageIOApproachToDCMTK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDICOMImageIOApproachToDCMTK();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetDICOMImageIOApproachToDCMTK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarType(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetOutputScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkITKArchetypeImageSeriesReader::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetSingleFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSingleFile(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetSingleFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetSingleFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSingleFile() :
      op->vtkITKArchetypeImageSeriesReader::GetSingleFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetAnalyzeHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnalyzeHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnalyzeHeader(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetAnalyzeHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetAnalyzeHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnalyzeHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAnalyzeHeader() :
      op->vtkITKArchetypeImageSeriesReader::GetAnalyzeHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetUseOrientationFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOrientationFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOrientationFromFile(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetUseOrientationFromFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetUseOrientationFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOrientationFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseOrientationFromFile() :
      op->vtkITKArchetypeImageSeriesReader::GetUseOrientationFromFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetRasToIjkMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRasToIjkMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetRasToIjkMatrix() :
      op->vtkITKArchetypeImageSeriesReader::GetRasToIjkMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetMeasurementFrameMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMeasurementFrameMatrix() :
      op->vtkITKArchetypeImageSeriesReader::GetMeasurementFrameMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetVoxelVectorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoxelVectorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVoxelVectorType(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetVoxelVectorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetVoxelVectorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelVectorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVoxelVectorType() :
      op->vtkITKArchetypeImageSeriesReader::GetVoxelVectorType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_ParseDictionary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParseDictionary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParseDictionary();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::ParseDictionary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfItemsInDictionary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItemsInDictionary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfItemsInDictionary() :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfItemsInDictionary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_HasKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->HasKey(temp0) :
      op->vtkITKArchetypeImageSeriesReader::HasKey(temp0));

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
PyvtkITKArchetypeImageSeriesReader_GetNthKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthKey(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetNthKey(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNthValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthValue(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetNthValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetTagValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTagValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    const char *tempr = (ap.IsBound() ?
      op->GetTagValue(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetTagValue(temp0));

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
PyvtkITKArchetypeImageSeriesReader_GetGroupingByTags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroupingByTags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGroupingByTags() :
      op->vtkITKArchetypeImageSeriesReader::GetGroupingByTags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetGroupingByTagsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGroupingByTagsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGroupingByTagsOn();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetGroupingByTagsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetGroupingByTagsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGroupingByTagsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGroupingByTagsOff();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetGroupingByTagsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetSelectedUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedUID() :
      op->vtkITKArchetypeImageSeriesReader::GetSelectedUID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetSelectedUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedUID(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetSelectedUID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetSelectedContentTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedContentTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedContentTime() :
      op->vtkITKArchetypeImageSeriesReader::GetSelectedContentTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetSelectedContentTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedContentTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedContentTime(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetSelectedContentTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetSelectedTriggerTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedTriggerTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedTriggerTime() :
      op->vtkITKArchetypeImageSeriesReader::GetSelectedTriggerTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetSelectedTriggerTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedTriggerTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedTriggerTime(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetSelectedTriggerTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetSelectedEchoNumbers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedEchoNumbers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedEchoNumbers() :
      op->vtkITKArchetypeImageSeriesReader::GetSelectedEchoNumbers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetSelectedEchoNumbers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedEchoNumbers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedEchoNumbers(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetSelectedEchoNumbers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetSelectedDiffusion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedDiffusion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedDiffusion() :
      op->vtkITKArchetypeImageSeriesReader::GetSelectedDiffusion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetSelectedDiffusion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedDiffusion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedDiffusion(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetSelectedDiffusion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetSelectedSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedSlice() :
      op->vtkITKArchetypeImageSeriesReader::GetSelectedSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetSelectedSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedSlice(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetSelectedSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetSelectedOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedOrientation() :
      op->vtkITKArchetypeImageSeriesReader::GetSelectedOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_SetSelectedOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedOrientation(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::SetSelectedOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfSeriesInstanceUIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSeriesInstanceUIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfSeriesInstanceUIDs() :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfSeriesInstanceUIDs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfContentTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContentTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfContentTime() :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfContentTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfTriggerTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTriggerTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfTriggerTime() :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfTriggerTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfEchoNumbers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEchoNumbers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfEchoNumbers() :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfEchoNumbers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfSliceLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSliceLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfSliceLocation() :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfSliceLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfDiffusionGradientOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDiffusionGradientOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfDiffusionGradientOrientation() :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfDiffusionGradientOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfImageOrientationPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfImageOrientationPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfImageOrientationPatient() :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfImageOrientationPatient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNumberOfImagePositionPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfImagePositionPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfImagePositionPatient() :
      op->vtkITKArchetypeImageSeriesReader::GetNumberOfImagePositionPatient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_ExistSeriesInstanceUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExistSeriesInstanceUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ExistSeriesInstanceUID(temp0) :
      op->vtkITKArchetypeImageSeriesReader::ExistSeriesInstanceUID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_ExistContentTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExistContentTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ExistContentTime(temp0) :
      op->vtkITKArchetypeImageSeriesReader::ExistContentTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_ExistTriggerTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExistTriggerTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ExistTriggerTime(temp0) :
      op->vtkITKArchetypeImageSeriesReader::ExistTriggerTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_ExistEchoNumbers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExistEchoNumbers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ExistEchoNumbers(temp0) :
      op->vtkITKArchetypeImageSeriesReader::ExistEchoNumbers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_ExistDiffusionGradientOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExistDiffusionGradientOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ExistDiffusionGradientOrientation(temp0) :
      op->vtkITKArchetypeImageSeriesReader::ExistDiffusionGradientOrientation(temp0));

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
PyvtkITKArchetypeImageSeriesReader_ExistSliceLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExistSliceLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ExistSliceLocation(temp0) :
      op->vtkITKArchetypeImageSeriesReader::ExistSliceLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_ExistImageOrientationPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExistImageOrientationPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ExistImageOrientationPatient(temp0) :
      op->vtkITKArchetypeImageSeriesReader::ExistImageOrientationPatient(temp0));

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
PyvtkITKArchetypeImageSeriesReader_ExistImagePositionPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExistImagePositionPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ExistImagePositionPatient(temp0) :
      op->vtkITKArchetypeImageSeriesReader::ExistImagePositionPatient(temp0));

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
PyvtkITKArchetypeImageSeriesReader_GetNthSeriesInstanceUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthSeriesInstanceUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthSeriesInstanceUID(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetNthSeriesInstanceUID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNthContentTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthContentTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthContentTime(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetNthContentTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNthTriggerTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthTriggerTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthTriggerTime(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetNthTriggerTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNthEchoNumbers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthEchoNumbers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthEchoNumbers(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetNthEchoNumbers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNthDiffusionGradientOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthDiffusionGradientOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetNthDiffusionGradientOrientation(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetNthDiffusionGradientOrientation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNthSliceLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthSliceLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetNthSliceLocation(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetNthSliceLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNthImageOrientationPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthImageOrientationPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetNthImageOrientationPatient(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetNthImageOrientationPatient(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNthImagePositionPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthImagePositionPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetNthImagePositionPatient(temp0) :
      op->vtkITKArchetypeImageSeriesReader::GetNthImagePositionPatient(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_InsertSeriesInstanceUIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertSeriesInstanceUIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->InsertSeriesInstanceUIDs(temp0) :
      op->vtkITKArchetypeImageSeriesReader::InsertSeriesInstanceUIDs(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_InsertContentTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertContentTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->InsertContentTime(temp0) :
      op->vtkITKArchetypeImageSeriesReader::InsertContentTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_InsertTriggerTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTriggerTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->InsertTriggerTime(temp0) :
      op->vtkITKArchetypeImageSeriesReader::InsertTriggerTime(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_InsertEchoNumbers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertEchoNumbers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->InsertEchoNumbers(temp0) :
      op->vtkITKArchetypeImageSeriesReader::InsertEchoNumbers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_InsertDiffusionGradientOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertDiffusionGradientOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->InsertDiffusionGradientOrientation(temp0) :
      op->vtkITKArchetypeImageSeriesReader::InsertDiffusionGradientOrientation(temp0));

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
PyvtkITKArchetypeImageSeriesReader_InsertSliceLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertSliceLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->InsertSliceLocation(temp0) :
      op->vtkITKArchetypeImageSeriesReader::InsertSliceLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_InsertNextSliceLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextSliceLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->InsertNextSliceLocation() :
      op->vtkITKArchetypeImageSeriesReader::InsertNextSliceLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_InsertImageOrientationPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertImageOrientationPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->InsertImageOrientationPatient(temp0) :
      op->vtkITKArchetypeImageSeriesReader::InsertImageOrientationPatient(temp0));

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
PyvtkITKArchetypeImageSeriesReader_InsertImagePositionPatient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertImagePositionPatient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->InsertImagePositionPatient(temp0) :
      op->vtkITKArchetypeImageSeriesReader::InsertImagePositionPatient(temp0));

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
PyvtkITKArchetypeImageSeriesReader_AnalyzeDicomHeaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnalyzeDicomHeaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnalyzeDicomHeaders();
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::AnalyzeDicomHeaders();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_AssembleNthVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssembleNthVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AssembleNthVolume(temp0);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::AssembleNthVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_AssembleVolumeContainingArchetype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssembleVolumeContainingArchetype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->AssembleVolumeContainingArchetype() :
      op->vtkITKArchetypeImageSeriesReader::AssembleVolumeContainingArchetype());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GroupFiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GroupFiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->GroupFiles(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkITKArchetypeImageSeriesReader::GroupFiles(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkITKArchetypeImageSeriesReader_GetNthFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkITKArchetypeImageSeriesReader *op = static_cast<vtkITKArchetypeImageSeriesReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthFileName(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkITKArchetypeImageSeriesReader::GetNthFileName(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkITKArchetypeImageSeriesReader_Methods[] = {
  {"IsTypeOf", PyvtkITKArchetypeImageSeriesReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkITKArchetypeImageSeriesReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkITKArchetypeImageSeriesReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkITKArchetypeImageSeriesReader\nC++: static vtkITKArchetypeImageSeriesReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkITKArchetypeImageSeriesReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkITKArchetypeImageSeriesReader\nC++: vtkITKArchetypeImageSeriesReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkITKArchetypeImageSeriesReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkITKArchetypeImageSeriesReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetArchetype", PyvtkITKArchetypeImageSeriesReader_SetArchetype, METH_VARARGS,
   "SetArchetype(self, _arg:str) -> None\nC++: virtual void SetArchetype(const char *_arg)\n\nSpecify the archetype filename for the series.\n"},
  {"GetArchetype", PyvtkITKArchetypeImageSeriesReader_GetArchetype, METH_VARARGS,
   "GetArchetype(self) -> str\nC++: virtual char *GetArchetype()\n\n"},
  {"GetNumberOfFileNames", PyvtkITKArchetypeImageSeriesReader_GetNumberOfFileNames, METH_VARARGS,
   "GetNumberOfFileNames(self) -> int\nC++: unsigned int GetNumberOfFileNames()\n\nSee how many file names were generated during ExecuteInformation\n"},
  {"GetFileNames", PyvtkITKArchetypeImageSeriesReader_GetFileNames, METH_VARARGS,
   "GetFileNames(self) -> (str, ...)\nC++: const std::vector<std::string> &GetFileNames()\n\nReturn all the file names\n"},
  {"AddFileName", PyvtkITKArchetypeImageSeriesReader_AddFileName, METH_VARARGS,
   "AddFileName(self, filename:str) -> int\nC++: unsigned int AddFileName(const char *filename)\n\nSpecify the file names to be used when looking for extra files\nthat match the archetype in defining the volume to load (e.g.\nother candidate dicom files to look in for matching tags)\n"},
  {"GetFileName", PyvtkITKArchetypeImageSeriesReader_GetFileName, METH_VARARGS,
   "GetFileName(self, n:int) -> str\nC++: const char *GetFileName(unsigned int n)\n\n"},
  {"ResetFileNames", PyvtkITKArchetypeImageSeriesReader_ResetFileNames, METH_VARARGS,
   "ResetFileNames(self) -> None\nC++: void ResetFileNames()\n\n"},
  {"SetDefaultDataSpacing", PyvtkITKArchetypeImageSeriesReader_SetDefaultDataSpacing, METH_VARARGS,
   "SetDefaultDataSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n     -> None\nC++: virtual void SetDefaultDataSpacing(double _arg1,\n    double _arg2, double _arg3)\nSetDefaultDataSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDefaultDataSpacing(const double _arg[3])\n\nSet/Get the default spacing of the data in the file. This will be\nused if the reader provided spacing is 1.0. (Default is 1.0)\n"},
  {"GetDefaultDataSpacing", PyvtkITKArchetypeImageSeriesReader_GetDefaultDataSpacing, METH_VARARGS,
   "GetDefaultDataSpacing(self) -> (float, float, float)\nC++: virtual double *GetDefaultDataSpacing()\n\n"},
  {"SetDefaultDataOrigin", PyvtkITKArchetypeImageSeriesReader_SetDefaultDataOrigin, METH_VARARGS,
   "SetDefaultDataOrigin(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDefaultDataOrigin(double _arg1, double _arg2,\n     double _arg3)\nSetDefaultDataOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDefaultDataOrigin(const double _arg[3])\n\nSet/Get the default origin of the data (location of first pixel\nin the file). This will be used if the reader provided origin is\n0.0. (Default is 0.0)\n"},
  {"GetDefaultDataOrigin", PyvtkITKArchetypeImageSeriesReader_GetDefaultDataOrigin, METH_VARARGS,
   "GetDefaultDataOrigin(self) -> (float, float, float)\nC++: virtual double *GetDefaultDataOrigin()\n\n"},
  {"SetFileNameSliceOffset", PyvtkITKArchetypeImageSeriesReader_SetFileNameSliceOffset, METH_VARARGS,
   "SetFileNameSliceOffset(self, _arg:int) -> None\nC++: virtual void SetFileNameSliceOffset(int _arg)\n\nWhen reading files which start at an unusual index, this can be\nadded to the slice number when generating the file name (default\n= 0)\n"},
  {"GetFileNameSliceOffset", PyvtkITKArchetypeImageSeriesReader_GetFileNameSliceOffset, METH_VARARGS,
   "GetFileNameSliceOffset(self) -> int\nC++: virtual int GetFileNameSliceOffset()\n\n"},
  {"SetFileNameSliceSpacing", PyvtkITKArchetypeImageSeriesReader_SetFileNameSliceSpacing, METH_VARARGS,
   "SetFileNameSliceSpacing(self, _arg:int) -> None\nC++: virtual void SetFileNameSliceSpacing(int _arg)\n\nWhen reading files which have regular, but non contiguous slices\n(e.g. filename.1,filename.3,filename.5) a spacing can be\nspecified to skip missing files (default = 1)\n"},
  {"GetFileNameSliceSpacing", PyvtkITKArchetypeImageSeriesReader_GetFileNameSliceSpacing, METH_VARARGS,
   "GetFileNameSliceSpacing(self) -> int\nC++: virtual int GetFileNameSliceSpacing()\n\n"},
  {"SetFileNameSliceCount", PyvtkITKArchetypeImageSeriesReader_SetFileNameSliceCount, METH_VARARGS,
   "SetFileNameSliceCount(self, _arg:int) -> None\nC++: virtual void SetFileNameSliceCount(int _arg)\n\nThe maximum number of files to include in the series. If this is\nzero, then all files will be included. (Default is 0)\n"},
  {"GetFileNameSliceCount", PyvtkITKArchetypeImageSeriesReader_GetFileNameSliceCount, METH_VARARGS,
   "GetFileNameSliceCount(self) -> int\nC++: virtual int GetFileNameSliceCount()\n\n"},
  {"CanReadFile", PyvtkITKArchetypeImageSeriesReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, filename:str) -> int\nC++: virtual int CanReadFile(const char *filename)\n\nis the given file name a NRRD file?\n"},
  {"SetDesiredCoordinateOrientationToAxial", PyvtkITKArchetypeImageSeriesReader_SetDesiredCoordinateOrientationToAxial, METH_VARARGS,
   "SetDesiredCoordinateOrientationToAxial(self) -> None\nC++: void SetDesiredCoordinateOrientationToAxial()\n\nSet the orientation of the output image\n"},
  {"SetDesiredCoordinateOrientationToCoronal", PyvtkITKArchetypeImageSeriesReader_SetDesiredCoordinateOrientationToCoronal, METH_VARARGS,
   "SetDesiredCoordinateOrientationToCoronal(self) -> None\nC++: void SetDesiredCoordinateOrientationToCoronal()\n\nitk::SpatialOrientation::ITK_COORDINATE_ORIENTATION_RPS;\n"},
  {"SetDesiredCoordinateOrientationToSagittal", PyvtkITKArchetypeImageSeriesReader_SetDesiredCoordinateOrientationToSagittal, METH_VARARGS,
   "SetDesiredCoordinateOrientationToSagittal(self) -> None\nC++: void SetDesiredCoordinateOrientationToSagittal()\n\nitk::SpatialOrientation::ITK_COORDINATE_ORIENTATION_RIP;\n"},
  {"SetDesiredCoordinateOrientationToNative", PyvtkITKArchetypeImageSeriesReader_SetDesiredCoordinateOrientationToNative, METH_VARARGS,
   "SetDesiredCoordinateOrientationToNative(self) -> None\nC++: void SetDesiredCoordinateOrientationToNative()\n\nitk::SpatialOrientation::ITK_COORDINATE_ORIENTATION_AIR;\n"},
  {"GetUseNativeCoordinateOrientation", PyvtkITKArchetypeImageSeriesReader_GetUseNativeCoordinateOrientation, METH_VARARGS,
   "GetUseNativeCoordinateOrientation(self) -> str\nC++: virtual char GetUseNativeCoordinateOrientation()\n\n"},
  {"SetOutputScalarTypeToDouble", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToDouble, METH_VARARGS,
   "SetOutputScalarTypeToDouble(self) -> None\nC++: virtual void SetOutputScalarTypeToDouble()\n\nSet the data type of pixels in the file. If you want the output\nscalar type to have a different value, set it after this method\nis called.\n"},
  {"SetOutputScalarTypeToFloat", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToFloat, METH_VARARGS,
   "SetOutputScalarTypeToFloat(self) -> None\nC++: virtual void SetOutputScalarTypeToFloat()\n\n"},
  {"SetOutputScalarTypeToLong", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToLong, METH_VARARGS,
   "SetOutputScalarTypeToLong(self) -> None\nC++: virtual void SetOutputScalarTypeToLong()\n\n"},
  {"SetOutputScalarTypeToUnsignedLong", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToUnsignedLong, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedLong(self) -> None\nC++: virtual void SetOutputScalarTypeToUnsignedLong()\n\n"},
  {"SetOutputScalarTypeToInt", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToInt, METH_VARARGS,
   "SetOutputScalarTypeToInt(self) -> None\nC++: virtual void SetOutputScalarTypeToInt()\n\n"},
  {"SetOutputScalarTypeToUnsignedInt", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToUnsignedInt, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedInt(self) -> None\nC++: virtual void SetOutputScalarTypeToUnsignedInt()\n\n"},
  {"SetOutputScalarTypeToShort", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToShort, METH_VARARGS,
   "SetOutputScalarTypeToShort(self) -> None\nC++: virtual void SetOutputScalarTypeToShort()\n\n"},
  {"SetOutputScalarTypeToUnsignedShort", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToUnsignedShort, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedShort(self) -> None\nC++: virtual void SetOutputScalarTypeToUnsignedShort()\n\n"},
  {"SetOutputScalarTypeToChar", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToChar, METH_VARARGS,
   "SetOutputScalarTypeToChar(self) -> None\nC++: virtual void SetOutputScalarTypeToChar()\n\n"},
  {"SetOutputScalarTypeToUnsignedChar", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToUnsignedChar, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedChar(self) -> None\nC++: virtual void SetOutputScalarTypeToUnsignedChar()\n\n"},
  {"SetOutputScalarTypeToNative", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarTypeToNative, METH_VARARGS,
   "SetOutputScalarTypeToNative(self) -> None\nC++: virtual void SetOutputScalarTypeToNative()\n\n"},
  {"SetUseNativeOriginOn", PyvtkITKArchetypeImageSeriesReader_SetUseNativeOriginOn, METH_VARARGS,
   "SetUseNativeOriginOn(self) -> None\nC++: void SetUseNativeOriginOn()\n\nUse image origin from the file\n"},
  {"SetUseNativeOriginOff", PyvtkITKArchetypeImageSeriesReader_SetUseNativeOriginOff, METH_VARARGS,
   "SetUseNativeOriginOff(self) -> None\nC++: void SetUseNativeOriginOff()\n\nUse image center as origin\n"},
  {"SetDICOMImageIOApproach", PyvtkITKArchetypeImageSeriesReader_SetDICOMImageIOApproach, METH_VARARGS,
   "SetDICOMImageIOApproach(self, _arg:int) -> None\nC++: virtual void SetDICOMImageIOApproach(int _arg)\n\n"},
  {"GetDICOMImageIOApproachMinValue", PyvtkITKArchetypeImageSeriesReader_GetDICOMImageIOApproachMinValue, METH_VARARGS,
   "GetDICOMImageIOApproachMinValue(self) -> int\nC++: virtual int GetDICOMImageIOApproachMinValue()\n\n"},
  {"GetDICOMImageIOApproachMaxValue", PyvtkITKArchetypeImageSeriesReader_GetDICOMImageIOApproachMaxValue, METH_VARARGS,
   "GetDICOMImageIOApproachMaxValue(self) -> int\nC++: virtual int GetDICOMImageIOApproachMaxValue()\n\n"},
  {"GetDICOMImageIOApproach", PyvtkITKArchetypeImageSeriesReader_GetDICOMImageIOApproach, METH_VARARGS,
   "GetDICOMImageIOApproach(self) -> int\nC++: virtual int GetDICOMImageIOApproach()\n\n"},
  {"SetDICOMImageIOApproachToGDCM", PyvtkITKArchetypeImageSeriesReader_SetDICOMImageIOApproachToGDCM, METH_VARARGS,
   "SetDICOMImageIOApproachToGDCM(self) -> None\nC++: void SetDICOMImageIOApproachToGDCM()\n\n"},
  {"SetDICOMImageIOApproachToDCMTK", PyvtkITKArchetypeImageSeriesReader_SetDICOMImageIOApproachToDCMTK, METH_VARARGS,
   "SetDICOMImageIOApproachToDCMTK(self) -> None\nC++: void SetDICOMImageIOApproachToDCMTK()\n\n"},
  {"SetOutputScalarType", PyvtkITKArchetypeImageSeriesReader_SetOutputScalarType, METH_VARARGS,
   "SetOutputScalarType(self, _arg:int) -> None\nC++: virtual void SetOutputScalarType(int _arg)\n\nGet the file format.  Pixels are this type in the file.\n"},
  {"GetOutputScalarType", PyvtkITKArchetypeImageSeriesReader_GetOutputScalarType, METH_VARARGS,
   "GetOutputScalarType(self) -> int\nC++: virtual int GetOutputScalarType()\n\n"},
  {"SetNumberOfComponents", PyvtkITKArchetypeImageSeriesReader_SetNumberOfComponents, METH_VARARGS,
   "SetNumberOfComponents(self, _arg:int) -> None\nC++: virtual void SetNumberOfComponents(unsigned int _arg)\n\nGet number of scalars\n"},
  {"GetNumberOfComponents", PyvtkITKArchetypeImageSeriesReader_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: virtual unsigned int GetNumberOfComponents()\n\n"},
  {"SetSingleFile", PyvtkITKArchetypeImageSeriesReader_SetSingleFile, METH_VARARGS,
   "SetSingleFile(self, _arg:int) -> None\nC++: virtual void SetSingleFile(int _arg)\n\nWhether load in a single file or a series\n"},
  {"GetSingleFile", PyvtkITKArchetypeImageSeriesReader_GetSingleFile, METH_VARARGS,
   "GetSingleFile(self) -> int\nC++: virtual int GetSingleFile()\n\n"},
  {"SetAnalyzeHeader", PyvtkITKArchetypeImageSeriesReader_SetAnalyzeHeader, METH_VARARGS,
   "SetAnalyzeHeader(self, _arg:bool) -> None\nC++: virtual void SetAnalyzeHeader(bool _arg)\n\nWhether try analyzing the dicom headers\n"},
  {"GetAnalyzeHeader", PyvtkITKArchetypeImageSeriesReader_GetAnalyzeHeader, METH_VARARGS,
   "GetAnalyzeHeader(self) -> bool\nC++: virtual bool GetAnalyzeHeader()\n\n"},
  {"SetUseOrientationFromFile", PyvtkITKArchetypeImageSeriesReader_SetUseOrientationFromFile, METH_VARARGS,
   "SetUseOrientationFromFile(self, _arg:int) -> None\nC++: virtual void SetUseOrientationFromFile(int _arg)\n\nWhether to use orientation from file\n"},
  {"GetUseOrientationFromFile", PyvtkITKArchetypeImageSeriesReader_GetUseOrientationFromFile, METH_VARARGS,
   "GetUseOrientationFromFile(self) -> int\nC++: virtual int GetUseOrientationFromFile()\n\n"},
  {"GetRasToIjkMatrix", PyvtkITKArchetypeImageSeriesReader_GetRasToIjkMatrix, METH_VARARGS,
   "GetRasToIjkMatrix(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetRasToIjkMatrix()\n\nReturns an IJK to RAS transformation matrix\n"},
  {"GetMeasurementFrameMatrix", PyvtkITKArchetypeImageSeriesReader_GetMeasurementFrameMatrix, METH_VARARGS,
   "GetMeasurementFrameMatrix(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetMeasurementFrameMatrix()\n\nReturns the Measurement frame matrix\n"},
  {"SetVoxelVectorType", PyvtkITKArchetypeImageSeriesReader_SetVoxelVectorType, METH_VARARGS,
   "SetVoxelVectorType(self, _arg:int) -> None\nC++: virtual void SetVoxelVectorType(int _arg)\n\nDefines how to interpret voxel components\n"},
  {"GetVoxelVectorType", PyvtkITKArchetypeImageSeriesReader_GetVoxelVectorType, METH_VARARGS,
   "GetVoxelVectorType(self) -> int\nC++: virtual int GetVoxelVectorType()\n\n"},
  {"ParseDictionary", PyvtkITKArchetypeImageSeriesReader_ParseDictionary, METH_VARARGS,
   "ParseDictionary(self) -> None\nC++: void ParseDictionary()\n\n"},
  {"GetNumberOfItemsInDictionary", PyvtkITKArchetypeImageSeriesReader_GetNumberOfItemsInDictionary, METH_VARARGS,
   "GetNumberOfItemsInDictionary(self) -> int\nC++: unsigned int GetNumberOfItemsInDictionary()\n\n"},
  {"HasKey", PyvtkITKArchetypeImageSeriesReader_HasKey, METH_VARARGS,
   "HasKey(self, tag:str) -> bool\nC++: bool HasKey(char *tag)\n\n"},
  {"GetNthKey", PyvtkITKArchetypeImageSeriesReader_GetNthKey, METH_VARARGS,
   "GetNthKey(self, n:int) -> str\nC++: const char *GetNthKey(unsigned int n)\n\n"},
  {"GetNthValue", PyvtkITKArchetypeImageSeriesReader_GetNthValue, METH_VARARGS,
   "GetNthValue(self, n:int) -> str\nC++: const char *GetNthValue(unsigned int n)\n\n"},
  {"GetTagValue", PyvtkITKArchetypeImageSeriesReader_GetTagValue, METH_VARARGS,
   "GetTagValue(self, tag:str) -> str\nC++: const char *GetTagValue(char *tag)\n\n"},
  {"GetGroupingByTags", PyvtkITKArchetypeImageSeriesReader_GetGroupingByTags, METH_VARARGS,
   "GetGroupingByTags(self) -> bool\nC++: bool GetGroupingByTags()\n\nset/get functions for grouping by tags\n"},
  {"SetGroupingByTagsOn", PyvtkITKArchetypeImageSeriesReader_SetGroupingByTagsOn, METH_VARARGS,
   "SetGroupingByTagsOn(self) -> None\nC++: void SetGroupingByTagsOn()\n\n"},
  {"SetGroupingByTagsOff", PyvtkITKArchetypeImageSeriesReader_SetGroupingByTagsOff, METH_VARARGS,
   "SetGroupingByTagsOff(self) -> None\nC++: void SetGroupingByTagsOff()\n\n"},
  {"GetSelectedUID", PyvtkITKArchetypeImageSeriesReader_GetSelectedUID, METH_VARARGS,
   "GetSelectedUID(self) -> int\nC++: int GetSelectedUID()\n\n-------\n"},
  {"SetSelectedUID", PyvtkITKArchetypeImageSeriesReader_SetSelectedUID, METH_VARARGS,
   "SetSelectedUID(self, v:int) -> None\nC++: void SetSelectedUID(int v)\n\n"},
  {"GetSelectedContentTime", PyvtkITKArchetypeImageSeriesReader_GetSelectedContentTime, METH_VARARGS,
   "GetSelectedContentTime(self) -> int\nC++: int GetSelectedContentTime()\n\n-------\n"},
  {"SetSelectedContentTime", PyvtkITKArchetypeImageSeriesReader_SetSelectedContentTime, METH_VARARGS,
   "SetSelectedContentTime(self, v:int) -> None\nC++: void SetSelectedContentTime(int v)\n\n"},
  {"GetSelectedTriggerTime", PyvtkITKArchetypeImageSeriesReader_GetSelectedTriggerTime, METH_VARARGS,
   "GetSelectedTriggerTime(self) -> int\nC++: int GetSelectedTriggerTime()\n\n-------\n"},
  {"SetSelectedTriggerTime", PyvtkITKArchetypeImageSeriesReader_SetSelectedTriggerTime, METH_VARARGS,
   "SetSelectedTriggerTime(self, v:int) -> None\nC++: void SetSelectedTriggerTime(int v)\n\n"},
  {"GetSelectedEchoNumbers", PyvtkITKArchetypeImageSeriesReader_GetSelectedEchoNumbers, METH_VARARGS,
   "GetSelectedEchoNumbers(self) -> int\nC++: int GetSelectedEchoNumbers()\n\n-------\n"},
  {"SetSelectedEchoNumbers", PyvtkITKArchetypeImageSeriesReader_SetSelectedEchoNumbers, METH_VARARGS,
   "SetSelectedEchoNumbers(self, v:int) -> None\nC++: void SetSelectedEchoNumbers(int v)\n\n"},
  {"GetSelectedDiffusion", PyvtkITKArchetypeImageSeriesReader_GetSelectedDiffusion, METH_VARARGS,
   "GetSelectedDiffusion(self) -> int\nC++: int GetSelectedDiffusion()\n\n-------\n"},
  {"SetSelectedDiffusion", PyvtkITKArchetypeImageSeriesReader_SetSelectedDiffusion, METH_VARARGS,
   "SetSelectedDiffusion(self, v:int) -> None\nC++: void SetSelectedDiffusion(int v)\n\n"},
  {"GetSelectedSlice", PyvtkITKArchetypeImageSeriesReader_GetSelectedSlice, METH_VARARGS,
   "GetSelectedSlice(self) -> int\nC++: int GetSelectedSlice()\n\n-------\n"},
  {"SetSelectedSlice", PyvtkITKArchetypeImageSeriesReader_SetSelectedSlice, METH_VARARGS,
   "SetSelectedSlice(self, v:int) -> None\nC++: void SetSelectedSlice(int v)\n\n"},
  {"GetSelectedOrientation", PyvtkITKArchetypeImageSeriesReader_GetSelectedOrientation, METH_VARARGS,
   "GetSelectedOrientation(self) -> int\nC++: int GetSelectedOrientation()\n\n-------\n"},
  {"SetSelectedOrientation", PyvtkITKArchetypeImageSeriesReader_SetSelectedOrientation, METH_VARARGS,
   "SetSelectedOrientation(self, v:int) -> None\nC++: void SetSelectedOrientation(int v)\n\n"},
  {"GetNumberOfSeriesInstanceUIDs", PyvtkITKArchetypeImageSeriesReader_GetNumberOfSeriesInstanceUIDs, METH_VARARGS,
   "GetNumberOfSeriesInstanceUIDs(self) -> int\nC++: unsigned int GetNumberOfSeriesInstanceUIDs()\n\nget number of certain discriminators in the directory\n"},
  {"GetNumberOfContentTime", PyvtkITKArchetypeImageSeriesReader_GetNumberOfContentTime, METH_VARARGS,
   "GetNumberOfContentTime(self) -> int\nC++: unsigned int GetNumberOfContentTime()\n\n"},
  {"GetNumberOfTriggerTime", PyvtkITKArchetypeImageSeriesReader_GetNumberOfTriggerTime, METH_VARARGS,
   "GetNumberOfTriggerTime(self) -> int\nC++: unsigned int GetNumberOfTriggerTime()\n\n"},
  {"GetNumberOfEchoNumbers", PyvtkITKArchetypeImageSeriesReader_GetNumberOfEchoNumbers, METH_VARARGS,
   "GetNumberOfEchoNumbers(self) -> int\nC++: unsigned int GetNumberOfEchoNumbers()\n\n"},
  {"GetNumberOfSliceLocation", PyvtkITKArchetypeImageSeriesReader_GetNumberOfSliceLocation, METH_VARARGS,
   "GetNumberOfSliceLocation(self) -> int\nC++: unsigned int GetNumberOfSliceLocation()\n\n"},
  {"GetNumberOfDiffusionGradientOrientation", PyvtkITKArchetypeImageSeriesReader_GetNumberOfDiffusionGradientOrientation, METH_VARARGS,
   "GetNumberOfDiffusionGradientOrientation(self) -> int\nC++: unsigned int GetNumberOfDiffusionGradientOrientation()\n\n"},
  {"GetNumberOfImageOrientationPatient", PyvtkITKArchetypeImageSeriesReader_GetNumberOfImageOrientationPatient, METH_VARARGS,
   "GetNumberOfImageOrientationPatient(self) -> int\nC++: unsigned int GetNumberOfImageOrientationPatient()\n\n"},
  {"GetNumberOfImagePositionPatient", PyvtkITKArchetypeImageSeriesReader_GetNumberOfImagePositionPatient, METH_VARARGS,
   "GetNumberOfImagePositionPatient(self) -> int\nC++: unsigned int GetNumberOfImagePositionPatient()\n\n"},
  {"ExistSeriesInstanceUID", PyvtkITKArchetypeImageSeriesReader_ExistSeriesInstanceUID, METH_VARARGS,
   "ExistSeriesInstanceUID(self, SeriesInstanceUID:str) -> int\nC++: int ExistSeriesInstanceUID(const char *SeriesInstanceUID)\n\ncheck the existence of given discriminator\n"},
  {"ExistContentTime", PyvtkITKArchetypeImageSeriesReader_ExistContentTime, METH_VARARGS,
   "ExistContentTime(self, contentTime:str) -> int\nC++: int ExistContentTime(const char *contentTime)\n\n"},
  {"ExistTriggerTime", PyvtkITKArchetypeImageSeriesReader_ExistTriggerTime, METH_VARARGS,
   "ExistTriggerTime(self, triggerTime:str) -> int\nC++: int ExistTriggerTime(const char *triggerTime)\n\n"},
  {"ExistEchoNumbers", PyvtkITKArchetypeImageSeriesReader_ExistEchoNumbers, METH_VARARGS,
   "ExistEchoNumbers(self, echoNumbers:str) -> int\nC++: int ExistEchoNumbers(const char *echoNumbers)\n\n"},
  {"ExistDiffusionGradientOrientation", PyvtkITKArchetypeImageSeriesReader_ExistDiffusionGradientOrientation, METH_VARARGS,
   "ExistDiffusionGradientOrientation(self, dgo:[float, ...]) -> int\nC++: int ExistDiffusionGradientOrientation(float *dgo)\n\n"},
  {"ExistSliceLocation", PyvtkITKArchetypeImageSeriesReader_ExistSliceLocation, METH_VARARGS,
   "ExistSliceLocation(self, sliceLocation:float) -> int\nC++: int ExistSliceLocation(float sliceLocation)\n\n"},
  {"ExistImageOrientationPatient", PyvtkITKArchetypeImageSeriesReader_ExistImageOrientationPatient, METH_VARARGS,
   "ExistImageOrientationPatient(self, directionCosine:[float, ...])\n    -> int\nC++: int ExistImageOrientationPatient(float *directionCosine)\n\n"},
  {"ExistImagePositionPatient", PyvtkITKArchetypeImageSeriesReader_ExistImagePositionPatient, METH_VARARGS,
   "ExistImagePositionPatient(self, ipp:[float, ...]) -> int\nC++: int ExistImagePositionPatient(float *ipp)\n\ninput has to have six elements\n"},
  {"GetNthSeriesInstanceUID", PyvtkITKArchetypeImageSeriesReader_GetNthSeriesInstanceUID, METH_VARARGS,
   "GetNthSeriesInstanceUID(self, n:int) -> str\nC++: const char *GetNthSeriesInstanceUID(unsigned int n)\n\nmethods to get N-th discriminator\n"},
  {"GetNthContentTime", PyvtkITKArchetypeImageSeriesReader_GetNthContentTime, METH_VARARGS,
   "GetNthContentTime(self, n:int) -> str\nC++: const char *GetNthContentTime(unsigned int n)\n\n"},
  {"GetNthTriggerTime", PyvtkITKArchetypeImageSeriesReader_GetNthTriggerTime, METH_VARARGS,
   "GetNthTriggerTime(self, n:int) -> str\nC++: const char *GetNthTriggerTime(unsigned int n)\n\n"},
  {"GetNthEchoNumbers", PyvtkITKArchetypeImageSeriesReader_GetNthEchoNumbers, METH_VARARGS,
   "GetNthEchoNumbers(self, n:int) -> str\nC++: const char *GetNthEchoNumbers(unsigned int n)\n\n"},
  {"GetNthDiffusionGradientOrientation", PyvtkITKArchetypeImageSeriesReader_GetNthDiffusionGradientOrientation, METH_VARARGS,
   "GetNthDiffusionGradientOrientation(self, n:int) -> Pointer\nC++: float *GetNthDiffusionGradientOrientation(unsigned int n)\n\n"},
  {"GetNthSliceLocation", PyvtkITKArchetypeImageSeriesReader_GetNthSliceLocation, METH_VARARGS,
   "GetNthSliceLocation(self, n:int) -> float\nC++: float GetNthSliceLocation(unsigned int n)\n\n"},
  {"GetNthImageOrientationPatient", PyvtkITKArchetypeImageSeriesReader_GetNthImageOrientationPatient, METH_VARARGS,
   "GetNthImageOrientationPatient(self, n:int) -> Pointer\nC++: float *GetNthImageOrientationPatient(unsigned int n)\n\n"},
  {"GetNthImagePositionPatient", PyvtkITKArchetypeImageSeriesReader_GetNthImagePositionPatient, METH_VARARGS,
   "GetNthImagePositionPatient(self, n:int) -> Pointer\nC++: float *GetNthImagePositionPatient(unsigned int n)\n\n"},
  {"InsertSeriesInstanceUIDs", PyvtkITKArchetypeImageSeriesReader_InsertSeriesInstanceUIDs, METH_VARARGS,
   "InsertSeriesInstanceUIDs(self, aUID:str) -> int\nC++: int InsertSeriesInstanceUIDs(const char *aUID)\n\ninsert unique item into array. Duplicate code for TCL wrapping.\nTODO: need to clean up\n"},
  {"InsertContentTime", PyvtkITKArchetypeImageSeriesReader_InsertContentTime, METH_VARARGS,
   "InsertContentTime(self, aTime:str) -> int\nC++: int InsertContentTime(const char *aTime)\n\n"},
  {"InsertTriggerTime", PyvtkITKArchetypeImageSeriesReader_InsertTriggerTime, METH_VARARGS,
   "InsertTriggerTime(self, aTime:str) -> int\nC++: int InsertTriggerTime(const char *aTime)\n\n"},
  {"InsertEchoNumbers", PyvtkITKArchetypeImageSeriesReader_InsertEchoNumbers, METH_VARARGS,
   "InsertEchoNumbers(self, aEcho:str) -> int\nC++: int InsertEchoNumbers(const char *aEcho)\n\n"},
  {"InsertDiffusionGradientOrientation", PyvtkITKArchetypeImageSeriesReader_InsertDiffusionGradientOrientation, METH_VARARGS,
   "InsertDiffusionGradientOrientation(self, a:[float, ...]) -> int\nC++: int InsertDiffusionGradientOrientation(float *a)\n\n"},
  {"InsertSliceLocation", PyvtkITKArchetypeImageSeriesReader_InsertSliceLocation, METH_VARARGS,
   "InsertSliceLocation(self, a:float) -> int\nC++: int InsertSliceLocation(float a)\n\nAppend the slice location a. Do nothing if the slice location has\nalready been added.\n\\sa InsertNextSliceLocation()\n"},
  {"InsertNextSliceLocation", PyvtkITKArchetypeImageSeriesReader_InsertNextSliceLocation, METH_VARARGS,
   "InsertNextSliceLocation(self) -> int\nC++: int InsertNextSliceLocation()\n\nLinearly insert the next slicer. This prevents a n*log(n)\ninsertion\n\\sa InsertSliceLocation()\n"},
  {"InsertImageOrientationPatient", PyvtkITKArchetypeImageSeriesReader_InsertImageOrientationPatient, METH_VARARGS,
   "InsertImageOrientationPatient(self, a:[float, ...]) -> int\nC++: int InsertImageOrientationPatient(float *a)\n\n"},
  {"InsertImagePositionPatient", PyvtkITKArchetypeImageSeriesReader_InsertImagePositionPatient, METH_VARARGS,
   "InsertImagePositionPatient(self, a:[float, ...]) -> int\nC++: int InsertImagePositionPatient(float *a)\n\n"},
  {"AnalyzeDicomHeaders", PyvtkITKArchetypeImageSeriesReader_AnalyzeDicomHeaders, METH_VARARGS,
   "AnalyzeDicomHeaders(self) -> None\nC++: void AnalyzeDicomHeaders()\n\n"},
  {"AssembleNthVolume", PyvtkITKArchetypeImageSeriesReader_AssembleNthVolume, METH_VARARGS,
   "AssembleNthVolume(self, n:int) -> None\nC++: void AssembleNthVolume(int n)\n\n"},
  {"AssembleVolumeContainingArchetype", PyvtkITKArchetypeImageSeriesReader_AssembleVolumeContainingArchetype, METH_VARARGS,
   "AssembleVolumeContainingArchetype(self) -> int\nC++: int AssembleVolumeContainingArchetype()\n\n"},
  {"GroupFiles", PyvtkITKArchetypeImageSeriesReader_GroupFiles, METH_VARARGS,
   "GroupFiles(self, idxSeriesInstanceUID:int, idxContentTime:int,\n    idxTriggerTime:int, idxEchoNumbers:int,\n    idxDiffusionGradientOrientation:int, idxSliceLocation:int,\n    idxImageOrientationPatient:int) -> None\nC++: void GroupFiles(int idxSeriesInstanceUID, int idxContentTime,\n     int idxTriggerTime, int idxEchoNumbers,\n    int idxDiffusionGradientOrientation, int idxSliceLocation,\n    int idxImageOrientationPatient)\n\n"},
  {"GetNthFileName", PyvtkITKArchetypeImageSeriesReader_GetNthFileName, METH_VARARGS,
   "GetNthFileName(self, idxSeriesInstanceUID:int, idxContentTime:int,\n     idxTriggerTime:int, idxEchoNumbers:int,\n    idxDiffusionGradientOrientation:int, idxSliceLocation:int,\n    idxImageOrientationPatient:int, n:int) -> str\nC++: const char *GetNthFileName(int idxSeriesInstanceUID,\n    int idxContentTime, int idxTriggerTime, int idxEchoNumbers,\n    int idxDiffusionGradientOrientation, int idxSliceLocation,\n    int idxImageOrientationPatient, int n)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkITKArchetypeImageSeriesReader_Doc =
  "vtkITKArchetypeImageSeriesReader - Read a series of files that have a\ncommon naming convention.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "ArchetypeImageSeriesReader creates a volume from a series of images\n"
  "stored in files. The series are represented by one filename. This\n"
  "filename, the archetype, is any one of the files in the series.\n\n"
  "ote This work is part of the National Alliance for Medical Image\n"
  "Computing (NAMIC), funded by the National Institutes of Health\n"
  "through the NIH Roadmap for Medical Research, Grant U54 EB005149.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkITKArchetypeImageSeriesReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkITKPython.vtkITKArchetypeImageSeriesReader", // tp_name
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
  PyvtkITKArchetypeImageSeriesReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkITKArchetypeImageSeriesReader_StaticNew()
{
  return vtkITKArchetypeImageSeriesReader::New();
}

PyObject *PyvtkITKArchetypeImageSeriesReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkITKArchetypeImageSeriesReader_Type, PyvtkITKArchetypeImageSeriesReader_Methods,
    "vtkITKArchetypeImageSeriesReader",
 &PyvtkITKArchetypeImageSeriesReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "GDCM", vtkITKArchetypeImageSeriesReader::GDCM },
        { "DCMTK", vtkITKArchetypeImageSeriesReader::DCMTK },
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

void PyVTKAddFile_vtkITKArchetypeImageSeriesReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkITKArchetypeImageSeriesReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkITKArchetypeImageSeriesReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

