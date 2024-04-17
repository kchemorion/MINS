// python wrapper for vtkMRMLColorTableNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLColorTableNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLColorTableNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLColorTableNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLColorNode_ClassNew
extern "C" { PyObject *PyvtkMRMLColorNode_ClassNew(); }
#define DECLARED_PyvtkMRMLColorNode_ClassNew
#endif

static PyObject *
PyvtkMRMLColorTableNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLColorTableNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLColorTableNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLColorTableNode *tempr = vtkMRMLColorTableNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLColorTableNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLColorTableNode::NewInstance());

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
PyvtkMRMLColorTableNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLColorTableNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLColorTableNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLColorTableNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkMRMLColorTableNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLColorTableNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkMRMLColorTableNode::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetAndObserveLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  vtkLookupTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveLookupTable(temp0);
    }
    else
    {
      op->vtkMRMLColorTableNode::SetAndObserveLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  vtkLookupTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkMRMLColorTableNode::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetType(temp0);
    }
    else
    {
      op->vtkMRMLColorTableNode::SetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToFullRainbow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToFullRainbow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToFullRainbow();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToFullRainbow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToGrey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToGrey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToGrey();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToGrey();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToIron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToIron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToIron();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToIron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToRainbow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToRainbow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToRainbow();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToRainbow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToOcean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToOcean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToOcean();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToOcean();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToDesert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToDesert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToDesert();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToDesert();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToInvGrey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToInvGrey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToInvGrey();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToInvGrey();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToReverseRainbow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToReverseRainbow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToReverseRainbow();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToReverseRainbow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToFMRI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToFMRI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToFMRI();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToFMRI();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToFMRIPA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToFMRIPA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToFMRIPA();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToFMRIPA();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToLabels();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToLabels();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToRandom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToRandom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToRandom();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToRandom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToRed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToRed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToRed();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToRed();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToGreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToGreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToGreen();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToGreen();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToBlue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToBlue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToBlue();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToBlue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToCyan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToCyan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToCyan();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToCyan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToMagenta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToMagenta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToMagenta();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToMagenta();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToYellow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToYellow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToYellow();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToYellow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToWarm1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToWarm1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToWarm1();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToWarm1();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToWarm2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToWarm2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToWarm2();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToWarm2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToWarm3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToWarm3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToWarm3();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToWarm3();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToCool1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToCool1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToCool1();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToCool1();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToCool2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToCool2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToCool2();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToCool2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToCool3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToCool3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToCool3();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToCool3();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToWarmShade1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToWarmShade1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToWarmShade1();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToWarmShade1();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToWarmShade2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToWarmShade2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToWarmShade2();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToWarmShade2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToWarmShade3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToWarmShade3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToWarmShade3();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToWarmShade3();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToCoolShade1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToCoolShade1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToCoolShade1();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToCoolShade1();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToCoolShade2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToCoolShade2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToCoolShade2();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToCoolShade2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToCoolShade3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToCoolShade3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToCoolShade3();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToCoolShade3();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToWarmTint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToWarmTint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToWarmTint1();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToWarmTint1();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToWarmTint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToWarmTint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToWarmTint2();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToWarmTint2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToWarmTint3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToWarmTint3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToWarmTint3();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToWarmTint3();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToCoolTint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToCoolTint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToCoolTint1();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToCoolTint1();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToCoolTint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToCoolTint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToCoolTint2();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToCoolTint2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetTypeToCoolTint3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTypeToCoolTint3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTypeToCoolTint3();
    }
    else
    {
      op->vtkMRMLColorTableNode::SetTypeToCoolTint3();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

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
      op->vtkMRMLColorTableNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLColorTableNode_GetFirstType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFirstType() :
      op->vtkMRMLColorTableNode::GetFirstType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_GetLastType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastType() :
      op->vtkMRMLColorTableNode::GetLastType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_GetTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeAsString() :
      op->vtkMRMLColorTableNode::GetTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfColors(temp0);
    }
    else
    {
      op->vtkMRMLColorTableNode::SetNumberOfColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkMRMLColorTableNode::GetNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_AddColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  double temp4 = 1.0;
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
      op->AddColor(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkMRMLColorTableNode::AddColor(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  double temp2;
  double temp3;
  double temp4;
  double temp5 = 1.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    int tempr = (ap.IsBound() ?
      op->SetColor(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMRMLColorTableNode::SetColor(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLColorTableNode_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->SetColor(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMRMLColorTableNode::SetColor(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLColorTableNode_SetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->SetColor(temp0, temp1, temp2, temp3) :
      op->vtkMRMLColorTableNode::SetColor(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLColorTableNode_SetColor_Methods[] = {
  {"SetColor", PyvtkMRMLColorTableNode_SetColor_s1, METH_VARARGS,
   "@izddd|d"},
  {"SetColor", PyvtkMRMLColorTableNode_SetColor_s2, METH_VARARGS,
   "@idddd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLColorTableNode_SetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLColorTableNode_SetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkMRMLColorTableNode_SetColor_s1(self, args);
    case 4:
      return PyvtkMRMLColorTableNode_SetColor_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkMRMLColorTableNode_SetColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  double temp3;
  double temp4;
  double temp5;
  double temp6 = 1.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6, 7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      (ap.NoArgsLeft() || ap.GetValue(temp6)))
  {
    int tempr = (ap.IsBound() ?
      op->SetColors(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkMRMLColorTableNode::SetColors(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetOpacity(temp0, temp1) :
      op->vtkMRMLColorTableNode::SetOpacity(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

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

    bool tempr = (ap.IsBound() ?
      op->GetColor(temp0, temp1) :
      op->vtkMRMLColorTableNode::GetColor(temp0, temp1));

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
PyvtkMRMLColorTableNode_ClearNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearNames();
    }
    else
    {
      op->vtkMRMLColorTableNode::ClearNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  vtkMRMLNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLNode"))
  {
    if (ap.IsBound())
    {
      op->Reset(temp0);
    }
    else
    {
      op->vtkMRMLColorTableNode::Reset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorTableNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorTableNode *op = static_cast<vtkMRMLColorTableNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLColorTableNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLColorTableNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLColorTableNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLColorTableNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLColorTableNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLColorTableNode\nC++: static vtkMRMLColorTableNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLColorTableNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLColorTableNode\nC++: vtkMRMLColorTableNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLColorTableNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLColorTableNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLColorTableNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLColorTableNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLColorTableNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"GetLookupTable", PyvtkMRMLColorTableNode_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkLookupTable\nC++: vtkLookupTable *GetLookupTable() override;\n\nAccess lookup table object that stores table values.\n\\sa SetAndObserveLookupTable()\n"},
  {"SetAndObserveLookupTable", PyvtkMRMLColorTableNode_SetAndObserveLookupTable, METH_VARARGS,
   "SetAndObserveLookupTable(self, newLookupTable:vtkLookupTable)\n    -> None\nC++: virtual void SetAndObserveLookupTable(\n    vtkLookupTable *newLookupTable)\n\nSet lookup table object that this object will use.\n\\sa GetLookupTable()\n"},
  {"SetLookupTable", PyvtkMRMLColorTableNode_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, newLookupTable:vtkLookupTable) -> None\nC++: virtual void SetLookupTable(vtkLookupTable *newLookupTable)\n\n\\deprecated Kept only for backward compatibility. Use\nSetAndObserveLookupTable method instead.\n\\sa SetAndObserveLookupTable()\n"},
  {"SetType", PyvtkMRMLColorTableNode_SetType, METH_VARARGS,
   "SetType(self, type:int) -> None\nC++: void SetType(int type) override;\n\nGet/Set for Type\n"},
  {"SetTypeToFullRainbow", PyvtkMRMLColorTableNode_SetTypeToFullRainbow, METH_VARARGS,
   "SetTypeToFullRainbow(self) -> None\nC++: void SetTypeToFullRainbow()\n\n"},
  {"SetTypeToGrey", PyvtkMRMLColorTableNode_SetTypeToGrey, METH_VARARGS,
   "SetTypeToGrey(self) -> None\nC++: void SetTypeToGrey()\n\n"},
  {"SetTypeToIron", PyvtkMRMLColorTableNode_SetTypeToIron, METH_VARARGS,
   "SetTypeToIron(self) -> None\nC++: void SetTypeToIron()\n\n"},
  {"SetTypeToRainbow", PyvtkMRMLColorTableNode_SetTypeToRainbow, METH_VARARGS,
   "SetTypeToRainbow(self) -> None\nC++: void SetTypeToRainbow()\n\n"},
  {"SetTypeToOcean", PyvtkMRMLColorTableNode_SetTypeToOcean, METH_VARARGS,
   "SetTypeToOcean(self) -> None\nC++: void SetTypeToOcean()\n\n"},
  {"SetTypeToDesert", PyvtkMRMLColorTableNode_SetTypeToDesert, METH_VARARGS,
   "SetTypeToDesert(self) -> None\nC++: void SetTypeToDesert()\n\n"},
  {"SetTypeToInvGrey", PyvtkMRMLColorTableNode_SetTypeToInvGrey, METH_VARARGS,
   "SetTypeToInvGrey(self) -> None\nC++: void SetTypeToInvGrey()\n\n"},
  {"SetTypeToReverseRainbow", PyvtkMRMLColorTableNode_SetTypeToReverseRainbow, METH_VARARGS,
   "SetTypeToReverseRainbow(self) -> None\nC++: void SetTypeToReverseRainbow()\n\n"},
  {"SetTypeToFMRI", PyvtkMRMLColorTableNode_SetTypeToFMRI, METH_VARARGS,
   "SetTypeToFMRI(self) -> None\nC++: void SetTypeToFMRI()\n\n"},
  {"SetTypeToFMRIPA", PyvtkMRMLColorTableNode_SetTypeToFMRIPA, METH_VARARGS,
   "SetTypeToFMRIPA(self) -> None\nC++: void SetTypeToFMRIPA()\n\n"},
  {"SetTypeToLabels", PyvtkMRMLColorTableNode_SetTypeToLabels, METH_VARARGS,
   "SetTypeToLabels(self) -> None\nC++: void SetTypeToLabels()\n\n"},
  {"SetTypeToRandom", PyvtkMRMLColorTableNode_SetTypeToRandom, METH_VARARGS,
   "SetTypeToRandom(self) -> None\nC++: void SetTypeToRandom()\n\n"},
  {"SetTypeToRed", PyvtkMRMLColorTableNode_SetTypeToRed, METH_VARARGS,
   "SetTypeToRed(self) -> None\nC++: void SetTypeToRed()\n\n"},
  {"SetTypeToGreen", PyvtkMRMLColorTableNode_SetTypeToGreen, METH_VARARGS,
   "SetTypeToGreen(self) -> None\nC++: void SetTypeToGreen()\n\n"},
  {"SetTypeToBlue", PyvtkMRMLColorTableNode_SetTypeToBlue, METH_VARARGS,
   "SetTypeToBlue(self) -> None\nC++: void SetTypeToBlue()\n\n"},
  {"SetTypeToCyan", PyvtkMRMLColorTableNode_SetTypeToCyan, METH_VARARGS,
   "SetTypeToCyan(self) -> None\nC++: void SetTypeToCyan()\n\n"},
  {"SetTypeToMagenta", PyvtkMRMLColorTableNode_SetTypeToMagenta, METH_VARARGS,
   "SetTypeToMagenta(self) -> None\nC++: void SetTypeToMagenta()\n\n"},
  {"SetTypeToYellow", PyvtkMRMLColorTableNode_SetTypeToYellow, METH_VARARGS,
   "SetTypeToYellow(self) -> None\nC++: void SetTypeToYellow()\n\n"},
  {"SetTypeToWarm1", PyvtkMRMLColorTableNode_SetTypeToWarm1, METH_VARARGS,
   "SetTypeToWarm1(self) -> None\nC++: void SetTypeToWarm1()\n\n"},
  {"SetTypeToWarm2", PyvtkMRMLColorTableNode_SetTypeToWarm2, METH_VARARGS,
   "SetTypeToWarm2(self) -> None\nC++: void SetTypeToWarm2()\n\n"},
  {"SetTypeToWarm3", PyvtkMRMLColorTableNode_SetTypeToWarm3, METH_VARARGS,
   "SetTypeToWarm3(self) -> None\nC++: void SetTypeToWarm3()\n\n"},
  {"SetTypeToCool1", PyvtkMRMLColorTableNode_SetTypeToCool1, METH_VARARGS,
   "SetTypeToCool1(self) -> None\nC++: void SetTypeToCool1()\n\n"},
  {"SetTypeToCool2", PyvtkMRMLColorTableNode_SetTypeToCool2, METH_VARARGS,
   "SetTypeToCool2(self) -> None\nC++: void SetTypeToCool2()\n\n"},
  {"SetTypeToCool3", PyvtkMRMLColorTableNode_SetTypeToCool3, METH_VARARGS,
   "SetTypeToCool3(self) -> None\nC++: void SetTypeToCool3()\n\n"},
  {"SetTypeToWarmShade1", PyvtkMRMLColorTableNode_SetTypeToWarmShade1, METH_VARARGS,
   "SetTypeToWarmShade1(self) -> None\nC++: void SetTypeToWarmShade1()\n\n"},
  {"SetTypeToWarmShade2", PyvtkMRMLColorTableNode_SetTypeToWarmShade2, METH_VARARGS,
   "SetTypeToWarmShade2(self) -> None\nC++: void SetTypeToWarmShade2()\n\n"},
  {"SetTypeToWarmShade3", PyvtkMRMLColorTableNode_SetTypeToWarmShade3, METH_VARARGS,
   "SetTypeToWarmShade3(self) -> None\nC++: void SetTypeToWarmShade3()\n\n"},
  {"SetTypeToCoolShade1", PyvtkMRMLColorTableNode_SetTypeToCoolShade1, METH_VARARGS,
   "SetTypeToCoolShade1(self) -> None\nC++: void SetTypeToCoolShade1()\n\n"},
  {"SetTypeToCoolShade2", PyvtkMRMLColorTableNode_SetTypeToCoolShade2, METH_VARARGS,
   "SetTypeToCoolShade2(self) -> None\nC++: void SetTypeToCoolShade2()\n\n"},
  {"SetTypeToCoolShade3", PyvtkMRMLColorTableNode_SetTypeToCoolShade3, METH_VARARGS,
   "SetTypeToCoolShade3(self) -> None\nC++: void SetTypeToCoolShade3()\n\n"},
  {"SetTypeToWarmTint1", PyvtkMRMLColorTableNode_SetTypeToWarmTint1, METH_VARARGS,
   "SetTypeToWarmTint1(self) -> None\nC++: void SetTypeToWarmTint1()\n\n"},
  {"SetTypeToWarmTint2", PyvtkMRMLColorTableNode_SetTypeToWarmTint2, METH_VARARGS,
   "SetTypeToWarmTint2(self) -> None\nC++: void SetTypeToWarmTint2()\n\n"},
  {"SetTypeToWarmTint3", PyvtkMRMLColorTableNode_SetTypeToWarmTint3, METH_VARARGS,
   "SetTypeToWarmTint3(self) -> None\nC++: void SetTypeToWarmTint3()\n\n"},
  {"SetTypeToCoolTint1", PyvtkMRMLColorTableNode_SetTypeToCoolTint1, METH_VARARGS,
   "SetTypeToCoolTint1(self) -> None\nC++: void SetTypeToCoolTint1()\n\n"},
  {"SetTypeToCoolTint2", PyvtkMRMLColorTableNode_SetTypeToCoolTint2, METH_VARARGS,
   "SetTypeToCoolTint2(self) -> None\nC++: void SetTypeToCoolTint2()\n\n"},
  {"SetTypeToCoolTint3", PyvtkMRMLColorTableNode_SetTypeToCoolTint3, METH_VARARGS,
   "SetTypeToCoolTint3(self) -> None\nC++: void SetTypeToCoolTint3()\n\n"},
  {"ProcessMRMLEvents", PyvtkMRMLColorTableNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nalternative method to propagate events generated in Storage nodes\n"},
  {"GetFirstType", PyvtkMRMLColorTableNode_GetFirstType, METH_VARARGS,
   "GetFirstType(self) -> int\nC++: int GetFirstType() override;\n\nReturn the lowest and highest integers, for use in looping\n"},
  {"GetLastType", PyvtkMRMLColorTableNode_GetLastType, METH_VARARGS,
   "GetLastType(self) -> int\nC++: int GetLastType() override;\n\n"},
  {"GetTypeAsString", PyvtkMRMLColorTableNode_GetTypeAsString, METH_VARARGS,
   "GetTypeAsString(self) -> str\nC++: const char *GetTypeAsString() override;\n\nreturn a text string describing the color look up table type\n"},
  {"SetNumberOfColors", PyvtkMRMLColorTableNode_SetNumberOfColors, METH_VARARGS,
   "SetNumberOfColors(self, n:int) -> None\nC++: void SetNumberOfColors(int n)\n\nSet the size of the color table if it's a User table\n"},
  {"GetNumberOfColors", PyvtkMRMLColorTableNode_GetNumberOfColors, METH_VARARGS,
   "GetNumberOfColors(self) -> int\nC++: int GetNumberOfColors() override;\n\nSet the size of the color table if it's a User table\n"},
  {"AddColor", PyvtkMRMLColorTableNode_AddColor, METH_VARARGS,
   "AddColor(self, name:str, r:float, g:float, b:float, a:float=1.0)\n    -> None\nC++: void AddColor(const char *name, double r, double g, double b,\n     double a=1.0)\n\nAdd a color to the User color table, at the end\n"},
  {"SetColor", PyvtkMRMLColorTableNode_SetColor, METH_VARARGS,
   "SetColor(self, entry:int, name:str, r:float, g:float, b:float,\n    a:float=1.0) -> int\nC++: int SetColor(int entry, const char *name, double r, double g,\n     double b, double a=1.0)\nSetColor(self, entry:int, r:float, g:float, b:float, a:float)\n    -> int\nC++: int SetColor(int entry, double r, double g, double b,\n    double a)\nSetColor(self, entry:int, r:float, g:float, b:float) -> int\nC++: int SetColor(int entry, double r, double g, double b)\n\nSet a color into the User color table. Return 1 on success, 0 on\nfailure.\n"},
  {"SetColors", PyvtkMRMLColorTableNode_SetColors, METH_VARARGS,
   "SetColors(self, firstEntry:int, lastEntry:int, name:str, r:float,\n    g:float, b:float, a:float=1.0) -> int\nC++: int SetColors(int firstEntry, int lastEntry,\n    const char *name, double r, double g, double b, double a=1.0)\n\nSet many entries to the same name and color in one batch (with\none ModifiedEvent). This is much more efficient than setting many\ncolor entries one by one using SetColor().\n"},
  {"SetOpacity", PyvtkMRMLColorTableNode_SetOpacity, METH_VARARGS,
   "SetOpacity(self, entry:int, opacity:float) -> int\nC++: int SetOpacity(int entry, double opacity)\n\n"},
  {"GetColor", PyvtkMRMLColorTableNode_GetColor, METH_VARARGS,
   "GetColor(self, entry:int, color:[float, float, float, float])\n    -> bool\nC++: bool GetColor(int entry, double color[4]) override;\n\nRetrieve the color associated to the index Return true if the\ncolor exists, false otherwise\n"},
  {"ClearNames", PyvtkMRMLColorTableNode_ClearNames, METH_VARARGS,
   "ClearNames(self) -> None\nC++: void ClearNames()\n\nclear out the names list\n"},
  {"Reset", PyvtkMRMLColorTableNode_Reset, METH_VARARGS,
   "Reset(self, defaultNode:vtkMRMLNode) -> None\nC++: void Reset(vtkMRMLNode *defaultNode) override;\n\nreset when close the scene\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLColorTableNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLColorTableNode_Doc =
  "vtkMRMLColorTableNode - MRML node to represent discrete color\ninformation.\n\n"
  "Superclass: vtkMRMLColorNode\n\n"
  "Color nodes describe color look up tables. The tables may be\n"
  "pre-generated by Slicer (the label map colors, a random one) or\n"
  "created by a user. More than one model or label volume or editor can\n"
  "access the prebuilt nodes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLColorTableNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLColorTableNode", // tp_name
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
  PyvtkMRMLColorTableNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLColorTableNode_StaticNew()
{
  return vtkMRMLColorTableNode::New();
}

PyObject *PyvtkMRMLColorTableNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLColorTableNode_Type, PyvtkMRMLColorTableNode_Methods,
    "vtkMRMLColorTableNode",
 &PyvtkMRMLColorTableNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLColorNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 37; c++)
  {
    static const struct { const char *name; int value; }
      constants[37] = {
        { "FullRainbow", vtkMRMLColorTableNode::FullRainbow },
        { "Grey", vtkMRMLColorTableNode::Grey },
        { "Iron", vtkMRMLColorTableNode::Iron },
        { "Rainbow", vtkMRMLColorTableNode::Rainbow },
        { "Ocean", vtkMRMLColorTableNode::Ocean },
        { "Desert", vtkMRMLColorTableNode::Desert },
        { "InvGrey", vtkMRMLColorTableNode::InvGrey },
        { "ReverseRainbow", vtkMRMLColorTableNode::ReverseRainbow },
        { "FMRI", vtkMRMLColorTableNode::FMRI },
        { "FMRIPA", vtkMRMLColorTableNode::FMRIPA },
        { "Labels", vtkMRMLColorTableNode::Labels },
        { "Obsolete", vtkMRMLColorTableNode::Obsolete },
        { "Random", vtkMRMLColorTableNode::Random },
        { "Red", vtkMRMLColorTableNode::Red },
        { "Green", vtkMRMLColorTableNode::Green },
        { "Blue", vtkMRMLColorTableNode::Blue },
        { "Yellow", vtkMRMLColorTableNode::Yellow },
        { "Cyan", vtkMRMLColorTableNode::Cyan },
        { "Magenta", vtkMRMLColorTableNode::Magenta },
        { "Warm1", vtkMRMLColorTableNode::Warm1 },
        { "Warm2", vtkMRMLColorTableNode::Warm2 },
        { "Warm3", vtkMRMLColorTableNode::Warm3 },
        { "Cool1", vtkMRMLColorTableNode::Cool1 },
        { "Cool2", vtkMRMLColorTableNode::Cool2 },
        { "Cool3", vtkMRMLColorTableNode::Cool3 },
        { "WarmShade1", vtkMRMLColorTableNode::WarmShade1 },
        { "WarmShade2", vtkMRMLColorTableNode::WarmShade2 },
        { "WarmShade3", vtkMRMLColorTableNode::WarmShade3 },
        { "CoolShade1", vtkMRMLColorTableNode::CoolShade1 },
        { "CoolShade2", vtkMRMLColorTableNode::CoolShade2 },
        { "CoolShade3", vtkMRMLColorTableNode::CoolShade3 },
        { "WarmTint1", vtkMRMLColorTableNode::WarmTint1 },
        { "WarmTint2", vtkMRMLColorTableNode::WarmTint2 },
        { "WarmTint3", vtkMRMLColorTableNode::WarmTint3 },
        { "CoolTint1", vtkMRMLColorTableNode::CoolTint1 },
        { "CoolTint2", vtkMRMLColorTableNode::CoolTint2 },
        { "CoolTint3", vtkMRMLColorTableNode::CoolTint3 },
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

void PyVTKAddFile_vtkMRMLColorTableNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLColorTableNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLColorTableNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

