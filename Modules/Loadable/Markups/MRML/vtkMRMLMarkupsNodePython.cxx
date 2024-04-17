// python wrapper for vtkMRMLMarkupsNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkMRMLMarkupsNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLMarkupsNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLMarkupsNode_ClassNew(); }


static PyObject *
PyvtkMRMLMarkupsNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLMarkupsNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLMarkupsNode *tempr = vtkMRMLMarkupsNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLMarkupsNode::NewInstance());

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
PyvtkMRMLMarkupsNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLMarkupsNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLMarkupsNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIcon() :
      op->vtkMRMLMarkupsNode::GetIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAddIcon() :
      op->vtkMRMLMarkupsNode::GetAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetPlaceAddIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaceAddIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlaceAddIcon() :
      op->vtkMRMLMarkupsNode::GetPlaceAddIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetMarkupType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMarkupType() :
      op->vtkMRMLMarkupsNode::GetMarkupType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetDefaultNodeNamePrefix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNodeNamePrefix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultNodeNamePrefix() :
      op->vtkMRMLMarkupsNode::GetDefaultNodeNamePrefix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_WriteCLI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteCLI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  std::string temp1;
  int temp2 = vtkMRMLStorageNode::CoordinateSystemRAS;
  int temp3 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->WriteCLI(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMRMLMarkupsNode::WriteCLI(temp0, temp1, temp2, temp3);
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
PyvtkMRMLMarkupsNode_CopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->CopyContent(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::CopyContent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_HasCopyContent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCopyContent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasCopyContent() :
      op->vtkMRMLMarkupsNode::HasCopyContent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->ProcessMRMLEvents(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsNode::ProcessMRMLEvents(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_EndModify(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndModify");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->EndModify(temp0) :
      op->vtkMRMLMarkupsNode::EndModify(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLMarkupsNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_CreateDefaultDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultDisplayNodes();
    }
    else
    {
      op->vtkMRMLMarkupsNode::CreateDefaultDisplayNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNumberOfMeasurements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMeasurements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMeasurements() :
      op->vtkMRMLMarkupsNode::GetNumberOfMeasurements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNumberOfEnabledMeasurements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEnabledMeasurements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEnabledMeasurements() :
      op->vtkMRMLMarkupsNode::GetNumberOfEnabledMeasurements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthMeasurement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthMeasurement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLMeasurement *tempr = (ap.IsBound() ?
      op->GetNthMeasurement(temp0) :
      op->vtkMRMLMarkupsNode::GetNthMeasurement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetMeasurement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasurement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLMeasurement *tempr = (ap.IsBound() ?
      op->GetMeasurement(temp0) :
      op->vtkMRMLMarkupsNode::GetMeasurement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_AddMeasurement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMeasurement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  vtkMRMLMeasurement *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLMeasurement"))
  {
    if (ap.IsBound())
    {
      op->AddMeasurement(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::AddMeasurement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_RemoveNthMeasurement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNthMeasurement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveNthMeasurement(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::RemoveNthMeasurement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_ClearValueForAllMeasurements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearValueForAllMeasurements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearValueForAllMeasurements();
    }
    else
    {
      op->vtkMRMLMarkupsNode::ClearValueForAllMeasurements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_UpdateAllMeasurements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAllMeasurements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAllMeasurements();
    }
    else
    {
      op->vtkMRMLMarkupsNode::UpdateAllMeasurements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthMeasurement_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthMeasurement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  vtkMRMLMeasurement *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMRMLMeasurement"))
  {
    if (ap.IsBound())
    {
      op->SetNthMeasurement(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthMeasurement(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetNthMeasurement_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthMeasurement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  std::string temp1;
  double temp2;
  std::string temp3;
  std::string temp4 = "";
  std::string temp5 = "";
  vtkCodedEntry *temp6 = nullptr;
  vtkCodedEntry *temp7 = nullptr;
  vtkCodedEntry *temp8 = nullptr;
  vtkCodedEntry *temp9 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 10) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp6, "vtkCodedEntry")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp7, "vtkCodedEntry")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp8, "vtkCodedEntry")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp9, "vtkCodedEntry")))
  {
    if (ap.IsBound())
    {
      op->SetNthMeasurement(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthMeasurement(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetNthMeasurement(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLMarkupsNode_SetNthMeasurement_s1(self, args);
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      return PyvtkMRMLMarkupsNode_SetNthMeasurement_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNthMeasurement");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_RemoveAllMeasurements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMeasurements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllMeasurements();
    }
    else
    {
      op->vtkMRMLMarkupsNode::RemoveAllMeasurements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetPositionStatusAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPositionStatusAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLMarkupsNode::GetPositionStatusAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetPositionStatusFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPositionStatusFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLMarkupsNode::GetPositionStatusFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_RemoveAllControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllControlPoints();
    }
    else
    {
      op->vtkMRMLMarkupsNode::RemoveAllControlPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_UnsetAllControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnsetAllControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnsetAllControlPoints();
    }
    else
    {
      op->vtkMRMLMarkupsNode::UnsetAllControlPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLocked() :
      op->vtkMRMLMarkupsNode::GetLocked());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLocked(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetLocked(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_LockedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockedOn();
    }
    else
    {
      op->vtkMRMLMarkupsNode::LockedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_LockedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockedOff();
    }
    else
    {
      op->vtkMRMLMarkupsNode::LockedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetMarkupsDisplayNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupsDisplayNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLMarkupsDisplayNode *tempr = (ap.IsBound() ?
      op->GetMarkupsDisplayNode() :
      op->vtkMRMLMarkupsNode::GetMarkupsDisplayNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_ControlPointExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ControlPointExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ControlPointExists(temp0) :
      op->vtkMRMLMarkupsNode::ControlPointExists(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNumberOfControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfControlPoints() :
      op->vtkMRMLMarkupsNode::GetNumberOfControlPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNumberOfMovableControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMovableControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMovableControlPoints() :
      op->vtkMRMLMarkupsNode::GetNumberOfMovableControlPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNumberOfDefinedControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDefinedControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDefinedControlPoints(temp0) :
      op->vtkMRMLMarkupsNode::GetNumberOfDefinedControlPoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNumberOfUndefinedControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUndefinedControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfUndefinedControlPoints(temp0) :
      op->vtkMRMLMarkupsNode::GetNumberOfUndefinedControlPoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_AddNControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  std::string temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->AddNControlPoints(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsNode::AddNControlPoints(temp0, temp1, temp2));

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
PyvtkMRMLMarkupsNode_SetControlPointPositionsWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPointPositionsWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  vtkPoints *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetControlPointPositionsWorld(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetControlPointPositionsWorld(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetControlPointPositionsWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointPositionsWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->GetControlPointPositionsWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::GetControlPointPositionsWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_AddControlPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  std::string temp1 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->AddControlPoint(*temp0, temp1) :
      op->vtkMRMLMarkupsNode::AddControlPoint(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_AddControlPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  std::string temp1 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddControlPoint(temp0, temp1) :
      op->vtkMRMLMarkupsNode::AddControlPoint(temp0, temp1));

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
PyvtkMRMLMarkupsNode_AddControlPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  std::string temp3 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    int tempr = (ap.IsBound() ?
      op->AddControlPoint(temp0, temp1, temp2, temp3) :
      op->vtkMRMLMarkupsNode::AddControlPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsNode_AddControlPoint_Methods[] = {
  {"AddControlPoint", PyvtkMRMLMarkupsNode_AddControlPoint_s1, METH_VARARGS,
   "@W|s vtkVector3d"},
  {"AddControlPoint", PyvtkMRMLMarkupsNode_AddControlPoint_s2, METH_VARARGS,
   "@P|s *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLMarkupsNode_AddControlPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLMarkupsNode_AddControlPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return PyvtkMRMLMarkupsNode_AddControlPoint_s3(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddControlPoint");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_AddControlPointWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddControlPointWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  vtkVector3d *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  std::string temp1 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3d") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->AddControlPointWorld(*temp0, temp1) :
      op->vtkMRMLMarkupsNode::AddControlPointWorld(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_AddControlPointWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddControlPointWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  std::string temp1 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddControlPointWorld(temp0, temp1) :
      op->vtkMRMLMarkupsNode::AddControlPointWorld(temp0, temp1));

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
PyvtkMRMLMarkupsNode_AddControlPointWorld_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddControlPointWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  std::string temp3 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    int tempr = (ap.IsBound() ?
      op->AddControlPointWorld(temp0, temp1, temp2, temp3) :
      op->vtkMRMLMarkupsNode::AddControlPointWorld(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsNode_AddControlPointWorld_Methods[] = {
  {"AddControlPointWorld", PyvtkMRMLMarkupsNode_AddControlPointWorld_s1, METH_VARARGS,
   "@W|s vtkVector3d"},
  {"AddControlPointWorld", PyvtkMRMLMarkupsNode_AddControlPointWorld_s2, METH_VARARGS,
   "@P|s *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLMarkupsNode_AddControlPointWorld(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLMarkupsNode_AddControlPointWorld_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return PyvtkMRMLMarkupsNode_AddControlPointWorld_s3(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddControlPointWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_InsertControlPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  vtkVector3d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  std::string temp2 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3d") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->InsertControlPoint(temp0, *temp1, temp2) :
      op->vtkMRMLMarkupsNode::InsertControlPoint(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_InsertControlPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  std::string temp2 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->InsertControlPoint(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsNode::InsertControlPoint(temp0, temp1, temp2));

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

static PyMethodDef PyvtkMRMLMarkupsNode_InsertControlPoint_Methods[] = {
  {"InsertControlPoint", PyvtkMRMLMarkupsNode_InsertControlPoint_s1, METH_VARARGS,
   "@iW|s vtkVector3d"},
  {"InsertControlPoint", PyvtkMRMLMarkupsNode_InsertControlPoint_s2, METH_VARARGS,
   "@iP|s *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLMarkupsNode_InsertControlPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLMarkupsNode_InsertControlPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertControlPoint");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_InsertControlPointWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertControlPointWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  vtkVector3d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  std::string temp2 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3d") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->InsertControlPointWorld(temp0, *temp1, temp2) :
      op->vtkMRMLMarkupsNode::InsertControlPointWorld(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_InsertControlPointWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertControlPointWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  std::string temp2 = std::string();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->InsertControlPointWorld(temp0, temp1, temp2) :
      op->vtkMRMLMarkupsNode::InsertControlPointWorld(temp0, temp1, temp2));

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

static PyMethodDef PyvtkMRMLMarkupsNode_InsertControlPointWorld_Methods[] = {
  {"InsertControlPointWorld", PyvtkMRMLMarkupsNode_InsertControlPointWorld_s1, METH_VARARGS,
   "@iW|s vtkVector3d"},
  {"InsertControlPointWorld", PyvtkMRMLMarkupsNode_InsertControlPointWorld_s2, METH_VARARGS,
   "@iP|s *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLMarkupsNode_InsertControlPointWorld(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLMarkupsNode_InsertControlPointWorld_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertControlPointWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_RemoveNthControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNthControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveNthControlPoint(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::RemoveNthControlPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SwapControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SwapControlPoints(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SwapControlPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointAutoCreated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointAutoCreated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNthControlPointAutoCreated(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointAutoCreated(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointAutoCreated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointAutoCreated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointAutoCreated(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointAutoCreated(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetNthControlPointPosition(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::GetNthControlPointPosition(temp0, temp1);
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
PyvtkMRMLMarkupsNode_GetNthControlPointPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNthControlPointPosition(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLMarkupsNode_GetNthControlPointPosition_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsNode_GetNthControlPointPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNthControlPointPosition");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointPositionVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointPositionVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetNthControlPointPositionVector(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointPositionVector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointPositionWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthControlPointPositionWorld(temp0, temp1) :
      op->vtkMRMLMarkupsNode::GetNthControlPointPositionWorld(temp0, temp1));

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
PyvtkMRMLMarkupsNode_GetNthControlPointPositionWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetNthControlPointPositionWorld(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointPositionWorld(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointPositionWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLMarkupsNode_GetNthControlPointPositionWorld_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsNode_GetNthControlPointPositionWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNthControlPointPositionWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  int temp4 = vtkMRMLMarkupsNode::PositionDefined;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointPosition(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointPosition(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  int temp2 = vtkMRMLMarkupsNode::PositionDefined;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
    case 5:
      return PyvtkMRMLMarkupsNode_SetNthControlPointPosition_s1(self, args);
    case 2:
    case 3:
      return PyvtkMRMLMarkupsNode_SetNthControlPointPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNthControlPointPosition");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPositionWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  int temp4 = vtkMRMLMarkupsNode::PositionDefined;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointPositionWorld(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointPositionWorld(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPositionWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  int temp2 = vtkMRMLMarkupsNode::PositionDefined;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointPositionWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointPositionWorld(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPositionWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
    case 5:
      return PyvtkMRMLMarkupsNode_SetNthControlPointPositionWorld_s1(self, args);
    case 2:
    case 3:
      return PyvtkMRMLMarkupsNode_SetNthControlPointPositionWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNthControlPointPositionWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPositionOrientationWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointPositionOrientationWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 9;
  double temp2[9];
  const char *temp3 = nullptr;
  int temp4 = vtkMRMLMarkupsNode::PositionDefined;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointPositionOrientationWorld(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointPositionOrientationWorld(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointOrientation(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointOrientation(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 4;
  double temp1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointOrientation(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointOrientation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkMRMLMarkupsNode_SetNthControlPointOrientation_s1(self, args);
    case 2:
      return PyvtkMRMLMarkupsNode_SetNthControlPointOrientation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNthControlPointOrientation");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetNthControlPointOrientation(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::GetNthControlPointOrientation(temp0, temp1);
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
PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointOrientationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  size_t sizer = 9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNthControlPointOrientationMatrix(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointOrientationMatrix(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointOrientationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->GetNthControlPointOrientationMatrix(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::GetNthControlPointOrientationMatrix(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrix(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrix_s1(self, args);
    case 2:
      return PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrix_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNthControlPointOrientationMatrix");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointOrientationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetNthControlPointOrientationMatrix(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointOrientationMatrix(temp0, temp1);
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
PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointOrientationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointOrientationMatrix(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointOrientationMatrix(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrix_Methods[] = {
  {"SetNthControlPointOrientationMatrix", PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrix_s1, METH_VARARGS,
   "@iP *d"},
  {"SetNthControlPointOrientationMatrix", PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrix_s2, METH_VARARGS,
   "@iV *vtkMatrix3x3"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNthControlPointOrientationMatrix");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrixWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointOrientationMatrixWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetNthControlPointOrientationMatrixWorld(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::GetNthControlPointOrientationMatrixWorld(temp0, temp1);
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
PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrixWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointOrientationMatrixWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector<double, 9> tempr = (ap.IsBound() ?
      op->GetNthControlPointOrientationMatrixWorld(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointOrientationMatrixWorld(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector_IdLi9EE");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrixWorld_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointOrientationMatrixWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->GetNthControlPointOrientationMatrixWorld(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::GetNthControlPointOrientationMatrixWorld(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrixWorld_Methods[] = {
  {"GetNthControlPointOrientationMatrixWorld", PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrixWorld_s1, METH_VARARGS,
   "@iP *d"},
  {"GetNthControlPointOrientationMatrixWorld", PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrixWorld_s3, METH_VARARGS,
   "@iV *vtkMatrix3x3"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrixWorld(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrixWorld_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrixWorld_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNthControlPointOrientationMatrixWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrixWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointOrientationMatrixWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 9;
  double temp1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointOrientationMatrixWorld(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointOrientationMatrixWorld(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrixWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointOrientationMatrixWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointOrientationMatrixWorld(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointOrientationMatrixWorld(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrixWorld_Methods[] = {
  {"SetNthControlPointOrientationMatrixWorld", PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrixWorld_s1, METH_VARARGS,
   "@iP *d"},
  {"SetNthControlPointOrientationMatrixWorld", PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrixWorld_s2, METH_VARARGS,
   "@iV *vtkMatrix3x3"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrixWorld(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrixWorld_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNthControlPointOrientationMatrixWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointPositionStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointPositionStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNthControlPointPositionStatus(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointPositionStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointIndexByPositionStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointIndexByPositionStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetNthControlPointIndexByPositionStatus(temp0, temp1) :
      op->vtkMRMLMarkupsNode::GetNthControlPointIndexByPositionStatus(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_UnsetNthControlPointPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnsetNthControlPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnsetNthControlPointPosition(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::UnsetNthControlPointPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPositionMissing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointPositionMissing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointPositionMissing(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointPositionMissing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_ResetNthControlPointPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetNthControlPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ResetNthControlPointPosition(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::ResetNthControlPointPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_RestoreNthControlPointPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestoreNthControlPointPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RestoreNthControlPointPosition(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::RestoreNthControlPointPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetCenterOfRotation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetCenterOfRotation() :
      op->vtkMRMLMarkupsNode::GetCenterOfRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_GetCenterOfRotation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetCenterOfRotation(temp0) :
      op->vtkMRMLMarkupsNode::GetCenterOfRotation(temp0));

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
PyvtkMRMLMarkupsNode_GetCenterOfRotation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLMarkupsNode_GetCenterOfRotation_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsNode_GetCenterOfRotation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenterOfRotation");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetCenterOfRotationWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterOfRotationWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetCenterOfRotationWorld(temp0) :
      op->vtkMRMLMarkupsNode::GetCenterOfRotationWorld(temp0));

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
PyvtkMRMLMarkupsNode_SetCenterOfRotation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

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
      op->SetCenterOfRotation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetCenterOfRotation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetCenterOfRotation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenterOfRotation(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetCenterOfRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetCenterOfRotation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLMarkupsNode_SetCenterOfRotation_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsNode_SetCenterOfRotation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenterOfRotation");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetCenterOfRotationWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotationWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

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
      op->SetCenterOfRotationWorld(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetCenterOfRotationWorld(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetCenterOfRotationWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotationWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenterOfRotationWorld(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetCenterOfRotationWorld(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_SetCenterOfRotationWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLMarkupsNode_SetCenterOfRotationWorld_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsNode_SetCenterOfRotationWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenterOfRotationWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetNthControlPointNormal(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::GetNthControlPointNormal(temp0, temp1);
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
PyvtkMRMLMarkupsNode_GetNthControlPointNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetNthControlPointNormal(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointNormal(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLMarkupsNode_GetNthControlPointNormal_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsNode_GetNthControlPointNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNthControlPointNormal");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointNormalWorld_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointNormalWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetNthControlPointNormalWorld(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::GetNthControlPointNormalWorld(temp0, temp1);
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
PyvtkMRMLMarkupsNode_GetNthControlPointNormalWorld_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointNormalWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetNthControlPointNormalWorld(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointNormalWorld(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointNormalWorld(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLMarkupsNode_GetNthControlPointNormalWorld_s1(self, args);
    case 1:
      return PyvtkMRMLMarkupsNode_GetNthControlPointNormalWorld_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNthControlPointNormalWorld");
  return nullptr;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointAssociatedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointAssociatedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthControlPointAssociatedNodeID(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointAssociatedNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointAssociatedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointAssociatedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointAssociatedNodeID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointAssociatedNodeID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthControlPointID(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointIndexByID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointIndexByID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNthControlPointIndexByID(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointIndexByID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetControlPointIndexByID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointIndexByID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetControlPointIndexByID(temp0) :
      op->vtkMRMLMarkupsNode::GetControlPointIndexByID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetControlPointIndexByLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointIndexByLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetControlPointIndexByLabel(temp0) :
      op->vtkMRMLMarkupsNode::GetControlPointIndexByLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetControlPointIndexByDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointIndexByDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetControlPointIndexByDescription(temp0) :
      op->vtkMRMLMarkupsNode::GetControlPointIndexByDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNthControlPointSelected(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointSelected(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointSelected(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointSelected(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNthControlPointLocked(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointLocked(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointLocked(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointLocked(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNthControlPointVisibility(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointPositionVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointPositionVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNthControlPointPositionVisibility(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointPositionVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointVisibility(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthControlPointLabel(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointLabel(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetControlPointLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->GetControlPointLabels(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::GetControlPointLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthControlPointDescription(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointDescription(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointDescription(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_CanApplyNonLinearTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanApplyNonLinearTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanApplyNonLinearTransforms() :
      op->vtkMRMLMarkupsNode::CanApplyNonLinearTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_ApplyTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->ApplyTransform(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::ApplyTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetControlPointLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetControlPointLabelFormat() :
      op->vtkMRMLMarkupsNode::GetControlPointLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetControlPointLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPointLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetControlPointLabelFormat(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetControlPointLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_ReplaceListNameInControlPointLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceListNameInControlPointLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->ReplaceListNameInControlPointLabelFormat() :
      op->vtkMRMLMarkupsNode::ReplaceListNameInControlPointLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetModifiedSinceRead(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifiedSinceRead");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetModifiedSinceRead() :
      op->vtkMRMLMarkupsNode::GetModifiedSinceRead());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_ResetNthControlPointID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetNthControlPointID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ResetNthControlPointID(temp0) :
      op->vtkMRMLMarkupsNode::ResetNthControlPointID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetFixedNumberOfControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedNumberOfControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFixedNumberOfControlPoints() :
      op->vtkMRMLMarkupsNode::GetFixedNumberOfControlPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetFixedNumberOfControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedNumberOfControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedNumberOfControlPoints(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetFixedNumberOfControlPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetRequiredNumberOfControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequiredNumberOfControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRequiredNumberOfControlPoints() :
      op->vtkMRMLMarkupsNode::GetRequiredNumberOfControlPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetMaximumNumberOfControlPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfControlPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfControlPoints() :
      op->vtkMRMLMarkupsNode::GetMaximumNumberOfControlPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_ConvertOrientationMatrixToWXYZ(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertOrientationMatrixToWXYZ");

  const size_t size0 = 9;
  double temp0[9];
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMRMLMarkupsNode::ConvertOrientationMatrixToWXYZ(temp0, temp1);

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
PyvtkMRMLMarkupsNode_ConvertOrientationWXYZToMatrix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertOrientationWXYZToMatrix");

  const size_t size0 = 4;
  double temp0[4];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMRMLMarkupsNode::ConvertOrientationWXYZToMatrix(temp0, temp1);

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
PyvtkMRMLMarkupsNode_GetCurvePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetCurvePoints() :
      op->vtkMRMLMarkupsNode::GetCurvePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetCurvePointsWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvePointsWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetCurvePointsWorld() :
      op->vtkMRMLMarkupsNode::GetCurvePointsWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCurve() :
      op->vtkMRMLMarkupsNode::GetCurve());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetCurveWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCurveWorld() :
      op->vtkMRMLMarkupsNode::GetCurveWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetCurveWorldConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveWorldConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetCurveWorldConnection() :
      op->vtkMRMLMarkupsNode::GetCurveWorldConnection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetControlPointIndexFromInterpolatedPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointIndexFromInterpolatedPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetControlPointIndexFromInterpolatedPointIndex(temp0) :
      op->vtkMRMLMarkupsNode::GetControlPointIndexFromInterpolatedPointIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetCurveClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCurveClosed() :
      op->vtkMRMLMarkupsNode::GetCurveClosed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetCurveGenerator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveGenerator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCurveGenerator *tempr = (ap.IsBound() ?
      op->GetCurveGenerator() :
      op->vtkMRMLMarkupsNode::GetCurveGenerator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetCurveCoordinateSystemGeneratorWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveCoordinateSystemGeneratorWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelTransportFrame *tempr = (ap.IsBound() ?
      op->GetCurveCoordinateSystemGeneratorWorld() :
      op->vtkMRMLMarkupsNode::GetCurveCoordinateSystemGeneratorWorld());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetRASBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRASBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

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
      op->GetRASBounds(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::GetRASBounds(temp0);
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
PyvtkMRMLMarkupsNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

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
      op->vtkMRMLMarkupsNode::GetBounds(temp0);
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
PyvtkMRMLMarkupsNode_GetClosestControlPointIndexToPositionWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosestControlPointIndexToPositionWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetClosestControlPointIndexToPositionWorld(temp0, temp1) :
      op->vtkMRMLMarkupsNode::GetClosestControlPointIndexToPositionWorld(temp0, temp1));

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
PyvtkMRMLMarkupsNode_GetInteractionHandleToWorldMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionHandleToWorldMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetInteractionHandleToWorldMatrix() :
      op->vtkMRMLMarkupsNode::GetInteractionHandleToWorldMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetPropertiesLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertiesLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetPropertiesLabelText() :
      op->vtkMRMLMarkupsNode::GetPropertiesLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetUnitNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnitNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMRMLUnitNode *tempr = (ap.IsBound() ?
      op->GetUnitNode(temp0) :
      op->vtkMRMLMarkupsNode::GetUnitNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_UpdateAssignedAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateAssignedAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateAssignedAttribute();
    }
    else
    {
      op->vtkMRMLMarkupsNode::UpdateAssignedAttribute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetControlPointPlacementComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointPlacementComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetControlPointPlacementComplete() :
      op->vtkMRMLMarkupsNode::GetControlPointPlacementComplete());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetControlPointPlacementStartIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointPlacementStartIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetControlPointPlacementStartIndex() :
      op->vtkMRMLMarkupsNode::GetControlPointPlacementStartIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetControlPointPlacementStartIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPointPlacementStartIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetControlPointPlacementStartIndex(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetControlPointPlacementStartIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetLastUsedControlPointNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastUsedControlPointNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastUsedControlPointNumber() :
      op->vtkMRMLMarkupsNode::GetLastUsedControlPointNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetLastUsedControlPointNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastUsedControlPointNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastUsedControlPointNumber(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetLastUsedControlPointNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_RemoveAllMarkups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMarkups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllMarkups();
    }
    else
    {
      op->vtkMRMLMarkupsNode::RemoveAllMarkups();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_MarkupExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkupExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->MarkupExists(temp0) :
      op->vtkMRMLMarkupsNode::MarkupExists(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNumberOfMarkups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMarkups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfMarkups() :
      op->vtkMRMLMarkupsNode::GetNumberOfMarkups());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNumberOfPointsInNthMarkup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsInNthMarkup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsInNthMarkup(temp0) :
      op->vtkMRMLMarkupsNode::GetNumberOfPointsInNthMarkup(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetMarkupPointVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupPointVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetMarkupPointVector(temp0, temp1) :
      op->vtkMRMLMarkupsNode::GetMarkupPointVector(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetMarkupPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  int temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetMarkupPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsNode::GetMarkupPoint(temp0, temp1, temp2);
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
PyvtkMRMLMarkupsNode_RemoveMarkup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveMarkup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveMarkup(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::RemoveMarkup(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPositionFromPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointPositionFromPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointPositionFromPointer(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointPositionFromPointer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPositionFromArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointPositionFromArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  int temp2 = vtkMRMLMarkupsNode::PositionDefined;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointPositionFromArray(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointPositionFromArray(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPositionWorldFromArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointPositionWorldFromArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  int temp2 = vtkMRMLMarkupsNode::PositionDefined;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointPositionWorldFromArray(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointPositionWorldFromArray(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointPositionOrientationWorldFromArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointPositionOrientationWorldFromArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 9;
  double temp2[9];
  const char *temp3 = nullptr;
  int temp4 = vtkMRMLMarkupsNode::PositionDefined;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointPositionOrientationWorldFromArray(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointPositionOrientationWorldFromArray(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthControlPointOrientationVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthControlPointOrientationVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector4d tempr = (ap.IsBound() ?
      op->GetNthControlPointOrientationVector(temp0) :
      op->vtkMRMLMarkupsNode::GetNthControlPointOrientationVector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector4d");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetCenterOfRotationVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterOfRotationVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector3d tempr = (ap.IsBound() ?
      op->GetCenterOfRotationVector() :
      op->vtkMRMLMarkupsNode::GetCenterOfRotationVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetCenterOfRotationFromPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotationFromPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenterOfRotationFromPointer(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetCenterOfRotationFromPointer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetCenterOfRotationFromArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotationFromArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenterOfRotationFromArray(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetCenterOfRotationFromArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointOrientationFromPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointOrientationFromPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointOrientationFromPointer(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointOrientationFromPointer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthControlPointOrientationFromArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthControlPointOrientationFromArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  const size_t size1 = 4;
  double temp1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetNthControlPointOrientationFromArray(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthControlPointOrientationFromArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthMarkupAssociatedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthMarkupAssociatedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthMarkupAssociatedNodeID(temp0) :
      op->vtkMRMLMarkupsNode::GetNthMarkupAssociatedNodeID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthMarkupAssociatedNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthMarkupAssociatedNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthMarkupAssociatedNodeID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthMarkupAssociatedNodeID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthMarkupID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthMarkupID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthMarkupID(temp0) :
      op->vtkMRMLMarkupsNode::GetNthMarkupID(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthMarkupLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthMarkupLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNthMarkupLocked(temp0) :
      op->vtkMRMLMarkupsNode::GetNthMarkupLocked(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthMarkupLocked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthMarkupLocked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthMarkupLocked(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthMarkupLocked(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetNthMarkupLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthMarkupLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthMarkupLabel(temp0) :
      op->vtkMRMLMarkupsNode::GetNthMarkupLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetNthMarkupLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthMarkupLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthMarkupLabel(temp0, temp1);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetNthMarkupLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_GetMarkupLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkupLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetMarkupLabelFormat() :
      op->vtkMRMLMarkupsNode::GetMarkupLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_SetMarkupLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkupLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarkupLabelFormat(temp0);
    }
    else
    {
      op->vtkMRMLMarkupsNode::SetMarkupLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLMarkupsNode_ReplaceListNameInMarkupLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceListNameInMarkupLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLMarkupsNode *op = static_cast<vtkMRMLMarkupsNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->ReplaceListNameInMarkupLabelFormat() :
      op->vtkMRMLMarkupsNode::ReplaceListNameInMarkupLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLMarkupsNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLMarkupsNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLMarkupsNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLMarkupsNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLMarkupsNode\nC++: static vtkMRMLMarkupsNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLMarkupsNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLMarkupsNode\nC++: vtkMRMLMarkupsNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLMarkupsNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLMarkupsNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetIcon", PyvtkMRMLMarkupsNode_GetIcon, METH_VARARGS,
   "GetIcon(self) -> str\nC++: virtual const char *GetIcon()\n\n"},
  {"GetAddIcon", PyvtkMRMLMarkupsNode_GetAddIcon, METH_VARARGS,
   "GetAddIcon(self) -> str\nC++: virtual const char *GetAddIcon()\n\n"},
  {"GetPlaceAddIcon", PyvtkMRMLMarkupsNode_GetPlaceAddIcon, METH_VARARGS,
   "GetPlaceAddIcon(self) -> str\nC++: virtual const char *GetPlaceAddIcon()\n\n"},
  {"GetMarkupType", PyvtkMRMLMarkupsNode_GetMarkupType, METH_VARARGS,
   "GetMarkupType(self) -> str\nC++: virtual const char *GetMarkupType()\n\nGet markup type internal name. This type name is the same\nregardless of the chosen application language and should not be\ndisplayed to end users.\n"},
  {"GetDefaultNodeNamePrefix", PyvtkMRMLMarkupsNode_GetDefaultNodeNamePrefix, METH_VARARGS,
   "GetDefaultNodeNamePrefix(self) -> str\nC++: virtual const char *GetDefaultNodeNamePrefix()\n\nGet markup short name\n"},
  {"WriteCLI", PyvtkMRMLMarkupsNode_WriteCLI, METH_VARARGS,
   "WriteCLI(self, commandLine:[str, ...], prefix:str,\n    coordinateSystem:int=..., multipleFlag:int=1) -> None\nC++: void WriteCLI(std::vector<std::string> &commandLine,\n    std::string prefix,\n    int coordinateSystem=vtkMRMLStorageNode::CoordinateSystemRAS,\n    int multipleFlag=1) override;\n\nWrite this node's information to a vector of strings for passing\nto a CLI, precede each datum with the prefix if not an empty\nstring coordinateSystemFlag =\nvtkMRMLStorageNode::CoordinateSystemRAS or\nvtkMRMLStorageNode::CoordinateSystemLPS multipleFlag = 1 for the\nwhole list, 1 for the first selected control point\n"},
  {"CopyContent", PyvtkMRMLMarkupsNode_CopyContent, METH_VARARGS,
   "CopyContent(self, node:vtkMRMLNode, deepCopy:bool=True) -> None\nC++: void CopyContent(vtkMRMLNode *node, bool deepCopy=true)\n    override;\n\nCopy node content (excludes basic data, such as name and node\nreferences).\n\\sa vtkMRMLNode::CopyContent\n"},
  {"HasCopyContent", PyvtkMRMLMarkupsNode_HasCopyContent, METH_VARARGS,
   "HasCopyContent(self) -> bool\nC++: bool HasCopyContent() override;\n\nReturns true if the class supports deep and shallow copying node\n    content.\n"},
  {"ProcessMRMLEvents", PyvtkMRMLMarkupsNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nAlternative method to propagate events generated in Display nodes\n"},
  {"EndModify", PyvtkMRMLMarkupsNode_EndModify, METH_VARARGS,
   "EndModify(self, previousDisableModifiedEventState:int) -> int\nC++: int EndModify(int previousDisableModifiedEventState)\n    override;\n\nEnd modifying the node.\nUpdates pending measurements and other updates.\n\\sa StartModify()\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLMarkupsNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"CreateDefaultDisplayNodes", PyvtkMRMLMarkupsNode_CreateDefaultDisplayNodes, METH_VARARGS,
   "CreateDefaultDisplayNodes(self) -> None\nC++: void CreateDefaultDisplayNodes() override;\n\nCreate and observe default display node(s)\n"},
  {"GetNumberOfMeasurements", PyvtkMRMLMarkupsNode_GetNumberOfMeasurements, METH_VARARGS,
   "GetNumberOfMeasurements(self) -> int\nC++: int GetNumberOfMeasurements()\n\nGet measurement data, such as length, angle, diameter,\ncross-section area. Add/remove/clear measurements.\n"},
  {"GetNumberOfEnabledMeasurements", PyvtkMRMLMarkupsNode_GetNumberOfEnabledMeasurements, METH_VARARGS,
   "GetNumberOfEnabledMeasurements(self) -> int\nC++: int GetNumberOfEnabledMeasurements()\n\nGet measurement data, such as length, angle, diameter,\ncross-section area. Add/remove/clear measurements.\n"},
  {"GetNthMeasurement", PyvtkMRMLMarkupsNode_GetNthMeasurement, METH_VARARGS,
   "GetNthMeasurement(self, id:int) -> vtkMRMLMeasurement\nC++: vtkMRMLMeasurement *GetNthMeasurement(int id)\n\nGet measurement data, such as length, angle, diameter,\ncross-section area. Add/remove/clear measurements.\n"},
  {"GetMeasurement", PyvtkMRMLMarkupsNode_GetMeasurement, METH_VARARGS,
   "GetMeasurement(self, name:str) -> vtkMRMLMeasurement\nC++: vtkMRMLMeasurement *GetMeasurement(const char *name)\n\nGet measurement data, such as length, angle, diameter,\ncross-section area. Add/remove/clear measurements.\n"},
  {"AddMeasurement", PyvtkMRMLMarkupsNode_AddMeasurement, METH_VARARGS,
   "AddMeasurement(self, measurement:vtkMRMLMeasurement) -> None\nC++: void AddMeasurement(vtkMRMLMeasurement *measurement)\n\nGet measurement data, such as length, angle, diameter,\ncross-section area. Add/remove/clear measurements.\n"},
  {"RemoveNthMeasurement", PyvtkMRMLMarkupsNode_RemoveNthMeasurement, METH_VARARGS,
   "RemoveNthMeasurement(self, id:int) -> None\nC++: void RemoveNthMeasurement(int id)\n\nGet measurement data, such as length, angle, diameter,\ncross-section area. Add/remove/clear measurements.\n"},
  {"ClearValueForAllMeasurements", PyvtkMRMLMarkupsNode_ClearValueForAllMeasurements, METH_VARARGS,
   "ClearValueForAllMeasurements(self) -> None\nC++: void ClearValueForAllMeasurements()\n\nGet measurement data, such as length, angle, diameter,\ncross-section area. Add/remove/clear measurements.\n"},
  {"UpdateAllMeasurements", PyvtkMRMLMarkupsNode_UpdateAllMeasurements, METH_VARARGS,
   "UpdateAllMeasurements(self) -> None\nC++: void UpdateAllMeasurements()\n\nUpdate all measurements. It should not be necessary for users to\ncall this method.\n"},
  {"SetNthMeasurement", PyvtkMRMLMarkupsNode_SetNthMeasurement, METH_VARARGS,
   "SetNthMeasurement(self, id:int, measurement:vtkMRMLMeasurement)\n    -> None\nC++: void SetNthMeasurement(int id,\n    vtkMRMLMeasurement *measurement)\nSetNthMeasurement(self, id:int, name:str, value:float, units:str,\n    printFormat:str=..., description:str=...,\n    quantityCode:vtkCodedEntry=...,\n    derivationCode:vtkCodedEntry=..., unitsCode:vtkCodedEntry=...,\n     methodCode:vtkCodedEntry=...) -> None\nC++: void SetNthMeasurement(int id, const std::string &name,\n    double value, const std::string &units,\n    std::string printFormat=\"\",\n    const std::string description=\"\",\n    vtkCodedEntry *quantityCode=nullptr,\n    vtkCodedEntry *derivationCode=nullptr,\n    vtkCodedEntry *unitsCode=nullptr,\n    vtkCodedEntry *methodCode=nullptr)\n\nSet measurement data, such as length, angle, diameter,\ncross-section area.\n\nIMPORTANT: These functions should not be used any more. Setting\nmeasurements now happens in the \\sa UpdateMeasurementsInternal\nfunctions by calling Compute on the measurements. Similarly,\nRemoveAllMeasurements should not be called to clear the values,\nbecause the measurements are not set externally but added\ninternally in the constructors and only updated (Compute called)\nas needed.\n"},
  {"RemoveAllMeasurements", PyvtkMRMLMarkupsNode_RemoveAllMeasurements, METH_VARARGS,
   "RemoveAllMeasurements(self) -> None\nC++: void RemoveAllMeasurements()\n\nSet measurement data, such as length, angle, diameter,\ncross-section area.\n\nIMPORTANT: These functions should not be used any more. Setting\nmeasurements now happens in the \\sa UpdateMeasurementsInternal\nfunctions by calling Compute on the measurements. Similarly,\nRemoveAllMeasurements should not be called to clear the values,\nbecause the measurements are not set externally but added\ninternally in the constructors and only updated (Compute called)\nas needed.\n"},
  {"GetPositionStatusAsString", PyvtkMRMLMarkupsNode_GetPositionStatusAsString, METH_VARARGS,
   "GetPositionStatusAsString(id:int) -> str\nC++: static const char *GetPositionStatusAsString(int id)\n\n"},
  {"GetPositionStatusFromString", PyvtkMRMLMarkupsNode_GetPositionStatusFromString, METH_VARARGS,
   "GetPositionStatusFromString(name:str) -> int\nC++: static int GetPositionStatusFromString(const char *name)\n\n"},
  {"RemoveAllControlPoints", PyvtkMRMLMarkupsNode_RemoveAllControlPoints, METH_VARARGS,
   "RemoveAllControlPoints(self) -> None\nC++: virtual void RemoveAllControlPoints()\n\nClear out the node of all control points\n"},
  {"UnsetAllControlPoints", PyvtkMRMLMarkupsNode_UnsetAllControlPoints, METH_VARARGS,
   "UnsetAllControlPoints(self) -> None\nC++: virtual void UnsetAllControlPoints()\n\n"},
  {"GetLocked", PyvtkMRMLMarkupsNode_GetLocked, METH_VARARGS,
   "GetLocked(self) -> int\nC++: virtual int GetLocked()\n\nGet/Set the Locked property on the markupNode/list of control\npoints If set to 1 then parameters should not be changed, and\ndragging the control points is disabled in 2d and 3d. Overrides\nthe Locked flag on individual control points in that when the\nnode is set to be locked, all the control points in the list are\nlocked. When the node is unlocked, use the locked flag on the\nindividual control points to determine their locked state.\n"},
  {"SetLocked", PyvtkMRMLMarkupsNode_SetLocked, METH_VARARGS,
   "SetLocked(self, locked:int) -> None\nC++: void SetLocked(int locked)\n\n"},
  {"LockedOn", PyvtkMRMLMarkupsNode_LockedOn, METH_VARARGS,
   "LockedOn(self) -> None\nC++: virtual void LockedOn()\n\n"},
  {"LockedOff", PyvtkMRMLMarkupsNode_LockedOff, METH_VARARGS,
   "LockedOff(self) -> None\nC++: virtual void LockedOff()\n\n"},
  {"GetMarkupsDisplayNode", PyvtkMRMLMarkupsNode_GetMarkupsDisplayNode, METH_VARARGS,
   "GetMarkupsDisplayNode(self) -> vtkMRMLMarkupsDisplayNode\nC++: vtkMRMLMarkupsDisplayNode *GetMarkupsDisplayNode()\n\nReturn a cast display node, returns null if none\n"},
  {"ControlPointExists", PyvtkMRMLMarkupsNode_ControlPointExists, METH_VARARGS,
   "ControlPointExists(self, n:int) -> bool\nC++: bool ControlPointExists(int n)\n\nReturn true if n is a valid control point, false otherwise.\n"},
  {"GetNumberOfControlPoints", PyvtkMRMLMarkupsNode_GetNumberOfControlPoints, METH_VARARGS,
   "GetNumberOfControlPoints(self) -> int\nC++: int GetNumberOfControlPoints()\n\nReturn the number of control points that are stored in this node\n"},
  {"GetNumberOfMovableControlPoints", PyvtkMRMLMarkupsNode_GetNumberOfMovableControlPoints, METH_VARARGS,
   "GetNumberOfMovableControlPoints(self) -> int\nC++: int GetNumberOfMovableControlPoints()\n\nReturn the number of unlocked control points with defined\nposition in this node\n"},
  {"GetNumberOfDefinedControlPoints", PyvtkMRMLMarkupsNode_GetNumberOfDefinedControlPoints, METH_VARARGS,
   "GetNumberOfDefinedControlPoints(self, includePreview:bool=False)\n    -> int\nC++: int GetNumberOfDefinedControlPoints(\n    bool includePreview=false)\n\nReturn the number of control points that are already placed (not\nbeing previewed or undefined).\n"},
  {"GetNumberOfUndefinedControlPoints", PyvtkMRMLMarkupsNode_GetNumberOfUndefinedControlPoints, METH_VARARGS,
   "GetNumberOfUndefinedControlPoints(self, includePreview:bool=False)\n     -> int\nC++: int GetNumberOfUndefinedControlPoints(\n    bool includePreview=false)\n\nReturn the number of control points that have not been placed\n(not being previewed or skipped).\n"},
  {"AddNControlPoints", PyvtkMRMLMarkupsNode_AddNControlPoints, METH_VARARGS,
   "AddNControlPoints(self, n:int, label:str, point:[float, float,\n    float]) -> int\nC++: int AddNControlPoints(int n, std::string label,\n    double point[3])\n\n"},
  {"SetControlPointPositionsWorld", PyvtkMRMLMarkupsNode_SetControlPointPositionsWorld, METH_VARARGS,
   "SetControlPointPositionsWorld(self, points:vtkPoints,\n    setUndefinedPoints:bool=True) -> None\nC++: void SetControlPointPositionsWorld(vtkPoints *points,\n    bool setUndefinedPoints=true)\n\nSet all control point positions from a point list. If points is\nnullptr then all control points are removed. New control points\nare added if needed. Existing control points are updated with the\nnew positions. Any extra existing control points are removed.\n"},
  {"GetControlPointPositionsWorld", PyvtkMRMLMarkupsNode_GetControlPointPositionsWorld, METH_VARARGS,
   "GetControlPointPositionsWorld(self, points:vtkPoints) -> None\nC++: void GetControlPointPositionsWorld(vtkPoints *points)\n\nGet a copy of all control point positions in world coordinate\nsystem\n"},
  {"AddControlPoint", PyvtkMRMLMarkupsNode_AddControlPoint, METH_VARARGS,
   "AddControlPoint(self, point:vtkVector3d, label:str=...) -> int\nC++: int AddControlPoint(vtkVector3d point,\n    std::string label=std::string())\nAddControlPoint(self, point:[float, float, float], label:str=...)\n    -> int\nC++: int AddControlPoint(double point[3],\n    std::string label=std::string())\nAddControlPoint(self, x:float, y:float, z:float, label:str=...)\n    -> int\nC++: int AddControlPoint(double x, double y, double z,\n    std::string label=std::string())\n\nAdd a new control point, returning the point index, -1 on\nfailure.\n"},
  {"AddControlPointWorld", PyvtkMRMLMarkupsNode_AddControlPointWorld, METH_VARARGS,
   "AddControlPointWorld(self, point:vtkVector3d, label:str=...)\n    -> int\nC++: int AddControlPointWorld(vtkVector3d point,\n    std::string label=std::string())\nAddControlPointWorld(self, point:[float, float, float],\n    label:str=...) -> int\nC++: int AddControlPointWorld(double point[3],\n    std::string label=std::string())\nAddControlPointWorld(self, x:float, y:float, z:float,\n    label:str=...) -> int\nC++: int AddControlPointWorld(double x, double y, double z,\n    std::string label=std::string())\n\nAdd a new control point, defined in the world coordinate system.\nReturn index of point index, -1 on failure.\n"},
  {"InsertControlPoint", PyvtkMRMLMarkupsNode_InsertControlPoint, METH_VARARGS,
   "InsertControlPoint(self, n:int, point:vtkVector3d, label:str=...)\n    -> bool\nC++: bool InsertControlPoint(int n, vtkVector3d point,\n    std::string label=std::string())\nInsertControlPoint(self, n:int, point:[float, float, float],\n    label:str=...) -> bool\nC++: bool InsertControlPoint(int n, double point[3],\n    std::string label=std::string())\n\n"},
  {"InsertControlPointWorld", PyvtkMRMLMarkupsNode_InsertControlPointWorld, METH_VARARGS,
   "InsertControlPointWorld(self, n:int, pointWorld:vtkVector3d,\n    label:str=...) -> bool\nC++: bool InsertControlPointWorld(int n, vtkVector3d pointWorld,\n    std::string label=std::string())\nInsertControlPointWorld(self, n:int, pointWorld:[float, float,\n    float], label:str=...) -> bool\nC++: bool InsertControlPointWorld(int n, double pointWorld[3],\n    std::string label=std::string())\n\n"},
  {"RemoveNthControlPoint", PyvtkMRMLMarkupsNode_RemoveNthControlPoint, METH_VARARGS,
   "RemoveNthControlPoint(self, pointIndex:int) -> None\nC++: void RemoveNthControlPoint(int pointIndex)\n\nRemove Nth Control Point\n"},
  {"SwapControlPoints", PyvtkMRMLMarkupsNode_SwapControlPoints, METH_VARARGS,
   "SwapControlPoints(self, m1:int, m2:int) -> None\nC++: void SwapControlPoints(int m1, int m2)\n\nSwap two control points (position data and all other properties).\n"},
  {"GetNthControlPointAutoCreated", PyvtkMRMLMarkupsNode_GetNthControlPointAutoCreated, METH_VARARGS,
   "GetNthControlPointAutoCreated(self, n:int) -> bool\nC++: bool GetNthControlPointAutoCreated(int n)\n\nGet/Set control point auto-created status. Set to true if point\nwas generated automatically\n"},
  {"SetNthControlPointAutoCreated", PyvtkMRMLMarkupsNode_SetNthControlPointAutoCreated, METH_VARARGS,
   "SetNthControlPointAutoCreated(self, n:int, flag:bool) -> None\nC++: void SetNthControlPointAutoCreated(int n, bool flag)\n\n"},
  {"GetNthControlPointPosition", PyvtkMRMLMarkupsNode_GetNthControlPointPosition, METH_VARARGS,
   "GetNthControlPointPosition(self, pointIndex:int, point:[float,\n    float, float]) -> None\nC++: void GetNthControlPointPosition(int pointIndex,\n    double point[3])\nGetNthControlPointPosition(self, pointIndex:int) -> (float, float,\n     float)\nC++: double *GetNthControlPointPosition(int pointIndex)\n\nGet the position of the Nth control point setting the elements of\npoint\n"},
  {"GetNthControlPointPositionVector", PyvtkMRMLMarkupsNode_GetNthControlPointPositionVector, METH_VARARGS,
   "GetNthControlPointPositionVector(self, pointIndex:int)\n    -> vtkVector3d\nC++: vtkVector3d GetNthControlPointPositionVector(int pointIndex)\n\nGet the position of the Nth control point returning it as a\nvtkVector3d, return (0,0,0) if not found\n"},
  {"GetNthControlPointPositionWorld", PyvtkMRMLMarkupsNode_GetNthControlPointPositionWorld, METH_VARARGS,
   "GetNthControlPointPositionWorld(self, pointIndex:int,\n    worldxyz:[float, float, float]) -> int\nC++: int GetNthControlPointPositionWorld(int pointIndex,\n    double worldxyz[3])\nGetNthControlPointPositionWorld(self, pointIndex:int)\n    -> vtkVector3d\nC++: vtkVector3d GetNthControlPointPositionWorld(int pointIndex)\n\nGet the position of the Nth control point in World coordinate\nsystem Returns 0 on failure, 1 on success.\n"},
  {"SetNthControlPointPosition", PyvtkMRMLMarkupsNode_SetNthControlPointPosition, METH_VARARGS,
   "SetNthControlPointPosition(self, pointIndex:int, x:float, y:float,\n     z:float, positionStatus:int=...) -> None\nC++: void SetNthControlPointPosition(const int pointIndex,\n    const double x, const double y, const double z,\n    int positionStatus=PositionDefined)\nSetNthControlPointPosition(self, pointIndex:int, position:(float,\n    float, float), positionStatus:int=...) -> None\nC++: void SetNthControlPointPosition(const int pointIndex,\n    const double position[3], int positionStatus=PositionDefined)\n\nSet of the Nth control point position from coordinates\n"},
  {"SetNthControlPointPositionWorld", PyvtkMRMLMarkupsNode_SetNthControlPointPositionWorld, METH_VARARGS,
   "SetNthControlPointPositionWorld(self, pointIndex:int, x:float,\n    y:float, z:float, positionStatus:int=...) -> None\nC++: void SetNthControlPointPositionWorld(const int pointIndex,\n    const double x, const double y, const double z,\n    int positionStatus=PositionDefined)\nSetNthControlPointPositionWorld(self, pointIndex:int, position:(\n    float, float, float), positionStatus:int=...) -> None\nC++: void SetNthControlPointPositionWorld(const int pointIndex,\n    const double position[3], int positionStatus=PositionDefined)\n\nSet of the Nth control point position using World coordinate\nsystem Calls SetNthControlPointPosition after transforming the\npassed in coordinate\n\\sa SetNthControlPointPosition\n"},
  {"SetNthControlPointPositionOrientationWorld", PyvtkMRMLMarkupsNode_SetNthControlPointPositionOrientationWorld, METH_VARARGS,
   "SetNthControlPointPositionOrientationWorld(self, pointIndex:int,\n    pos:(float, float, float), orientationMatrix:(float, float,\n    float, float, float, float, float, float, float),\n    associatedNodeID:str, positionStatus:int=...) -> None\nC++: void SetNthControlPointPositionOrientationWorld(\n    const int pointIndex, const double pos[3],\n    const double orientationMatrix[9],\n    const char *associatedNodeID,\n    int positionStatus=PositionDefined)\n\nSet of the Nth control point position and orientation from an\narray using World coordinate system. Orientation: x (0, 3, 6), y\n(1, 4, 7), z (2, 5, 8)\n\\sa SetNthControlPointPosition\n"},
  {"SetNthControlPointOrientation", PyvtkMRMLMarkupsNode_SetNthControlPointOrientation, METH_VARARGS,
   "SetNthControlPointOrientation(self, n:int, w:float, x:float,\n    y:float, z:float) -> None\nC++: void SetNthControlPointOrientation(int n, double w, double x,\n     double y, double z)\nSetNthControlPointOrientation(self, n:int, wxyz:(float, float,\n    float, float)) -> None\nC++: void SetNthControlPointOrientation(int n,\n    const double wxyz[4])\n\nSet the orientation for the Nth control point from a WXYZ\norientation. The value W is in degrees.\n"},
  {"GetNthControlPointOrientation", PyvtkMRMLMarkupsNode_GetNthControlPointOrientation, METH_VARARGS,
   "GetNthControlPointOrientation(self, n:int, orientationWXYZ:[float,\n     float, float, float]) -> None\nC++: void GetNthControlPointOrientation(int n,\n    double orientationWXYZ[4])\n\nGet the WXYZ orientation for the Nth control point The value W is\nin degrees.\n"},
  {"GetNthControlPointOrientationMatrix", PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrix, METH_VARARGS,
   "GetNthControlPointOrientationMatrix(self, n:int) -> (float, float,\n     float, float, float, float, float, float, float)\nC++: double *GetNthControlPointOrientationMatrix(int n)\nGetNthControlPointOrientationMatrix(self, n:int,\n    matrix:vtkMatrix3x3) -> None\nC++: void GetNthControlPointOrientationMatrix(int n,\n    vtkMatrix3x3 *matrix)\n\nGet/Set orientation as 9 values: x, y, and z axis directions,\nrespectively: x (0, 3, 6), y (1, 4, 7), z (2, 5, 8)\n"},
  {"SetNthControlPointOrientationMatrix", PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrix, METH_VARARGS,
   "SetNthControlPointOrientationMatrix(self, n:int,\n    orientationMatrix:[float, float, float, float, float, float,\n    float, float, float]) -> None\nC++: void SetNthControlPointOrientationMatrix(int n,\n    double orientationMatrix[9])\nSetNthControlPointOrientationMatrix(self, n:int,\n    matrix:vtkMatrix3x3) -> None\nC++: void SetNthControlPointOrientationMatrix(int n,\n    vtkMatrix3x3 *matrix)\n\n"},
  {"GetNthControlPointOrientationMatrixWorld", PyvtkMRMLMarkupsNode_GetNthControlPointOrientationMatrixWorld, METH_VARARGS,
   "GetNthControlPointOrientationMatrixWorld(self, n:int,\n    orientationMatrix:[float, float, float, float, float, float,\n    float, float, float]) -> None\nC++: void GetNthControlPointOrientationMatrixWorld(int n,\n    double orientationMatrix[9])\nGetNthControlPointOrientationMatrixWorld(self, n:int)\n    -> vtkVector_IdLi9EE\nC++: vtkVector<double,\n    9> GetNthControlPointOrientationMatrixWorld(int n)\nGetNthControlPointOrientationMatrixWorld(self, n:int,\n    matrix:vtkMatrix3x3) -> None\nC++: void GetNthControlPointOrientationMatrixWorld(int n,\n    vtkMatrix3x3 *matrix)\n\nGet/Set orientation in world coordinate system as 9 values: x, y,\nand z axis directions, respectively: x (0, 3, 6), y (1, 4, 7), z\n(2, 5, 8)\n"},
  {"SetNthControlPointOrientationMatrixWorld", PyvtkMRMLMarkupsNode_SetNthControlPointOrientationMatrixWorld, METH_VARARGS,
   "SetNthControlPointOrientationMatrixWorld(self, n:int,\n    orientationMatrix:(float, float, float, float, float, float,\n    float, float, float)) -> None\nC++: void SetNthControlPointOrientationMatrixWorld(int n,\n    const double orientationMatrix[9])\nSetNthControlPointOrientationMatrixWorld(self, n:int,\n    matrix:vtkMatrix3x3) -> None\nC++: void SetNthControlPointOrientationMatrixWorld(int n,\n    vtkMatrix3x3 *matrix)\n\n"},
  {"GetNthControlPointPositionStatus", PyvtkMRMLMarkupsNode_GetNthControlPointPositionStatus, METH_VARARGS,
   "GetNthControlPointPositionStatus(self, pointIndex:int) -> int\nC++: int GetNthControlPointPositionStatus(int pointIndex)\n\nGet control point position status (PositionUndefined,\nPositionPreview, PositionDefined)\n"},
  {"GetNthControlPointIndexByPositionStatus", PyvtkMRMLMarkupsNode_GetNthControlPointIndexByPositionStatus, METH_VARARGS,
   "GetNthControlPointIndexByPositionStatus(self, pointIndex:int,\n    positionStatus:int) -> int\nC++: int GetNthControlPointIndexByPositionStatus(int pointIndex,\n    int positionStatus)\n\nGet index of N-th control point of the specified status. (for\nexample, get index of N-th placed control point). pointIndex is\nzero-based, so to get index of the first control point, use\npointIndex=0. Return -1 if no such control point is found.\n"},
  {"UnsetNthControlPointPosition", PyvtkMRMLMarkupsNode_UnsetNthControlPointPosition, METH_VARARGS,
   "UnsetNthControlPointPosition(self, pointIndex:int) -> None\nC++: void UnsetNthControlPointPosition(int pointIndex)\n\nSet control point status to undefined.\n"},
  {"SetNthControlPointPositionMissing", PyvtkMRMLMarkupsNode_SetNthControlPointPositionMissing, METH_VARARGS,
   "SetNthControlPointPositionMissing(self, pointIndex:int) -> None\nC++: void SetNthControlPointPositionMissing(int pointIndex)\n\nSet control point status to ignored.\n"},
  {"ResetNthControlPointPosition", PyvtkMRMLMarkupsNode_ResetNthControlPointPosition, METH_VARARGS,
   "ResetNthControlPointPosition(self, n:int) -> None\nC++: void ResetNthControlPointPosition(int n)\n\nSet control point status to preview\n"},
  {"RestoreNthControlPointPosition", PyvtkMRMLMarkupsNode_RestoreNthControlPointPosition, METH_VARARGS,
   "RestoreNthControlPointPosition(self, n:int) -> None\nC++: void RestoreNthControlPointPosition(int n)\n\nSet control point status to defined and return to the previous\nposition\n"},
  {"GetCenterOfRotation", PyvtkMRMLMarkupsNode_GetCenterOfRotation, METH_VARARGS,
   "GetCenterOfRotation(self) -> vtkVector3d\nC++: vtkVector3d GetCenterOfRotation()\nGetCenterOfRotation(self, point:[float, float, float]) -> bool\nC++: bool GetCenterOfRotation(double point[3])\n\nGet the center position of the transformations, such as rotation\nand scaling. Return (0,0,0) if undefined.\n\\sa GetCenterOfRotationWorld\n"},
  {"GetCenterOfRotationWorld", PyvtkMRMLMarkupsNode_GetCenterOfRotationWorld, METH_VARARGS,
   "GetCenterOfRotationWorld(self, worldxyz:[float, float, float])\n    -> bool\nC++: bool GetCenterOfRotationWorld(double worldxyz[3])\n\nGet the center position of the transformations, such as rotation\nand scaling, in World coordinate system. Returns true on success.\n"},
  {"SetCenterOfRotation", PyvtkMRMLMarkupsNode_SetCenterOfRotation, METH_VARARGS,
   "SetCenterOfRotation(self, x:float, y:float, z:float) -> None\nC++: void SetCenterOfRotation(const double x, const double y,\n    const double z)\nSetCenterOfRotation(self, position:(float, float, float)) -> None\nC++: void SetCenterOfRotation(const double position[3])\n\nSet the center position of the transformations, such as rotation\nand scaling.\n\\sa SetCenterOfRotationWorld\n"},
  {"SetCenterOfRotationWorld", PyvtkMRMLMarkupsNode_SetCenterOfRotationWorld, METH_VARARGS,
   "SetCenterOfRotationWorld(self, x:float, y:float, z:float) -> None\nC++: void SetCenterOfRotationWorld(const double x, const double y,\n     const double z)\nSetCenterOfRotationWorld(self, positionWorld:(float, float, float)\n    ) -> None\nC++: void SetCenterOfRotationWorld(const double positionWorld[3])\n\nSet the center position of the transformations, such as rotation\nand scaling.\n\\sa SetCenterOfRotation\n"},
  {"GetNthControlPointNormal", PyvtkMRMLMarkupsNode_GetNthControlPointNormal, METH_VARARGS,
   "GetNthControlPointNormal(self, n:int, normal:[float, float,\n    float]) -> None\nC++: void GetNthControlPointNormal(int n, double normal[3])\nGetNthControlPointNormal(self, n:int) -> vtkVector3d\nC++: vtkVector3d GetNthControlPointNormal(int n)\n\nGet/Set normal direction (orientation of z axis) in local\ncoordinate system.\n"},
  {"GetNthControlPointNormalWorld", PyvtkMRMLMarkupsNode_GetNthControlPointNormalWorld, METH_VARARGS,
   "GetNthControlPointNormalWorld(self, n:int, normalWorld:[float,\n    float, float]) -> None\nC++: void GetNthControlPointNormalWorld(int n,\n    double normalWorld[3])\nGetNthControlPointNormalWorld(self, n:int) -> vtkVector3d\nC++: vtkVector3d GetNthControlPointNormalWorld(int n)\n\nGet normal direction (orientation of z axis) in world coordinate\nsystem.\n"},
  {"GetNthControlPointAssociatedNodeID", PyvtkMRMLMarkupsNode_GetNthControlPointAssociatedNodeID, METH_VARARGS,
   "GetNthControlPointAssociatedNodeID(self, n:int=0) -> str\nC++: std::string GetNthControlPointAssociatedNodeID(int n=0)\n\nGet/Set the associated node id for the Nth control point\n"},
  {"SetNthControlPointAssociatedNodeID", PyvtkMRMLMarkupsNode_SetNthControlPointAssociatedNodeID, METH_VARARGS,
   "SetNthControlPointAssociatedNodeID(self, n:int, id:str) -> None\nC++: void SetNthControlPointAssociatedNodeID(int n,\n    std::string id)\n\n"},
  {"GetNthControlPointID", PyvtkMRMLMarkupsNode_GetNthControlPointID, METH_VARARGS,
   "GetNthControlPointID(self, n:int) -> str\nC++: std::string GetNthControlPointID(int n)\n\nGet the id for the Nth control point\n"},
  {"GetNthControlPointIndexByID", PyvtkMRMLMarkupsNode_GetNthControlPointIndexByID, METH_VARARGS,
   "GetNthControlPointIndexByID(self, controlPointID:str) -> int\nC++: int GetNthControlPointIndexByID(const char *controlPointID)\n\nGet the Nth control point index based on it's ID. Deprecated. Use\nGetControlPointIndexByID instead.\n"},
  {"GetControlPointIndexByID", PyvtkMRMLMarkupsNode_GetControlPointIndexByID, METH_VARARGS,
   "GetControlPointIndexByID(self, id:str) -> int\nC++: int GetControlPointIndexByID(const char *id)\n\nFind the first control point index by the specified id, label, or\ndescription. Returns -1 if no such control point was found.\n"},
  {"GetControlPointIndexByLabel", PyvtkMRMLMarkupsNode_GetControlPointIndexByLabel, METH_VARARGS,
   "GetControlPointIndexByLabel(self, label:str) -> int\nC++: int GetControlPointIndexByLabel(const char *label)\n\n"},
  {"GetControlPointIndexByDescription", PyvtkMRMLMarkupsNode_GetControlPointIndexByDescription, METH_VARARGS,
   "GetControlPointIndexByDescription(self, description:str) -> int\nC++: int GetControlPointIndexByDescription(\n    const char *description)\n\n"},
  {"GetNthControlPointSelected", PyvtkMRMLMarkupsNode_GetNthControlPointSelected, METH_VARARGS,
   "GetNthControlPointSelected(self, n:int=0) -> bool\nC++: bool GetNthControlPointSelected(int n=0)\n\nGet the Selected flag on the Nth control point, returns false if\ncontrol point doesn't exist\n"},
  {"SetNthControlPointSelected", PyvtkMRMLMarkupsNode_SetNthControlPointSelected, METH_VARARGS,
   "SetNthControlPointSelected(self, n:int, flag:bool) -> None\nC++: void SetNthControlPointSelected(int n, bool flag)\n\nSet the Selected flag on the Nth control point\n\\sa vtkMRMLNode::SetSelected\n"},
  {"GetNthControlPointLocked", PyvtkMRMLMarkupsNode_GetNthControlPointLocked, METH_VARARGS,
   "GetNthControlPointLocked(self, n:int=0) -> bool\nC++: bool GetNthControlPointLocked(int n=0)\n\nGet the Lock flag on the Nth control point, returns false if\ncontrol point doesn't exist\n"},
  {"SetNthControlPointLocked", PyvtkMRMLMarkupsNode_SetNthControlPointLocked, METH_VARARGS,
   "SetNthControlPointLocked(self, n:int, flag:bool) -> None\nC++: void SetNthControlPointLocked(int n, bool flag)\n\nSet Locked property on Nth control point. If locked is set to\ntrue on the node/list as a whole, the Nth control point locked\nflag is used to determine if it is locked. If the locked flag is\nset to false on the node as a whole, all control point are locked\nbut keep this value for when the list as a whole is turned\nunlocked.\n\\sa vtkMRMLMarkupsNode::SetLocked\n"},
  {"GetNthControlPointVisibility", PyvtkMRMLMarkupsNode_GetNthControlPointVisibility, METH_VARARGS,
   "GetNthControlPointVisibility(self, n:int=0) -> bool\nC++: bool GetNthControlPointVisibility(int n=0)\n\nGet the Visibility flag on the Nth control point, returns false\nif control point doesn't exist\n"},
  {"GetNthControlPointPositionVisibility", PyvtkMRMLMarkupsNode_GetNthControlPointPositionVisibility, METH_VARARGS,
   "GetNthControlPointPositionVisibility(self, n:int=0) -> bool\nC++: bool GetNthControlPointPositionVisibility(int n=0)\n\nGet point visibility and visibility of point position status\nreturns true if point visibility is enabled and the position is\ndefined or in preview mode.\n"},
  {"SetNthControlPointVisibility", PyvtkMRMLMarkupsNode_SetNthControlPointVisibility, METH_VARARGS,
   "SetNthControlPointVisibility(self, n:int, flag:bool) -> None\nC++: void SetNthControlPointVisibility(int n, bool flag)\n\nSet Visibility property on Nth control point. If the visibility\nis set to true on the node/list as a whole, the Nth control point\nvisibility is used to determine if it is visible. If the\nvisibility is set to false on the node as a whole, all control\npoints are hidden but keep this value for when the list as a\nwhole is turned visible.\n\\sa vtkMRMLDisplayableNode::SetDisplayVisibility\n\\sa vtkMRMLDisplayNode::SetVisibility\n"},
  {"GetNthControlPointLabel", PyvtkMRMLMarkupsNode_GetNthControlPointLabel, METH_VARARGS,
   "GetNthControlPointLabel(self, n:int=0) -> str\nC++: std::string GetNthControlPointLabel(int n=0)\n\nGet/Set the Label on the Nth control point.\n"},
  {"SetNthControlPointLabel", PyvtkMRMLMarkupsNode_SetNthControlPointLabel, METH_VARARGS,
   "SetNthControlPointLabel(self, n:int, label:str) -> None\nC++: void SetNthControlPointLabel(int n, std::string label)\n\n"},
  {"GetControlPointLabels", PyvtkMRMLMarkupsNode_GetControlPointLabels, METH_VARARGS,
   "GetControlPointLabels(self, labels:vtkStringArray) -> None\nC++: void GetControlPointLabels(vtkStringArray *labels)\n\nGet all control point labels at once.\n"},
  {"GetNthControlPointDescription", PyvtkMRMLMarkupsNode_GetNthControlPointDescription, METH_VARARGS,
   "GetNthControlPointDescription(self, n:int=0) -> str\nC++: std::string GetNthControlPointDescription(int n=0)\n\nGet/Set the Description flag on the Nth control point, returns\nfalse if control point doesn't exist\n"},
  {"SetNthControlPointDescription", PyvtkMRMLMarkupsNode_SetNthControlPointDescription, METH_VARARGS,
   "SetNthControlPointDescription(self, n:int, description:str)\n    -> None\nC++: void SetNthControlPointDescription(int n,\n    std::string description)\n\n"},
  {"CanApplyNonLinearTransforms", PyvtkMRMLMarkupsNode_CanApplyNonLinearTransforms, METH_VARARGS,
   "CanApplyNonLinearTransforms(self) -> bool\nC++: bool CanApplyNonLinearTransforms() override;\n\nReturns true since can apply non linear transforms\n\\sa ApplyTransform\n"},
  {"ApplyTransform", PyvtkMRMLMarkupsNode_ApplyTransform, METH_VARARGS,
   "ApplyTransform(self, transform:vtkAbstractTransform) -> None\nC++: void ApplyTransform(vtkAbstractTransform *transform)\n    override;\n\nApply the passed transformation to all of the control points\n\\sa CanApplyNonLinearTransforms\n"},
  {"GetControlPointLabelFormat", PyvtkMRMLMarkupsNode_GetControlPointLabelFormat, METH_VARARGS,
   "GetControlPointLabelFormat(self) -> str\nC++: std::string GetControlPointLabelFormat()\n\nGet/Set the ControlPointLabelFormat string that defines the\ncontrol point names. In standard printf notation, with the\naddition of %N being replaced by the list name. %d will resolve\nto the highest not yet used list index integer. Character strings\nwill otherwise pass through Defaults to %N-%d which will yield\ncontrol point names of Name-0, Name-1, Name-2. If format string\nis changed then LabelFormatModifiedEvent event is invoked.\n"},
  {"SetControlPointLabelFormat", PyvtkMRMLMarkupsNode_SetControlPointLabelFormat, METH_VARARGS,
   "SetControlPointLabelFormat(self, format:str) -> None\nC++: void SetControlPointLabelFormat(std::string format)\n\n"},
  {"ReplaceListNameInControlPointLabelFormat", PyvtkMRMLMarkupsNode_ReplaceListNameInControlPointLabelFormat, METH_VARARGS,
   "ReplaceListNameInControlPointLabelFormat(self) -> str\nC++: std::string ReplaceListNameInControlPointLabelFormat()\n\nIf the ControlPointLabelFormat contains the string %N, return a\nstring in which that has been replaced with the list name. If the\nlist name is nullptr, replace it with an empty string. If the\nControlPointLabelFormat doesn't contain %N, return\nControlPointLabelFormat\n"},
  {"GetModifiedSinceRead", PyvtkMRMLMarkupsNode_GetModifiedSinceRead, METH_VARARGS,
   "GetModifiedSinceRead(self) -> bool\nC++: bool GetModifiedSinceRead() override;\n\nReimplemented to take into account the modified time of the\nmarkups Returns true if the node (default behavior) or the\nmarkups are modified since read/written. Note: The MTime of the\nmarkups node is used to know if it has been modified. So if you\ninvoke class specific modified events without calling Modified()\non the markups, GetModifiedSinceRead() won't return true.\n\\sa vtkMRMLStorableNode::GetModifiedSinceRead()\n"},
  {"ResetNthControlPointID", PyvtkMRMLMarkupsNode_ResetNthControlPointID, METH_VARARGS,
   "ResetNthControlPointID(self, n:int) -> bool\nC++: bool ResetNthControlPointID(int n)\n\nReset the id of the Nth control point according to the local\npolicy Called after an already initialized markup has been added\nto the scene. Returns false if n out of bounds, true on success.\n"},
  {"GetFixedNumberOfControlPoints", PyvtkMRMLMarkupsNode_GetFixedNumberOfControlPoints, METH_VARARGS,
   "GetFixedNumberOfControlPoints(self) -> bool\nC++: bool GetFixedNumberOfControlPoints()\n\nGet/Set locking of control point count. If number of control\npoints is fixed then points cannot be added or removed only their\nposition can be set/unset.\n"},
  {"SetFixedNumberOfControlPoints", PyvtkMRMLMarkupsNode_SetFixedNumberOfControlPoints, METH_VARARGS,
   "SetFixedNumberOfControlPoints(self, fixed:bool) -> None\nC++: void SetFixedNumberOfControlPoints(bool fixed)\n\n"},
  {"GetRequiredNumberOfControlPoints", PyvtkMRMLMarkupsNode_GetRequiredNumberOfControlPoints, METH_VARARGS,
   "GetRequiredNumberOfControlPoints(self) -> int\nC++: virtual int GetRequiredNumberOfControlPoints()\n\nReturn the number of control points that are required for\ndefining this widget. Interaction mode remains in \"place\" mode\nuntil this number is reached. If the number is set to 0 then no\nit means there is no preference (this is the default value).\n"},
  {"GetMaximumNumberOfControlPoints", PyvtkMRMLMarkupsNode_GetMaximumNumberOfControlPoints, METH_VARARGS,
   "GetMaximumNumberOfControlPoints(self) -> int\nC++: virtual int GetMaximumNumberOfControlPoints()\n\nMaximum number of control points limits the number of markups\nallowed in the node. If maximum number of control points is set\nto -1 then no it means there is no limit (this is the default\nvalue). The value is an indication to the user interface and does\nnot affect prevent adding markups to a node programmatically. If\nvalue is set to lower value than the number of markups in the\nnode, then existing markups are not deleted. 2 for line, and 3\nfor angle Markups\n"},
  {"ConvertOrientationMatrixToWXYZ", PyvtkMRMLMarkupsNode_ConvertOrientationMatrixToWXYZ, METH_VARARGS,
   "ConvertOrientationMatrixToWXYZ(orientationMatrix:(float, float,\n    float, float, float, float, float, float, float),\n    orientationWXYZ:[float, float, float, float]) -> None\nC++: static void ConvertOrientationMatrixToWXYZ(\n    const double orientationMatrix[9], double orientationWXYZ[4])\n\nHelper methods for converting orientation between WXYZ quaternion\nand 3x3 matrix representation. WXYZ: W rotation angle in degrees,\nXYZ is rotation axis.\n"},
  {"ConvertOrientationWXYZToMatrix", PyvtkMRMLMarkupsNode_ConvertOrientationWXYZToMatrix, METH_VARARGS,
   "ConvertOrientationWXYZToMatrix(orientationWXYZ:(float, float,\n    float, float), orientationMatrix:[float, float, float, float,\n    float, float, float, float, float]) -> None\nC++: static void ConvertOrientationWXYZToMatrix(\n    const double orientationWXYZ[4], double orientationMatrix[9])\n\n"},
  {"GetCurvePoints", PyvtkMRMLMarkupsNode_GetCurvePoints, METH_VARARGS,
   "GetCurvePoints(self) -> vtkPoints\nC++: virtual vtkPoints *GetCurvePoints()\n\nGet markup control points.\n"},
  {"GetCurvePointsWorld", PyvtkMRMLMarkupsNode_GetCurvePointsWorld, METH_VARARGS,
   "GetCurvePointsWorld(self) -> vtkPoints\nC++: virtual vtkPoints *GetCurvePointsWorld()\n\n"},
  {"GetCurve", PyvtkMRMLMarkupsNode_GetCurve, METH_VARARGS,
   "GetCurve(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetCurve()\n\n"},
  {"GetCurveWorld", PyvtkMRMLMarkupsNode_GetCurveWorld, METH_VARARGS,
   "GetCurveWorld(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetCurveWorld()\n\n"},
  {"GetCurveWorldConnection", PyvtkMRMLMarkupsNode_GetCurveWorldConnection, METH_VARARGS,
   "GetCurveWorldConnection(self) -> vtkAlgorithmOutput\nC++: virtual vtkAlgorithmOutput *GetCurveWorldConnection()\n\n"},
  {"GetControlPointIndexFromInterpolatedPointIndex", PyvtkMRMLMarkupsNode_GetControlPointIndexFromInterpolatedPointIndex, METH_VARARGS,
   "GetControlPointIndexFromInterpolatedPointIndex(self,\n    interpolatedPointIndex:int) -> int\nC++: int GetControlPointIndexFromInterpolatedPointIndex(\n    vtkIdType interpolatedPointIndex)\n\nConverts curve point index to control point index.\n"},
  {"GetCurveClosed", PyvtkMRMLMarkupsNode_GetCurveClosed, METH_VARARGS,
   "GetCurveClosed(self) -> bool\nC++: virtual bool GetCurveClosed()\n\nReturns true if the curve generator creates a closed curve.\n"},
  {"GetCurveGenerator", PyvtkMRMLMarkupsNode_GetCurveGenerator, METH_VARARGS,
   "GetCurveGenerator(self) -> vtkCurveGenerator\nC++: vtkCurveGenerator *GetCurveGenerator()\n\nThe internal instance of the curve generator to allow use of the\ncurve for other computations. Any custom overrides of the\ninterpolation modes are not persisted in MRML.\n"},
  {"GetCurveCoordinateSystemGeneratorWorld", PyvtkMRMLMarkupsNode_GetCurveCoordinateSystemGeneratorWorld, METH_VARARGS,
   "GetCurveCoordinateSystemGeneratorWorld(self)\n    -> vtkParallelTransportFrame\nC++: vtkParallelTransportFrame *GetCurveCoordinateSystemGeneratorWorld(\n    )\n\nThe internal instance of the curve coordinate system generator to\nallow use of the coordinate systems computed for curve point for\nother computations.\n"},
  {"GetRASBounds", PyvtkMRMLMarkupsNode_GetRASBounds, METH_VARARGS,
   "GetRASBounds(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void GetRASBounds(double bounds[6]) override;\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). This method returns the bounds of the object with any\ntransforms that may be applied to it.\n\\sa GetBounds()\n"},
  {"GetBounds", PyvtkMRMLMarkupsNode_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nGet bounding box in global RAS form (xmin,xmax, ymin,ymax,\nzmin,zmax). This method always returns the bounds of the\nuntransformed object.\n\\sa GetRASBounds()\n"},
  {"GetClosestControlPointIndexToPositionWorld", PyvtkMRMLMarkupsNode_GetClosestControlPointIndexToPositionWorld, METH_VARARGS,
   "GetClosestControlPointIndexToPositionWorld(self, pos:[float,\n    float, float], visibleOnly:bool=False) -> int\nC++: int GetClosestControlPointIndexToPositionWorld(double pos[3],\n     bool visibleOnly=false)\n\nGet the index of the closest control point to the world\ncoordinates. If visibleOnly is set to true then index of the\nclosest visible control point will be returned.\n"},
  {"GetInteractionHandleToWorldMatrix", PyvtkMRMLMarkupsNode_GetInteractionHandleToWorldMatrix, METH_VARARGS,
   "GetInteractionHandleToWorldMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetInteractionHandleToWorldMatrix()\n\n4x4 matrix detailing the orientation and position in world\ncoordinates of the interaction handles.\n"},
  {"GetPropertiesLabelText", PyvtkMRMLMarkupsNode_GetPropertiesLabelText, METH_VARARGS,
   "GetPropertiesLabelText(self) -> str\nC++: virtual std::string GetPropertiesLabelText()\n\nGet displayable string of the properties label (containing name,\nmeasurements, etc.) that identifies the node and provides basic\ninformation.\n"},
  {"GetUnitNode", PyvtkMRMLMarkupsNode_GetUnitNode, METH_VARARGS,
   "GetUnitNode(self, quantity:str) -> vtkMRMLUnitNode\nC++: vtkMRMLUnitNode *GetUnitNode(const char *quantity)\n\nUtility function to get unit node from scene\n"},
  {"UpdateAssignedAttribute", PyvtkMRMLMarkupsNode_UpdateAssignedAttribute, METH_VARARGS,
   "UpdateAssignedAttribute(self) -> None\nC++: virtual void UpdateAssignedAttribute()\n\nUpdate the AssignAttribute filter based on its ActiveScalarName\nand its ActiveAttributeLocation To be re-implemented in\nsubclasses\n"},
  {"GetControlPointPlacementComplete", PyvtkMRMLMarkupsNode_GetControlPointPlacementComplete, METH_VARARGS,
   "GetControlPointPlacementComplete(self) -> bool\nC++: virtual bool GetControlPointPlacementComplete()\n\nReturns true if no additional control points can be added to this\nnode.\n"},
  {"GetControlPointPlacementStartIndex", PyvtkMRMLMarkupsNode_GetControlPointPlacementStartIndex, METH_VARARGS,
   "GetControlPointPlacementStartIndex(self) -> int\nC++: int GetControlPointPlacementStartIndex()\n\nSet the index of the control point that will be placed next.\n\nCurrently, this property is not stored persistently in the scene\nand modifying it does not trigger a node modification event,\nbecause it is considered to be a temporary value. For example, it\nwould not be desirable to store this value for each item in a\nmarkups node sequence, or include it in undo/redo.\n"},
  {"SetControlPointPlacementStartIndex", PyvtkMRMLMarkupsNode_SetControlPointPlacementStartIndex, METH_VARARGS,
   "SetControlPointPlacementStartIndex(self, __a:int) -> None\nC++: void SetControlPointPlacementStartIndex(int)\n\n"},
  {"GetLastUsedControlPointNumber", PyvtkMRMLMarkupsNode_GetLastUsedControlPointNumber, METH_VARARGS,
   "GetLastUsedControlPointNumber(self) -> int\nC++: virtual int GetLastUsedControlPointNumber()\n\nThis value is used for generating number in the control point's\nname when a new point is added. The value is not decremented when\na control point is deleted to keep the control point names\nunique. The value is reset to 0 when \\sa RemoveAllControlPoints\nis called.\n"},
  {"SetLastUsedControlPointNumber", PyvtkMRMLMarkupsNode_SetLastUsedControlPointNumber, METH_VARARGS,
   "SetLastUsedControlPointNumber(self, _arg:int) -> None\nC++: virtual void SetLastUsedControlPointNumber(int _arg)\n\n"},
  {"RemoveAllMarkups", PyvtkMRMLMarkupsNode_RemoveAllMarkups, METH_VARARGS,
   "RemoveAllMarkups(self) -> None\nC++: void RemoveAllMarkups()\n\n\\deprecated Use RemoveAllControlPoints instead.\n"},
  {"MarkupExists", PyvtkMRMLMarkupsNode_MarkupExists, METH_VARARGS,
   "MarkupExists(self, n:int) -> bool\nC++: bool MarkupExists(int n)\n\n\\deprecated Use ControlPointExists instead.\n"},
  {"GetNumberOfMarkups", PyvtkMRMLMarkupsNode_GetNumberOfMarkups, METH_VARARGS,
   "GetNumberOfMarkups(self) -> int\nC++: int GetNumberOfMarkups()\n\n\\deprecated Use GetNumberOfControlPoints() instead.\n"},
  {"GetNumberOfPointsInNthMarkup", PyvtkMRMLMarkupsNode_GetNumberOfPointsInNthMarkup, METH_VARARGS,
   "GetNumberOfPointsInNthMarkup(self, __a:int) -> int\nC++: int GetNumberOfPointsInNthMarkup(int)\n\n\\deprecated Use GetNumberOfControlPoints() instead.\n"},
  {"GetMarkupPointVector", PyvtkMRMLMarkupsNode_GetMarkupPointVector, METH_VARARGS,
   "GetMarkupPointVector(self, markupIndex:int, __b:int)\n    -> vtkVector3d\nC++: vtkVector3d GetMarkupPointVector(int markupIndex, int)\n\n\\deprecated Use GetNthControlPointPositionVector() method\ninstead.\n"},
  {"GetMarkupPoint", PyvtkMRMLMarkupsNode_GetMarkupPoint, METH_VARARGS,
   "GetMarkupPoint(self, markupIndex:int, pointIndex:int,\n    point:[float, float, float]) -> None\nC++: void GetMarkupPoint(int markupIndex, int pointIndex,\n    double point[3])\n\n\\deprecated Use GetNthControlPointPosition method instead.\n"},
  {"RemoveMarkup", PyvtkMRMLMarkupsNode_RemoveMarkup, METH_VARARGS,
   "RemoveMarkup(self, pointIndex:int) -> None\nC++: void RemoveMarkup(int pointIndex)\n\n\\deprecated Use RemoveNthControlPoint instead.\n"},
  {"SetNthControlPointPositionFromPointer", PyvtkMRMLMarkupsNode_SetNthControlPointPositionFromPointer, METH_VARARGS,
   "SetNthControlPointPositionFromPointer(self, pointIndex:int, pos:(\n    float, ...)) -> None\nC++: void SetNthControlPointPositionFromPointer(\n    const int pointIndex, const double *pos)\n\nSet of the Nth control point position from a pointer to an\narray\\deprecated Use SetNthControlPointPosition instead.\n\\sa SetNthControlPointPosition\n"},
  {"SetNthControlPointPositionFromArray", PyvtkMRMLMarkupsNode_SetNthControlPointPositionFromArray, METH_VARARGS,
   "SetNthControlPointPositionFromArray(self, pointIndex:int, pos:(\n    float, float, float), positionStatus:int=...) -> None\nC++: void SetNthControlPointPositionFromArray(\n    const int pointIndex, const double pos[3],\n    int positionStatus=PositionDefined)\n\nSet of the Nth control point position from an array\\deprecated\nUse SetNthControlPointPosition instead.\n"},
  {"SetNthControlPointPositionWorldFromArray", PyvtkMRMLMarkupsNode_SetNthControlPointPositionWorldFromArray, METH_VARARGS,
   "SetNthControlPointPositionWorldFromArray(self, pointIndex:int,\n    pos:(float, float, float), positionStatus:int=...) -> None\nC++: void SetNthControlPointPositionWorldFromArray(\n    const int pointIndex, const double pos[3],\n    int positionStatus=PositionDefined)\n\nSet of the Nth control point position from an array using World\ncoordinate system\\deprecated Use SetNthControlPointPositionWorld\ninstead.\n\\sa SetNthControlPointPosition\n"},
  {"SetNthControlPointPositionOrientationWorldFromArray", PyvtkMRMLMarkupsNode_SetNthControlPointPositionOrientationWorldFromArray, METH_VARARGS,
   "SetNthControlPointPositionOrientationWorldFromArray(self,\n    pointIndex:int, positionWorld:(float, float, float),\n    orientationMatrix_World:(float, float, float, float, float,\n    float, float, float, float), associatedNodeID:str,\n    positionStatus:int=...) -> None\nC++: void SetNthControlPointPositionOrientationWorldFromArray(\n    const int pointIndex, const double positionWorld[3],\n    const double orientationMatrix_World[9],\n    const char *associatedNodeID,\n    int positionStatus=PositionDefined)\n\nSet of the Nth control point position and orientation from an\narray using World coordinate system.\\deprecated Use\nSetNthControlPointPositionOrientationWorld instead. Orientation:\nx (0, 3, 6), y (1, 4, 7), z (2, 5, 8)\n\\sa SetNthControlPointPosition\n"},
  {"GetNthControlPointOrientationVector", PyvtkMRMLMarkupsNode_GetNthControlPointOrientationVector, METH_VARARGS,
   "GetNthControlPointOrientationVector(self, pointIndex:int)\n    -> vtkVector4d\nC++: vtkVector4d GetNthControlPointOrientationVector(\n    int pointIndex)\n\nGet the WXYZ orientation for the Nth control point returning it\nas a vtkVector4d, return (0,0,0,0) if not found. Note that\nvtkVector4d stores components in the order XYZW (in all other\nmethods we get/set components in WXYZ order).\\deprecated Use\nGetNthControlPointOrientation instead - with a different\nXYZW/WXYZ component order!\n"},
  {"GetCenterOfRotationVector", PyvtkMRMLMarkupsNode_GetCenterOfRotationVector, METH_VARARGS,
   "GetCenterOfRotationVector(self) -> vtkVector3d\nC++: vtkVector3d GetCenterOfRotationVector()\n\nGet the position of the center.\\deprecated Use\nGetCenterOfRotation instead. Return (0,0,0) if center position is\nundefined.\n"},
  {"SetCenterOfRotationFromPointer", PyvtkMRMLMarkupsNode_SetCenterOfRotationFromPointer, METH_VARARGS,
   "SetCenterOfRotationFromPointer(self, pos:(float, ...)) -> None\nC++: void SetCenterOfRotationFromPointer(const double *pos)\n\nSet the center position from a pointer to an array\\deprecated Use\nSetCenterOfRotation instead.\n\\sa SetCenterOfRotation\n"},
  {"SetCenterOfRotationFromArray", PyvtkMRMLMarkupsNode_SetCenterOfRotationFromArray, METH_VARARGS,
   "SetCenterOfRotationFromArray(self, pos:(float, float, float))\n    -> None\nC++: void SetCenterOfRotationFromArray(const double pos[3])\n\nSet the center position position from an array\\deprecated Use\nSetCenterOfRotation instead.\n\\sa SetCenterOfRotation\n"},
  {"SetNthControlPointOrientationFromPointer", PyvtkMRMLMarkupsNode_SetNthControlPointOrientationFromPointer, METH_VARARGS,
   "SetNthControlPointOrientationFromPointer(self, n:int,\n    orientationWXYZ:(float, ...)) -> None\nC++: void SetNthControlPointOrientationFromPointer(int n,\n    const double *orientationWXYZ)\n\nSet the orientation for the Nth control point from a WXYZ\norientation. The value W is in degrees.\\deprecated Use\nSetNthControlPointOrientation instead.\n"},
  {"SetNthControlPointOrientationFromArray", PyvtkMRMLMarkupsNode_SetNthControlPointOrientationFromArray, METH_VARARGS,
   "SetNthControlPointOrientationFromArray(self, n:int,\n    orientationWXYZ:(float, float, float, float)) -> None\nC++: void SetNthControlPointOrientationFromArray(int n,\n    const double orientationWXYZ[4])\n\n"},
  {"GetNthMarkupAssociatedNodeID", PyvtkMRMLMarkupsNode_GetNthMarkupAssociatedNodeID, METH_VARARGS,
   "GetNthMarkupAssociatedNodeID(self, n:int=0) -> str\nC++: std::string GetNthMarkupAssociatedNodeID(int n=0)\n\n\\deprecated Use GetNthControlPointAssociatedNodeID instead.\n"},
  {"SetNthMarkupAssociatedNodeID", PyvtkMRMLMarkupsNode_SetNthMarkupAssociatedNodeID, METH_VARARGS,
   "SetNthMarkupAssociatedNodeID(self, n:int, id:str) -> None\nC++: void SetNthMarkupAssociatedNodeID(int n, std::string id)\n\n\\deprecated Use SetNthControlPointAssociatedNodeID instead.\n"},
  {"GetNthMarkupID", PyvtkMRMLMarkupsNode_GetNthMarkupID, METH_VARARGS,
   "GetNthMarkupID(self, n:int=0) -> str\nC++: std::string GetNthMarkupID(int n=0)\n\n\\deprecated Use GetNthControlPointID instead.\n"},
  {"GetNthMarkupLocked", PyvtkMRMLMarkupsNode_GetNthMarkupLocked, METH_VARARGS,
   "GetNthMarkupLocked(self, n:int=0) -> bool\nC++: bool GetNthMarkupLocked(int n=0)\n\n\\deprecated Use GetNthControlPointLocked instead.\n"},
  {"SetNthMarkupLocked", PyvtkMRMLMarkupsNode_SetNthMarkupLocked, METH_VARARGS,
   "SetNthMarkupLocked(self, n:int, flag:bool) -> None\nC++: void SetNthMarkupLocked(int n, bool flag)\n\n\\deprecated Use SetNthControlPointLocked instead.\n"},
  {"GetNthMarkupLabel", PyvtkMRMLMarkupsNode_GetNthMarkupLabel, METH_VARARGS,
   "GetNthMarkupLabel(self, n:int=0) -> str\nC++: std::string GetNthMarkupLabel(int n=0)\n\n\\deprecated Use GetNthControlPointLabel instead.\n"},
  {"SetNthMarkupLabel", PyvtkMRMLMarkupsNode_SetNthMarkupLabel, METH_VARARGS,
   "SetNthMarkupLabel(self, n:int, label:str) -> None\nC++: void SetNthMarkupLabel(int n, std::string label)\n\n\\deprecated Use SetNthControlPointLabel instead.\n"},
  {"GetMarkupLabelFormat", PyvtkMRMLMarkupsNode_GetMarkupLabelFormat, METH_VARARGS,
   "GetMarkupLabelFormat(self) -> str\nC++: std::string GetMarkupLabelFormat()\n\n\\deprecated Use GetControlPointLabelFormat instead.\n"},
  {"SetMarkupLabelFormat", PyvtkMRMLMarkupsNode_SetMarkupLabelFormat, METH_VARARGS,
   "SetMarkupLabelFormat(self, format:str) -> None\nC++: void SetMarkupLabelFormat(std::string format)\n\n\\deprecated Use SetControlPointLabelFormat instead.\n"},
  {"ReplaceListNameInMarkupLabelFormat", PyvtkMRMLMarkupsNode_ReplaceListNameInMarkupLabelFormat, METH_VARARGS,
   "ReplaceListNameInMarkupLabelFormat(self) -> str\nC++: std::string ReplaceListNameInMarkupLabelFormat()\n\n\\deprecated Use ReplaceListNameInControlPointLabelFormat instead.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLMarkupsNode_Doc =
  "vtkMRMLMarkupsNode - no description provided.\n\n"
  "Superclass: vtkMRMLDisplayableNode\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLMarkupsNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerMarkupsModuleMRMLPython.vtkMRMLMarkupsNode", // tp_name
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
  PyvtkMRMLMarkupsNode_Doc, // tp_doc
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

PyObject *PyvtkMRMLMarkupsNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLMarkupsNode_Type, PyvtkMRMLMarkupsNode_Methods,
    "vtkMRMLMarkupsNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMRMLDisplayableNode");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 19; c++)
  {
    static const struct { const char *name; int value; }
      constants[19] = {
        { "LockModifiedEvent", vtkMRMLMarkupsNode::LockModifiedEvent },
        { "LabelFormatModifiedEvent", vtkMRMLMarkupsNode::LabelFormatModifiedEvent },
        { "PointAddedEvent", vtkMRMLMarkupsNode::PointAddedEvent },
        { "PointRemovedEvent", vtkMRMLMarkupsNode::PointRemovedEvent },
        { "PointPositionDefinedEvent", vtkMRMLMarkupsNode::PointPositionDefinedEvent },
        { "PointPositionUndefinedEvent", vtkMRMLMarkupsNode::PointPositionUndefinedEvent },
        { "PointPositionMissingEvent", vtkMRMLMarkupsNode::PointPositionMissingEvent },
        { "PointPositionNonMissingEvent", vtkMRMLMarkupsNode::PointPositionNonMissingEvent },
        { "PointModifiedEvent", vtkMRMLMarkupsNode::PointModifiedEvent },
        { "PointStartInteractionEvent", vtkMRMLMarkupsNode::PointStartInteractionEvent },
        { "PointEndInteractionEvent", vtkMRMLMarkupsNode::PointEndInteractionEvent },
        { "CenterOfRotationModifiedEvent", vtkMRMLMarkupsNode::CenterOfRotationModifiedEvent },
        { "FixedNumberOfControlPointsModifiedEvent", vtkMRMLMarkupsNode::FixedNumberOfControlPointsModifiedEvent },
        { "PointAboutToBeRemovedEvent", vtkMRMLMarkupsNode::PointAboutToBeRemovedEvent },
        { "PositionUndefined", vtkMRMLMarkupsNode::PositionUndefined },
        { "PositionPreview", vtkMRMLMarkupsNode::PositionPreview },
        { "PositionDefined", vtkMRMLMarkupsNode::PositionDefined },
        { "PositionMissing", vtkMRMLMarkupsNode::PositionMissing },
        { "PositionStatus_Last", vtkMRMLMarkupsNode::PositionStatus_Last },
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

void PyVTKAddFile_vtkMRMLMarkupsNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLMarkupsNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLMarkupsNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

