// python wrapper for vtkMRMLAbstractSliceViewDisplayableManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLAbstractSliceViewDisplayableManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLAbstractSliceViewDisplayableManager(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractDisplayableManager_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractDisplayableManager_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractDisplayableManager_ClassNew
#endif

static PyObject *
PyvtkMRMLAbstractSliceViewDisplayableManager_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLAbstractSliceViewDisplayableManager::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractSliceViewDisplayableManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractSliceViewDisplayableManager *op = static_cast<vtkMRMLAbstractSliceViewDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLAbstractSliceViewDisplayableManager::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractSliceViewDisplayableManager_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLAbstractSliceViewDisplayableManager *tempr = vtkMRMLAbstractSliceViewDisplayableManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractSliceViewDisplayableManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractSliceViewDisplayableManager *op = static_cast<vtkMRMLAbstractSliceViewDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLAbstractSliceViewDisplayableManager *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLAbstractSliceViewDisplayableManager::NewInstance());

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
PyvtkMRMLAbstractSliceViewDisplayableManager_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLAbstractSliceViewDisplayableManager::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractSliceViewDisplayableManager_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractSliceViewDisplayableManager *op = static_cast<vtkMRMLAbstractSliceViewDisplayableManager *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLAbstractSliceViewDisplayableManager::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractSliceViewDisplayableManager_GetMRMLSliceNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMRMLSliceNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractSliceViewDisplayableManager *op = static_cast<vtkMRMLAbstractSliceViewDisplayableManager *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLSliceNode *tempr = (ap.IsBound() ?
      op->GetMRMLSliceNode() :
      op->vtkMRMLAbstractSliceViewDisplayableManager::GetMRMLSliceNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertDeviceToXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertDeviceToXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractSliceViewDisplayableManager *op = static_cast<vtkMRMLAbstractSliceViewDisplayableManager *>(vp);

  double temp0;
  double temp1;
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
      op->ConvertDeviceToXYZ(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMRMLAbstractSliceViewDisplayableManager::ConvertDeviceToXYZ(temp0, temp1, temp2);
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
PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertDeviceToXYZ_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertDeviceToXYZ");

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkMRMLSliceNode *temp1 = nullptr;
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkMRMLSliceNode") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    vtkMRMLAbstractSliceViewDisplayableManager::ConvertDeviceToXYZ(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertDeviceToXYZ_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertDeviceToXYZ");

  vtkRenderer *temp0 = nullptr;
  vtkMRMLSliceNode *temp1 = nullptr;
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkMRMLSliceNode") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    vtkMRMLAbstractSliceViewDisplayableManager::ConvertDeviceToXYZ(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertDeviceToXYZ_Methods[] = {
  {"ConvertDeviceToXYZ", PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertDeviceToXYZ_s2, METH_VARARGS | METH_STATIC,
   "VVddP *vtkRenderWindowInteractor *vtkMRMLSliceNode *d"},
  {"ConvertDeviceToXYZ", PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertDeviceToXYZ_s3, METH_VARARGS | METH_STATIC,
   "VVddP *vtkRenderer *vtkMRMLSliceNode *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertDeviceToXYZ(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertDeviceToXYZ_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertDeviceToXYZ_s1(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ConvertDeviceToXYZ");
  return nullptr;
}


static PyObject *
PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertRASToXYZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertRASToXYZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractSliceViewDisplayableManager *op = static_cast<vtkMRMLAbstractSliceViewDisplayableManager *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ConvertRASToXYZ(temp0, temp1);
    }
    else
    {
      op->vtkMRMLAbstractSliceViewDisplayableManager::ConvertRASToXYZ(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertRASToXYZ_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertRASToXYZ");

  vtkMRMLSliceNode *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMRMLAbstractSliceViewDisplayableManager::ConvertRASToXYZ(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertRASToXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertRASToXYZ_s1(self, args);
    case 3:
      return PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertRASToXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ConvertRASToXYZ");
  return nullptr;
}


static PyObject *
PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertXYZToRAS_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertXYZToRAS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLAbstractSliceViewDisplayableManager *op = static_cast<vtkMRMLAbstractSliceViewDisplayableManager *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ConvertXYZToRAS(temp0, temp1);
    }
    else
    {
      op->vtkMRMLAbstractSliceViewDisplayableManager::ConvertXYZToRAS(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertXYZToRAS_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertXYZToRAS");

  vtkMRMLSliceNode *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMRMLSliceNode") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMRMLAbstractSliceViewDisplayableManager::ConvertXYZToRAS(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertXYZToRAS(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertXYZToRAS_s1(self, args);
    case 3:
      return PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertXYZToRAS_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ConvertXYZToRAS");
  return nullptr;
}

static PyMethodDef PyvtkMRMLAbstractSliceViewDisplayableManager_Methods[] = {
  {"IsTypeOf", PyvtkMRMLAbstractSliceViewDisplayableManager_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLAbstractSliceViewDisplayableManager_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLAbstractSliceViewDisplayableManager_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMRMLAbstractSliceViewDisplayableManager\nC++: static vtkMRMLAbstractSliceViewDisplayableManager *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLAbstractSliceViewDisplayableManager_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLAbstractSliceViewDisplayableManager\nC++: vtkMRMLAbstractSliceViewDisplayableManager *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLAbstractSliceViewDisplayableManager_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLAbstractSliceViewDisplayableManager_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMRMLSliceNode", PyvtkMRMLAbstractSliceViewDisplayableManager_GetMRMLSliceNode, METH_VARARGS,
   "GetMRMLSliceNode(self) -> vtkMRMLSliceNode\nC++: vtkMRMLSliceNode *GetMRMLSliceNode()\n\nGet MRML SliceNode\n"},
  {"ConvertDeviceToXYZ", PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertDeviceToXYZ, METH_VARARGS,
   "ConvertDeviceToXYZ(self, x:float, y:float, xyz:[float, float,\n    float]) -> None\nC++: void ConvertDeviceToXYZ(double x, double y, double xyz[3])\nConvertDeviceToXYZ(interactor:vtkRenderWindowInteractor,\n    sliceNode:vtkMRMLSliceNode, x:float, y:float, xyz:[float,\n    float, float]) -> None\nC++: static void ConvertDeviceToXYZ(\n    vtkRenderWindowInteractor *interactor,\n    vtkMRMLSliceNode *sliceNode, double x, double y,\n    double xyz[3])\nConvertDeviceToXYZ(renderer:vtkRenderer,\n    sliceNode:vtkMRMLSliceNode, x:float, y:float, xyz:[float,\n    float, float]) -> None\nC++: static void ConvertDeviceToXYZ(vtkRenderer *renderer,\n    vtkMRMLSliceNode *sliceNode, double x, double y,\n    double xyz[3])\n\nConvert device coordinates (display) to XYZ coordinates\n(viewport). Parameter xyz is double[3]\n\\sa ConvertDeviceToXYZ(vtkRenderWindowInteractor *,\n    vtkMRMLSliceNode *, double x, double y, double xyz[3])\n"},
  {"ConvertRASToXYZ", PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertRASToXYZ, METH_VARARGS,
   "ConvertRASToXYZ(self, ras:[float, float, float], xyz:[float,\n    float, float]) -> None\nC++: void ConvertRASToXYZ(double ras[3], double xyz[3])\nConvertRASToXYZ(sliceNode:vtkMRMLSliceNode, ras:[float, float,\n    float], xyz:[float, float, float]) -> None\nC++: static void ConvertRASToXYZ(vtkMRMLSliceNode *sliceNode,\n    double ras[3], double xyz[3])\n\nConvert RAS to XYZ coordinates (viewport). Parameters ras and xyz\nare double[3]. xyz[2] is the lightbox id.\n\\sa ConvertRASToXYZ(vtkMRMLSliceNode * sliceNode, double ras[3],\n    double xyz[3])\n"},
  {"ConvertXYZToRAS", PyvtkMRMLAbstractSliceViewDisplayableManager_ConvertXYZToRAS, METH_VARARGS,
   "ConvertXYZToRAS(self, xyz:[float, float, float], ras:[float,\n    float, float]) -> None\nC++: void ConvertXYZToRAS(double xyz[3], double ras[3])\nConvertXYZToRAS(sliceNode:vtkMRMLSliceNode, xyz:[float, float,\n    float], ras:[float, float, float]) -> None\nC++: static void ConvertXYZToRAS(vtkMRMLSliceNode *sliceNode,\n    double xyz[3], double ras[3])\n\nConvert XYZ (viewport) to RAS coordinates. Parameters ras and xyz\nare double[3]. xyz[2] is the lightbox id.\n\\sa ConvertXYZToRAS(vtkMRMLSliceNode * sliceNode, double xyz[3],\n    double ras[3])\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLAbstractSliceViewDisplayableManager_Doc =
  "vtkMRMLAbstractSliceViewDisplayableManager - Superclass for\ndisplayable manager classes.\n\n"
  "Superclass: vtkMRMLAbstractDisplayableManager\n\n"
  "A displayable manager class is responsible to represent a\n"
  "MRMLDisplayable node in a renderer.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLAbstractSliceViewDisplayableManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLDisplayableManagerPython.vtkMRMLAbstractSliceViewDisplayableManager", // tp_name
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
  PyvtkMRMLAbstractSliceViewDisplayableManager_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLAbstractSliceViewDisplayableManager_StaticNew()
{
  return vtkMRMLAbstractSliceViewDisplayableManager::New();
}

PyObject *PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLAbstractSliceViewDisplayableManager_Type, PyvtkMRMLAbstractSliceViewDisplayableManager_Methods,
    "vtkMRMLAbstractSliceViewDisplayableManager",
 &PyvtkMRMLAbstractSliceViewDisplayableManager_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractDisplayableManager_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLAbstractSliceViewDisplayableManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLAbstractSliceViewDisplayableManager_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLAbstractSliceViewDisplayableManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

