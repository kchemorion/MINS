// python wrapper for vtkMRMLMarkupsJsonElement
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLMarkupsJsonElement.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsJsonElement(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsJsonElement_ClassNew(); }


static PyObject *
PyvtkMRMLMarkupsJsonElement_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsJsonElement::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsJsonElement::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsJsonElement *tempr = vtkMRMLMarkupsJsonElement::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsJsonElement *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsJsonElement::NewInstance());

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
PyvtkMRMLMarkupsJsonElement_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsJsonElement::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsJsonElement::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetSchema(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSchema");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetSchema() :
      op->vtkMRMLMarkupsJsonElement::GetSchema());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_HasMember(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMember");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasMember(temp0) :
      op->vtkMRMLMarkupsJsonElement::HasMember(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetStringProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetStringProperty(temp0) :
      op->vtkMRMLMarkupsJsonElement::GetStringProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsJsonElement_GetStringProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetStringProperty(temp0, temp1) :
      op->vtkMRMLMarkupsJsonElement::GetStringProperty(temp0, temp1));

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
PyvtkMRMLMarkupsJsonElement_GetStringProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsJsonElement_GetStringProperty_s1(self, args);
    case 2:
      return PyvtkMRMLMarkupsJsonElement_GetStringProperty_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetStringProperty");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetBoolProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoolProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBoolProperty(temp0) :
      op->vtkMRMLMarkupsJsonElement::GetBoolProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetDoubleProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoubleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDoubleProperty(temp0, temp1) :
      op->vtkMRMLMarkupsJsonElement::GetDoubleProperty(temp0, temp1));

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
PyvtkMRMLMarkupsJsonElement_GetDoubleProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoubleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDoubleProperty(temp0) :
      op->vtkMRMLMarkupsJsonElement::GetDoubleProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsJsonElement_GetDoubleProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLMarkupsJsonElement_GetDoubleProperty_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsJsonElement_GetDoubleProperty_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDoubleProperty");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetIntProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIntProperty(temp0, temp1) :
      op->vtkMRMLMarkupsJsonElement::GetIntProperty(temp0, temp1));

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
PyvtkMRMLMarkupsJsonElement_GetIntProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntProperty(temp0) :
      op->vtkMRMLMarkupsJsonElement::GetIntProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsJsonElement_GetIntProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLMarkupsJsonElement_GetIntProperty_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsJsonElement_GetIntProperty_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetIntProperty");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2 = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetVectorProperty(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsJsonElement::GetVectorProperty(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetMatrix4x4Property(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix4x4Property");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 16;
  double temp1[16];
  double save1[16];
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetMatrix4x4Property(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsJsonElement::GetMatrix4x4Property(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetStringVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStringVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->GetStringVectorProperty(temp0, temp1) :
      op->vtkMRMLMarkupsJsonElement::GetStringVectorProperty(temp0, temp1));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetCodedEntryProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCodedEntryProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCodedEntry *tempr = (ap.IsBound() ?
      op->GetCodedEntryProperty(temp0) :
      op->vtkMRMLMarkupsJsonElement::GetCodedEntryProperty(temp0));

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
PyvtkMRMLMarkupsJsonElement_GetDoubleArrayProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDoubleArrayProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetDoubleArrayProperty(temp0) :
      op->vtkMRMLMarkupsJsonElement::GetDoubleArrayProperty(temp0));

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
PyvtkMRMLMarkupsJsonElement_GetArrayItemsStringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayItemsStringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  std::vector<std::string> temp2(ap.GetArgSize(2));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2.data(), temp2.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->GetArrayItemsStringProperty(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsJsonElement::GetArrayItemsStringProperty(temp0, temp1, temp2));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetArrayProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLMarkupsJsonElement *tempr = (ap.IsBound() ?
      op->GetArrayProperty(temp0) :
      op->vtkMRMLMarkupsJsonElement::GetArrayProperty(temp0));

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
PyvtkMRMLMarkupsJsonElement_GetObjectProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLMarkupsJsonElement *tempr = (ap.IsBound() ?
      op->GetObjectProperty(temp0) :
      op->vtkMRMLMarkupsJsonElement::GetObjectProperty(temp0));

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
PyvtkMRMLMarkupsJsonElement_IsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsArray() :
      op->vtkMRMLMarkupsJsonElement::IsArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetArraySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArraySize() :
      op->vtkMRMLMarkupsJsonElement::GetArraySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_GetArrayItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLMarkupsJsonElement *tempr = (ap.IsBound() ?
      op->GetArrayItem(temp0) :
      op->vtkMRMLMarkupsJsonElement::GetArrayItem(temp0));

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
PyvtkMRMLMarkupsJsonElement_GetUserMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMessageCollection *tempr = (ap.IsBound() ?
      op->GetUserMessages() :
      op->vtkMRMLMarkupsJsonElement::GetUserMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonElement_HasErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonElement *op = static_cast<vtkMRMLMarkupsJsonElement *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasErrors() :
      op->vtkMRMLMarkupsJsonElement::HasErrors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsJsonElement_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsJsonElement_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsJsonElement_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsJsonElement_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsJsonElement\nC++: static vtkMRMLMarkupsJsonElement *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsJsonElement_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsJsonElement\nC++: vtkMRMLMarkupsJsonElement *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsJsonElement_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsJsonElement_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetSchema", PyvtkMRMLMarkupsJsonElement_GetSchema, METH_VARARGS,
   "GetSchema(self) -> str\nC++: std::string GetSchema()\n\nGet the JSON schema name\n"},
  {"HasMember", PyvtkMRMLMarkupsJsonElement_HasMember, METH_VARARGS,
   "HasMember(self, propertyName:str) -> bool\nC++: bool HasMember(const char *propertyName)\n\nReturns true if the JSON object contains a member by this name.\n"},
  {"GetStringProperty", PyvtkMRMLMarkupsJsonElement_GetStringProperty, METH_VARARGS,
   "GetStringProperty(self, propertyName:str) -> str\nC++: std::string GetStringProperty(const char *propertyName)\nGetStringProperty(self, propertyName:str, propertyValue:str)\n    -> bool\nC++: bool GetStringProperty(const char *propertyName,\n    std::string &propertyValue)\n\nGet string property value. Returns empty string if no such string\nproperty is found.\n"},
  {"GetBoolProperty", PyvtkMRMLMarkupsJsonElement_GetBoolProperty, METH_VARARGS,
   "GetBoolProperty(self, propertyName:str) -> bool\nC++: bool GetBoolProperty(const char *propertyName)\n\nGet Boolean property value\n"},
  {"GetDoubleProperty", PyvtkMRMLMarkupsJsonElement_GetDoubleProperty, METH_VARARGS,
   "GetDoubleProperty(self, propertyName:str, propertyValue:float)\n    -> bool\nC++: bool GetDoubleProperty(const char *propertyName,\n    double &propertyValue)\nGetDoubleProperty(self, propertyName:str) -> float\nC++: double GetDoubleProperty(const char *propertyName)\n\nGet double-precision floating point property value. If a double\nproperty by the specified name is found then set it in\npropertyValue and return true. If a double property by the\nspecified name is not found then return false.\n"},
  {"GetIntProperty", PyvtkMRMLMarkupsJsonElement_GetIntProperty, METH_VARARGS,
   "GetIntProperty(self, propertyName:str, propertyValue:int) -> bool\nC++: bool GetIntProperty(const char *propertyName,\n    int &propertyValue)\nGetIntProperty(self, propertyName:str) -> int\nC++: int GetIntProperty(const char *propertyName)\n\nGet integer property value. If an integer property by the\nspecified name is found then set it in propertyValue and return\ntrue. If an integer double property by the specified name is not\nfound then return false.\n"},
  {"GetVectorProperty", PyvtkMRMLMarkupsJsonElement_GetVectorProperty, METH_VARARGS,
   "GetVectorProperty(self, propertyName:str, v:[float, ...],\n    numberOfComponents:int=3) -> bool\nC++: bool GetVectorProperty(const char *propertyName, double *v,\n    int numberOfComponents=3)\n\nGet a fixed-size vector of floating point values from a property.\nIf no such property is found or it is not the right type then\nfalse is returned.\n"},
  {"GetMatrix4x4Property", PyvtkMRMLMarkupsJsonElement_GetMatrix4x4Property, METH_VARARGS,
   "GetMatrix4x4Property(self, propertyName:str, v:[float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float], flipRasLps:bool) -> bool\nC++: bool GetMatrix4x4Property(const char *propertyName,\n    double v[16], bool flipRasLps)\n\nGet 4x4 matrix from a property. If no such property is found or\nit is not the right type then false is returned. If flipRasLps is\nset to true then the matrix is converted between LPS/RAS\ncoordinate system (multiplied by diag(-1,-1,1,1) matrix).\n"},
  {"GetStringVectorProperty", PyvtkMRMLMarkupsJsonElement_GetStringVectorProperty, METH_VARARGS,
   "GetStringVectorProperty(self, propertyName:str, arrayValues:[str,\n    ...]) -> bool\nC++: bool GetStringVectorProperty(const char *propertyName,\n    std::vector<std::string> &arrayValues)\n\nGet a vector of string values from a property. If no such\nproperty is found or it is not the right type then false is\nreturned.\n"},
  {"GetCodedEntryProperty", PyvtkMRMLMarkupsJsonElement_GetCodedEntryProperty, METH_VARARGS,
   "GetCodedEntryProperty(self, propertyName:str) -> vtkCodedEntry\nC++: vtkCodedEntry *GetCodedEntryProperty(\n    const char *propertyName)\n\nGet a coded entry object from a property. If no such property is\nfound or it is not the right type then nullptr is returned. Only\nin C++: The caller must take ownership of the returned object.\n"},
  {"GetDoubleArrayProperty", PyvtkMRMLMarkupsJsonElement_GetDoubleArrayProperty, METH_VARARGS,
   "GetDoubleArrayProperty(self, propertyName:str) -> vtkDoubleArray\nC++: vtkDoubleArray *GetDoubleArrayProperty(\n    const char *propertyName)\n\nGet a variable-size, potentially multi-component floating-point\nvector from a property. If no such property is found or it is not\nthe right type then nullptr is returned. Only in C++: The caller\nmust take ownership of the returned object.\n"},
  {"GetArrayItemsStringProperty", PyvtkMRMLMarkupsJsonElement_GetArrayItemsStringProperty, METH_VARARGS,
   "GetArrayItemsStringProperty(self, arrayName:str, propertyName:str,\n     propertyValues:[str, ...]) -> bool\nC++: bool GetArrayItemsStringProperty(const char *arrayName,\n    const char *propertyName,\n    std::vector<std::string> &propertyValues)\n\nGet property values from each item of an array. If no such\nproperty is found or it is not the right type then false is\nreturned.\n"},
  {"GetArrayProperty", PyvtkMRMLMarkupsJsonElement_GetArrayProperty, METH_VARARGS,
   "GetArrayProperty(self, arrayName:str) -> vtkMRMLMarkupsJsonElement\nC++: vtkMRMLMarkupsJsonElement *GetArrayProperty(\n    const char *arrayName)\n\nGet an array element from a property. If no such property is\nfound or it is not the right type then nullptr is returned. Only\nin C++: The caller must take ownership of the returned object.\n"},
  {"GetObjectProperty", PyvtkMRMLMarkupsJsonElement_GetObjectProperty, METH_VARARGS,
   "GetObjectProperty(self, objectName:str)\n    -> vtkMRMLMarkupsJsonElement\nC++: vtkMRMLMarkupsJsonElement *GetObjectProperty(\n    const char *objectName)\n\nGet an object element from a property. If no such property is\nfound or it is not the right type then nullptr is returned. Only\nin C++: The caller must take ownership of the returned object.\n"},
  {"IsArray", PyvtkMRMLMarkupsJsonElement_IsArray, METH_VARARGS,
   "IsArray(self) -> bool\nC++: bool IsArray()\n\nReturns true if this element is an array.\n"},
  {"GetArraySize", PyvtkMRMLMarkupsJsonElement_GetArraySize, METH_VARARGS,
   "GetArraySize(self) -> int\nC++: int GetArraySize()\n\nReturns the number of elements in this array.\n"},
  {"GetArrayItem", PyvtkMRMLMarkupsJsonElement_GetArrayItem, METH_VARARGS,
   "GetArrayItem(self, childItemIndex:int)\n    -> vtkMRMLMarkupsJsonElement\nC++: vtkMRMLMarkupsJsonElement *GetArrayItem(int childItemIndex)\n\nReturns the n-th elements in this array. Only in C++: The caller\nmust take ownership of the returned object.\n"},
  {"GetUserMessages", PyvtkMRMLMarkupsJsonElement_GetUserMessages, METH_VARARGS,
   "GetUserMessages(self) -> vtkMRMLMessageCollection\nC++: virtual vtkMRMLMessageCollection *GetUserMessages()\n\nReturns user-displayable messages that may contain details about\nany failed operation.\n"},
  {"HasErrors", PyvtkMRMLMarkupsJsonElement_HasErrors, METH_VARARGS,
   "HasErrors(self) -> bool\nC++: bool HasErrors()\n\nReturns true if user messages contain error messages.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsJsonElement_Doc =
  "vtkMRMLMarkupsJsonElement - Represents a json object or list.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsJsonElement_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsJsonElement", // tp_name
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
  PyvtkMRMLMarkupsJsonElement_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsJsonElement_StaticNew()
{
  return vtkMRMLMarkupsJsonElement::New();
}

PyObject *PyvtkMRMLMarkupsJsonElement_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsJsonElement_Type, PyvtkMRMLMarkupsJsonElement_Methods,
    "vtkMRMLMarkupsJsonElement",
 &PyvtkMRMLMarkupsJsonElement_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkMRMLMarkupsJsonReader_ClassNew(); }


static PyObject *
PyvtkMRMLMarkupsJsonReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsJsonReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonReader *op = static_cast<vtkMRMLMarkupsJsonReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsJsonReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsJsonReader *tempr = vtkMRMLMarkupsJsonReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonReader *op = static_cast<vtkMRMLMarkupsJsonReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsJsonReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsJsonReader::NewInstance());

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
PyvtkMRMLMarkupsJsonReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsJsonReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonReader *op = static_cast<vtkMRMLMarkupsJsonReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsJsonReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonReader_ReadFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonReader *op = static_cast<vtkMRMLMarkupsJsonReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLMarkupsJsonElement *tempr = (ap.IsBound() ?
      op->ReadFromFile(temp0) :
      op->vtkMRMLMarkupsJsonReader::ReadFromFile(temp0));

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
PyvtkMRMLMarkupsJsonReader_GetUserMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonReader *op = static_cast<vtkMRMLMarkupsJsonReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMessageCollection *tempr = (ap.IsBound() ?
      op->GetUserMessages() :
      op->vtkMRMLMarkupsJsonReader::GetUserMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonReader_HasErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonReader *op = static_cast<vtkMRMLMarkupsJsonReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasErrors() :
      op->vtkMRMLMarkupsJsonReader::HasErrors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsJsonReader_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsJsonReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsJsonReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsJsonReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsJsonReader\nC++: static vtkMRMLMarkupsJsonReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsJsonReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsJsonReader\nC++: vtkMRMLMarkupsJsonReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsJsonReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsJsonReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReadFromFile", PyvtkMRMLMarkupsJsonReader_ReadFromFile, METH_VARARGS,
   "ReadFromFile(self, filePath:str) -> vtkMRMLMarkupsJsonElement\nC++: vtkMRMLMarkupsJsonElement *ReadFromFile(const char *filePath)\n\nRead JSON document from file.\n\\return JSON element on success and nullptr on failure.\nOnly in C++: The caller must take ownership of the returned\nobject.\n"},
  {"GetUserMessages", PyvtkMRMLMarkupsJsonReader_GetUserMessages, METH_VARARGS,
   "GetUserMessages(self) -> vtkMRMLMessageCollection\nC++: virtual vtkMRMLMessageCollection *GetUserMessages()\n\nReturns user-displayable messages that may contain details about\nany failed operation.\n"},
  {"HasErrors", PyvtkMRMLMarkupsJsonReader_HasErrors, METH_VARARGS,
   "HasErrors(self) -> bool\nC++: bool HasErrors()\n\nReturns true if user messages contain error messages.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsJsonReader_Doc =
  "vtkMRMLMarkupsJsonReader - Reads a JSON file into a\nvtkMRMLMarkupsJsonElement\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsJsonReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsJsonReader", // tp_name
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
  PyvtkMRMLMarkupsJsonReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsJsonReader_StaticNew()
{
  return vtkMRMLMarkupsJsonReader::New();
}

PyObject *PyvtkMRMLMarkupsJsonReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsJsonReader_Type, PyvtkMRMLMarkupsJsonReader_Methods,
    "vtkMRMLMarkupsJsonReader",
 &PyvtkMRMLMarkupsJsonReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkMRMLMarkupsJsonWriter_ClassNew(); }


static PyObject *
PyvtkMRMLMarkupsJsonWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsJsonWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsJsonWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsJsonWriter *tempr = vtkMRMLMarkupsJsonWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsJsonWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsJsonWriter::NewInstance());

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
PyvtkMRMLMarkupsJsonWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsJsonWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsJsonWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteToFileBegin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToFileBegin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->WriteToFileBegin(temp0, temp1) :
      op->vtkMRMLMarkupsJsonWriter::WriteToFileBegin(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteToFileEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToFileEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->WriteToFileEnd() :
      op->vtkMRMLMarkupsJsonWriter::WriteToFileEnd());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteArrayPropertyStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteArrayPropertyStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->WriteArrayPropertyStart(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteArrayPropertyStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteArrayPropertyEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteArrayPropertyEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteArrayPropertyEnd();
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteArrayPropertyEnd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteObjectStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteObjectStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteObjectStart();
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteObjectStart();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteObjectEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteObjectEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteObjectEnd();
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteObjectEnd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteObjectPropertyStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteObjectPropertyStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->WriteObjectPropertyStart(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteObjectPropertyStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteObjectPropertyEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteObjectPropertyEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteObjectPropertyEnd();
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteObjectPropertyEnd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteStringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteStringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->WriteStringProperty(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteStringProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteStringVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteStringVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  std::string temp0;
  std::vector<std::string> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    if (ap.IsBound())
    {
      op->WriteStringVectorProperty(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteStringVectorProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteCodedEntryProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteCodedEntryProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  std::string temp0;
  vtkCodedEntry *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCodedEntry"))
  {
    if (ap.IsBound())
    {
      op->WriteCodedEntryProperty(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteCodedEntryProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteStringPropertyIfNotEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteStringPropertyIfNotEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->WriteStringPropertyIfNotEmpty(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteStringPropertyIfNotEmpty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteBoolProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteBoolProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->WriteBoolProperty(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteBoolProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteIntProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteIntProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  std::string temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->WriteIntProperty(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteIntProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteDoubleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteDoubleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->WriteDoubleProperty(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteDoubleProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_WriteVectorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteVectorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  std::string temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2 = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->WriteVectorProperty(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteVectorProperty(temp0, temp1, temp2);
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
PyvtkMRMLMarkupsJsonWriter_WriteMatrix4x4Property(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteMatrix4x4Property");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  std::string temp0;
  const size_t size1 = 16;
  double temp1[16];
  double save1[16];
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->WriteMatrix4x4Property(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteMatrix4x4Property(temp0, temp1, temp2);
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
PyvtkMRMLMarkupsJsonWriter_WriteDoubleArrayProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteDoubleArrayProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  const char *temp0 = nullptr;
  vtkDoubleArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->WriteDoubleArrayProperty(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsJsonWriter::WriteDoubleArrayProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_GetUserMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMessageCollection *tempr = (ap.IsBound() ?
      op->GetUserMessages() :
      op->vtkMRMLMarkupsJsonWriter::GetUserMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsJsonWriter_HasErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsJsonWriter *op = static_cast<vtkMRMLMarkupsJsonWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasErrors() :
      op->vtkMRMLMarkupsJsonWriter::HasErrors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsJsonWriter_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsJsonWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsJsonWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsJsonWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsJsonWriter\nC++: static vtkMRMLMarkupsJsonWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsJsonWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsJsonWriter\nC++: vtkMRMLMarkupsJsonWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsJsonWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsJsonWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"WriteToFileBegin", PyvtkMRMLMarkupsJsonWriter_WriteToFileBegin, METH_VARARGS,
   "WriteToFileBegin(self, filePath:str, schema:str) -> bool\nC++: bool WriteToFileBegin(const char *filePath,\n    const char *schema)\n\nThis method must be called before writing any properties to the\noutput file. Returns true on success.\n"},
  {"WriteToFileEnd", PyvtkMRMLMarkupsJsonWriter_WriteToFileEnd, METH_VARARGS,
   "WriteToFileEnd(self) -> bool\nC++: bool WriteToFileEnd()\n\nThis method must be called after writing all properties to the\noutput file. Returns true on success.\n"},
  {"WriteArrayPropertyStart", PyvtkMRMLMarkupsJsonWriter_WriteArrayPropertyStart, METH_VARARGS,
   "WriteArrayPropertyStart(self, propertyName:str) -> None\nC++: void WriteArrayPropertyStart(const std::string &propertyName)\n\nThis method creates a new array as a property.\n"},
  {"WriteArrayPropertyEnd", PyvtkMRMLMarkupsJsonWriter_WriteArrayPropertyEnd, METH_VARARGS,
   "WriteArrayPropertyEnd(self) -> None\nC++: void WriteArrayPropertyEnd()\n\nThis method must be called when all array items are written.\n"},
  {"WriteObjectStart", PyvtkMRMLMarkupsJsonWriter_WriteObjectStart, METH_VARARGS,
   "WriteObjectStart(self) -> None\nC++: void WriteObjectStart()\n\nThis method creates a new object in an array.\n"},
  {"WriteObjectEnd", PyvtkMRMLMarkupsJsonWriter_WriteObjectEnd, METH_VARARGS,
   "WriteObjectEnd(self) -> None\nC++: void WriteObjectEnd()\n\nThis method must be called when all properties of the object are\nwritten.\n"},
  {"WriteObjectPropertyStart", PyvtkMRMLMarkupsJsonWriter_WriteObjectPropertyStart, METH_VARARGS,
   "WriteObjectPropertyStart(self, propertyName:str) -> None\nC++: void WriteObjectPropertyStart(\n    const std::string &propertyName)\n\nThis method creates a new object as a property.\n"},
  {"WriteObjectPropertyEnd", PyvtkMRMLMarkupsJsonWriter_WriteObjectPropertyEnd, METH_VARARGS,
   "WriteObjectPropertyEnd(self) -> None\nC++: void WriteObjectPropertyEnd()\n\nThis method must be called when all properties of the object are\nwritten.\n"},
  {"WriteStringProperty", PyvtkMRMLMarkupsJsonWriter_WriteStringProperty, METH_VARARGS,
   "WriteStringProperty(self, propertyName:str, propertyValue:str)\n    -> None\nC++: void WriteStringProperty(const std::string &propertyName,\n    const std::string &propertyValue)\n\nWrite simple value as an object property.\n"},
  {"WriteStringVectorProperty", PyvtkMRMLMarkupsJsonWriter_WriteStringVectorProperty, METH_VARARGS,
   "WriteStringVectorProperty(self, propertyName:str, arrayValues:(\n    str, ...)) -> None\nC++: void WriteStringVectorProperty(\n    const std::string &propertyName,\n    const std::vector<std::string> &arrayValues)\n\n"},
  {"WriteCodedEntryProperty", PyvtkMRMLMarkupsJsonWriter_WriteCodedEntryProperty, METH_VARARGS,
   "WriteCodedEntryProperty(self, propertyName:str,\n    codedEntry:vtkCodedEntry) -> None\nC++: void WriteCodedEntryProperty(const std::string &propertyName,\n     vtkCodedEntry *codedEntry)\n\n"},
  {"WriteStringPropertyIfNotEmpty", PyvtkMRMLMarkupsJsonWriter_WriteStringPropertyIfNotEmpty, METH_VARARGS,
   "WriteStringPropertyIfNotEmpty(self, propertyName:str,\n    propertyValue:str) -> None\nC++: void WriteStringPropertyIfNotEmpty(\n    const std::string &propertyName,\n    const std::string &propertyValue)\n\n"},
  {"WriteBoolProperty", PyvtkMRMLMarkupsJsonWriter_WriteBoolProperty, METH_VARARGS,
   "WriteBoolProperty(self, propertyName:str, propertyValue:bool)\n    -> None\nC++: void WriteBoolProperty(const std::string &propertyName,\n    bool propertyValue)\n\n"},
  {"WriteIntProperty", PyvtkMRMLMarkupsJsonWriter_WriteIntProperty, METH_VARARGS,
   "WriteIntProperty(self, propertyName:str, propertyValue:int)\n    -> None\nC++: void WriteIntProperty(const std::string &propertyName,\n    int propertyValue)\n\n"},
  {"WriteDoubleProperty", PyvtkMRMLMarkupsJsonWriter_WriteDoubleProperty, METH_VARARGS,
   "WriteDoubleProperty(self, propertyName:str, propertyValue:float)\n    -> None\nC++: void WriteDoubleProperty(const std::string &propertyName,\n    double propertyValue)\n\n"},
  {"WriteVectorProperty", PyvtkMRMLMarkupsJsonWriter_WriteVectorProperty, METH_VARARGS,
   "WriteVectorProperty(self, propertyName:str, v:[float, ...],\n    numberOfComponents:int=3) -> None\nC++: void WriteVectorProperty(const std::string &propertyName,\n    double *v, int numberOfComponents=3)\n\n"},
  {"WriteMatrix4x4Property", PyvtkMRMLMarkupsJsonWriter_WriteMatrix4x4Property, METH_VARARGS,
   "WriteMatrix4x4Property(self, propertyName:str, v:[float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float], flipRasLps:bool) -> None\nC++: void WriteMatrix4x4Property(const std::string &propertyName,\n    double v[16], bool flipRasLps)\n\n"},
  {"WriteDoubleArrayProperty", PyvtkMRMLMarkupsJsonWriter_WriteDoubleArrayProperty, METH_VARARGS,
   "WriteDoubleArrayProperty(self, propertyName:str,\n    doubleArray:vtkDoubleArray) -> None\nC++: void WriteDoubleArrayProperty(const char *propertyName,\n    vtkDoubleArray *doubleArray)\n\n"},
  {"GetUserMessages", PyvtkMRMLMarkupsJsonWriter_GetUserMessages, METH_VARARGS,
   "GetUserMessages(self) -> vtkMRMLMessageCollection\nC++: virtual vtkMRMLMessageCollection *GetUserMessages()\n\nReturns user-displayable messages that may contain details about\nany failed operation.\n"},
  {"HasErrors", PyvtkMRMLMarkupsJsonWriter_HasErrors, METH_VARARGS,
   "HasErrors(self) -> bool\nC++: bool HasErrors()\n\nReturns true if user messages contain error messages.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsJsonWriter_Doc =
  "vtkMRMLMarkupsJsonWriter - Writes properties into a JSON file\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsJsonWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsJsonWriter", // tp_name
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
  PyvtkMRMLMarkupsJsonWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLMarkupsJsonWriter_StaticNew()
{
  return vtkMRMLMarkupsJsonWriter::New();
}

PyObject *PyvtkMRMLMarkupsJsonWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsJsonWriter_Type, PyvtkMRMLMarkupsJsonWriter_Methods,
    "vtkMRMLMarkupsJsonWriter",
 &PyvtkMRMLMarkupsJsonWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLMarkupsJsonElement(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsJsonElement_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsJsonElement", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkMRMLMarkupsJsonReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsJsonReader", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkMRMLMarkupsJsonWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsJsonWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

