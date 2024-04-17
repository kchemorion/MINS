// python wrapper for vtkTeemNRRDReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTeemNRRDReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTeemNRRDReader(PyObject *dict); }
extern "C" { PyObject *PyvtkTeemNRRDReader_ClassNew(); }


static PyObject *
PyvtkTeemNRRDReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTeemNRRDReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTeemNRRDReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTeemNRRDReader *tempr = vtkTeemNRRDReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTeemNRRDReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTeemNRRDReader::NewInstance());

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
PyvtkTeemNRRDReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTeemNRRDReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTeemNRRDReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetRasToIjkMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRasToIjkMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetRasToIjkMatrix() :
      op->vtkTeemNRRDReader::GetRasToIjkMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetMeasurementFrameMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMeasurementFrameMatrix() :
      op->vtkTeemNRRDReader::GetMeasurementFrameMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetHeaderKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetHeaderKeys() :
      op->vtkTeemNRRDReader::GetHeaderKeys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetHeaderKeysVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderKeysVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetHeaderKeysVector() :
      op->vtkTeemNRRDReader::GetHeaderKeysVector());

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetHeaderValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetHeaderValue(temp0) :
      op->vtkTeemNRRDReader::GetHeaderValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAxisLabel(temp0) :
      op->vtkTeemNRRDReader::GetAxisLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetAxisUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAxisUnit(temp0) :
      op->vtkTeemNRRDReader::GetAxisUnit(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkTeemNRRDReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkTeemNRRDReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkTeemNRRDReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetReadStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadStatus() :
      op->vtkTeemNRRDReader::GetReadStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_SetPointDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointDataType(temp0);
    }
    else
    {
      op->vtkTeemNRRDReader::SetPointDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetPointDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointDataType() :
      op->vtkTeemNRRDReader::GetPointDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataType(temp0);
    }
    else
    {
      op->vtkTeemNRRDReader::SetDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkTeemNRRDReader::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  int temp0;
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
      op->vtkTeemNRRDReader::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkTeemNRRDReader::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_SetUseNativeOriginOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNativeOriginOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetUseNativeOriginOn();
    }
    else
    {
      op->vtkTeemNRRDReader::SetUseNativeOriginOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_SetUseNativeOriginOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNativeOriginOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetUseNativeOriginOff();
    }
    else
    {
      op->vtkTeemNRRDReader::SetUseNativeOriginOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_SetDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataArrayName(temp0);
    }
    else
    {
      op->vtkTeemNRRDReader::SetDataArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_GetDataArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDataArrayName() :
      op->vtkTeemNRRDReader::GetDataArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_NrrdToVTKScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NrrdToVTKScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->NrrdToVTKScalarType(temp0) :
      op->vtkTeemNRRDReader::NrrdToVTKScalarType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_VTKToNrrdPixelType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VTKToNrrdPixelType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->VTKToNrrdPixelType(temp0) :
      op->vtkTeemNRRDReader::VTKToNrrdPixelType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDReader_AllocateOutputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  vtkDataObject *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->AllocateOutputData(temp0, temp1) :
      op->vtkTeemNRRDReader::AllocateOutputData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTeemNRRDReader_AllocateOutputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateOutputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  vtkImageData *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->AllocateOutputData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTeemNRRDReader::AllocateOutputData(temp0, temp1, temp2);
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
PyvtkTeemNRRDReader_AllocateOutputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTeemNRRDReader_AllocateOutputData_s1(self, args);
    case 3:
      return PyvtkTeemNRRDReader_AllocateOutputData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllocateOutputData");
  return nullptr;
}


static PyObject *
PyvtkTeemNRRDReader_AllocatePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocatePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDReader *op = static_cast<vtkTeemNRRDReader *>(vp);

  vtkImageData *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->AllocatePointData(temp0, temp1);
    }
    else
    {
      op->vtkTeemNRRDReader::AllocatePointData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTeemNRRDReader_Methods[] = {
  {"IsTypeOf", PyvtkTeemNRRDReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTeemNRRDReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTeemNRRDReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTeemNRRDReader\nC++: static vtkTeemNRRDReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTeemNRRDReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTeemNRRDReader\nC++: vtkTeemNRRDReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTeemNRRDReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTeemNRRDReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetRasToIjkMatrix", PyvtkTeemNRRDReader_GetRasToIjkMatrix, METH_VARARGS,
   "GetRasToIjkMatrix(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetRasToIjkMatrix()\n\nReturns a IJK to RAS transformation matrix\n"},
  {"GetMeasurementFrameMatrix", PyvtkTeemNRRDReader_GetMeasurementFrameMatrix, METH_VARARGS,
   "GetMeasurementFrameMatrix(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetMeasurementFrameMatrix()\n\nReturns the measurement frame matrix used for tensor valued data.\n"},
  {"GetHeaderKeys", PyvtkTeemNRRDReader_GetHeaderKeys, METH_VARARGS,
   "GetHeaderKeys(self) -> str\nC++: const char *GetHeaderKeys()\n\nGet a space separated list of all keys in the header the string\nis allocated and deleted in this object.  This method does not\nsupport spaces in key names.\n"},
  {"GetHeaderKeysVector", PyvtkTeemNRRDReader_GetHeaderKeysVector, METH_VARARGS,
   "GetHeaderKeysVector(self) -> (str, ...)\nC++: const std::vector<std::string> GetHeaderKeysVector()\n\nGet a list of keys in the header. Preferred method to use as it\nsupports spaces in key names.\n"},
  {"GetHeaderValue", PyvtkTeemNRRDReader_GetHeaderValue, METH_VARARGS,
   "GetHeaderValue(self, key:str) -> str\nC++: const char *GetHeaderValue(const char *key)\n\nGet a value given a key in the header\n"},
  {"GetAxisLabel", PyvtkTeemNRRDReader_GetAxisLabel, METH_VARARGS,
   "GetAxisLabel(self, axis:int) -> str\nC++: const char *GetAxisLabel(unsigned int axis)\n\nGet label for specified axis\n"},
  {"GetAxisUnit", PyvtkTeemNRRDReader_GetAxisUnit, METH_VARARGS,
   "GetAxisUnit(self, axis:int) -> str\nC++: const char *GetAxisUnit(unsigned int axis)\n\nGet unit for specified axis\n"},
  {"CanReadFile", PyvtkTeemNRRDReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, filename:str) -> int\nC++: int CanReadFile(const char *filename) override;\n\nis the given file name a NRRD file?\n"},
  {"GetFileExtensions", PyvtkTeemNRRDReader_GetFileExtensions, METH_VARARGS,
   "GetFileExtensions(self) -> str\nC++: const char *GetFileExtensions() override;\n\nValid extensions\n"},
  {"GetDescriptiveName", PyvtkTeemNRRDReader_GetDescriptiveName, METH_VARARGS,
   "GetDescriptiveName(self) -> str\nC++: const char *GetDescriptiveName() override;\n\nA descriptive name for this format\n"},
  {"GetReadStatus", PyvtkTeemNRRDReader_GetReadStatus, METH_VARARGS,
   "GetReadStatus(self) -> int\nC++: virtual int GetReadStatus()\n\nReport the status of the reading process. If this is different\nthan zero, there have been some error parsing the complete header\ninformation.\n"},
  {"SetPointDataType", PyvtkTeemNRRDReader_SetPointDataType, METH_VARARGS,
   "SetPointDataType(self, _arg:int) -> None\nC++: virtual void SetPointDataType(int _arg)\n\nPoint data field type\n"},
  {"GetPointDataType", PyvtkTeemNRRDReader_GetPointDataType, METH_VARARGS,
   "GetPointDataType(self) -> int\nC++: virtual int GetPointDataType()\n\n"},
  {"SetDataType", PyvtkTeemNRRDReader_SetDataType, METH_VARARGS,
   "SetDataType(self, _arg:int) -> None\nC++: virtual void SetDataType(int _arg)\n\nSet the data type: int, float....\n"},
  {"GetDataType", PyvtkTeemNRRDReader_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: virtual int GetDataType()\n\n"},
  {"SetNumberOfComponents", PyvtkTeemNRRDReader_SetNumberOfComponents, METH_VARARGS,
   "SetNumberOfComponents(self, _arg:int) -> None\nC++: virtual void SetNumberOfComponents(int _arg)\n\n\n"},
  {"GetNumberOfComponents", PyvtkTeemNRRDReader_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: virtual int GetNumberOfComponents()\n\n"},
  {"SetUseNativeOriginOn", PyvtkTeemNRRDReader_SetUseNativeOriginOn, METH_VARARGS,
   "SetUseNativeOriginOn(self) -> None\nC++: void SetUseNativeOriginOn()\n\nUse image origin from the file\n"},
  {"SetUseNativeOriginOff", PyvtkTeemNRRDReader_SetUseNativeOriginOff, METH_VARARGS,
   "SetUseNativeOriginOff(self) -> None\nC++: void SetUseNativeOriginOff()\n\nUse image center as origin\n"},
  {"SetDataArrayName", PyvtkTeemNRRDReader_SetDataArrayName, METH_VARARGS,
   "SetDataArrayName(self, _arg:str) -> None\nC++: virtual void SetDataArrayName(std::string _arg)\n\nName of the point data array that voxel data will be stored in.\nSetting a custom value may be useful for example when probing the\nimage because then the probing result will be stored using this\narray name. Default value is NRRDImage.\n"},
  {"GetDataArrayName", PyvtkTeemNRRDReader_GetDataArrayName, METH_VARARGS,
   "GetDataArrayName(self) -> str\nC++: virtual std::string GetDataArrayName()\n\n"},
  {"NrrdToVTKScalarType", PyvtkTeemNRRDReader_NrrdToVTKScalarType, METH_VARARGS,
   "NrrdToVTKScalarType(self, nrrdPixelType:int) -> int\nC++: int NrrdToVTKScalarType(const int nrrdPixelType)\n\n"},
  {"VTKToNrrdPixelType", PyvtkTeemNRRDReader_VTKToNrrdPixelType, METH_VARARGS,
   "VTKToNrrdPixelType(self, vtkPixelType:int) -> int\nC++: int VTKToNrrdPixelType(const int vtkPixelType)\n\ncase nrrdTypeLLong:\n     return LONG ;\n     break;\n   case nrrdTypeULong:\n     return ULONG;\n     break;\n"},
  {"AllocateOutputData", PyvtkTeemNRRDReader_AllocateOutputData, METH_VARARGS,
   "AllocateOutputData(self, out:vtkDataObject,\n    outInfo:vtkInformation) -> vtkImageData\nC++: vtkImageData *AllocateOutputData(vtkDataObject *out,\n    vtkInformation *outInfo) override;\nAllocateOutputData(self, out:vtkImageData, outInfo:vtkInformation,\n     uExtent:[int, ...]) -> None\nC++: void AllocateOutputData(vtkImageData *out,\n    vtkInformation *outInfo, int *uExtent) override;\n\ncase nrrdTypeLLong:\n     return LONG ;\n     break;\n   case nrrdTypeULong:\n     return ULONG;\n     break;\n"},
  {"AllocatePointData", PyvtkTeemNRRDReader_AllocatePointData, METH_VARARGS,
   "AllocatePointData(self, out:vtkImageData, outInfo:vtkInformation)\n    -> None\nC++: void AllocatePointData(vtkImageData *out,\n    vtkInformation *outInfo)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTeemNRRDReader_Doc =
  "vtkTeemNRRDReader - Reads Nearly Raw Raster Data files.\n\n"
  "Superclass: vtkMedicalImageReader2\n\n"
  "Reads Nearly Raw Raster Data files using the nrrdio library as used\n"
  "in ITK\n"
  "\\sa vtkImageReader2\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTeemNRRDReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkTeemPython.vtkTeemNRRDReader", // tp_name
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
  PyvtkTeemNRRDReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTeemNRRDReader_StaticNew()
{
  return vtkTeemNRRDReader::New();
}

PyObject *PyvtkTeemNRRDReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTeemNRRDReader_Type, PyvtkTeemNRRDReader_Methods,
    "vtkTeemNRRDReader",
 &PyvtkTeemNRRDReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMedicalImageReader2");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTeemNRRDReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTeemNRRDReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTeemNRRDReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

