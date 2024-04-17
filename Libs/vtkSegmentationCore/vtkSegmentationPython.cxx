// python wrapper for vtkSegmentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSegmentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSegmentation(PyObject *dict); }
extern "C" { PyObject *PyvtkSegmentation_ClassNew(); }


static PyObject *
PyvtkSegmentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegmentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegmentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegmentation *tempr = vtkSegmentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegmentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegmentation::NewInstance());

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
PyvtkSegmentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSegmentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSegmentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkSegmentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentation"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkSegmentation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_CopyConversionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyConversionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkSegmentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegmentation"))
  {
    if (ap.IsBound())
    {
      op->CopyConversionParameters(temp0);
    }
    else
    {
      op->vtkSegmentation::CopyConversionParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

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
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkSegmentation::GetBounds(temp0);
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
PyvtkSegmentation_ApplyLinearTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyLinearTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->ApplyLinearTransform(temp0);
    }
    else
    {
      op->vtkSegmentation::ApplyLinearTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_ApplyNonLinearTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyNonLinearTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->ApplyNonLinearTransform(temp0);
    }
    else
    {
      op->vtkSegmentation::ApplyNonLinearTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_DetermineCommonLabelmapGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetermineCommonLabelmapGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  int temp0;
  vtkStringArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkStringArray"))
  {
    std::string tempr = (ap.IsBound() ?
      op->DetermineCommonLabelmapGeometry(temp0, temp1) :
      op->vtkSegmentation::DetermineCommonLabelmapGeometry(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_DetermineCommonLabelmapExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetermineCommonLabelmapExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  vtkOrientedImageData *temp1 = nullptr;
  vtkStringArray *temp2 = nullptr;
  bool temp3 = false;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkOrientedImageData") &&
      ap.GetVTKObject(temp2, "vtkStringArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DetermineCommonLabelmapExtent(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkSegmentation::DetermineCommonLabelmapExtent(temp0, temp1, temp2, temp3, temp4);
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
PyvtkSegmentation_SetImageGeometryFromCommonLabelmapGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageGeometryFromCommonLabelmapGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkOrientedImageData *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  int temp2 = vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->SetImageGeometryFromCommonLabelmapGeometry(temp0, temp1, temp2) :
      op->vtkSegmentation::SetImageGeometryFromCommonLabelmapGeometry(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_AddSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkSegment *temp0 = nullptr;
  std::string temp1 = "";
  std::string temp2 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkSegment") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->AddSegment(temp0, temp1, temp2) :
      op->vtkSegmentation::AddSegment(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GenerateUniqueSegmentID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUniqueSegmentID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GenerateUniqueSegmentID(temp0) :
      op->vtkSegmentation::GenerateUniqueSegmentID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_RemoveSegment_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveSegment(temp0);
    }
    else
    {
      op->vtkSegmentation::RemoveSegment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentation_RemoveSegment_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkSegment *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegment"))
  {
    if (ap.IsBound())
    {
      op->RemoveSegment(temp0);
    }
    else
    {
      op->vtkSegmentation::RemoveSegment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentation_RemoveSegment_Methods[] = {
  {"RemoveSegment", PyvtkSegmentation_RemoveSegment_s1, METH_VARARGS,
   "@s"},
  {"RemoveSegment", PyvtkSegmentation_RemoveSegment_s2, METH_VARARGS,
   "@V *vtkSegment"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegmentation_RemoveSegment(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSegmentation_RemoveSegment_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveSegment");
  return nullptr;
}


static PyObject *
PyvtkSegmentation_RemoveAllSegments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSegments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSegments();
    }
    else
    {
      op->vtkSegmentation::RemoveAllSegments();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSegment *tempr = (ap.IsBound() ?
      op->GetSegment(temp0) :
      op->vtkSegmentation::GetSegment(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetSegmentIDs_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->GetSegmentIDs(temp0);
    }
    else
    {
      op->vtkSegmentation::GetSegmentIDs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentation_GetSegmentIDs_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->GetSegmentIDs(temp0);
    }
    else
    {
      op->vtkSegmentation::GetSegmentIDs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentation_GetSegmentIDs_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetSegmentIDs() :
      op->vtkSegmentation::GetSegmentIDs());

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

static PyMethodDef PyvtkSegmentation_GetSegmentIDs_Methods[] = {
  {"GetSegmentIDs", PyvtkSegmentation_GetSegmentIDs_s1, METH_VARARGS,
   "@T s"},
  {"GetSegmentIDs", PyvtkSegmentation_GetSegmentIDs_s2, METH_VARARGS,
   "@V *vtkStringArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegmentation_GetSegmentIDs(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSegmentation_GetSegmentIDs_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSegmentation_GetSegmentIDs_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSegmentIDs");
  return nullptr;
}


static PyObject *
PyvtkSegmentation_GetNumberOfSegments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSegments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSegments() :
      op->vtkSegmentation::GetNumberOfSegments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetNthSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSegment *tempr = (ap.IsBound() ?
      op->GetNthSegment(temp0) :
      op->vtkSegmentation::GetNthSegment(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetNthSegmentID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthSegmentID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthSegmentID(temp0) :
      op->vtkSegmentation::GetNthSegmentID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetSegmentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSegmentIndex(temp0) :
      op->vtkSegmentation::GetSegmentIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_SetSegmentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSegmentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSegmentIndex(temp0, temp1) :
      op->vtkSegmentation::SetSegmentIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_ReorderSegments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReorderSegments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  std::string temp1 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->ReorderSegments(temp0, temp1);
    }
    else
    {
      op->vtkSegmentation::ReorderSegments(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetSegmentIdBySegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentIdBySegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkSegment *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegment"))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSegmentIdBySegment(temp0) :
      op->vtkSegmentation::GetSegmentIdBySegment(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetSegmentIdBySegmentName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentIdBySegmentName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSegmentIdBySegmentName(temp0) :
      op->vtkSegmentation::GetSegmentIdBySegmentName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetSegmentRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetSegmentRepresentation(temp0, temp1) :
      op->vtkSegmentation::GetSegmentRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_CopySegmentFromSegmentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopySegmentFromSegmentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkSegmentation *temp0 = nullptr;
  std::string temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkSegmentation") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->CopySegmentFromSegmentation(temp0, temp1, temp2) :
      op->vtkSegmentation::CopySegmentFromSegmentation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetContainedRepresentationNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainedRepresentationNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->GetContainedRepresentationNames(temp0);
    }
    else
    {
      op->vtkSegmentation::GetContainedRepresentationNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp0.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp0.data(), temp0.size()));
      ap.SetContents(0, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_ContainsRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ContainsRepresentation(temp0) :
      op->vtkSegmentation::ContainsRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_IsSourceRepresentationPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSourceRepresentationPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSourceRepresentationPolyData() :
      op->vtkSegmentation::IsSourceRepresentationPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_IsMasterRepresentationPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMasterRepresentationPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMasterRepresentationPolyData() :
      op->vtkSegmentation::IsMasterRepresentationPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_IsSourceRepresentationImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSourceRepresentationImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSourceRepresentationImageData() :
      op->vtkSegmentation::IsSourceRepresentationImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_IsMasterRepresentationImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMasterRepresentationImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMasterRepresentationImageData() :
      op->vtkSegmentation::IsMasterRepresentationImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_InvalidateNonSourceRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateNonSourceRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateNonSourceRepresentations();
    }
    else
    {
      op->vtkSegmentation::InvalidateNonSourceRepresentations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_InvalidateNonMasterRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateNonMasterRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateNonMasterRepresentations();
    }
    else
    {
      op->vtkSegmentation::InvalidateNonMasterRepresentations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_IsSharedBinaryLabelmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSharedBinaryLabelmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSharedBinaryLabelmap(temp0) :
      op->vtkSegmentation::IsSharedBinaryLabelmap(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetSegmentIDsSharingRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentIDsSharingRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  std::string temp1;
  std::vector<std::string> temp2(ap.GetArgSize(2));
  bool temp3 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2.data(), temp2.size()) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->GetSegmentIDsSharingRepresentation(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSegmentation::GetSegmentIDsSharingRepresentation(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp2.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp2.data(), temp2.size()));
      ap.SetContents(2, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetSegmentIDsSharingBinaryLabelmapRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentIDsSharingBinaryLabelmapRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->GetSegmentIDsSharingBinaryLabelmapRepresentation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSegmentation::GetSegmentIDsSharingBinaryLabelmapRepresentation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetUniqueLabelValueForSharedLabelmap_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniqueLabelValueForSharedLabelmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUniqueLabelValueForSharedLabelmap(temp0) :
      op->vtkSegmentation::GetUniqueLabelValueForSharedLabelmap(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentation_GetUniqueLabelValueForSharedLabelmap_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniqueLabelValueForSharedLabelmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkOrientedImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOrientedImageData"))
  {
    int tempr = (ap.IsBound() ?
      op->GetUniqueLabelValueForSharedLabelmap(temp0) :
      op->vtkSegmentation::GetUniqueLabelValueForSharedLabelmap(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentation_GetUniqueLabelValueForSharedLabelmap_Methods[] = {
  {"GetUniqueLabelValueForSharedLabelmap", PyvtkSegmentation_GetUniqueLabelValueForSharedLabelmap_s1, METH_VARARGS,
   "@s"},
  {"GetUniqueLabelValueForSharedLabelmap", PyvtkSegmentation_GetUniqueLabelValueForSharedLabelmap_s2, METH_VARARGS,
   "@V *vtkOrientedImageData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegmentation_GetUniqueLabelValueForSharedLabelmap(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSegmentation_GetUniqueLabelValueForSharedLabelmap_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetUniqueLabelValueForSharedLabelmap");
  return nullptr;
}


static PyObject *
PyvtkSegmentation_MergeSegmentLabelmaps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeSegmentLabelmaps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->MergeSegmentLabelmaps(temp0);
    }
    else
    {
      op->vtkSegmentation::MergeSegmentLabelmaps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_SeparateSegmentLabelmap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeparateSegmentLabelmap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SeparateSegmentLabelmap(temp0);
    }
    else
    {
      op->vtkSegmentation::SeparateSegmentLabelmap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_ClearSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ClearSegment(temp0);
    }
    else
    {
      op->vtkSegmentation::ClearSegment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetNumberOfLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayers(temp0) :
      op->vtkSegmentation::GetNumberOfLayers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetLayerIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  std::string temp1 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->GetLayerIndex(temp0, temp1) :
      op->vtkSegmentation::GetLayerIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetLayerDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  int temp0;
  std::string temp1 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetLayerDataObject(temp0, temp1) :
      op->vtkSegmentation::GetLayerDataObject(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetLayerObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkCollection *temp0 = nullptr;
  std::string temp1 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkCollection") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->GetLayerObjects(temp0, temp1);
    }
    else
    {
      op->vtkSegmentation::GetLayerObjects(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetSegmentIDsForLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentIDsForLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  int temp0;
  std::string temp1 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetSegmentIDsForLayer(temp0, temp1) :
      op->vtkSegmentation::GetSegmentIDsForLayer(temp0, temp1));

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
PyvtkSegmentation_GetSegmentIDsForDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSegmentIDsForDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkDataObject *temp0 = nullptr;
  std::string temp1 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    std::vector<std::string> tempr = (ap.IsBound() ?
      op->GetSegmentIDsForDataObject(temp0, temp1) :
      op->vtkSegmentation::GetSegmentIDsForDataObject(temp0, temp1));

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
PyvtkSegmentation_CollapseBinaryLabelmaps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CollapseBinaryLabelmaps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->CollapseBinaryLabelmaps(temp0);
    }
    else
    {
      op->vtkSegmentation::CollapseBinaryLabelmaps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_CreateRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->CreateRepresentation(temp0, temp1) :
      op->vtkSegmentation::CreateRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSegmentation_CreateRepresentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkSegmentationConversionPath *temp0 = nullptr;
  vtkSegmentationConversionParameters *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionPath") &&
      ap.GetVTKObject(temp1, "vtkSegmentationConversionParameters"))
  {
    bool tempr = (ap.IsBound() ?
      op->CreateRepresentation(temp0, temp1) :
      op->vtkSegmentation::CreateRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentation_CreateRepresentation_Methods[] = {
  {"CreateRepresentation", PyvtkSegmentation_CreateRepresentation_s1, METH_VARARGS,
   "@s|q"},
  {"CreateRepresentation", PyvtkSegmentation_CreateRepresentation_s2, METH_VARARGS,
   "@VV *vtkSegmentationConversionPath *vtkSegmentationConversionParameters"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegmentation_CreateRepresentation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSegmentation_CreateRepresentation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSegmentation_CreateRepresentation_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CreateRepresentation");
  return nullptr;
}


static PyObject *
PyvtkSegmentation_RemoveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveRepresentation(temp0);
    }
    else
    {
      op->vtkSegmentation::RemoveRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_CanAcceptRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanAcceptRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanAcceptRepresentation(temp0) :
      op->vtkSegmentation::CanAcceptRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_CanAcceptSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanAcceptSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkSegment *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegment"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanAcceptSegment(temp0) :
      op->vtkSegmentation::CanAcceptSegment(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_AddEmptySegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEmptySegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0 = "";
  std::string temp1 = "";
  size_t size2 = 0;
  double store2[2*3];
  double *temp2 = nullptr;
  double *save2 = nullptr;
  if (ap.GetArgSize(2) > 0)
  {
    size2 = 3;
    temp2 = store2;
    save2 = store2 + 3;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    std::string tempr = (ap.IsBound() ?
      op->AddEmptySegment(temp0, temp1, temp2) :
      op->vtkSegmentation::AddEmptySegment(temp0, temp1, temp2));

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
PyvtkSegmentation_GetPossibleConversions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPossibleConversions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  vtkSegmentationConversionPaths *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSegmentationConversionPaths"))
  {
    if (ap.IsBound())
    {
      op->GetPossibleConversions(temp0, temp1);
    }
    else
    {
      op->vtkSegmentation::GetPossibleConversions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_SetConversionParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConversionParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetConversionParameter(temp0, temp1);
    }
    else
    {
      op->vtkSegmentation::SetConversionParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetConversionParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConversionParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetConversionParameter(temp0) :
      op->vtkSegmentation::GetConversionParameter(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetConversionParametersForPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConversionParametersForPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  vtkSegmentationConversionParameters *temp0 = nullptr;
  vtkSegmentationConversionPath *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSegmentationConversionParameters") &&
      ap.GetVTKObject(temp1, "vtkSegmentationConversionPath"))
  {
    if (ap.IsBound())
    {
      op->GetConversionParametersForPath(temp0, temp1);
    }
    else
    {
      op->vtkSegmentation::GetConversionParametersForPath(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_SerializeAllConversionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SerializeAllConversionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->SerializeAllConversionParameters() :
      op->vtkSegmentation::SerializeAllConversionParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_DeserializeConversionParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeserializeConversionParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeserializeConversionParameters(temp0);
    }
    else
    {
      op->vtkSegmentation::DeserializeConversionParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetSourceRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSourceRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSourceRepresentationName() :
      op->vtkSegmentation::GetSourceRepresentationName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_SetSourceRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSourceRepresentationName(temp0);
    }
    else
    {
      op->vtkSegmentation::SetSourceRepresentationName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_SetMasterRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMasterRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMasterRepresentationName(temp0);
    }
    else
    {
      op->vtkSegmentation::SetMasterRepresentationName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegmentation_GetMasterRepresentationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasterRepresentationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegmentation *op = static_cast<vtkSegmentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetMasterRepresentationName() :
      op->vtkSegmentation::GetMasterRepresentationName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSegmentation_Methods[] = {
  {"IsTypeOf", PyvtkSegmentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegmentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegmentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSegmentation\nC++: static vtkSegmentation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegmentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSegmentation\nC++: vtkSegmentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSegmentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSegmentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeepCopy", PyvtkSegmentation_DeepCopy, METH_VARARGS,
   "DeepCopy(self, aSegmentation:vtkSegmentation) -> None\nC++: virtual void DeepCopy(vtkSegmentation *aSegmentation)\n\nDeep copy one segmentation into another\n"},
  {"CopyConversionParameters", PyvtkSegmentation_CopyConversionParameters, METH_VARARGS,
   "CopyConversionParameters(self, aSegmentation:vtkSegmentation)\n    -> None\nC++: virtual void CopyConversionParameters(\n    vtkSegmentation *aSegmentation)\n\nCopy conversion parameters from another segmentation\n"},
  {"GetBounds", PyvtkSegmentation_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: virtual void GetBounds(double bounds[6])\n\nGet bounding box in global RAS in the form (xmin,xmax, ymin,ymax,\nzmin,zmax).\n"},
  {"ApplyLinearTransform", PyvtkSegmentation_ApplyLinearTransform, METH_VARARGS,
   "ApplyLinearTransform(self, transform:vtkAbstractTransform) -> None\nC++: virtual void ApplyLinearTransform(\n    vtkAbstractTransform *transform)\n\nApply a linear transform on the source representation of the\nsegments. The others will be invalidated Harden transform if poly\ndata, apply to directions if oriented image data.\n"},
  {"ApplyNonLinearTransform", PyvtkSegmentation_ApplyNonLinearTransform, METH_VARARGS,
   "ApplyNonLinearTransform(self, transform:vtkAbstractTransform)\n    -> None\nC++: virtual void ApplyNonLinearTransform(\n    vtkAbstractTransform *transform)\n\nApply a non-linear transform on the source representation of the\nsegments. The others will be invalidated Harden transform both if\noriented image data and poly data.\n"},
  {"DetermineCommonLabelmapGeometry", PyvtkSegmentation_DetermineCommonLabelmapGeometry, METH_VARARGS,
   "DetermineCommonLabelmapGeometry(self, extentComputationMode:int,\n    segmentIds:vtkStringArray) -> str\nC++: std::string DetermineCommonLabelmapGeometry(\n    int extentComputationMode, vtkStringArray *segmentIds)\n\nDetermine common labelmap geometry for whole segmentation, for\npython compatibility.\n"},
  {"DetermineCommonLabelmapExtent", PyvtkSegmentation_DetermineCommonLabelmapExtent, METH_VARARGS,
   "DetermineCommonLabelmapExtent(self, commonGeometryExtent:[int,\n    int, int, int, int, int],\n    commonGeometryImage:vtkOrientedImageData,\n    segmentIds:vtkStringArray, computeEffectiveExtent:bool=False,\n    addPadding:bool=False) -> None\nC++: void DetermineCommonLabelmapExtent(\n    int commonGeometryExtent[6],\n    vtkOrientedImageData *commonGeometryImage,\n    vtkStringArray *segmentIds, bool computeEffectiveExtent=false,\n     bool addPadding=false)\n\nDetermine common labelmap extent for whole segmentation, for\npython compatibility.\n"},
  {"SetImageGeometryFromCommonLabelmapGeometry", PyvtkSegmentation_SetImageGeometryFromCommonLabelmapGeometry, METH_VARARGS,
   "SetImageGeometryFromCommonLabelmapGeometry(self,\n    imageData:vtkOrientedImageData, segmentIDs:vtkStringArray=...,\n     extentComputationMode:int=...) -> bool\nC++: bool SetImageGeometryFromCommonLabelmapGeometry(\n    vtkOrientedImageData *imageData,\n    vtkStringArray *segmentIDs=nullptr,\n    int extentComputationMode=vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS)\n\nUpdates image geometry (origin, spacing, axis directions,\nextents) based on labelmaps stored in the segmentation. Does not\nallocate memory (to allow just retrieving geometry information\nwithout using memory).\n"},
  {"AddSegment", PyvtkSegmentation_AddSegment, METH_VARARGS,
   "AddSegment(self, segment:vtkSegment, segmentId:str=...,\n    insertBeforeSegmentId:str=...) -> bool\nC++: bool AddSegment(vtkSegment *segment,\n    std::string segmentId=\"\",\n    std::string insertBeforeSegmentId=\"\")\n\nAdd a segment to this segmentation, do necessary conversions, and\nobserve underlying data for changes. Necessary conversions:\n1. If the segment can be added (\\sa CanAcceptSegment), and it\n   does not contain the source representation, then the source\n   representation is converted using the cheapest available path.\n2. Make sure that the segment contains the same types of\n   representations that are present in the existing segments of\n   the segmentation (because we expect all segments in a\n   segmentation to contain the same types of representations).\n\\param segment the segment to observe\n\\param insertBeforeSegmentId if specified then the segment is\n    inserted before insertBeforeSegmentId\n\\return Success flag\n"},
  {"GenerateUniqueSegmentID", PyvtkSegmentation_GenerateUniqueSegmentID, METH_VARARGS,
   "GenerateUniqueSegmentID(self, id:str) -> str\nC++: std::string GenerateUniqueSegmentID(std::string id)\n\nGenerate unique segment ID. If argument is empty then a new ID\nwill be generated in the form \"Segment_\", where N is the number\nof segments. If argument is unique it is returned unchanged. If\nthere is a segment with the given name, then it is postfixed by a\nnumber to make it unique.\n"},
  {"RemoveSegment", PyvtkSegmentation_RemoveSegment, METH_VARARGS,
   "RemoveSegment(self, segmentId:str) -> None\nC++: void RemoveSegment(std::string segmentId)\nRemoveSegment(self, segment:vtkSegment) -> None\nC++: void RemoveSegment(vtkSegment *segment)\n\nRemove a segment by ID\n\\param segmentId Identifier of the segment to remove from the\n    segmentation\n"},
  {"RemoveAllSegments", PyvtkSegmentation_RemoveAllSegments, METH_VARARGS,
   "RemoveAllSegments(self) -> None\nC++: void RemoveAllSegments()\n\nRemove all segments\n"},
  {"GetSegment", PyvtkSegmentation_GetSegment, METH_VARARGS,
   "GetSegment(self, segmentId:str) -> vtkSegment\nC++: vtkSegment *GetSegment(std::string segmentId)\n\nAccess a segment by ID\n\\param segmentId Segment identifier in the container to access\n"},
  {"GetSegmentIDs", PyvtkSegmentation_GetSegmentIDs, METH_VARARGS,
   "GetSegmentIDs(self, segmentIds:[str, ...]) -> None\nC++: void GetSegmentIDs(std::vector<std::string> &segmentIds)\nGetSegmentIDs(self, segmentIds:vtkStringArray) -> None\nC++: void GetSegmentIDs(vtkStringArray *segmentIds)\nGetSegmentIDs(self) -> (str, ...)\nC++: std::vector<std::string> GetSegmentIDs()\n\nGet IDs for all contained segments\n"},
  {"GetNumberOfSegments", PyvtkSegmentation_GetNumberOfSegments, METH_VARARGS,
   "GetNumberOfSegments(self) -> int\nC++: int GetNumberOfSegments()\n\nRequest the total number of segments, primarily used for\niterating over all segments\n"},
  {"GetNthSegment", PyvtkSegmentation_GetNthSegment, METH_VARARGS,
   "GetNthSegment(self, index:int) -> vtkSegment\nC++: vtkSegment *GetNthSegment(unsigned int index)\n\nRequest segment by index\n"},
  {"GetNthSegmentID", PyvtkSegmentation_GetNthSegmentID, METH_VARARGS,
   "GetNthSegmentID(self, index:int) -> str\nC++: std::string GetNthSegmentID(unsigned int index)\n\nGet n-th segment ID. Return with \"\" if no segment is found by\nthat index.\n"},
  {"GetSegmentIndex", PyvtkSegmentation_GetSegmentIndex, METH_VARARGS,
   "GetSegmentIndex(self, segmentId:str) -> int\nC++: int GetSegmentIndex(const std::string &segmentId)\n\nGet index of segment in the SegmentID list. Returns -1 if the\nsegment ID is not in the SegmentID list.\n\\sa GetSegmentIDs\n"},
  {"SetSegmentIndex", PyvtkSegmentation_SetSegmentIndex, METH_VARARGS,
   "SetSegmentIndex(self, segmentId:str, newIndex:int) -> bool\nC++: bool SetSegmentIndex(const std::string &segmentId,\n    unsigned int newIndex)\n\nChanges segment order. Segment order may be used for display and\ngenerating merged labelmaps.\n\\return True if segment index has changed successfully (or the\n    index has already been set).\n\\sa ReorderSegments\n"},
  {"ReorderSegments", PyvtkSegmentation_ReorderSegments, METH_VARARGS,
   "ReorderSegments(self, segmentIdsToMove:[str, ...],\n    insertBeforeSegmentId:str=...) -> None\nC++: void ReorderSegments(\n    std::vector<std::string> segmentIdsToMove,\n    std::string insertBeforeSegmentId=\"\")\n\nReorder segment IDs so that the list of segment IDs are moved\nfrom their current position and inserted after the specified\nsegment. If insertBeforeSegmentId is empty then segments are\nmoved to the end of the segment list.\n\\sa SetSegmentIndex\n"},
  {"GetSegmentIdBySegment", PyvtkSegmentation_GetSegmentIdBySegment, METH_VARARGS,
   "GetSegmentIdBySegment(self, segment:vtkSegment) -> str\nC++: std::string GetSegmentIdBySegment(vtkSegment *segment)\n\nFind segment ID by segment instance Returns empty string if\nsegment is not found.\n"},
  {"GetSegmentIdBySegmentName", PyvtkSegmentation_GetSegmentIdBySegmentName, METH_VARARGS,
   "GetSegmentIdBySegmentName(self, name:str) -> str\nC++: std::string GetSegmentIdBySegmentName(std::string name)\n\nFind segment ID by segment name. Search is case-insensitive. If\nmultiple segments have the same name, the first match is\nreturned. Returns empty string if segment is not found.\n"},
  {"GetSegmentRepresentation", PyvtkSegmentation_GetSegmentRepresentation, METH_VARARGS,
   "GetSegmentRepresentation(self, segmentId:str,\n    representationName:str) -> vtkDataObject\nC++: vtkDataObject *GetSegmentRepresentation(\n    std::string segmentId, std::string representationName)\n\nGet representation from segment\n"},
  {"CopySegmentFromSegmentation", PyvtkSegmentation_CopySegmentFromSegmentation, METH_VARARGS,
   "CopySegmentFromSegmentation(self,\n    fromSegmentation:vtkSegmentation, segmentId:str,\n    removeFromSource:bool=False) -> bool\nC++: bool CopySegmentFromSegmentation(\n    vtkSegmentation *fromSegmentation, std::string segmentId,\n    bool removeFromSource=false)\n\nCopy segment from one segmentation to this one\n\\param fromSegmentation Source segmentation\n\\param segmentId ID of segment to copy\n\\param removeFromSource If true, then delete segment from source\n    segmentation after copying.\n                       Default value is false.\n\\return Success flag\n"},
  {"GetContainedRepresentationNames", PyvtkSegmentation_GetContainedRepresentationNames, METH_VARARGS,
   "GetContainedRepresentationNames(self, representationNames:[str,\n    ...]) -> None\nC++: void GetContainedRepresentationNames(\n    std::vector<std::string> &representationNames)\n\nGet representation names present in this segmentation in an\noutput string vector Note: This assumes the first segment\ncontains the same type of representations as\n      all segments (this should be the case by design)\n"},
  {"ContainsRepresentation", PyvtkSegmentation_ContainsRepresentation, METH_VARARGS,
   "ContainsRepresentation(self, representationName:str) -> bool\nC++: bool ContainsRepresentation(std::string representationName)\n\nDetermine if segments contain a certain representation type Note:\nThis assumes the first segment contains the same type of\nrepresentations as\n      all segments (this should be the case by design)\n"},
  {"IsSourceRepresentationPolyData", PyvtkSegmentation_IsSourceRepresentationPolyData, METH_VARARGS,
   "IsSourceRepresentationPolyData(self) -> bool\nC++: bool IsSourceRepresentationPolyData()\n\nDetermine if source representation is poly data type\n"},
  {"IsMasterRepresentationPolyData", PyvtkSegmentation_IsMasterRepresentationPolyData, METH_VARARGS,
   "IsMasterRepresentationPolyData(self) -> bool\nC++: bool IsMasterRepresentationPolyData()\n\n\\deprecated Use IsSourceRepresentationPolyData instead.\n"},
  {"IsSourceRepresentationImageData", PyvtkSegmentation_IsSourceRepresentationImageData, METH_VARARGS,
   "IsSourceRepresentationImageData(self) -> bool\nC++: bool IsSourceRepresentationImageData()\n\nDetermine if source representation is (oriented) image data type\n"},
  {"IsMasterRepresentationImageData", PyvtkSegmentation_IsMasterRepresentationImageData, METH_VARARGS,
   "IsMasterRepresentationImageData(self) -> bool\nC++: bool IsMasterRepresentationImageData()\n\n\\deprecated Use IsSourceRepresentationImageData instead.\n"},
  {"InvalidateNonSourceRepresentations", PyvtkSegmentation_InvalidateNonSourceRepresentations, METH_VARARGS,
   "InvalidateNonSourceRepresentations(self) -> None\nC++: void InvalidateNonSourceRepresentations()\n\nInvalidate (remove) non-source representations in all the\nsegments if this segmentation node\n"},
  {"InvalidateNonMasterRepresentations", PyvtkSegmentation_InvalidateNonMasterRepresentations, METH_VARARGS,
   "InvalidateNonMasterRepresentations(self) -> None\nC++: void InvalidateNonMasterRepresentations()\n\n\\deprecated Use InvalidateNonSourceRepresentations instead.\n"},
  {"IsSharedBinaryLabelmap", PyvtkSegmentation_IsSharedBinaryLabelmap, METH_VARARGS,
   "IsSharedBinaryLabelmap(self, segmentID:str) -> bool\nC++: bool IsSharedBinaryLabelmap(std::string segmentID)\n\nMerged labelmap functions Shared labelmap utility functions\nReturns true if the binary labelmap representation is shared\n"},
  {"GetSegmentIDsSharingRepresentation", PyvtkSegmentation_GetSegmentIDsSharingRepresentation, METH_VARARGS,
   "GetSegmentIDsSharingRepresentation(self, originalSegmentId:str,\n    representationName:str, sharedSegmentIds:[str, ...],\n    includeOriginalSegmentId:bool=True) -> None\nC++: void GetSegmentIDsSharingRepresentation(\n    std::string originalSegmentId, std::string representationName,\n     std::vector<std::string> &sharedSegmentIds,\n    bool includeOriginalSegmentId=true)\n\nGets the segment IDs that are shared with the specified segment\n\\param originalSegmentId ID of the specified segment\n\\param representationName Representation to check for shared\n    segment IDs\n\\param sharedSegmentIds Output segment IDs\n\\param includeOriginalSegmentId If true, the original segment ID\n    is included in the output\n"},
  {"GetSegmentIDsSharingBinaryLabelmapRepresentation", PyvtkSegmentation_GetSegmentIDsSharingBinaryLabelmapRepresentation, METH_VARARGS,
   "GetSegmentIDsSharingBinaryLabelmapRepresentation(self,\n    originalSegmentId:str, sharedSegmentIds:[str, ...],\n    includeOriginalSegmentId:bool=True) -> None\nC++: void GetSegmentIDsSharingBinaryLabelmapRepresentation(\n    std::string originalSegmentId,\n    std::vector<std::string> &sharedSegmentIds,\n    bool includeOriginalSegmentId=true)\n\nGets the segment IDs that are shared with the specified segment\nbinary labelmap\n\\param originalSegmentId ID of the specified segment\n\\param sharedSegmentIds Output segment IDs\n\\param includeOriginalSegmentId If true, the original segment ID\n    is included in the output\n"},
  {"GetUniqueLabelValueForSharedLabelmap", PyvtkSegmentation_GetUniqueLabelValueForSharedLabelmap, METH_VARARGS,
   "GetUniqueLabelValueForSharedLabelmap(self, segmentId:str) -> int\nC++: int GetUniqueLabelValueForSharedLabelmap(\n    std::string segmentId)\nGetUniqueLabelValueForSharedLabelmap(self,\n    labelmap:vtkOrientedImageData) -> int\nC++: int GetUniqueLabelValueForSharedLabelmap(\n    vtkOrientedImageData *labelmap)\n\nGets a unique shared labelmap value for the specified segment\nCompares all of the other segments that are shared with the\nspecified segmentId to determine the a unique labelmap value\n"},
  {"MergeSegmentLabelmaps", PyvtkSegmentation_MergeSegmentLabelmaps, METH_VARARGS,
   "MergeSegmentLabelmaps(self, mergeSegmentIds:[str, ...]) -> None\nC++: void MergeSegmentLabelmaps(\n    std::vector<std::string> mergeSegmentIds)\n\nMerges the specified segments into the same shared labelmap This\nmethod can cause segments to overwrite each other during during\nmerge. Segments with a higher index will overwrite segments with\na lower index. If no segment IDs are specified, then all segments\nwill be shared\n"},
  {"SeparateSegmentLabelmap", PyvtkSegmentation_SeparateSegmentLabelmap, METH_VARARGS,
   "SeparateSegmentLabelmap(self, segmentId:str) -> None\nC++: void SeparateSegmentLabelmap(std::string segmentId)\n\nMoves an existing segment from a shared labelmap into a separate\nlabelmap containing only the specified segment\n"},
  {"ClearSegment", PyvtkSegmentation_ClearSegment, METH_VARARGS,
   "ClearSegment(self, segmentId:str) -> None\nC++: void ClearSegment(std::string segmentId)\n\nClears the segment representation. If the segment is in a shared\nlabelmap, it will be erased from the labelmap. Otherwise, the\nvtkDataObject will be initialized.\n"},
  {"GetNumberOfLayers", PyvtkSegmentation_GetNumberOfLayers, METH_VARARGS,
   "GetNumberOfLayers(self, representationName:str=...) -> int\nC++: int GetNumberOfLayers(std::string representationName=\"\")\n\nShared representation layer functions Get the number of unique\nvtkDataObject that are used for a particular representation type\nIf representationName is not specified, it will be set to the\nsource representation name\n"},
  {"GetLayerIndex", PyvtkSegmentation_GetLayerIndex, METH_VARARGS,
   "GetLayerIndex(self, segmentId:str, representationName:str=...)\n    -> int\nC++: int GetLayerIndex(std::string segmentId,\n    std::string representationName=\"\")\n\nGet the layer index for a particular segment If\nrepresentationName is not specified, it will be set to the source\nrepresentation name\n"},
  {"GetLayerDataObject", PyvtkSegmentation_GetLayerDataObject, METH_VARARGS,
   "GetLayerDataObject(self, layer:int, representationName:str=...)\n    -> vtkDataObject\nC++: vtkDataObject *GetLayerDataObject(int layer,\n    std::string representationName=\"\")\n\nGet the data object for a particular layer index If\nrepresentationName is not specified, it will be set to the source\nrepresentation name\n"},
  {"GetLayerObjects", PyvtkSegmentation_GetLayerObjects, METH_VARARGS,
   "GetLayerObjects(self, layerObjects:vtkCollection,\n    representationName:str=...) -> None\nC++: void GetLayerObjects(vtkCollection *layerObjects,\n    std::string representationName=\"\")\n\nGet a collection of all of the data objects in the segmentation\nIf representationName is not specified, it will be set to the\nsource representation name\n"},
  {"GetSegmentIDsForLayer", PyvtkSegmentation_GetSegmentIDsForLayer, METH_VARARGS,
   "GetSegmentIDsForLayer(self, layer:int, representationName:str=...)\n     -> (str, ...)\nC++: std::vector<std::string> GetSegmentIDsForLayer(int layer,\n    std::string representationName=\"\")\n\nGet the segmentIDs contained in the specified layer If\nrepresentationName is not specified, it will be set to the source\nrepresentation name\n"},
  {"GetSegmentIDsForDataObject", PyvtkSegmentation_GetSegmentIDsForDataObject, METH_VARARGS,
   "GetSegmentIDsForDataObject(self, dataObject:vtkDataObject,\n    representationName:str=...) -> (str, ...)\nC++: std::vector<std::string> GetSegmentIDsForDataObject(\n    vtkDataObject *dataObject,\n    std::string representationName=\"\")\n\nGet the segmentIDs that use a specific data object If\nrepresentationName is not specified, it will be set to the source\nrepresentation name\n"},
  {"CollapseBinaryLabelmaps", PyvtkSegmentation_CollapseBinaryLabelmaps, METH_VARARGS,
   "CollapseBinaryLabelmaps(self, forceToSingleLayer:bool=False)\n    -> None\nC++: void CollapseBinaryLabelmaps(bool forceToSingleLayer=false)\n\nReduce the binary labelmap representation to as few layers as\npossible.\n\\param forceToSingleLayer If false, then the layers will not be\n    overwritten by each other, if true then the layers can\n  overwrite each other, but the result is guaranteed to have one\nlayer\n"},
  {"CreateRepresentation", PyvtkSegmentation_CreateRepresentation, METH_VARARGS,
   "CreateRepresentation(self, targetRepresentationName:str,\n    alwaysConvert:bool=False) -> bool\nC++: bool CreateRepresentation(\n    const std::string &targetRepresentationName,\n    bool alwaysConvert=false)\nCreateRepresentation(self, path:vtkSegmentationConversionPath,\n    parameters:vtkSegmentationConversionParameters) -> bool\nC++: bool CreateRepresentation(\n    vtkSegmentationConversionPath *path,\n    vtkSegmentationConversionParameters *parameters)\n\nCreate a representation in all segments, using the conversion\npath with the lowest cost. The stored conversion parameters are\nused (which are the defaults if not changed by the user).\nConversion starts from the source representation. If a\nrepresentation along the path already exists then no conversion\nis performed. Note: The conversion functions are not in\nvtkSegmentationConverter, because\n      they need to know about the source representation which is\nsegmentation-\n      specific, and also to allow optimizations (steps before\nper-segment conversion).\n\\param targetRepresentationName Name of the representation to\n    create\n\\param alwaysConvert If true, then conversion takes place even if\ntarget representation exists. False by default.\n\\return true on success\n"},
  {"RemoveRepresentation", PyvtkSegmentation_RemoveRepresentation, METH_VARARGS,
   "RemoveRepresentation(self, representationName:str) -> None\nC++: void RemoveRepresentation(\n    const std::string &representationName)\n\nRemoves a representation from all segments if present\n"},
  {"CanAcceptRepresentation", PyvtkSegmentation_CanAcceptRepresentation, METH_VARARGS,
   "CanAcceptRepresentation(self, representationName:str) -> bool\nC++: bool CanAcceptRepresentation(std::string representationName)\n\nDetermine if the segmentation is ready to accept a certain type\nof representation by copy/move or import. It can accept a\nrepresentation if it is the source representation of this segment\nor it is possible to convert to source representation (or the\nsegmentation is empty).\n"},
  {"CanAcceptSegment", PyvtkSegmentation_CanAcceptSegment, METH_VARARGS,
   "CanAcceptSegment(self, segment:vtkSegment) -> bool\nC++: bool CanAcceptSegment(vtkSegment *segment)\n\nDetermine if the segmentation is ready to accept a certain\nsegment. It can accept a segment if it contains a representation\nthat is acceptable, or if it is empty.\n"},
  {"AddEmptySegment", PyvtkSegmentation_AddEmptySegment, METH_VARARGS,
   "AddEmptySegment(self, segmentId:str=..., segmentName:str=...,\n    color:[float, float, float]=...) -> str\nC++: std::string AddEmptySegment(std::string segmentId=\"\",\n    std::string segmentName=\"\", double color[3]=nullptr)\n\nAdd empty segment containing empty instances of the contained\nrepresentations\n\\param segmentId ID of added segment. If empty then a default ID\n    will be generated \\sa GenerateUniqueSegmentId\n\\param segmentName name of added segment. If empty then the\n    segmentId will be used as name.\n\\param color of added segment. If not specified then empty then\n    vtkSegment::SEGMENT_COLOR_INVALID is used.\n\\return ID of the added segment. Empty on failure\n"},
  {"GetPossibleConversions", PyvtkSegmentation_GetPossibleConversions, METH_VARARGS,
   "GetPossibleConversions(self, targetRepresentationName:str,\n    paths:vtkSegmentationConversionPaths) -> None\nC++: void GetPossibleConversions(\n    const std::string &targetRepresentationName,\n    vtkSegmentationConversionPaths *paths)\n\nGet all possible conversions between the source representation\nand a specified target representation\n"},
  {"SetConversionParameter", PyvtkSegmentation_SetConversionParameter, METH_VARARGS,
   "SetConversionParameter(self, name:str, value:str) -> None\nC++: void SetConversionParameter(const std::string &name,\n    const std::string &value)\n\nSet a conversion parameter to all rules having this parameter\n"},
  {"GetConversionParameter", PyvtkSegmentation_GetConversionParameter, METH_VARARGS,
   "GetConversionParameter(self, name:str) -> str\nC++: std::string GetConversionParameter(const std::string &name)\n\nGet a conversion parameter from first rule containing this\nparameter Note: all parameters with the same name should contain\nthe same value\n"},
  {"GetConversionParametersForPath", PyvtkSegmentation_GetConversionParametersForPath, METH_VARARGS,
   "GetConversionParametersForPath(self,\n    conversionParameters:vtkSegmentationConversionParameters,\n    path:vtkSegmentationConversionPath) -> None\nC++: void GetConversionParametersForPath(\n    vtkSegmentationConversionParameters *conversionParameters,\n    vtkSegmentationConversionPath *path)\n\nGet names of all conversion parameters used by the selected\nconversion path\n"},
  {"SerializeAllConversionParameters", PyvtkSegmentation_SerializeAllConversionParameters, METH_VARARGS,
   "SerializeAllConversionParameters(self) -> str\nC++: std::string SerializeAllConversionParameters()\n\nSerialize all conversion parameters. The resulting string can be\nparsed in a segmentation object using /sa\nDeserializeConversionParameters\n"},
  {"DeserializeConversionParameters", PyvtkSegmentation_DeserializeConversionParameters, METH_VARARGS,
   "DeserializeConversionParameters(self,\n    conversionParametersString:str) -> None\nC++: void DeserializeConversionParameters(\n    std::string conversionParametersString)\n\nParse conversion parameters in string and set it to the\nsegmentation converter Such a string can be constructed in a\nsegmentation object using /sa SerializeAllConversionParameters\n"},
  {"GetSourceRepresentationName", PyvtkSegmentation_GetSourceRepresentationName, METH_VARARGS,
   "GetSourceRepresentationName(self) -> str\nC++: virtual std::string GetSourceRepresentationName()\n\nGet source representation name\n"},
  {"SetSourceRepresentationName", PyvtkSegmentation_SetSourceRepresentationName, METH_VARARGS,
   "SetSourceRepresentationName(self, representationName:str) -> None\nC++: virtual void SetSourceRepresentationName(\n    const std::string &representationName)\n\nSet source representation name. Need to make sure before setting\nthe name that the newly set source representation exists in the\nsegmentation! Use \\sa CreateRepresentation for that.\n"},
  {"SetMasterRepresentationName", PyvtkSegmentation_SetMasterRepresentationName, METH_VARARGS,
   "SetMasterRepresentationName(self, representationName:str) -> None\nC++: virtual void SetMasterRepresentationName(\n    const std::string &representationName)\n\n\\deprecated Use SetSourceRepresentationName instead.\n"},
  {"GetMasterRepresentationName", PyvtkSegmentation_GetMasterRepresentationName, METH_VARARGS,
   "GetMasterRepresentationName(self) -> str\nC++: virtual std::string GetMasterRepresentationName()\n\n\\deprecated Use SetSourceRepresentationName instead.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSegmentation_Doc =
  "vtkSegmentation - This class encapsulates a segmentation that can\ncontain multiple segments and multiple representations for each\nsegment\n\n"
  "Superclass: vtkObject\n\n"
  "\\details\n"
  "  The primary purpose of this class is to serve as a container to\n"
  "store the segments (in labelmap analogy the \"labels\").\n"
  "  Also provides generic functions on the segmentation level. Performs\n"
  "conversion to a specified representation, extracts\n"
  "  geometry information etc.\n\n\n"
  "  Main points to remember:\n"
  "* Each segment has the same set of representations. This means that\n"
  "  if segments are copied/moved between segmentations, then conversion\n"
  "will take place if possible (if not then copy will fail)\n"
  "* Default representations types are\n"
  "* Binary labelmap (vtkOrientedImageData)\n"
  "* Closed surface (vtkPolyData)\n"
  "* Fractional labelmap (vtkOrientedImageData)\n"
  "* Additional representations can be defined (SlicerRT adds two:\n"
  "  Planar contour, Ribbon model)\n"
  "  (https://github.com/SlicerRt/SlicerRT/tree/master/DicomRtImportExpor\n"
  "  t/ConversionRules)\n"
  "* Conversion between representations are driven by a conversion graph\n"
  "in which the nodes are the representations and the edges are\n"
  "  conversion rules\n"
  "* When converting with the default method (\\sa CreateRepresentation\n"
  "  without specifying a path), then the path with the lowest cost is\n"
  "  used (rules have a cost field that gives a ballpark value for the\n"
  "  conversion cost)\n"
  "* Representation types can be defined by registering conversion\n"
  "  algorithms (rules) that specify their source and target\n"
  "  representations, and an estimated cost metric\n"
  "* Source representation\n"
  "* Privileged representation type. Can be any of the available\n"
  "  representations, but usually it's the original representation of\n"
  "  the data (binary labelmap for editing, binary or fractional\n"
  "  labelmap for DICOM SEG, planar contour for DICOM RT, etc.)\n"
  "* Using the proper source representation ensures that no information\n"
  "  is lost, which is crucial to avoid discrepancies that can never be\n"
  "  solved when data is permanently lost in conversion\n"
  "* Properties\n"
  "* All conversions use it as source (up-to-date representations along\n"
  "  conversion path are used if available)\n"
  "* When changed all other representations are invalidated (and is\n"
  "  re-converted later from master)\n"
  "* It is the representation that is saved to disk\n\n\n"
  " Schematic illustration of the segmentation container:\n\n\n"
  "                          \n"
  "+=============================================+\n"
  "                           |             Patient (vtkSegmentation)   \n"
  "   |\n"
  "                          \n"
  "+======================+======================+\n"
  "                           |  Brain (vtkSegment)  |  Tumor\n"
  "(vtkSegment)  |\n"
  "                          \n"
  "+======================+======================+\n"
  "           Binary labelmap | vtkOrientedImageData |\n"
  "vtkOrientedImageData |\n"
  "                          \n"
  "+----------------------+----------------------+\n"
  "            Closed surface | vtkPolyData          | vtkPolyData      \n"
  "   |\n"
  "                          \n"
  "+----------------------+----------------------+\n"
  "     Custom representation | vtkDataObject        | vtkDataObject    \n"
  "   |\n"
  "                          \n"
  "+----------------------+----------------------+\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegmentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkSegmentation", // tp_name
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
  PyvtkSegmentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSegmentation_StaticNew()
{
  return vtkSegmentation::New();
}

PyObject *PyvtkSegmentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSegmentation_Type, PyvtkSegmentation_Methods,
    "vtkSegmentation",
 &PyvtkSegmentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 13; c++)
  {
    static const struct { const char *name; int value; }
      constants[13] = {
        { "SourceRepresentationModified", vtkSegmentation::SourceRepresentationModified },
        { "RepresentationModified", vtkSegmentation::RepresentationModified },
        { "SegmentAdded", vtkSegmentation::SegmentAdded },
        { "SegmentRemoved", vtkSegmentation::SegmentRemoved },
        { "SegmentModified", vtkSegmentation::SegmentModified },
        { "ContainedRepresentationNamesModified", vtkSegmentation::ContainedRepresentationNamesModified },
        { "SegmentsOrderModified", vtkSegmentation::SegmentsOrderModified },
        { "EXTENT_REFERENCE_GEOMETRY", vtkSegmentation::EXTENT_REFERENCE_GEOMETRY },
        { "EXTENT_UNION_OF_SEGMENTS", vtkSegmentation::EXTENT_UNION_OF_SEGMENTS },
        { "EXTENT_UNION_OF_SEGMENTS_PADDED", vtkSegmentation::EXTENT_UNION_OF_SEGMENTS_PADDED },
        { "EXTENT_UNION_OF_EFFECTIVE_SEGMENTS", vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS },
        { "EXTENT_UNION_OF_EFFECTIVE_SEGMENTS_PADDED", vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS_PADDED },
        { "EXTENT_UNION_OF_EFFECTIVE_SEGMENTS_AND_REFERENCE_GEOMETRY", vtkSegmentation::EXTENT_UNION_OF_EFFECTIVE_SEGMENTS_AND_REFERENCE_GEOMETRY },
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

void PyVTKAddFile_vtkSegmentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSegmentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegmentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

