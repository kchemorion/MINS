// python wrapper for vtkMRMLSubjectHierarchyConstants
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMRMLSubjectHierarchyConstants.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLSubjectHierarchyConstants(PyObject *dict); }

static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyAttributePrefix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSubjectHierarchyAttributePrefix");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetSubjectHierarchyAttributePrefix();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyExcludeFromTreeAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSubjectHierarchyExcludeFromTreeAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetSubjectHierarchyExcludeFromTreeAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyVirtualBranchAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSubjectHierarchyVirtualBranchAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetSubjectHierarchyVirtualBranchAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyLevelAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSubjectHierarchyLevelAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetSubjectHierarchyLevelAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyNewItemNamePrefix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSubjectHierarchyNewItemNamePrefix");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetSubjectHierarchyNewItemNamePrefix();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyLevelFolder(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSubjectHierarchyLevelFolder");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkMRMLSubjectHierarchyConstants::GetSubjectHierarchyLevelFolder();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMLevelPatient(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMLevelPatient");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMLevelPatient();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMLevelStudy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMLevelStudy");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMLevelStudy();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMUIDName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMUIDName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMUIDName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMInstanceUIDName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMInstanceUIDName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMInstanceUIDName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMAttributePrefix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMAttributePrefix");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMAttributePrefix();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMReferencedInstanceUIDsAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMReferencedInstanceUIDsAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMReferencedInstanceUIDsAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientNameTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMPatientNameTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMPatientNameTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientNameAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMPatientNameAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMPatientNameAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientIDTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMPatientIDTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMPatientIDTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientIDAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMPatientIDAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMPatientIDAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientSexTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMPatientSexTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMPatientSexTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientSexAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMPatientSexAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMPatientSexAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientBirthDateTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMPatientBirthDateTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMPatientBirthDateTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientBirthDateAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMPatientBirthDateAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMPatientBirthDateAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientCommentsTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMPatientCommentsTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMPatientCommentsTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientCommentsAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMPatientCommentsAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMPatientCommentsAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientTagNames(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMPatientTagNames");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMPatientTagNames();

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyInstanceUIDTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMStudyInstanceUIDTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMStudyInstanceUIDTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyInstanceUIDAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMStudyInstanceUIDAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMStudyInstanceUIDAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyIDTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMStudyIDTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMStudyIDTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyIDAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMStudyIDAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMStudyIDAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyDescriptionTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMStudyDescriptionTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMStudyDescriptionTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyDescriptionAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMStudyDescriptionAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMStudyDescriptionAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyDateTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMStudyDateTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMStudyDateTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyDateAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMStudyDateAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMStudyDateAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyTimeTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMStudyTimeTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMStudyTimeTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyTimeAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMStudyTimeAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMStudyTimeAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyTagNames(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMStudyTagNames");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::vector<std::string> tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMStudyTagNames();

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMSeriesModalityAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMSeriesModalityAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMSeriesModalityAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMSeriesNumberAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMSeriesNumberAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMSeriesNumberAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMFrameOfReferenceUIDTagName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMFrameOfReferenceUIDTagName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMFrameOfReferenceUIDTagName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_GetDICOMFrameOfReferenceUIDAttributeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDICOMFrameOfReferenceUIDAttributeName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    std::string tempr = vtkMRMLSubjectHierarchyConstants::GetDICOMFrameOfReferenceUIDAttributeName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLSubjectHierarchyConstants_Methods[] = {
  {"GetSubjectHierarchyAttributePrefix", PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyAttributePrefix, METH_VARARGS,
   "GetSubjectHierarchyAttributePrefix() -> str\nC++: static const std::string GetSubjectHierarchyAttributePrefix()\n\nData node subject hierarchy attribute\n"},
  {"GetSubjectHierarchyExcludeFromTreeAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyExcludeFromTreeAttributeName, METH_VARARGS,
   "GetSubjectHierarchyExcludeFromTreeAttributeName() -> str\nC++: static const std::string GetSubjectHierarchyExcludeFromTreeAttributeName(\n    )\n\n"},
  {"GetSubjectHierarchyVirtualBranchAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyVirtualBranchAttributeName, METH_VARARGS,
   "GetSubjectHierarchyVirtualBranchAttributeName() -> str\nC++: static const std::string GetSubjectHierarchyVirtualBranchAttributeName(\n    )\n\nSubject hierarchy item attributes\n"},
  {"GetSubjectHierarchyLevelAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyLevelAttributeName, METH_VARARGS,
   "GetSubjectHierarchyLevelAttributeName() -> str\nC++: static const std::string GetSubjectHierarchyLevelAttributeName(\n    )\n\nSubject hierarchy item attributes\n"},
  {"GetSubjectHierarchyNewItemNamePrefix", PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyNewItemNamePrefix, METH_VARARGS,
   "GetSubjectHierarchyNewItemNamePrefix() -> str\nC++: static const std::string GetSubjectHierarchyNewItemNamePrefix(\n    )\n\nSubject hierarchy item attributes\n"},
  {"GetSubjectHierarchyLevelFolder", PyvtkMRMLSubjectHierarchyConstants_GetSubjectHierarchyLevelFolder, METH_VARARGS,
   "GetSubjectHierarchyLevelFolder() -> str\nC++: static const char *GetSubjectHierarchyLevelFolder()\n\n"},
  {"GetDICOMLevelPatient", PyvtkMRMLSubjectHierarchyConstants_GetDICOMLevelPatient, METH_VARARGS,
   "GetDICOMLevelPatient() -> str\nC++: static const std::string GetDICOMLevelPatient()\n\n"},
  {"GetDICOMLevelStudy", PyvtkMRMLSubjectHierarchyConstants_GetDICOMLevelStudy, METH_VARARGS,
   "GetDICOMLevelStudy() -> str\nC++: static const std::string GetDICOMLevelStudy()\n\n"},
  {"GetDICOMUIDName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMUIDName, METH_VARARGS,
   "GetDICOMUIDName() -> str\nC++: static const char *GetDICOMUIDName()\n\n"},
  {"GetDICOMInstanceUIDName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMInstanceUIDName, METH_VARARGS,
   "GetDICOMInstanceUIDName() -> str\nC++: static const char *GetDICOMInstanceUIDName()\n\n"},
  {"GetDICOMAttributePrefix", PyvtkMRMLSubjectHierarchyConstants_GetDICOMAttributePrefix, METH_VARARGS,
   "GetDICOMAttributePrefix() -> str\nC++: static const std::string GetDICOMAttributePrefix()\n\n"},
  {"GetDICOMReferencedInstanceUIDsAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMReferencedInstanceUIDsAttributeName, METH_VARARGS,
   "GetDICOMReferencedInstanceUIDsAttributeName() -> str\nC++: static std::string GetDICOMReferencedInstanceUIDsAttributeName(\n    )\n\n"},
  {"GetDICOMPatientNameTagName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientNameTagName, METH_VARARGS,
   "GetDICOMPatientNameTagName() -> str\nC++: static const std::string GetDICOMPatientNameTagName()\n\n"},
  {"GetDICOMPatientNameAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientNameAttributeName, METH_VARARGS,
   "GetDICOMPatientNameAttributeName() -> str\nC++: static const std::string GetDICOMPatientNameAttributeName()\n\n"},
  {"GetDICOMPatientIDTagName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientIDTagName, METH_VARARGS,
   "GetDICOMPatientIDTagName() -> str\nC++: static const std::string GetDICOMPatientIDTagName()\n\n"},
  {"GetDICOMPatientIDAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientIDAttributeName, METH_VARARGS,
   "GetDICOMPatientIDAttributeName() -> str\nC++: static const std::string GetDICOMPatientIDAttributeName()\n\n"},
  {"GetDICOMPatientSexTagName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientSexTagName, METH_VARARGS,
   "GetDICOMPatientSexTagName() -> str\nC++: static const std::string GetDICOMPatientSexTagName()\n\n"},
  {"GetDICOMPatientSexAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientSexAttributeName, METH_VARARGS,
   "GetDICOMPatientSexAttributeName() -> str\nC++: static const std::string GetDICOMPatientSexAttributeName()\n\n"},
  {"GetDICOMPatientBirthDateTagName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientBirthDateTagName, METH_VARARGS,
   "GetDICOMPatientBirthDateTagName() -> str\nC++: static const std::string GetDICOMPatientBirthDateTagName()\n\n"},
  {"GetDICOMPatientBirthDateAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientBirthDateAttributeName, METH_VARARGS,
   "GetDICOMPatientBirthDateAttributeName() -> str\nC++: static const std::string GetDICOMPatientBirthDateAttributeName(\n    )\n\n"},
  {"GetDICOMPatientCommentsTagName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientCommentsTagName, METH_VARARGS,
   "GetDICOMPatientCommentsTagName() -> str\nC++: static const std::string GetDICOMPatientCommentsTagName()\n\n"},
  {"GetDICOMPatientCommentsAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientCommentsAttributeName, METH_VARARGS,
   "GetDICOMPatientCommentsAttributeName() -> str\nC++: static const std::string GetDICOMPatientCommentsAttributeName(\n    )\n\n"},
  {"GetDICOMPatientTagNames", PyvtkMRMLSubjectHierarchyConstants_GetDICOMPatientTagNames, METH_VARARGS,
   "GetDICOMPatientTagNames() -> (str, ...)\nC++: static const std::vector<std::string> GetDICOMPatientTagNames(\n    )\n\nGet patient tag names (attribute names are these values\nprefixed!)\n"},
  {"GetDICOMStudyInstanceUIDTagName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyInstanceUIDTagName, METH_VARARGS,
   "GetDICOMStudyInstanceUIDTagName() -> str\nC++: static const std::string GetDICOMStudyInstanceUIDTagName()\n\n"},
  {"GetDICOMStudyInstanceUIDAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyInstanceUIDAttributeName, METH_VARARGS,
   "GetDICOMStudyInstanceUIDAttributeName() -> str\nC++: static const std::string GetDICOMStudyInstanceUIDAttributeName(\n    )\n\n"},
  {"GetDICOMStudyIDTagName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyIDTagName, METH_VARARGS,
   "GetDICOMStudyIDTagName() -> str\nC++: static const std::string GetDICOMStudyIDTagName()\n\n"},
  {"GetDICOMStudyIDAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyIDAttributeName, METH_VARARGS,
   "GetDICOMStudyIDAttributeName() -> str\nC++: static const std::string GetDICOMStudyIDAttributeName()\n\n"},
  {"GetDICOMStudyDescriptionTagName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyDescriptionTagName, METH_VARARGS,
   "GetDICOMStudyDescriptionTagName() -> str\nC++: static const std::string GetDICOMStudyDescriptionTagName()\n\n"},
  {"GetDICOMStudyDescriptionAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyDescriptionAttributeName, METH_VARARGS,
   "GetDICOMStudyDescriptionAttributeName() -> str\nC++: static const std::string GetDICOMStudyDescriptionAttributeName(\n    )\n\n"},
  {"GetDICOMStudyDateTagName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyDateTagName, METH_VARARGS,
   "GetDICOMStudyDateTagName() -> str\nC++: static const std::string GetDICOMStudyDateTagName()\n\n"},
  {"GetDICOMStudyDateAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyDateAttributeName, METH_VARARGS,
   "GetDICOMStudyDateAttributeName() -> str\nC++: static const std::string GetDICOMStudyDateAttributeName()\n\n"},
  {"GetDICOMStudyTimeTagName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyTimeTagName, METH_VARARGS,
   "GetDICOMStudyTimeTagName() -> str\nC++: static const std::string GetDICOMStudyTimeTagName()\n\n"},
  {"GetDICOMStudyTimeAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyTimeAttributeName, METH_VARARGS,
   "GetDICOMStudyTimeAttributeName() -> str\nC++: static const std::string GetDICOMStudyTimeAttributeName()\n\n"},
  {"GetDICOMStudyTagNames", PyvtkMRMLSubjectHierarchyConstants_GetDICOMStudyTagNames, METH_VARARGS,
   "GetDICOMStudyTagNames() -> (str, ...)\nC++: static const std::vector<std::string> GetDICOMStudyTagNames()\n\nGet study tag names (attribute names are these values prefixed!)\n"},
  {"GetDICOMSeriesModalityAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMSeriesModalityAttributeName, METH_VARARGS,
   "GetDICOMSeriesModalityAttributeName() -> str\nC++: static const std::string GetDICOMSeriesModalityAttributeName(\n    )\n\n"},
  {"GetDICOMSeriesNumberAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMSeriesNumberAttributeName, METH_VARARGS,
   "GetDICOMSeriesNumberAttributeName() -> str\nC++: static const std::string GetDICOMSeriesNumberAttributeName()\n\n"},
  {"GetDICOMFrameOfReferenceUIDTagName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMFrameOfReferenceUIDTagName, METH_VARARGS,
   "GetDICOMFrameOfReferenceUIDTagName() -> str\nC++: static const std::string GetDICOMFrameOfReferenceUIDTagName()\n\n"},
  {"GetDICOMFrameOfReferenceUIDAttributeName", PyvtkMRMLSubjectHierarchyConstants_GetDICOMFrameOfReferenceUIDAttributeName, METH_VARARGS,
   "GetDICOMFrameOfReferenceUIDAttributeName() -> str\nC++: static const std::string GetDICOMFrameOfReferenceUIDAttributeName(\n    )\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMRMLSubjectHierarchyConstants_vtkMRMLSubjectHierarchyConstants_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMRMLSubjectHierarchyConstants");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMRMLSubjectHierarchyConstants *op = new vtkMRMLSubjectHierarchyConstants();

    result = PyVTKSpecialObject_New("vtkMRMLSubjectHierarchyConstants", op);
  }

  return result;
}

static PyObject *
PyvtkMRMLSubjectHierarchyConstants_vtkMRMLSubjectHierarchyConstants_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMRMLSubjectHierarchyConstants");

  vtkMRMLSubjectHierarchyConstants *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMRMLSubjectHierarchyConstants"))
  {
    vtkMRMLSubjectHierarchyConstants *op = new vtkMRMLSubjectHierarchyConstants(*temp0);

    result = PyVTKSpecialObject_New("vtkMRMLSubjectHierarchyConstants", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMRMLSubjectHierarchyConstants_vtkMRMLSubjectHierarchyConstants_Methods[] = {
  {"vtkMRMLSubjectHierarchyConstants", PyvtkMRMLSubjectHierarchyConstants_vtkMRMLSubjectHierarchyConstants_s2, METH_VARARGS,
   "@W vtkMRMLSubjectHierarchyConstants"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMRMLSubjectHierarchyConstants_vtkMRMLSubjectHierarchyConstants(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMRMLSubjectHierarchyConstants_vtkMRMLSubjectHierarchyConstants_s1(self, args);
    case 1:
      return PyvtkMRMLSubjectHierarchyConstants_vtkMRMLSubjectHierarchyConstants_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMRMLSubjectHierarchyConstants");
  return nullptr;
}


static const char *PyvtkMRMLSubjectHierarchyConstants_Doc =

  "vtkMRMLSubjectHierarchyConstants() -> vtkMRMLSubjectHierarchyConstants\nC++: vtkMRMLSubjectHierarchyConstants()\nvtkMRMLSubjectHierarchyConstants(__a:vtkMRMLSubjectHierarchyConstants)\n     -> vtkMRMLSubjectHierarchyConstants\nC++: vtkMRMLSubjectHierarchyConstants(\n    const &vtkMRMLSubjectHierarchyConstants)\n""\n"
  "vtkMRMLSubjectHierarchyConstants - no description provided.\n\n"
;

static PyObject *
PyvtkMRMLSubjectHierarchyConstants_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMRMLSubjectHierarchyConstants_vtkMRMLSubjectHierarchyConstants(nullptr, args);
}

static void PyvtkMRMLSubjectHierarchyConstants_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMRMLSubjectHierarchyConstants *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMRMLSubjectHierarchyConstants_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLSubjectHierarchyConstants_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLSubjectHierarchyConstants", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMRMLSubjectHierarchyConstants_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkMRMLSubjectHierarchyConstants_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMRMLSubjectHierarchyConstants_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkMRMLSubjectHierarchyConstants_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMRMLSubjectHierarchyConstants_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMRMLSubjectHierarchyConstants(*static_cast<const vtkMRMLSubjectHierarchyConstants*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkMRMLSubjectHierarchyConstants_TypeNew
extern "C" { PyObject *PyvtkMRMLSubjectHierarchyConstants_TypeNew(); }
#define DECLARED_PyvtkMRMLSubjectHierarchyConstants_TypeNew
#endif

PyObject *PyvtkMRMLSubjectHierarchyConstants_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkMRMLSubjectHierarchyConstants_Type,
    PyvtkMRMLSubjectHierarchyConstants_Methods,
    PyvtkMRMLSubjectHierarchyConstants_vtkMRMLSubjectHierarchyConstants_Methods,
    &PyvtkMRMLSubjectHierarchyConstants_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLSubjectHierarchyConstants(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLSubjectHierarchyConstants_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLSubjectHierarchyConstants", o) != 0)
  {
    Py_DECREF(o);
  }

}

