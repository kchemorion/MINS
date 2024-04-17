// python wrapper for vtkObservation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObservation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkObservation(PyObject *dict); }
extern "C" { PyObject *PyvtkObservation_ClassNew(); }


static PyObject *
PyvtkObservation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkObservation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObservation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkObservation *tempr = vtkObservation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObservation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkObservation::NewInstance());

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
PyvtkObservation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkObservation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkObservation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetEventBroker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventBroker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  vtkEventBroker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEventBroker"))
  {
    if (ap.IsBound())
    {
      op->SetEventBroker(temp0);
    }
    else
    {
      op->vtkObservation::SetEventBroker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetEventBroker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventBroker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventBroker *tempr = (ap.IsBound() ?
      op->GetEventBroker() :
      op->vtkObservation::GetEventBroker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetInEventQueue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInEventQueue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInEventQueue() :
      op->vtkObservation::GetInEventQueue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetInEventQueue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInEventQueue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInEventQueue(temp0);
    }
    else
    {
      op->vtkObservation::SetInEventQueue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetObservationCallbackCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObservationCallbackCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCallbackCommand *tempr = (ap.IsBound() ?
      op->GetObservationCallbackCommand() :
      op->vtkObservation::GetObservationCallbackCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetSubject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetSubject() :
      op->vtkObservation::GetSubject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_AssignSubject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignSubject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->AssignSubject(temp0);
    }
    else
    {
      op->vtkObservation::AssignSubject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetEvent() :
      op->vtkObservation::GetEvent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEvent(temp0);
    }
    else
    {
      op->vtkObservation::SetEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetCallbackCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCallbackCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  vtkCallbackCommand *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCallbackCommand"))
  {
    if (ap.IsBound())
    {
      op->SetCallbackCommand(temp0);
    }
    else
    {
      op->vtkObservation::SetCallbackCommand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetCallbackCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCallbackCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCallbackCommand *tempr = (ap.IsBound() ?
      op->GetCallbackCommand() :
      op->vtkObservation::GetCallbackCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScript(temp0);
    }
    else
    {
      op->vtkObservation::SetScript(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetScript(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScript");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScript() :
      op->vtkObservation::GetScript());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetObserver() :
      op->vtkObservation::GetObserver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_AssignObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssignObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->AssignObserver(temp0);
    }
    else
    {
      op->vtkObservation::AssignObserver(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComment(temp0);
    }
    else
    {
      op->vtkObservation::SetComment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetComment() :
      op->vtkObservation::GetComment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPriority(temp0);
    }
    else
    {
      op->vtkObservation::SetPriority(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPriority() :
      op->vtkObservation::GetPriority());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetEventTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetEventTag() :
      op->vtkObservation::GetEventTag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetEventTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEventTag(temp0);
    }
    else
    {
      op->vtkObservation::SetEventTag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetSubjectDeleteEventTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubjectDeleteEventTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetSubjectDeleteEventTag() :
      op->vtkObservation::GetSubjectDeleteEventTag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetSubjectDeleteEventTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubjectDeleteEventTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubjectDeleteEventTag(temp0);
    }
    else
    {
      op->vtkObservation::SetSubjectDeleteEventTag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetObserverDeleteEventTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObserverDeleteEventTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetObserverDeleteEventTag() :
      op->vtkObservation::GetObserverDeleteEventTag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetObserverDeleteEventTag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObserverDeleteEventTag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetObserverDeleteEventTag(temp0);
    }
    else
    {
      op->vtkObservation::SetObserverDeleteEventTag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetLastElapsedTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastElapsedTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLastElapsedTime() :
      op->vtkObservation::GetLastElapsedTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetLastElapsedTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastElapsedTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastElapsedTime(temp0);
    }
    else
    {
      op->vtkObservation::SetLastElapsedTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_GetTotalElapsedTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalElapsedTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTotalElapsedTime() :
      op->vtkObservation::GetTotalElapsedTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObservation_SetTotalElapsedTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalElapsedTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObservation *op = static_cast<vtkObservation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTotalElapsedTime(temp0);
    }
    else
    {
      op->vtkObservation::SetTotalElapsedTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkObservation_Methods[] = {
  {"IsTypeOf", PyvtkObservation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkObservation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkObservation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkObservation\nC++: static vtkObservation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkObservation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkObservation\nC++: vtkObservation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkObservation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkObservation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEventBroker", PyvtkObservation_SetEventBroker, METH_VARARGS,
   "SetEventBroker(self, eventBroker:vtkEventBroker) -> None\nC++: virtual void SetEventBroker(vtkEventBroker *eventBroker)\n\nAccessors\n- note that AssignObject methods do not register the pointers\n- it is assumed that the EventBroker will attach DeleteEvent\n  observers to these objects and will thereby know when they are\n  no longer valid\n"},
  {"GetEventBroker", PyvtkObservation_GetEventBroker, METH_VARARGS,
   "GetEventBroker(self) -> vtkEventBroker\nC++: virtual vtkEventBroker *GetEventBroker()\n\n"},
  {"GetInEventQueue", PyvtkObservation_GetInEventQueue, METH_VARARGS,
   "GetInEventQueue(self) -> int\nC++: virtual int GetInEventQueue()\n\n"},
  {"SetInEventQueue", PyvtkObservation_SetInEventQueue, METH_VARARGS,
   "SetInEventQueue(self, _arg:int) -> None\nC++: virtual void SetInEventQueue(int _arg)\n\n"},
  {"GetObservationCallbackCommand", PyvtkObservation_GetObservationCallbackCommand, METH_VARARGS,
   "GetObservationCallbackCommand(self) -> vtkCallbackCommand\nC++: virtual vtkCallbackCommand *GetObservationCallbackCommand()\n\n"},
  {"GetSubject", PyvtkObservation_GetSubject, METH_VARARGS,
   "GetSubject(self) -> vtkObject\nC++: virtual vtkObject *GetSubject()\n\n"},
  {"AssignSubject", PyvtkObservation_AssignSubject, METH_VARARGS,
   "AssignSubject(self, subject:vtkObject) -> None\nC++: void AssignSubject(vtkObject *subject)\n\n"},
  {"GetEvent", PyvtkObservation_GetEvent, METH_VARARGS,
   "GetEvent(self) -> int\nC++: virtual unsigned long GetEvent()\n\n"},
  {"SetEvent", PyvtkObservation_SetEvent, METH_VARARGS,
   "SetEvent(self, _arg:int) -> None\nC++: virtual void SetEvent(unsigned long _arg)\n\n"},
  {"SetCallbackCommand", PyvtkObservation_SetCallbackCommand, METH_VARARGS,
   "SetCallbackCommand(self, callbackCommand:vtkCallbackCommand)\n    -> None\nC++: virtual void SetCallbackCommand(\n    vtkCallbackCommand *callbackCommand)\n\n"},
  {"GetCallbackCommand", PyvtkObservation_GetCallbackCommand, METH_VARARGS,
   "GetCallbackCommand(self) -> vtkCallbackCommand\nC++: virtual vtkCallbackCommand *GetCallbackCommand()\n\n"},
  {"SetScript", PyvtkObservation_SetScript, METH_VARARGS,
   "SetScript(self, _arg:str) -> None\nC++: virtual void SetScript(const char *_arg)\n\n"},
  {"GetScript", PyvtkObservation_GetScript, METH_VARARGS,
   "GetScript(self) -> str\nC++: virtual char *GetScript()\n\n"},
  {"GetObserver", PyvtkObservation_GetObserver, METH_VARARGS,
   "GetObserver(self) -> vtkObject\nC++: virtual vtkObject *GetObserver()\n\n"},
  {"AssignObserver", PyvtkObservation_AssignObserver, METH_VARARGS,
   "AssignObserver(self, observer:vtkObject) -> None\nC++: void AssignObserver(vtkObject *observer)\n\n"},
  {"SetComment", PyvtkObservation_SetComment, METH_VARARGS,
   "SetComment(self, _arg:str) -> None\nC++: virtual void SetComment(const char *_arg)\n\n"},
  {"GetComment", PyvtkObservation_GetComment, METH_VARARGS,
   "GetComment(self) -> str\nC++: virtual char *GetComment()\n\n"},
  {"SetPriority", PyvtkObservation_SetPriority, METH_VARARGS,
   "SetPriority(self, _arg:float) -> None\nC++: virtual void SetPriority(float _arg)\n\n"},
  {"GetPriority", PyvtkObservation_GetPriority, METH_VARARGS,
   "GetPriority(self) -> float\nC++: virtual float GetPriority()\n\n"},
  {"GetEventTag", PyvtkObservation_GetEventTag, METH_VARARGS,
   "GetEventTag(self) -> int\nC++: virtual unsigned long GetEventTag()\n\n"},
  {"SetEventTag", PyvtkObservation_SetEventTag, METH_VARARGS,
   "SetEventTag(self, _arg:int) -> None\nC++: virtual void SetEventTag(unsigned long _arg)\n\n"},
  {"GetSubjectDeleteEventTag", PyvtkObservation_GetSubjectDeleteEventTag, METH_VARARGS,
   "GetSubjectDeleteEventTag(self) -> int\nC++: virtual unsigned long GetSubjectDeleteEventTag()\n\n"},
  {"SetSubjectDeleteEventTag", PyvtkObservation_SetSubjectDeleteEventTag, METH_VARARGS,
   "SetSubjectDeleteEventTag(self, _arg:int) -> None\nC++: virtual void SetSubjectDeleteEventTag(unsigned long _arg)\n\n"},
  {"GetObserverDeleteEventTag", PyvtkObservation_GetObserverDeleteEventTag, METH_VARARGS,
   "GetObserverDeleteEventTag(self) -> int\nC++: virtual unsigned long GetObserverDeleteEventTag()\n\n"},
  {"SetObserverDeleteEventTag", PyvtkObservation_SetObserverDeleteEventTag, METH_VARARGS,
   "SetObserverDeleteEventTag(self, _arg:int) -> None\nC++: virtual void SetObserverDeleteEventTag(unsigned long _arg)\n\n"},
  {"GetLastElapsedTime", PyvtkObservation_GetLastElapsedTime, METH_VARARGS,
   "GetLastElapsedTime(self) -> float\nC++: virtual double GetLastElapsedTime()\n\nDescription Elapsed time of last invocation and total elapsed\ntime (in synchronous mode, elapsed time include children)\n"},
  {"SetLastElapsedTime", PyvtkObservation_SetLastElapsedTime, METH_VARARGS,
   "SetLastElapsedTime(self, _arg:float) -> None\nC++: virtual void SetLastElapsedTime(double _arg)\n\n"},
  {"GetTotalElapsedTime", PyvtkObservation_GetTotalElapsedTime, METH_VARARGS,
   "GetTotalElapsedTime(self) -> float\nC++: virtual double GetTotalElapsedTime()\n\n"},
  {"SetTotalElapsedTime", PyvtkObservation_SetTotalElapsedTime, METH_VARARGS,
   "SetTotalElapsedTime(self, _arg:float) -> None\nC++: virtual void SetTotalElapsedTime(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkObservation_Doc =
  "vtkObservation - Stores information about the relationship between a\nSubject and an Observer.\n\n"
  "Superclass: vtkObject\n\n"
  "The Observation is a record of\n"
  "- a subject  (vtkObject)\n"
  "- an event type (unsigned long)\n"
  "- an observer (vtkObject)\n"
  "- a callback (vtkCallbackCommand)\n"
  "- optional comment strings This class can be used by the\n"
  "  vtkEventBroker to keep track of the registered observers that it\n"
  "  manages, and it can be used by the event queue to keep track of\n"
  "  which events have been triggered so it can invoke them later\n\n"
  "ote This class does not add or remove observers itself; it just keeps\n"
  "track of them for the event broker.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkObservation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkObservation", // tp_name
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
  PyvtkObservation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkObservation_StaticNew()
{
  return vtkObservation::New();
}

PyObject *PyvtkObservation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkObservation_Type, PyvtkObservation_Methods,
    "vtkObservation",
 &PyvtkObservation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkObservation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkObservation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkObservation", o) != 0)
  {
    Py_DECREF(o);
  }

}

