// python wrapper for vtkSlicerTerminologyType
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSlicerTerminologyType.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSlicerTerminologyType(PyObject *dict); }
extern "C" { PyObject *PyvtkSlicerTerminologyType_ClassNew(); }


static PyObject *
PyvtkSlicerTerminologyType_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSlicerTerminologyType::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSlicerTerminologyType::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSlicerTerminologyType *tempr = vtkSlicerTerminologyType::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSlicerTerminologyType *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSlicerTerminologyType::NewInstance());

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
PyvtkSlicerTerminologyType_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSlicerTerminologyType::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSlicerTerminologyType::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSlicerTerminologyType::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  vtkCodedEntry *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCodedEntry"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkSlicerTerminologyType::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_GetRecommendedDisplayRGBValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRecommendedDisplayRGBValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetRecommendedDisplayRGBValue() :
      op->vtkSlicerTerminologyType::GetRecommendedDisplayRGBValue());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_SetRecommendedDisplayRGBValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecommendedDisplayRGBValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetRecommendedDisplayRGBValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSlicerTerminologyType::SetRecommendedDisplayRGBValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerTerminologyType_SetRecommendedDisplayRGBValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRecommendedDisplayRGBValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  const size_t size0 = 3;
  unsigned char temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRecommendedDisplayRGBValue(temp0);
    }
    else
    {
      op->vtkSlicerTerminologyType::SetRecommendedDisplayRGBValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSlicerTerminologyType_SetRecommendedDisplayRGBValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSlicerTerminologyType_SetRecommendedDisplayRGBValue_s1(self, args);
    case 1:
      return PyvtkSlicerTerminologyType_SetRecommendedDisplayRGBValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRecommendedDisplayRGBValue");
  return nullptr;
}


static PyObject *
PyvtkSlicerTerminologyType_GetSlicerLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicerLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSlicerLabel() :
      op->vtkSlicerTerminologyType::GetSlicerLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_SetSlicerLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicerLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlicerLabel(temp0);
    }
    else
    {
      op->vtkSlicerTerminologyType::SetSlicerLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_GetSNOMEDCTConceptID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSNOMEDCTConceptID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSNOMEDCTConceptID() :
      op->vtkSlicerTerminologyType::GetSNOMEDCTConceptID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_SetSNOMEDCTConceptID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSNOMEDCTConceptID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSNOMEDCTConceptID(temp0);
    }
    else
    {
      op->vtkSlicerTerminologyType::SetSNOMEDCTConceptID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_GetUMLSConceptUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUMLSConceptUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetUMLSConceptUID() :
      op->vtkSlicerTerminologyType::GetUMLSConceptUID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_SetUMLSConceptUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUMLSConceptUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUMLSConceptUID(temp0);
    }
    else
    {
      op->vtkSlicerTerminologyType::SetUMLSConceptUID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_GetCid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCid() :
      op->vtkSlicerTerminologyType::GetCid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_SetCid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCid(temp0);
    }
    else
    {
      op->vtkSlicerTerminologyType::SetCid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_GetContextGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContextGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetContextGroupName() :
      op->vtkSlicerTerminologyType::GetContextGroupName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_SetContextGroupName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContextGroupName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContextGroupName(temp0);
    }
    else
    {
      op->vtkSlicerTerminologyType::SetContextGroupName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_GetHasModifiers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasModifiers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasModifiers() :
      op->vtkSlicerTerminologyType::GetHasModifiers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_SetHasModifiers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasModifiers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasModifiers(temp0);
    }
    else
    {
      op->vtkSlicerTerminologyType::SetHasModifiers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_HasModifiersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasModifiersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasModifiersOn();
    }
    else
    {
      op->vtkSlicerTerminologyType::HasModifiersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSlicerTerminologyType_HasModifiersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasModifiersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSlicerTerminologyType *op = static_cast<vtkSlicerTerminologyType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasModifiersOff();
    }
    else
    {
      op->vtkSlicerTerminologyType::HasModifiersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSlicerTerminologyType_Methods[] = {
  {"IsTypeOf", PyvtkSlicerTerminologyType_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSlicerTerminologyType_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSlicerTerminologyType_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSlicerTerminologyType\nC++: static vtkSlicerTerminologyType *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSlicerTerminologyType_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSlicerTerminologyType\nC++: vtkSlicerTerminologyType *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSlicerTerminologyType_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSlicerTerminologyType_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkSlicerTerminologyType_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nReset state of object\n"},
  {"Copy", PyvtkSlicerTerminologyType_Copy, METH_VARARGS,
   "Copy(self, aType:vtkCodedEntry) -> None\nC++: void Copy(vtkCodedEntry *aType) override;\n\nCopy one type into another\n"},
  {"GetRecommendedDisplayRGBValue", PyvtkSlicerTerminologyType_GetRecommendedDisplayRGBValue, METH_VARARGS,
   "GetRecommendedDisplayRGBValue(self) -> (int, int, int)\nC++: virtual unsigned char *GetRecommendedDisplayRGBValue()\n\n"},
  {"SetRecommendedDisplayRGBValue", PyvtkSlicerTerminologyType_SetRecommendedDisplayRGBValue, METH_VARARGS,
   "SetRecommendedDisplayRGBValue(self, _arg1:int, _arg2:int,\n    _arg3:int) -> None\nC++: virtual void SetRecommendedDisplayRGBValue(\n    unsigned char _arg1, unsigned char _arg2, unsigned char _arg3)\nSetRecommendedDisplayRGBValue(self, _arg:(int, int, int)) -> None\nC++: virtual void SetRecommendedDisplayRGBValue(\n    const unsigned char _arg[3])\n\n"},
  {"GetSlicerLabel", PyvtkSlicerTerminologyType_GetSlicerLabel, METH_VARARGS,
   "GetSlicerLabel(self) -> str\nC++: virtual char *GetSlicerLabel()\n\n"},
  {"SetSlicerLabel", PyvtkSlicerTerminologyType_SetSlicerLabel, METH_VARARGS,
   "SetSlicerLabel(self, _arg:str) -> None\nC++: virtual void SetSlicerLabel(const char *_arg)\n\n"},
  {"GetSNOMEDCTConceptID", PyvtkSlicerTerminologyType_GetSNOMEDCTConceptID, METH_VARARGS,
   "GetSNOMEDCTConceptID(self) -> str\nC++: virtual char *GetSNOMEDCTConceptID()\n\n"},
  {"SetSNOMEDCTConceptID", PyvtkSlicerTerminologyType_SetSNOMEDCTConceptID, METH_VARARGS,
   "SetSNOMEDCTConceptID(self, _arg:str) -> None\nC++: virtual void SetSNOMEDCTConceptID(const char *_arg)\n\n"},
  {"GetUMLSConceptUID", PyvtkSlicerTerminologyType_GetUMLSConceptUID, METH_VARARGS,
   "GetUMLSConceptUID(self) -> str\nC++: virtual char *GetUMLSConceptUID()\n\n"},
  {"SetUMLSConceptUID", PyvtkSlicerTerminologyType_SetUMLSConceptUID, METH_VARARGS,
   "SetUMLSConceptUID(self, _arg:str) -> None\nC++: virtual void SetUMLSConceptUID(const char *_arg)\n\n"},
  {"GetCid", PyvtkSlicerTerminologyType_GetCid, METH_VARARGS,
   "GetCid(self) -> str\nC++: virtual char *GetCid()\n\n"},
  {"SetCid", PyvtkSlicerTerminologyType_SetCid, METH_VARARGS,
   "SetCid(self, _arg:str) -> None\nC++: virtual void SetCid(const char *_arg)\n\n"},
  {"GetContextGroupName", PyvtkSlicerTerminologyType_GetContextGroupName, METH_VARARGS,
   "GetContextGroupName(self) -> str\nC++: virtual char *GetContextGroupName()\n\n"},
  {"SetContextGroupName", PyvtkSlicerTerminologyType_SetContextGroupName, METH_VARARGS,
   "SetContextGroupName(self, _arg:str) -> None\nC++: virtual void SetContextGroupName(const char *_arg)\n\n"},
  {"GetHasModifiers", PyvtkSlicerTerminologyType_GetHasModifiers, METH_VARARGS,
   "GetHasModifiers(self) -> bool\nC++: virtual bool GetHasModifiers()\n\n"},
  {"SetHasModifiers", PyvtkSlicerTerminologyType_SetHasModifiers, METH_VARARGS,
   "SetHasModifiers(self, _arg:bool) -> None\nC++: virtual void SetHasModifiers(bool _arg)\n\n"},
  {"HasModifiersOn", PyvtkSlicerTerminologyType_HasModifiersOn, METH_VARARGS,
   "HasModifiersOn(self) -> None\nC++: virtual void HasModifiersOn()\n\n"},
  {"HasModifiersOff", PyvtkSlicerTerminologyType_HasModifiersOff, METH_VARARGS,
   "HasModifiersOff(self) -> None\nC++: virtual void HasModifiersOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSlicerTerminologyType_Doc =
  "vtkSlicerTerminologyType - Terminology property type object\n\n"
  "Superclass: vtkCodedEntry\n\n"
  "Encapsulates the mandatory and optional fields for a terminology\n"
  "type. The following fields inherited from \\sa vtkCodedEntry:\n"
  "  CodingSchemeDesignator: 'codingScheme' member of the type object.\n"
  "Value example \"SCT\"\n"
  "  CodeValue: 'codeValue' member of the type object. Value example\n"
  "\"51114001\"\n"
  "  CodeMeaning: 'codeMeaning' member of the type object. Value example\n"
  "\"Artery\"\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSlicerTerminologyType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkSlicerTerminologiesModuleLogicPython.vtkSlicerTerminologyType", // tp_name
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
  PyvtkSlicerTerminologyType_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSlicerTerminologyType_StaticNew()
{
  return vtkSlicerTerminologyType::New();
}

PyObject *PyvtkSlicerTerminologyType_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSlicerTerminologyType_Type, PyvtkSlicerTerminologyType_Methods,
    "vtkSlicerTerminologyType",
 &PyvtkSlicerTerminologyType_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCodedEntry");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSlicerTerminologyType(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSlicerTerminologyType_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSlicerTerminologyType", o) != 0)
  {
    Py_DECREF(o);
  }

}

