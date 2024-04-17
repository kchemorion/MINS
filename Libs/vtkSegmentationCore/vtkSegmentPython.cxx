// python wrapper for vtkSegment
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSegment.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSegment(PyObject *dict); }
extern "C" { PyObject *PyvtkSegment_ClassNew(); }


static PyObject *
PyvtkSegment_GetTerminologyEntryTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTerminologyEntryTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSegment::GetTerminologyEntryTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegment::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegment::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegment *tempr = vtkSegment::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegment *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegment::NewInstance());

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
PyvtkSegment_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSegment::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSegment::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  vtkSegment *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegment"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkSegment::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_DeepCopyMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopyMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  vtkSegment *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSegment"))
  {
    if (ap.IsBound())
    {
      op->DeepCopyMetadata(temp0);
    }
    else
    {
      op->vtkSegment::DeepCopyMetadata(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

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
      op->vtkSegment::GetBounds(temp0);
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
PyvtkSegment_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetRepresentation(temp0) :
      op->vtkSegment::GetRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_AddRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  std::string temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->AddRepresentation(temp0, temp1) :
      op->vtkSegment::AddRepresentation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_RemoveRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveRepresentation(temp0) :
      op->vtkSegment::RemoveRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_RemoveAllRepresentations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRepresentations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  std::string temp0 = "";
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->RemoveAllRepresentations(temp0);
    }
    else
    {
      op->vtkSegment::RemoveAllRepresentations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_SetTag_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTag(temp0, temp1);
    }
    else
    {
      op->vtkSegment::SetTag(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSegment_SetTag_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  std::string temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTag(temp0, temp1);
    }
    else
    {
      op->vtkSegment::SetTag(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSegment_SetTag_Methods[] = {
  {"SetTag", PyvtkSegment_SetTag_s1, METH_VARARGS,
   "@ss"},
  {"SetTag", PyvtkSegment_SetTag_s2, METH_VARARGS,
   "@si"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSegment_SetTag(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSegment_SetTag_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTag");
  return nullptr;
}


static PyObject *
PyvtkSegment_RemoveTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveTag(temp0);
    }
    else
    {
      op->vtkSegment::RemoveTag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_GetTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTag(temp0, temp1) :
      op->vtkSegment::GetTag(temp0, temp1));

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


static PyObject *
PyvtkSegment_HasTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTag(temp0) :
      op->vtkSegment::HasTag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_GetContainedRepresentationNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainedRepresentationNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

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
      op->vtkSegment::GetContainedRepresentationNames(temp0);
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
PyvtkSegment_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkSegment::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetName(temp0);
    }
    else
    {
      op->vtkSegment::SetName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkSegment::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSegment::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSegment_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkSegment::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSegment_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSegment_SetColor_s1(self, args);
    case 1:
      return PyvtkSegment_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkSegment_GetNameAutoGenerated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNameAutoGenerated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNameAutoGenerated() :
      op->vtkSegment::GetNameAutoGenerated());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_SetNameAutoGenerated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNameAutoGenerated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNameAutoGenerated(temp0);
    }
    else
    {
      op->vtkSegment::SetNameAutoGenerated(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_NameAutoGeneratedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NameAutoGeneratedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NameAutoGeneratedOn();
    }
    else
    {
      op->vtkSegment::NameAutoGeneratedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_NameAutoGeneratedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NameAutoGeneratedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NameAutoGeneratedOff();
    }
    else
    {
      op->vtkSegment::NameAutoGeneratedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_GetColorAutoGenerated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorAutoGenerated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorAutoGenerated() :
      op->vtkSegment::GetColorAutoGenerated());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_SetColorAutoGenerated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorAutoGenerated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorAutoGenerated(temp0);
    }
    else
    {
      op->vtkSegment::SetColorAutoGenerated(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_ColorAutoGeneratedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorAutoGeneratedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorAutoGeneratedOn();
    }
    else
    {
      op->vtkSegment::ColorAutoGeneratedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_ColorAutoGeneratedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorAutoGeneratedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorAutoGeneratedOff();
    }
    else
    {
      op->vtkSegment::ColorAutoGeneratedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_GetLabelValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelValue() :
      op->vtkSegment::GetLabelValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegment_SetLabelValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegment *op = static_cast<vtkSegment *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelValue(temp0);
    }
    else
    {
      op->vtkSegment::SetLabelValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSegment_Methods[] = {
  {"GetTerminologyEntryTagName", PyvtkSegment_GetTerminologyEntryTagName, METH_VARARGS,
   "GetTerminologyEntryTagName() -> str\nC++: static const char *GetTerminologyEntryTagName()\n\n"},
  {"IsTypeOf", PyvtkSegment_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegment_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegment_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSegment\nC++: static vtkSegment *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegment_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSegment\nC++: vtkSegment *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSegment_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSegment_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeepCopy", PyvtkSegment_DeepCopy, METH_VARARGS,
   "DeepCopy(self, source:vtkSegment) -> None\nC++: virtual void DeepCopy(vtkSegment *source)\n\nDeep copy one segment into another\n"},
  {"DeepCopyMetadata", PyvtkSegment_DeepCopyMetadata, METH_VARARGS,
   "DeepCopyMetadata(self, source:vtkSegment) -> None\nC++: virtual void DeepCopyMetadata(vtkSegment *source)\n\nDeep copy metadata (i.e., all data but representations) one\nsegment into another\n"},
  {"GetBounds", PyvtkSegment_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: virtual void GetBounds(double bounds[6])\n\nGet bounding box in global RAS in the form (xmin,xmax, ymin,ymax,\nzmin,zmax). For image data bound is computed for the voxel corner\npoints (not voxel center points).\n"},
  {"GetRepresentation", PyvtkSegment_GetRepresentation, METH_VARARGS,
   "GetRepresentation(self, name:str) -> vtkDataObject\nC++: vtkDataObject *GetRepresentation(std::string name)\n\nGet representation of a given type. This class is not responsible\nfor conversion, only storage!\n\\param name Representation name. Default representation names can\nbe queried from \\sa vtkSegmentationConverter,\n  for example by calling\nvtkSegmentationConverter::GetSegmentationBinaryLabelmapRepresentat\nionName()\n\\return The specified representation object, nullptr if not\n    present\n"},
  {"AddRepresentation", PyvtkSegment_AddRepresentation, METH_VARARGS,
   "AddRepresentation(self, type:str, representation:vtkDataObject)\n    -> bool\nC++: bool AddRepresentation(std::string type,\n    vtkDataObject *representation)\n\nAdd representation\n\\return True if the representation is changed.\n"},
  {"RemoveRepresentation", PyvtkSegment_RemoveRepresentation, METH_VARARGS,
   "RemoveRepresentation(self, name:str) -> bool\nC++: bool RemoveRepresentation(std::string name)\n\nRemove representation of given type.\n\\return True if there was a representation that was removed.\n"},
  {"RemoveAllRepresentations", PyvtkSegment_RemoveAllRepresentations, METH_VARARGS,
   "RemoveAllRepresentations(self,\n    exceptionRepresentationName:str=...) -> None\nC++: void RemoveAllRepresentations(\n    std::string exceptionRepresentationName=\"\")\n\nRemove all representations except one if specified. Fires only\none Modified event\n\\param exceptionRepresentationName Exception name that will not\n    be removed\n  (e.g. invalidate non-source representations), empty by default\n"},
  {"SetTag", PyvtkSegment_SetTag, METH_VARARGS,
   "SetTag(self, tag:str, value:str) -> None\nC++: void SetTag(std::string tag, std::string value)\nSetTag(self, tag:str, value:int) -> None\nC++: void SetTag(std::string tag, int value)\n\nSet/add tag\n"},
  {"RemoveTag", PyvtkSegment_RemoveTag, METH_VARARGS,
   "RemoveTag(self, tag:str) -> None\nC++: void RemoveTag(std::string tag)\n\nRemove tag\n"},
  {"GetTag", PyvtkSegment_GetTag, METH_VARARGS,
   "GetTag(self, tag:str, value:str) -> bool\nC++: bool GetTag(std::string tag, std::string &value)\n\nGet tag\n\\param tag Name of requested tag\n\\param value Output argument for the value of the tag if found\n\\return True if tag is found, false otherwise\n"},
  {"HasTag", PyvtkSegment_HasTag, METH_VARARGS,
   "HasTag(self, tag:str) -> bool\nC++: bool HasTag(std::string tag)\n\nDetermine if a tag is present\n"},
  {"GetContainedRepresentationNames", PyvtkSegment_GetContainedRepresentationNames, METH_VARARGS,
   "GetContainedRepresentationNames(self, representationNames:[str,\n    ...]) -> None\nC++: void GetContainedRepresentationNames(\n    std::vector<std::string> &representationNames)\n\nGet representation names present in this segment in an output\nstring vector\n"},
  {"GetName", PyvtkSegment_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual char *GetName()\n\nName (e.g. segment label in DICOM Segmentation Object) This is\nthe default identifier of the segment within segmentation, so\nneeds to be unique within a segmentation\n"},
  {"SetName", PyvtkSegment_SetName, METH_VARARGS,
   "SetName(self, _arg:str) -> None\nC++: virtual void SetName(const char *_arg)\n\n"},
  {"GetColor", PyvtkSegment_GetColor, METH_VARARGS,
   "GetColor(self) -> (float, float, float)\nC++: virtual double *GetColor()\n\nColor The actual color the segment is shown in. Can be overridden\nin the display node to allow displaying segment in selected views\nin a different color\n"},
  {"SetColor", PyvtkSegment_SetColor, METH_VARARGS,
   "SetColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetColor(double _arg1, double _arg2,\n    double _arg3)\nSetColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetColor(const double _arg[3])\n\n"},
  {"GetNameAutoGenerated", PyvtkSegment_GetNameAutoGenerated, METH_VARARGS,
   "GetNameAutoGenerated(self) -> bool\nC++: virtual bool GetNameAutoGenerated()\n\nFlag indicating whether name was automatically generated. False\nafter user manually overrides. True by default\n"},
  {"SetNameAutoGenerated", PyvtkSegment_SetNameAutoGenerated, METH_VARARGS,
   "SetNameAutoGenerated(self, _arg:bool) -> None\nC++: virtual void SetNameAutoGenerated(bool _arg)\n\n"},
  {"NameAutoGeneratedOn", PyvtkSegment_NameAutoGeneratedOn, METH_VARARGS,
   "NameAutoGeneratedOn(self) -> None\nC++: virtual void NameAutoGeneratedOn()\n\n"},
  {"NameAutoGeneratedOff", PyvtkSegment_NameAutoGeneratedOff, METH_VARARGS,
   "NameAutoGeneratedOff(self) -> None\nC++: virtual void NameAutoGeneratedOff()\n\n"},
  {"GetColorAutoGenerated", PyvtkSegment_GetColorAutoGenerated, METH_VARARGS,
   "GetColorAutoGenerated(self) -> bool\nC++: virtual bool GetColorAutoGenerated()\n\nFlag indicating whether color was automatically generated. False\nafter user manually overrides. True by default\n"},
  {"SetColorAutoGenerated", PyvtkSegment_SetColorAutoGenerated, METH_VARARGS,
   "SetColorAutoGenerated(self, _arg:bool) -> None\nC++: virtual void SetColorAutoGenerated(bool _arg)\n\n"},
  {"ColorAutoGeneratedOn", PyvtkSegment_ColorAutoGeneratedOn, METH_VARARGS,
   "ColorAutoGeneratedOn(self) -> None\nC++: virtual void ColorAutoGeneratedOn()\n\n"},
  {"ColorAutoGeneratedOff", PyvtkSegment_ColorAutoGeneratedOff, METH_VARARGS,
   "ColorAutoGeneratedOff(self) -> None\nC++: virtual void ColorAutoGeneratedOff()\n\n"},
  {"GetLabelValue", PyvtkSegment_GetLabelValue, METH_VARARGS,
   "GetLabelValue(self) -> int\nC++: virtual int GetLabelValue()\n\nValue in the binary labelmap that is used to represent the\nsegment.\n"},
  {"SetLabelValue", PyvtkSegment_SetLabelValue, METH_VARARGS,
   "SetLabelValue(self, _arg:int) -> None\nC++: virtual void SetLabelValue(int _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSegment_Doc =
  "vtkSegment - This class encapsulates a segment that is part of a\nsegmentation\n\n"
  "Superclass: vtkObject\n\n"
  "\\details\n"
  "  A \\sa vtkSegmentation can contain multiple segments (this class)\n"
  "each of which represent\n"
  "  one anatomical or other structure (in labelmap terms, a \"label\").\n"
  "Each segmentation can\n"
  "  contain the structure in multiple representations.\n"
  "  Default representation types include Binary labelmap and Closed\n"
  "surface, but additional\n"
  "  custom representations can be added (see description of \\sa\n"
  "vtkSegmentation).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegment_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSegmentationCorePython.vtkSegment", // tp_name
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
  PyvtkSegment_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSegment_StaticNew()
{
  return vtkSegment::New();
}

PyObject *PyvtkSegment_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSegment_Type, PyvtkSegment_Methods,
    "vtkSegment",
 &PyvtkSegment_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSegment(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSegment_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegment", o) != 0)
  {
    Py_DECREF(o);
  }

}

