// python wrapper for vtkAddonMathUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAddonMathUtilities.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAddonMathUtilities(PyObject *dict); }
extern "C" { PyObject *PyvtkAddonMathUtilities_ClassNew(); }


static PyObject *
PyvtkAddonMathUtilities_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAddonMathUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddonMathUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddonMathUtilities *op = static_cast<vtkAddonMathUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAddonMathUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddonMathUtilities_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAddonMathUtilities *tempr = vtkAddonMathUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddonMathUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddonMathUtilities *op = static_cast<vtkAddonMathUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAddonMathUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAddonMathUtilities::NewInstance());

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
PyvtkAddonMathUtilities_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAddonMathUtilities::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddonMathUtilities_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddonMathUtilities *op = static_cast<vtkAddonMathUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAddonMathUtilities::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddonMathUtilities_MatrixAreEqual_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MatrixAreEqual");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  double temp2 = 1e-3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkAddonMathUtilities::MatrixAreEqual(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAddonMathUtilities_MatrixAreEqual_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MatrixAreEqual");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  double temp2 = 1e-3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkAddonMathUtilities::MatrixAreEqual(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAddonMathUtilities_MatrixAreEqual_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MatrixAreEqual");

  vtkMatrix3x3 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  double temp2 = 1e-3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkAddonMathUtilities::MatrixAreEqual(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAddonMathUtilities_MatrixAreEqual_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MatrixAreEqual");

  vtkMatrix3x3 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  double temp2 = 1e-3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkAddonMathUtilities::MatrixAreEqual(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAddonMathUtilities_MatrixAreEqual_Methods[] = {
  {"MatrixAreEqual", PyvtkAddonMathUtilities_MatrixAreEqual_s1, METH_VARARGS | METH_STATIC,
   "VV|d *vtkMatrix4x4 *vtkMatrix4x4"},
  {"MatrixAreEqual", PyvtkAddonMathUtilities_MatrixAreEqual_s2, METH_VARARGS | METH_STATIC,
   "VV|d *vtkMatrix4x4 *vtkMatrix3x3"},
  {"MatrixAreEqual", PyvtkAddonMathUtilities_MatrixAreEqual_s3, METH_VARARGS | METH_STATIC,
   "VV|d *vtkMatrix3x3 *vtkMatrix4x4"},
  {"MatrixAreEqual", PyvtkAddonMathUtilities_MatrixAreEqual_s4, METH_VARARGS | METH_STATIC,
   "VV|d *vtkMatrix3x3 *vtkMatrix3x3"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAddonMathUtilities_MatrixAreEqual(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAddonMathUtilities_MatrixAreEqual_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MatrixAreEqual");
  return nullptr;
}


static PyObject *
PyvtkAddonMathUtilities_GetOrientationMatrixColumn(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOrientationMatrixColumn");

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1;
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkAddonMathUtilities::GetOrientationMatrixColumn(temp0, temp1, temp2);

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
PyvtkAddonMathUtilities_SetOrientationMatrixColumn(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetOrientationMatrixColumn");

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1;
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkAddonMathUtilities::SetOrientationMatrixColumn(temp0, temp1, temp2);

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
PyvtkAddonMathUtilities_GetOrientationMatrix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOrientationMatrix");

  vtkMatrix4x4 *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    vtkAddonMathUtilities::GetOrientationMatrix(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAddonMathUtilities_SetOrientationMatrix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetOrientationMatrix");

  vtkMatrix3x3 *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    vtkAddonMathUtilities::SetOrientationMatrix(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAddonMathUtilities_NormalizeColumns(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "NormalizeColumns");

  vtkMatrix3x3 *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkAddonMathUtilities::NormalizeColumns(temp0, temp1);

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
PyvtkAddonMathUtilities_NormalizeOrientationMatrixColumns(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "NormalizeOrientationMatrixColumns");

  vtkMatrix4x4 *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkAddonMathUtilities::NormalizeOrientationMatrixColumns(temp0, temp1);

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
PyvtkAddonMathUtilities_ToString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ToString");

  vtkMatrix4x4 *temp0 = nullptr;
  std::string temp1 = " ";
  std::string temp2 = "";
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    std::string tempr = vtkAddonMathUtilities::ToString(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddonMathUtilities_FromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FromString");

  vtkMatrix4x4 *temp0 = nullptr;
  std::string temp1;
  std::string temp2 = "(\\ |\\,|\\:|\\;|\t|\n|\\[|\\])";
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = vtkAddonMathUtilities::FromString(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddonMathUtilities_FitPlaneToPoints_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FitPlaneToPoints");

  vtkPoints *temp0 = nullptr;
  vtkPlane *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkPlane"))
  {
    bool tempr = vtkAddonMathUtilities::FitPlaneToPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAddonMathUtilities_FitPlaneToPoints_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FitPlaneToPoints");

  vtkPoints *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    bool tempr = vtkAddonMathUtilities::FitPlaneToPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAddonMathUtilities_FitPlaneToPoints_Methods[] = {
  {"FitPlaneToPoints", PyvtkAddonMathUtilities_FitPlaneToPoints_s1, METH_VARARGS | METH_STATIC,
   "VV *vtkPoints *vtkPlane"},
  {"FitPlaneToPoints", PyvtkAddonMathUtilities_FitPlaneToPoints_s2, METH_VARARGS | METH_STATIC,
   "VV *vtkPoints *vtkMatrix4x4"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAddonMathUtilities_FitPlaneToPoints(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAddonMathUtilities_FitPlaneToPoints_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FitPlaneToPoints");
  return nullptr;
}

static PyMethodDef PyvtkAddonMathUtilities_Methods[] = {
  {"IsTypeOf", PyvtkAddonMathUtilities_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAddonMathUtilities_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAddonMathUtilities_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAddonMathUtilities\nC++: static vtkAddonMathUtilities *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAddonMathUtilities_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAddonMathUtilities\nC++: vtkAddonMathUtilities *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAddonMathUtilities_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAddonMathUtilities_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"MatrixAreEqual", PyvtkAddonMathUtilities_MatrixAreEqual, METH_VARARGS,
   "MatrixAreEqual(m1:vtkMatrix4x4, m2:vtkMatrix4x4,\n    tolerance:float=1e-3) -> bool\nC++: static bool MatrixAreEqual(const vtkMatrix4x4 *m1,\n    const vtkMatrix4x4 *m2, double tolerance=1e-3)\nMatrixAreEqual(m1:vtkMatrix4x4, m2:vtkMatrix3x3,\n    tolerance:float=1e-3) -> bool\nC++: static bool MatrixAreEqual(const vtkMatrix4x4 *m1,\n    const vtkMatrix3x3 *m2, double tolerance=1e-3)\nMatrixAreEqual(m1:vtkMatrix3x3, m2:vtkMatrix4x4,\n    tolerance:float=1e-3) -> bool\nC++: static bool MatrixAreEqual(const vtkMatrix3x3 *m1,\n    const vtkMatrix4x4 *m2, double tolerance=1e-3)\nMatrixAreEqual(m1:vtkMatrix3x3, m2:vtkMatrix3x3,\n    tolerance:float=1e-3) -> bool\nC++: static bool MatrixAreEqual(const vtkMatrix3x3 *m1,\n    const vtkMatrix3x3 *m2, double tolerance=1e-3)\n\n"},
  {"GetOrientationMatrixColumn", PyvtkAddonMathUtilities_GetOrientationMatrixColumn, METH_VARARGS,
   "GetOrientationMatrixColumn(m:vtkMatrix4x4, columnIndex:int,\n    columnVector:[float, float, float, float]) -> None\nC++: static void GetOrientationMatrixColumn(vtkMatrix4x4 *m,\n    int columnIndex, double columnVector[4])\n\nGet matrix column as a vector\n"},
  {"SetOrientationMatrixColumn", PyvtkAddonMathUtilities_SetOrientationMatrixColumn, METH_VARARGS,
   "SetOrientationMatrixColumn(m:vtkMatrix4x4, columnIndex:int,\n    columnVector:[float, float, float, float]) -> None\nC++: static void SetOrientationMatrixColumn(vtkMatrix4x4 *m,\n    int columnIndex, double columnVector[4])\n\nSet matrix column from a vector\n"},
  {"GetOrientationMatrix", PyvtkAddonMathUtilities_GetOrientationMatrix, METH_VARARGS,
   "GetOrientationMatrix(source:vtkMatrix4x4, dest:vtkMatrix3x3)\n    -> None\nC++: static void GetOrientationMatrix(vtkMatrix4x4 *source,\n    vtkMatrix3x3 *dest)\n\nUpdate orientation vectors of dest matrix with values from source\nmatrix.\n"},
  {"SetOrientationMatrix", PyvtkAddonMathUtilities_SetOrientationMatrix, METH_VARARGS,
   "SetOrientationMatrix(source:vtkMatrix3x3, dest:vtkMatrix4x4)\n    -> None\nC++: static void SetOrientationMatrix(vtkMatrix3x3 *source,\n    vtkMatrix4x4 *dest)\n\nUpdate orientation vectors of dest matrix with values from source\nmatrix.\n"},
  {"NormalizeColumns", PyvtkAddonMathUtilities_NormalizeColumns, METH_VARARGS,
   "NormalizeColumns(m:vtkMatrix3x3, scale:[float, float, float])\n    -> None\nC++: static void NormalizeColumns(vtkMatrix3x3 *m,\n    double scale[3])\n\nNormalizes columns of m matrix in-place and return original\ncolumn norms in scale vector\n"},
  {"NormalizeOrientationMatrixColumns", PyvtkAddonMathUtilities_NormalizeOrientationMatrixColumns, METH_VARARGS,
   "NormalizeOrientationMatrixColumns(m:vtkMatrix4x4, scale:[float,\n    float, float]) -> None\nC++: static void NormalizeOrientationMatrixColumns(\n    vtkMatrix4x4 *m, double scale[3])\n\nNormalizes columns of top-left 3x3 corner of m matrix in-place\nand return original column norms in scale vector\n"},
  {"ToString", PyvtkAddonMathUtilities_ToString, METH_VARARGS,
   "ToString(mat:vtkMatrix4x4, delimiter:str=...,\n    rowDelimiter:str=...) -> str\nC++: static std::string ToString(const vtkMatrix4x4 *mat,\n    const std::string delimiter=\" \",\n    const std::string rowDelimiter=\"\")\n\nConvert a matrix to a string in row-major order\n"},
  {"FromString", PyvtkAddonMathUtilities_FromString, METH_VARARGS,
   "FromString(mat:vtkMatrix4x4, str:str, delimiterExp:str=...)\n    -> bool\nC++: static bool FromString(vtkMatrix4x4 *mat,\n    const std::string &str,\n    const std::string delimiterExp=\"(\\\\ |\\\\,|\\\\:|\\\\;|\\t|\\n|\\\\[|\\\\])\")\n\nConvert a string in row-major order to a matrix\n"},
  {"FitPlaneToPoints", PyvtkAddonMathUtilities_FitPlaneToPoints, METH_VARARGS,
   "FitPlaneToPoints(points:vtkPoints, bestFitPlane:vtkPlane) -> bool\nC++: static bool FitPlaneToPoints(vtkPoints *points,\n    vtkPlane *bestFitPlane)\nFitPlaneToPoints(points:vtkPoints,\n    transformToBestFitPlane:vtkMatrix4x4) -> bool\nC++: static bool FitPlaneToPoints(vtkPoints *points,\n    vtkMatrix4x4 *transformToBestFitPlane)\n\nCompute least squares best fit plane\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAddonMathUtilities_Doc =
  "vtkAddonMathUtilities - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAddonMathUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkAddonPython.vtkAddonMathUtilities", // tp_name
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
  PyvtkAddonMathUtilities_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAddonMathUtilities_StaticNew()
{
  return vtkAddonMathUtilities::New();
}

PyObject *PyvtkAddonMathUtilities_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAddonMathUtilities_Type, PyvtkAddonMathUtilities_Methods,
    "vtkAddonMathUtilities",
 &PyvtkAddonMathUtilities_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAddonMathUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAddonMathUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAddonMathUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

