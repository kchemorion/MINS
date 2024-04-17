// python wrapper for vtkMRMLViewInteractorStyle
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLViewInteractorStyle.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLViewInteractorStyle(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLViewInteractorStyle_ClassNew(); }


static PyObject *
PyvtkMRMLViewInteractorStyle_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLViewInteractorStyle::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLViewInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLViewInteractorStyle *tempr = vtkMRMLViewInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLViewInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLViewInteractorStyle::NewInstance());

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
PyvtkMRMLViewInteractorStyle_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLViewInteractorStyle::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLViewInteractorStyle::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnEnter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEnter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnEnter();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnEnter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnLeave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeave();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnLeave();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnLeftButtonDoubleClick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDoubleClick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDoubleClick();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnLeftButtonDoubleClick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnMiddleButtonDoubleClick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDoubleClick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDoubleClick();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnMiddleButtonDoubleClick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnRightButtonDoubleClick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDoubleClick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDoubleClick();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnRightButtonDoubleClick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseWheelForward();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnMouseWheelForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseWheelBackward();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnMouseWheelBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnStartPinch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnStartPinch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnStartPinch();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnStartPinch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnPinch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnPinch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnPinch();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnPinch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnEndPinch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEndPinch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnEndPinch();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnEndPinch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnStartRotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnStartRotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnStartRotate();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnStartRotate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnRotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRotate();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnRotate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnEndRotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEndRotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnEndRotate();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnEndRotate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnStartPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnStartPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnStartPan();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnStartPan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnPan();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnPan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnEndPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEndPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnEndPan();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnEndPan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnTap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnTap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnTap();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnTap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnLongTap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLongTap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLongTap();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnLongTap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnKeyPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyPress();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnKeyPress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnKeyRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyRelease();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnKeyRelease();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnButton3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButton3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  vtkEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEventData"))
  {
    if (ap.IsBound())
    {
      op->OnButton3D(temp0);
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnButton3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnMove3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMove3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  vtkEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEventData"))
  {
    if (ap.IsBound())
    {
      op->OnMove3D(temp0);
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnMove3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnExpose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnExpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnExpose();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnExpose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_OnConfigure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnConfigure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnConfigure();
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::OnConfigure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_SetDisplayableManagers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayableManagers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  vtkMRMLDisplayableManagerGroup *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLDisplayableManagerGroup"))
  {
    if (ap.IsBound())
    {
      op->SetDisplayableManagers(temp0);
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::SetDisplayableManagers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegateInteractionEventToDisplayableManagers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->DelegateInteractionEventToDisplayableManagers(temp0) :
      op->vtkMRMLViewInteractorStyle::DelegateInteractionEventToDisplayableManagers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegateInteractionEventToDisplayableManagers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  vtkEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->DelegateInteractionEventToDisplayableManagers(temp0) :
      op->vtkMRMLViewInteractorStyle::DelegateInteractionEventToDisplayableManagers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_Methods[] = {
  {"DelegateInteractionEventToDisplayableManagers", PyvtkMRMLViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s1, METH_VARARGS,
   "@L"},
  {"DelegateInteractionEventToDisplayableManagers", PyvtkMRMLViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_s2, METH_VARARGS,
   "@V *vtkEventData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLViewInteractorStyle_DelegateInteractionEventToDisplayableManagers(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLViewInteractorStyle_DelegateInteractionEventToDisplayableManagers_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DelegateInteractionEventToDisplayableManagers");
  return nullptr;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_DelegateInteractionEventDataToDisplayableManagers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegateInteractionEventDataToDisplayableManagers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  vtkMRMLInteractionEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLInteractionEventData"))
  {
    bool tempr = (ap.IsBound() ?
      op->DelegateInteractionEventDataToDisplayableManagers(temp0) :
      op->vtkMRMLViewInteractorStyle::DelegateInteractionEventDataToDisplayableManagers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->GetInteractor() :
      op->vtkMRMLViewInteractorStyle::GetInteractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLViewInteractorStyle_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLViewInteractorStyle *op = static_cast<vtkMRMLViewInteractorStyle *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkMRMLViewInteractorStyle::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLViewInteractorStyle_Methods[] = {
  {"IsTypeOf", PyvtkMRMLViewInteractorStyle_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLViewInteractorStyle_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLViewInteractorStyle_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLViewInteractorStyle\nC++: static vtkMRMLViewInteractorStyle *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLViewInteractorStyle_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLViewInteractorStyle\nC++: vtkMRMLViewInteractorStyle *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLViewInteractorStyle_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLViewInteractorStyle_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"OnMouseMove", PyvtkMRMLViewInteractorStyle_OnMouseMove, METH_VARARGS,
   "OnMouseMove(self) -> None\nC++: virtual void OnMouseMove()\n\nMouse functions\n"},
  {"OnEnter", PyvtkMRMLViewInteractorStyle_OnEnter, METH_VARARGS,
   "OnEnter(self) -> None\nC++: virtual void OnEnter()\n\n"},
  {"OnLeave", PyvtkMRMLViewInteractorStyle_OnLeave, METH_VARARGS,
   "OnLeave(self) -> None\nC++: virtual void OnLeave()\n\n"},
  {"OnLeftButtonDoubleClick", PyvtkMRMLViewInteractorStyle_OnLeftButtonDoubleClick, METH_VARARGS,
   "OnLeftButtonDoubleClick(self) -> None\nC++: virtual void OnLeftButtonDoubleClick()\n\n"},
  {"OnLeftButtonDown", PyvtkMRMLViewInteractorStyle_OnLeftButtonDown, METH_VARARGS,
   "OnLeftButtonDown(self) -> None\nC++: virtual void OnLeftButtonDown()\n\n"},
  {"OnLeftButtonUp", PyvtkMRMLViewInteractorStyle_OnLeftButtonUp, METH_VARARGS,
   "OnLeftButtonUp(self) -> None\nC++: virtual void OnLeftButtonUp()\n\n"},
  {"OnMiddleButtonDoubleClick", PyvtkMRMLViewInteractorStyle_OnMiddleButtonDoubleClick, METH_VARARGS,
   "OnMiddleButtonDoubleClick(self) -> None\nC++: virtual void OnMiddleButtonDoubleClick()\n\n"},
  {"OnMiddleButtonDown", PyvtkMRMLViewInteractorStyle_OnMiddleButtonDown, METH_VARARGS,
   "OnMiddleButtonDown(self) -> None\nC++: virtual void OnMiddleButtonDown()\n\n"},
  {"OnMiddleButtonUp", PyvtkMRMLViewInteractorStyle_OnMiddleButtonUp, METH_VARARGS,
   "OnMiddleButtonUp(self) -> None\nC++: virtual void OnMiddleButtonUp()\n\n"},
  {"OnRightButtonDoubleClick", PyvtkMRMLViewInteractorStyle_OnRightButtonDoubleClick, METH_VARARGS,
   "OnRightButtonDoubleClick(self) -> None\nC++: virtual void OnRightButtonDoubleClick()\n\n"},
  {"OnRightButtonDown", PyvtkMRMLViewInteractorStyle_OnRightButtonDown, METH_VARARGS,
   "OnRightButtonDown(self) -> None\nC++: virtual void OnRightButtonDown()\n\n"},
  {"OnRightButtonUp", PyvtkMRMLViewInteractorStyle_OnRightButtonUp, METH_VARARGS,
   "OnRightButtonUp(self) -> None\nC++: virtual void OnRightButtonUp()\n\n"},
  {"OnMouseWheelForward", PyvtkMRMLViewInteractorStyle_OnMouseWheelForward, METH_VARARGS,
   "OnMouseWheelForward(self) -> None\nC++: virtual void OnMouseWheelForward()\n\n"},
  {"OnMouseWheelBackward", PyvtkMRMLViewInteractorStyle_OnMouseWheelBackward, METH_VARARGS,
   "OnMouseWheelBackward(self) -> None\nC++: virtual void OnMouseWheelBackward()\n\n"},
  {"OnStartPinch", PyvtkMRMLViewInteractorStyle_OnStartPinch, METH_VARARGS,
   "OnStartPinch(self) -> None\nC++: virtual void OnStartPinch()\n\n"},
  {"OnPinch", PyvtkMRMLViewInteractorStyle_OnPinch, METH_VARARGS,
   "OnPinch(self) -> None\nC++: virtual void OnPinch()\n\n"},
  {"OnEndPinch", PyvtkMRMLViewInteractorStyle_OnEndPinch, METH_VARARGS,
   "OnEndPinch(self) -> None\nC++: virtual void OnEndPinch()\n\n"},
  {"OnStartRotate", PyvtkMRMLViewInteractorStyle_OnStartRotate, METH_VARARGS,
   "OnStartRotate(self) -> None\nC++: virtual void OnStartRotate()\n\n"},
  {"OnRotate", PyvtkMRMLViewInteractorStyle_OnRotate, METH_VARARGS,
   "OnRotate(self) -> None\nC++: virtual void OnRotate()\n\n"},
  {"OnEndRotate", PyvtkMRMLViewInteractorStyle_OnEndRotate, METH_VARARGS,
   "OnEndRotate(self) -> None\nC++: virtual void OnEndRotate()\n\n"},
  {"OnStartPan", PyvtkMRMLViewInteractorStyle_OnStartPan, METH_VARARGS,
   "OnStartPan(self) -> None\nC++: virtual void OnStartPan()\n\n"},
  {"OnPan", PyvtkMRMLViewInteractorStyle_OnPan, METH_VARARGS,
   "OnPan(self) -> None\nC++: virtual void OnPan()\n\n"},
  {"OnEndPan", PyvtkMRMLViewInteractorStyle_OnEndPan, METH_VARARGS,
   "OnEndPan(self) -> None\nC++: virtual void OnEndPan()\n\n"},
  {"OnTap", PyvtkMRMLViewInteractorStyle_OnTap, METH_VARARGS,
   "OnTap(self) -> None\nC++: virtual void OnTap()\n\n"},
  {"OnLongTap", PyvtkMRMLViewInteractorStyle_OnLongTap, METH_VARARGS,
   "OnLongTap(self) -> None\nC++: virtual void OnLongTap()\n\n"},
  {"OnChar", PyvtkMRMLViewInteractorStyle_OnChar, METH_VARARGS,
   "OnChar(self) -> None\nC++: virtual void OnChar()\n\nKeyboard functions\n"},
  {"OnKeyPress", PyvtkMRMLViewInteractorStyle_OnKeyPress, METH_VARARGS,
   "OnKeyPress(self) -> None\nC++: virtual void OnKeyPress()\n\n"},
  {"OnKeyRelease", PyvtkMRMLViewInteractorStyle_OnKeyRelease, METH_VARARGS,
   "OnKeyRelease(self) -> None\nC++: virtual void OnKeyRelease()\n\n"},
  {"OnButton3D", PyvtkMRMLViewInteractorStyle_OnButton3D, METH_VARARGS,
   "OnButton3D(self, eventData:vtkEventData) -> None\nC++: virtual void OnButton3D(vtkEventData *eventData)\n\n3D event bindings\n"},
  {"OnMove3D", PyvtkMRMLViewInteractorStyle_OnMove3D, METH_VARARGS,
   "OnMove3D(self, eventData:vtkEventData) -> None\nC++: virtual void OnMove3D(vtkEventData *eventData)\n\n"},
  {"OnExpose", PyvtkMRMLViewInteractorStyle_OnExpose, METH_VARARGS,
   "OnExpose(self) -> None\nC++: virtual void OnExpose()\n\n"},
  {"OnConfigure", PyvtkMRMLViewInteractorStyle_OnConfigure, METH_VARARGS,
   "OnConfigure(self) -> None\nC++: virtual void OnConfigure()\n\n"},
  {"SetDisplayableManagers", PyvtkMRMLViewInteractorStyle_SetDisplayableManagers, METH_VARARGS,
   "SetDisplayableManagers(self,\n    displayableManagers:vtkMRMLDisplayableManagerGroup) -> None\nC++: virtual void SetDisplayableManagers(\n    vtkMRMLDisplayableManagerGroup *displayableManagers)\n\n"},
  {"DelegateInteractionEventToDisplayableManagers", PyvtkMRMLViewInteractorStyle_DelegateInteractionEventToDisplayableManagers, METH_VARARGS,
   "DelegateInteractionEventToDisplayableManagers(self, event:int)\n    -> bool\nC++: virtual bool DelegateInteractionEventToDisplayableManagers(\n    unsigned long event)\nDelegateInteractionEventToDisplayableManagers(self,\n    inputEventData:vtkEventData) -> bool\nC++: virtual bool DelegateInteractionEventToDisplayableManagers(\n    vtkEventData *inputEventData)\n\nGive a chance to displayable managers to process the event. It\njust creates vtkMRMLInteractionEventData and calls\nDelegateInteractionEventDataToDisplayableManagers. Return true if\nthe event is processed.\n"},
  {"DelegateInteractionEventDataToDisplayableManagers", PyvtkMRMLViewInteractorStyle_DelegateInteractionEventDataToDisplayableManagers, METH_VARARGS,
   "DelegateInteractionEventDataToDisplayableManagers(self,\n    eventData:vtkMRMLInteractionEventData) -> bool\nC++: virtual bool DelegateInteractionEventDataToDisplayableManagers(\n    vtkMRMLInteractionEventData *eventData)\n\nGive a chance to displayable managers to process the event.\nReturn true if the event is processed.\n"},
  {"GetInteractor", PyvtkMRMLViewInteractorStyle_GetInteractor, METH_VARARGS,
   "GetInteractor(self) -> vtkRenderWindowInteractor\nC++: virtual vtkRenderWindowInteractor *GetInteractor()\n\n"},
  {"SetInteractor", PyvtkMRMLViewInteractorStyle_SetInteractor, METH_VARARGS,
   "SetInteractor(self, interactor:vtkRenderWindowInteractor) -> None\nC++: virtual void SetInteractor(\n    vtkRenderWindowInteractor *interactor)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLViewInteractorStyle_Doc =
  "vtkMRMLViewInteractorStyle - Common base class for processing\ninteraction events in MRML views\n\n"
  "Superclass: vtkObject\n\n"
  "Events are converted to new-style VTK interaction events and\n"
  "forwarded to displayable managers for processing. Some additional\n"
  "high-level events (such as click and double-click) are generated\n"
  "here.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLViewInteractorStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLViewInteractorStyle", // tp_name
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
  PyvtkMRMLViewInteractorStyle_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLViewInteractorStyle_StaticNew()
{
  return vtkMRMLViewInteractorStyle::New();
}

PyObject *PyvtkMRMLViewInteractorStyle_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLViewInteractorStyle_Type, PyvtkMRMLViewInteractorStyle_Methods,
    "vtkMRMLViewInteractorStyle",
 &PyvtkMRMLViewInteractorStyle_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLViewInteractorStyle(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLViewInteractorStyle_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLViewInteractorStyle", o) != 0)
  {
    Py_DECREF(o);
  }

}

