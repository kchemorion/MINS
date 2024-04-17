// python wrapper for vtkTeemNRRDWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTeemNRRDWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTeemNRRDWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkTeemNRRDWriter_ClassNew(); }


static PyObject *
PyvtkTeemNRRDWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTeemNRRDWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTeemNRRDWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTeemNRRDWriter *tempr = vtkTeemNRRDWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTeemNRRDWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTeemNRRDWriter::NewInstance());

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
PyvtkTeemNRRDWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTeemNRRDWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTeemNRRDWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkTeemNRRDWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTeemNRRDWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkTeemNRRDWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTeemNRRDWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkTeemNRRDWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkTeemNRRDWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}


static PyObject *
PyvtkTeemNRRDWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkTeemNRRDWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetDiffusionGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

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
      op->vtkTeemNRRDWriter::SetDiffusionGradients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetDiffusionGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetDiffusionGradients() :
      op->vtkTeemNRRDWriter::GetDiffusionGradients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetBValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

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
      op->vtkTeemNRRDWriter::SetBValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetBValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetBValues() :
      op->vtkTeemNRRDWriter::GetBValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetIJKToRASMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIJKToRASMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetIJKToRASMatrix(temp0);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetIJKToRASMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetIJKToRASMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIJKToRASMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetIJKToRASMatrix() :
      op->vtkTeemNRRDWriter::GetIJKToRASMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetMeasurementFrameMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

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
      op->vtkTeemNRRDWriter::SetMeasurementFrameMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetMeasurementFrameMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurementFrameMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMeasurementFrameMatrix() :
      op->vtkTeemNRRDWriter::GetMeasurementFrameMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetUseCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCompression(temp0);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetUseCompression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetUseCompression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCompression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCompression() :
      op->vtkTeemNRRDWriter::GetUseCompression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_UseCompressionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCompressionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCompressionOn();
    }
    else
    {
      op->vtkTeemNRRDWriter::UseCompressionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_UseCompressionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCompressionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCompressionOff();
    }
    else
    {
      op->vtkTeemNRRDWriter::UseCompressionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompressionLevel(temp0);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetCompressionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetCompressionLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMinValue() :
      op->vtkTeemNRRDWriter::GetCompressionLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetCompressionLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevelMaxValue() :
      op->vtkTeemNRRDWriter::GetCompressionLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetCompressionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompressionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompressionLevel() :
      op->vtkTeemNRRDWriter::GetCompressionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileType(temp0);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetFileType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMinValue() :
      op->vtkTeemNRRDWriter::GetFileTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMaxValue() :
      op->vtkTeemNRRDWriter::GetFileTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkTeemNRRDWriter::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToASCII();
    }
    else
    {
      op->vtkTeemNRRDWriter::SetFileTypeToASCII();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToBinary();
    }
    else
    {
      op->vtkTeemNRRDWriter::SetFileTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_WriteErrorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteErrorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteErrorOn();
    }
    else
    {
      op->vtkTeemNRRDWriter::WriteErrorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_WriteErrorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteErrorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteErrorOff();
    }
    else
    {
      op->vtkTeemNRRDWriter::WriteErrorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetWriteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteError(temp0);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetWriteError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetWriteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteError() :
      op->vtkTeemNRRDWriter::GetWriteError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAttribute(temp0, temp1);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetAttribute(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetAxisLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabel(temp0, temp1);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetAxisLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetAxisUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisUnit(temp0, temp1);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetAxisUnit(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetVectorAxisKind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorAxisKind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorAxisKind(temp0);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetVectorAxisKind(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpace(temp0);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetSpace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetSpace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSpace() :
      op->vtkTeemNRRDWriter::GetSpace());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_vtkSetSpaceToRAS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkSetSpaceToRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->vtkSetSpaceToRAS();
    }
    else
    {
      op->vtkTeemNRRDWriter::vtkSetSpaceToRAS();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_vtkSetSpaceToRAST(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkSetSpaceToRAST");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->vtkSetSpaceToRAST();
    }
    else
    {
      op->vtkTeemNRRDWriter::vtkSetSpaceToRAST();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_vtkSetSpaceToLPS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkSetSpaceToLPS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->vtkSetSpaceToLPS();
    }
    else
    {
      op->vtkTeemNRRDWriter::vtkSetSpaceToLPS();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_vtkSetSpaceToLPST(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "vtkSetSpaceToLPST");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->vtkSetSpaceToLPST();
    }
    else
    {
      op->vtkTeemNRRDWriter::vtkSetSpaceToLPST();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_SetForceRangeAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceRangeAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceRangeAxis(temp0);
    }
    else
    {
      op->vtkTeemNRRDWriter::SetForceRangeAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_GetForceRangeAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceRangeAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceRangeAxis() :
      op->vtkTeemNRRDWriter::GetForceRangeAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_ForceRangeAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceRangeAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceRangeAxisOn();
    }
    else
    {
      op->vtkTeemNRRDWriter::ForceRangeAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_ForceRangeAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceRangeAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceRangeAxisOff();
    }
    else
    {
      op->vtkTeemNRRDWriter::ForceRangeAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTeemNRRDWriter_MakeNRRD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeNRRD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTeemNRRDWriter *op = static_cast<vtkTeemNRRDWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->MakeNRRD() :
      op->vtkTeemNRRDWriter::MakeNRRD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTeemNRRDWriter_Methods[] = {
  {"IsTypeOf", PyvtkTeemNRRDWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTeemNRRDWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTeemNRRDWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTeemNRRDWriter\nC++: static vtkTeemNRRDWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTeemNRRDWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTeemNRRDWriter\nC++: vtkTeemNRRDWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTeemNRRDWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTeemNRRDWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInput", PyvtkTeemNRRDWriter_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkImageData\nC++: vtkImageData *GetInput()\nGetInput(self, port:int) -> vtkImageData\nC++: vtkImageData *GetInput(int port)\n\nGet the input to this writer.\n"},
  {"SetFileName", PyvtkTeemNRRDWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of vtk polygon data file to write.\n"},
  {"GetFileName", PyvtkTeemNRRDWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetDiffusionGradients", PyvtkTeemNRRDWriter_SetDiffusionGradients, METH_VARARGS,
   "SetDiffusionGradients(self, _arg:vtkDoubleArray) -> None\nC++: virtual void SetDiffusionGradients(vtkDoubleArray *_arg)\n\n"},
  {"GetDiffusionGradients", PyvtkTeemNRRDWriter_GetDiffusionGradients, METH_VARARGS,
   "GetDiffusionGradients(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetDiffusionGradients()\n\n"},
  {"SetBValues", PyvtkTeemNRRDWriter_SetBValues, METH_VARARGS,
   "SetBValues(self, _arg:vtkDoubleArray) -> None\nC++: virtual void SetBValues(vtkDoubleArray *_arg)\n\n"},
  {"GetBValues", PyvtkTeemNRRDWriter_GetBValues, METH_VARARGS,
   "GetBValues(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetBValues()\n\n"},
  {"SetIJKToRASMatrix", PyvtkTeemNRRDWriter_SetIJKToRASMatrix, METH_VARARGS,
   "SetIJKToRASMatrix(self, _arg:vtkMatrix4x4) -> None\nC++: virtual void SetIJKToRASMatrix(vtkMatrix4x4 *_arg)\n\n"},
  {"GetIJKToRASMatrix", PyvtkTeemNRRDWriter_GetIJKToRASMatrix, METH_VARARGS,
   "GetIJKToRASMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetIJKToRASMatrix()\n\n"},
  {"SetMeasurementFrameMatrix", PyvtkTeemNRRDWriter_SetMeasurementFrameMatrix, METH_VARARGS,
   "SetMeasurementFrameMatrix(self, _arg:vtkMatrix4x4) -> None\nC++: virtual void SetMeasurementFrameMatrix(vtkMatrix4x4 *_arg)\n\n"},
  {"GetMeasurementFrameMatrix", PyvtkTeemNRRDWriter_GetMeasurementFrameMatrix, METH_VARARGS,
   "GetMeasurementFrameMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetMeasurementFrameMatrix()\n\n"},
  {"SetUseCompression", PyvtkTeemNRRDWriter_SetUseCompression, METH_VARARGS,
   "SetUseCompression(self, _arg:int) -> None\nC++: virtual void SetUseCompression(int _arg)\n\n"},
  {"GetUseCompression", PyvtkTeemNRRDWriter_GetUseCompression, METH_VARARGS,
   "GetUseCompression(self) -> int\nC++: virtual int GetUseCompression()\n\n"},
  {"UseCompressionOn", PyvtkTeemNRRDWriter_UseCompressionOn, METH_VARARGS,
   "UseCompressionOn(self) -> None\nC++: virtual void UseCompressionOn()\n\n"},
  {"UseCompressionOff", PyvtkTeemNRRDWriter_UseCompressionOff, METH_VARARGS,
   "UseCompressionOff(self) -> None\nC++: virtual void UseCompressionOff()\n\n"},
  {"SetCompressionLevel", PyvtkTeemNRRDWriter_SetCompressionLevel, METH_VARARGS,
   "SetCompressionLevel(self, _arg:int) -> None\nC++: virtual void SetCompressionLevel(int _arg)\n\n"},
  {"GetCompressionLevelMinValue", PyvtkTeemNRRDWriter_GetCompressionLevelMinValue, METH_VARARGS,
   "GetCompressionLevelMinValue(self) -> int\nC++: virtual int GetCompressionLevelMinValue()\n\n"},
  {"GetCompressionLevelMaxValue", PyvtkTeemNRRDWriter_GetCompressionLevelMaxValue, METH_VARARGS,
   "GetCompressionLevelMaxValue(self) -> int\nC++: virtual int GetCompressionLevelMaxValue()\n\n"},
  {"GetCompressionLevel", PyvtkTeemNRRDWriter_GetCompressionLevel, METH_VARARGS,
   "GetCompressionLevel(self) -> int\nC++: virtual int GetCompressionLevel()\n\n"},
  {"SetFileType", PyvtkTeemNRRDWriter_SetFileType, METH_VARARGS,
   "SetFileType(self, _arg:int) -> None\nC++: virtual void SetFileType(int _arg)\n\n"},
  {"GetFileTypeMinValue", PyvtkTeemNRRDWriter_GetFileTypeMinValue, METH_VARARGS,
   "GetFileTypeMinValue(self) -> int\nC++: virtual int GetFileTypeMinValue()\n\n"},
  {"GetFileTypeMaxValue", PyvtkTeemNRRDWriter_GetFileTypeMaxValue, METH_VARARGS,
   "GetFileTypeMaxValue(self) -> int\nC++: virtual int GetFileTypeMaxValue()\n\n"},
  {"GetFileType", PyvtkTeemNRRDWriter_GetFileType, METH_VARARGS,
   "GetFileType(self) -> int\nC++: virtual int GetFileType()\n\n"},
  {"SetFileTypeToASCII", PyvtkTeemNRRDWriter_SetFileTypeToASCII, METH_VARARGS,
   "SetFileTypeToASCII(self) -> None\nC++: void SetFileTypeToASCII()\n\n"},
  {"SetFileTypeToBinary", PyvtkTeemNRRDWriter_SetFileTypeToBinary, METH_VARARGS,
   "SetFileTypeToBinary(self) -> None\nC++: void SetFileTypeToBinary()\n\n"},
  {"WriteErrorOn", PyvtkTeemNRRDWriter_WriteErrorOn, METH_VARARGS,
   "WriteErrorOn(self) -> None\nC++: virtual void WriteErrorOn()\n\nFlag that is set by WriteData() if writing fails.\n"},
  {"WriteErrorOff", PyvtkTeemNRRDWriter_WriteErrorOff, METH_VARARGS,
   "WriteErrorOff(self) -> None\nC++: virtual void WriteErrorOff()\n\n"},
  {"SetWriteError", PyvtkTeemNRRDWriter_SetWriteError, METH_VARARGS,
   "SetWriteError(self, _arg:int) -> None\nC++: virtual void SetWriteError(int _arg)\n\n"},
  {"GetWriteError", PyvtkTeemNRRDWriter_GetWriteError, METH_VARARGS,
   "GetWriteError(self) -> int\nC++: virtual int GetWriteError()\n\n"},
  {"SetAttribute", PyvtkTeemNRRDWriter_SetAttribute, METH_VARARGS,
   "SetAttribute(self, name:str, value:str) -> None\nC++: void SetAttribute(const std::string &name,\n    const std::string &value)\n\nMethod to set an attribute that will be passed into the NRRD file\non write\n"},
  {"SetAxisLabel", PyvtkTeemNRRDWriter_SetAxisLabel, METH_VARARGS,
   "SetAxisLabel(self, axis:int, label:str) -> None\nC++: void SetAxisLabel(unsigned int axis, const char *label)\n\nMethod to set label for each axis\n"},
  {"SetAxisUnit", PyvtkTeemNRRDWriter_SetAxisUnit, METH_VARARGS,
   "SetAxisUnit(self, axis:int, unit:str) -> None\nC++: void SetAxisUnit(unsigned int axis, const char *unit)\n\nMethod to set unit for each axis\n"},
  {"SetVectorAxisKind", PyvtkTeemNRRDWriter_SetVectorAxisKind, METH_VARARGS,
   "SetVectorAxisKind(self, kind:int) -> None\nC++: void SetVectorAxisKind(int kind)\n\nMethod to force axis kind for the non-spatial axis (4th\ndimension). If not set (or set to nrrdKindUnknown) then axis kind\nis guessed from the number of components and scalar type.\n"},
  {"SetSpace", PyvtkTeemNRRDWriter_SetSpace, METH_VARARGS,
   "SetSpace(self, _arg:int) -> None\nC++: virtual void SetSpace(int _arg)\n\nMethod to set the coordinate system written to the NRRD file.\nCurrently the only valid coordinate systems are: RAS, RAST, LPS,\nand LPST.\n"},
  {"GetSpace", PyvtkTeemNRRDWriter_GetSpace, METH_VARARGS,
   "GetSpace(self) -> int\nC++: virtual int GetSpace()\n\n"},
  {"vtkSetSpaceToRAS", PyvtkTeemNRRDWriter_vtkSetSpaceToRAS, METH_VARARGS,
   "vtkSetSpaceToRAS(self) -> None\nC++: void vtkSetSpaceToRAS()\n\nSet coordinate system to RAS\n"},
  {"vtkSetSpaceToRAST", PyvtkTeemNRRDWriter_vtkSetSpaceToRAST, METH_VARARGS,
   "vtkSetSpaceToRAST(self) -> None\nC++: void vtkSetSpaceToRAST()\n\n"},
  {"vtkSetSpaceToLPS", PyvtkTeemNRRDWriter_vtkSetSpaceToLPS, METH_VARARGS,
   "vtkSetSpaceToLPS(self) -> None\nC++: void vtkSetSpaceToLPS()\n\nSet coordinate system to LPS\n"},
  {"vtkSetSpaceToLPST", PyvtkTeemNRRDWriter_vtkSetSpaceToLPST, METH_VARARGS,
   "vtkSetSpaceToLPST(self) -> None\nC++: void vtkSetSpaceToLPST()\n\n"},
  {"SetForceRangeAxis", PyvtkTeemNRRDWriter_SetForceRangeAxis, METH_VARARGS,
   "SetForceRangeAxis(self, _arg:bool) -> None\nC++: virtual void SetForceRangeAxis(bool _arg)\n\nForce the addition of a range axis, even when the size of the\nfirst image dimension (components, or frame list) is 1. This is\nuseful when attempting to write an image sequence with a single\nframe, as otherwise the range dimension would be omitted.\n"},
  {"GetForceRangeAxis", PyvtkTeemNRRDWriter_GetForceRangeAxis, METH_VARARGS,
   "GetForceRangeAxis(self) -> bool\nC++: virtual bool GetForceRangeAxis()\n\n"},
  {"ForceRangeAxisOn", PyvtkTeemNRRDWriter_ForceRangeAxisOn, METH_VARARGS,
   "ForceRangeAxisOn(self) -> None\nC++: virtual void ForceRangeAxisOn()\n\n"},
  {"ForceRangeAxisOff", PyvtkTeemNRRDWriter_ForceRangeAxisOff, METH_VARARGS,
   "ForceRangeAxisOff(self) -> None\nC++: virtual void ForceRangeAxisOff()\n\n"},
  {"MakeNRRD", PyvtkTeemNRRDWriter_MakeNRRD, METH_VARARGS,
   "MakeNRRD(self) -> Pointer\nC++: void *MakeNRRD()\n\nUtility function to return image as a Nrrd*\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTeemNRRDWriter_Doc =
  "vtkTeemNRRDWriter - Writes PNG files.\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkTeemNRRDWriter writes NRRD files.\n\n"
  "\\sa vtkTeemNRRDReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTeemNRRDWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkTeemPython.vtkTeemNRRDWriter", // tp_name
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
  PyvtkTeemNRRDWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTeemNRRDWriter_StaticNew()
{
  return vtkTeemNRRDWriter::New();
}

PyObject *PyvtkTeemNRRDWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTeemNRRDWriter_Type, PyvtkTeemNRRDWriter_Methods,
    "vtkTeemNRRDWriter",
 &PyvtkTeemNRRDWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTeemNRRDWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTeemNRRDWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTeemNRRDWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

