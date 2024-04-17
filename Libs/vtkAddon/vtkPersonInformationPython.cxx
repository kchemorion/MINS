// python wrapper for vtkPersonInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPersonInformation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPersonInformation(PyObject *dict); }
extern "C" { PyObject *PyvtkPersonInformation_ClassNew(); }


static PyObject *
PyvtkPersonInformation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPersonInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPersonInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPersonInformation *tempr = vtkPersonInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPersonInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPersonInformation::NewInstance());

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
PyvtkPersonInformation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPersonInformation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPersonInformation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_SetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetName(temp0) :
      op->vtkPersonInformation::SetName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetName() :
      op->vtkPersonInformation::GetName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_SetLogin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetLogin(temp0) :
      op->vtkPersonInformation::SetLogin(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_GetLogin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetLogin() :
      op->vtkPersonInformation::GetLogin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_SetEmail(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEmail");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetEmail(temp0) :
      op->vtkPersonInformation::SetEmail(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_GetEmail(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEmail");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetEmail() :
      op->vtkPersonInformation::GetEmail());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_SetOrganization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrganization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetOrganization(temp0) :
      op->vtkPersonInformation::SetOrganization(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_GetOrganization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrganization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOrganization() :
      op->vtkPersonInformation::GetOrganization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_SetOrganizationRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrganizationRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetOrganizationRole(temp0) :
      op->vtkPersonInformation::SetOrganizationRole(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_GetOrganizationRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrganizationRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetOrganizationRole() :
      op->vtkPersonInformation::GetOrganizationRole());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_SetProcedureRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcedureRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetProcedureRole(temp0) :
      op->vtkPersonInformation::SetProcedureRole(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_GetProcedureRole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcedureRole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetProcedureRole() :
      op->vtkPersonInformation::GetProcedureRole());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  vtkPersonInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPersonInformation"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPersonInformation::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_SetCustomString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  std::string temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCustomString(temp0, temp1);
    }
    else
    {
      op->vtkPersonInformation::SetCustomString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_GetCustomString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCustomString(temp0) :
      op->vtkPersonInformation::GetCustomString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_IsEmailValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEmailValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsEmailValid(temp0) :
      op->vtkPersonInformation::IsEmailValid(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_KeyName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "KeyName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkPersonInformation::KeyName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_KeyLogin(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "KeyLogin");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkPersonInformation::KeyLogin();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_KeyEmail(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "KeyEmail");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkPersonInformation::KeyEmail();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_KeyOrganization(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "KeyOrganization");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkPersonInformation::KeyOrganization();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_KeyOrganizationRole(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "KeyOrganizationRole");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkPersonInformation::KeyOrganizationRole();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_KeyProcedureRole(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "KeyProcedureRole");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkPersonInformation::KeyProcedureRole();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_GetAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetAsString() :
      op->vtkPersonInformation::GetAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_SetFromString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFromString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetFromString(temp0) :
      op->vtkPersonInformation::SetFromString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPersonInformation_GetKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPersonInformation *op = static_cast<vtkPersonInformation *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->GetKeys(temp0);
    }
    else
    {
      op->vtkPersonInformation::GetKeys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPersonInformation_Methods[] = {
  {"IsTypeOf", PyvtkPersonInformation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPersonInformation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPersonInformation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPersonInformation\nC++: static vtkPersonInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPersonInformation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPersonInformation\nC++: vtkPersonInformation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPersonInformation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPersonInformation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetName", PyvtkPersonInformation_SetName, METH_VARARGS,
   "SetName(self, value:str) -> bool\nC++: virtual bool SetName(const std::string &value)\n\nSet/Get username. Set method\n"},
  {"GetName", PyvtkPersonInformation_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual std::string GetName()\n\nSet/Get username. Set method\n"},
  {"SetLogin", PyvtkPersonInformation_SetLogin, METH_VARARGS,
   "SetLogin(self, value:str) -> bool\nC++: virtual bool SetLogin(const std::string &value)\n\n"},
  {"GetLogin", PyvtkPersonInformation_GetLogin, METH_VARARGS,
   "GetLogin(self) -> str\nC++: virtual std::string GetLogin()\n\n"},
  {"SetEmail", PyvtkPersonInformation_SetEmail, METH_VARARGS,
   "SetEmail(self, value:str) -> bool\nC++: virtual bool SetEmail(const std::string &value)\n\n"},
  {"GetEmail", PyvtkPersonInformation_GetEmail, METH_VARARGS,
   "GetEmail(self) -> str\nC++: virtual std::string GetEmail()\n\n"},
  {"SetOrganization", PyvtkPersonInformation_SetOrganization, METH_VARARGS,
   "SetOrganization(self, value:str) -> bool\nC++: virtual bool SetOrganization(const std::string &value)\n\n"},
  {"GetOrganization", PyvtkPersonInformation_GetOrganization, METH_VARARGS,
   "GetOrganization(self) -> str\nC++: virtual std::string GetOrganization()\n\n"},
  {"SetOrganizationRole", PyvtkPersonInformation_SetOrganizationRole, METH_VARARGS,
   "SetOrganizationRole(self, value:str) -> bool\nC++: virtual bool SetOrganizationRole(const std::string &value)\n\n"},
  {"GetOrganizationRole", PyvtkPersonInformation_GetOrganizationRole, METH_VARARGS,
   "GetOrganizationRole(self) -> str\nC++: virtual std::string GetOrganizationRole()\n\n"},
  {"SetProcedureRole", PyvtkPersonInformation_SetProcedureRole, METH_VARARGS,
   "SetProcedureRole(self, value:str) -> bool\nC++: virtual bool SetProcedureRole(const std::string &value)\n\n"},
  {"GetProcedureRole", PyvtkPersonInformation_GetProcedureRole, METH_VARARGS,
   "GetProcedureRole(self) -> str\nC++: virtual std::string GetProcedureRole()\n\n"},
  {"DeepCopy", PyvtkPersonInformation_DeepCopy, METH_VARARGS,
   "DeepCopy(self, source:vtkPersonInformation) -> None\nC++: virtual void DeepCopy(vtkPersonInformation *source)\n\nMake a full, independent copy of another object into this object.\n"},
  {"SetCustomString", PyvtkPersonInformation_SetCustomString, METH_VARARGS,
   "SetCustomString(self, key:str, value:str) -> None\nC++: virtual void SetCustomString(const std::string &key,\n    const std::string &value)\n\nSet a custom string value. Calls Modified() if the value is\ndifferent from the previous value. No validation is performed. If\na standard string's key is used (Name, Email, ...) then the\nstandard string is overwritten without validation. If value is\nset to empty then the key/value pair is deleted.\n"},
  {"GetCustomString", PyvtkPersonInformation_GetCustomString, METH_VARARGS,
   "GetCustomString(self, key:str) -> str\nC++: virtual std::string GetCustomString(const std::string &key)\n\nGet a custom string value. If a standard string's key is used\n(Name, Email, ...) then the corresponding value is returned.\nEmpty string is returned if the key has no associated value.\n"},
  {"IsEmailValid", PyvtkPersonInformation_IsEmailValid, METH_VARARGS,
   "IsEmailValid(self, value:str) -> bool\nC++: virtual bool IsEmailValid(const std::string &value)\n\n"},
  {"KeyName", PyvtkPersonInformation_KeyName, METH_VARARGS,
   "KeyName() -> str\nC++: static const char *KeyName()\n\nInformation keys.\n"},
  {"KeyLogin", PyvtkPersonInformation_KeyLogin, METH_VARARGS,
   "KeyLogin() -> str\nC++: static const char *KeyLogin()\n\nInformation keys.\n"},
  {"KeyEmail", PyvtkPersonInformation_KeyEmail, METH_VARARGS,
   "KeyEmail() -> str\nC++: static const char *KeyEmail()\n\nInformation keys.\n"},
  {"KeyOrganization", PyvtkPersonInformation_KeyOrganization, METH_VARARGS,
   "KeyOrganization() -> str\nC++: static const char *KeyOrganization()\n\nInformation keys.\n"},
  {"KeyOrganizationRole", PyvtkPersonInformation_KeyOrganizationRole, METH_VARARGS,
   "KeyOrganizationRole() -> str\nC++: static const char *KeyOrganizationRole()\n\nInformation keys.\n"},
  {"KeyProcedureRole", PyvtkPersonInformation_KeyProcedureRole, METH_VARARGS,
   "KeyProcedureRole() -> str\nC++: static const char *KeyProcedureRole()\n\nInformation keys.\n"},
  {"GetAsString", PyvtkPersonInformation_GetAsString, METH_VARARGS,
   "GetAsString(self) -> str\nC++: virtual std::string GetAsString()\n\nWrite all key/value pairs to a string.\n"},
  {"SetFromString", PyvtkPersonInformation_SetFromString, METH_VARARGS,
   "SetFromString(self, data:str) -> bool\nC++: virtual bool SetFromString(const std::string &data)\n\nRead all key/value pairs from a string. All previous values are\ncleared.\n"},
  {"GetKeys", PyvtkPersonInformation_GetKeys, METH_VARARGS,
   "GetKeys(self, keys:vtkStringArray) -> None\nC++: virtual void GetKeys(vtkStringArray *keys)\n\nReturns list of all keys.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPersonInformation_Doc =
  "vtkPersonInformation - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPersonInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkPersonInformation", // tp_name
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
  PyvtkPersonInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPersonInformation_StaticNew()
{
  return vtkPersonInformation::New();
}

PyObject *PyvtkPersonInformation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPersonInformation_Type, PyvtkPersonInformation_Methods,
    "vtkPersonInformation",
 &PyvtkPersonInformation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPersonInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPersonInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPersonInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

