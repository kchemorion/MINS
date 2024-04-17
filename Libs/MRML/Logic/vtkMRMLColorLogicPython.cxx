// python wrapper for vtkMRMLColorLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLColorLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLColorLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLColorLogic_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLAbstractLogic_ClassNew
extern "C" { PyObject *PyvtkMRMLAbstractLogic_ClassNew(); }
#define DECLARED_PyvtkMRMLAbstractLogic_ClassNew
#endif

static PyObject *
PyvtkMRMLColorLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLColorLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLColorLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLColorLogic *tempr = vtkMRMLColorLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLColorLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLColorLogic::NewInstance());

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
PyvtkMRMLColorLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLColorLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLColorLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_AddDefaultColorNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDefaultColorNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddDefaultColorNodes();
    }
    else
    {
      op->vtkMRMLColorLogic::AddDefaultColorNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_RemoveDefaultColorNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDefaultColorNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveDefaultColorNodes();
    }
    else
    {
      op->vtkMRMLColorLogic::RemoveDefaultColorNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetColorTableNodeID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetColorTableNodeID");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLColorLogic::GetColorTableNodeID(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetdGEMRICColorNodeID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetdGEMRICColorNodeID");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLColorLogic::GetdGEMRICColorNodeID(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetPETColorNodeID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPETColorNodeID");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLColorLogic::GetPETColorNodeID(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetProceduralColorNodeID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetProceduralColorNodeID");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLColorLogic::GetProceduralColorNodeID(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetFileColorNodeID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFileColorNodeID");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMRMLColorLogic::GetFileColorNodeID(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetFileColorNodeSingletonTag(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFileColorNodeSingletonTag");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkMRMLColorLogic::GetFileColorNodeSingletonTag(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetDefaultVolumeColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultVolumeColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultVolumeColorNodeID() :
      op->vtkMRMLColorLogic::GetDefaultVolumeColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetDefaultLabelMapColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultLabelMapColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultLabelMapColorNodeID() :
      op->vtkMRMLColorLogic::GetDefaultLabelMapColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetDefaultEditorColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultEditorColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultEditorColorNodeID() :
      op->vtkMRMLColorLogic::GetDefaultEditorColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetDefaultModelColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultModelColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultModelColorNodeID() :
      op->vtkMRMLColorLogic::GetDefaultModelColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetDefaultChartColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultChartColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultChartColorNodeID() :
      op->vtkMRMLColorLogic::GetDefaultChartColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetDefaultPlotColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultPlotColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDefaultPlotColorNodeID() :
      op->vtkMRMLColorLogic::GetDefaultPlotColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_LoadColorFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadColorFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkMRMLColorNode *tempr = (ap.IsBound() ?
      op->LoadColorFile(temp0, temp1) :
      op->vtkMRMLColorLogic::LoadColorFile(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_GetUserColorFilePaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserColorFilePaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetUserColorFilePaths() :
      op->vtkMRMLColorLogic::GetUserColorFilePaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_SetUserColorFilePaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserColorFilePaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLColorLogic *op = static_cast<vtkMRMLColorLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUserColorFilePaths(temp0);
    }
    else
    {
      op->vtkMRMLColorLogic::SetUserColorFilePaths(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_CopyNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CopyNode");

  vtkMRMLColorNode *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLColorNode") &&
      ap.GetValue(temp1))
  {
    vtkMRMLColorTableNode *tempr = vtkMRMLColorLogic::CopyNode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLColorLogic_CopyProceduralNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CopyProceduralNode");

  vtkMRMLColorNode *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMRMLColorNode") &&
      ap.GetValue(temp1))
  {
    vtkMRMLProceduralColorNode *tempr = vtkMRMLColorLogic::CopyProceduralNode(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLColorLogic_Methods[] = {
  {"IsTypeOf", PyvtkMRMLColorLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLColorLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLColorLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLColorLogic\nC++: static vtkMRMLColorLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLColorLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLColorLogic\nC++: vtkMRMLColorLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLColorLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLColorLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddDefaultColorNodes", PyvtkMRMLColorLogic_AddDefaultColorNodes, METH_VARARGS,
   "AddDefaultColorNodes(self) -> None\nC++: virtual void AddDefaultColorNodes()\n\nAdd default color nodes.\n\nThe default color nodes are singleton and are not included in the\nthe saved scene.\n\nThis function enables the vtkMRMLScene::BatchProcessState.\n\nThe type of default nodes along with their properties are listed\nin the table below:\n\n| Family                    | Category                 | Type    \n                      | Node name                      |\nSingleton Tag                         | Node ID                  \n                                  | | ------------------------- |\n------------------------ | ------------------------------ |\n------------------------------ |\n------------------------------------- |\n----------------------------------------------------------- | |\nColorTable                | Discrete                 | Labels    \n                    | Labels                         | Labels    \n                           | vtkMRMLColorTableNodeLabels         \n                       | | ColorTable                | Discrete  \n              | FullRainbow                    | FullRainbow     \n              | FullRainbow                           |\nvtkMRMLColorTableNodeFullRainbow                            | |\nColorTable                | Discrete                 | Grey      \n                    | Grey                           | Grey      \n                           | vtkMRMLColorTableNodeGrey           \n                       | | ColorTable                | Discrete  \n              | Iron                           | Iron            \n              | Iron                                  |\nvtkMRMLColorTableNodeIron                                   | |\nColorTable                | Discrete                 | Rainbow   \n                    | Rainbow                        | Rainbow   \n                           | vtkMRMLColorTableNodeRainbow        \n                       | | ColorTable                | Discrete  \n              | Ocean               ...\n [Truncated]\n"},
  {"RemoveDefaultColorNodes", PyvtkMRMLColorLogic_RemoveDefaultColorNodes, METH_VARARGS,
   "RemoveDefaultColorNodes(self) -> None\nC++: virtual void RemoveDefaultColorNodes()\n\nRemove default color nodes.\n\n\\sa AddDefaultColorNodes()\n"},
  {"GetColorTableNodeID", PyvtkMRMLColorLogic_GetColorTableNodeID, METH_VARARGS,
   "GetColorTableNodeID(type:int) -> str\nC++: static const char *GetColorTableNodeID(int type)\n\nReturn the default color table node id for a given type\n"},
  {"GetdGEMRICColorNodeID", PyvtkMRMLColorLogic_GetdGEMRICColorNodeID, METH_VARARGS,
   "GetdGEMRICColorNodeID(type:int) -> str\nC++: static const char *GetdGEMRICColorNodeID(int type)\n\nReturn the default dGEMRIC color node id for a given type\n"},
  {"GetPETColorNodeID", PyvtkMRMLColorLogic_GetPETColorNodeID, METH_VARARGS,
   "GetPETColorNodeID(type:int) -> str\nC++: static const char *GetPETColorNodeID(int type)\n\nReturn the default PET color node id for a given type\n"},
  {"GetProceduralColorNodeID", PyvtkMRMLColorLogic_GetProceduralColorNodeID, METH_VARARGS,
   "GetProceduralColorNodeID(name:str) -> str\nC++: static const char *GetProceduralColorNodeID(const char *name)\n\nReturn a default color node id for a procedural color node.\n\n\\warning You are responsible to delete the returned string.\n"},
  {"GetFileColorNodeID", PyvtkMRMLColorLogic_GetFileColorNodeID, METH_VARARGS,
   "GetFileColorNodeID(fileName:str) -> str\nC++: static const char *GetFileColorNodeID(const char *fileName)\n\nReturn a default color node id for a file based node,\nbased on the file name.\n\n\\warning You are responsible to delete the returned string.\n"},
  {"GetFileColorNodeSingletonTag", PyvtkMRMLColorLogic_GetFileColorNodeSingletonTag, METH_VARARGS,
   "GetFileColorNodeSingletonTag(fileName:str) -> str\nC++: static std::string GetFileColorNodeSingletonTag(\n    const char *fileName)\n\n"},
  {"GetDefaultVolumeColorNodeID", PyvtkMRMLColorLogic_GetDefaultVolumeColorNodeID, METH_VARARGS,
   "GetDefaultVolumeColorNodeID(self) -> str\nC++: virtual const char *GetDefaultVolumeColorNodeID()\n\nReturn a default color node id for a volume\n"},
  {"GetDefaultLabelMapColorNodeID", PyvtkMRMLColorLogic_GetDefaultLabelMapColorNodeID, METH_VARARGS,
   "GetDefaultLabelMapColorNodeID(self) -> str\nC++: virtual const char *GetDefaultLabelMapColorNodeID()\n\nReturn a default color node id for a label map\n"},
  {"GetDefaultEditorColorNodeID", PyvtkMRMLColorLogic_GetDefaultEditorColorNodeID, METH_VARARGS,
   "GetDefaultEditorColorNodeID(self) -> str\nC++: virtual const char *GetDefaultEditorColorNodeID()\n\nReturn a default color node id for the editor\n"},
  {"GetDefaultModelColorNodeID", PyvtkMRMLColorLogic_GetDefaultModelColorNodeID, METH_VARARGS,
   "GetDefaultModelColorNodeID(self) -> str\nC++: virtual const char *GetDefaultModelColorNodeID()\n\nReturn a default color node id for a model\n"},
  {"GetDefaultChartColorNodeID", PyvtkMRMLColorLogic_GetDefaultChartColorNodeID, METH_VARARGS,
   "GetDefaultChartColorNodeID(self) -> str\nC++: virtual const char *GetDefaultChartColorNodeID()\n\nReturn a default color node id for a chart\n"},
  {"GetDefaultPlotColorNodeID", PyvtkMRMLColorLogic_GetDefaultPlotColorNodeID, METH_VARARGS,
   "GetDefaultPlotColorNodeID(self) -> str\nC++: virtual const char *GetDefaultPlotColorNodeID()\n\nReturn a default color node id for a plot\n"},
  {"LoadColorFile", PyvtkMRMLColorLogic_LoadColorFile, METH_VARARGS,
   "LoadColorFile(self, fileName:str, nodeName:str=...)\n    -> vtkMRMLColorNode\nC++: vtkMRMLColorNode *LoadColorFile(const char *fileName,\n    const char *nodeName=nullptr)\n\nLoad in a color file, creating a storage node. Returns a pointer\nto the created node on success, 0 on failure (no file, invalid\ncolor file). The name of the created color node is nodeName if\nspecified or the fileName otherwise. Try first to load it as a\ncolor table node, then if that fails, as a procedural color node.\nIt calls CreateFileNode or CreateProceduralFileNode which are\nalso used for the built in color nodes, so it has to unset some\nflags: set the category to File, turn save with scene on on the\nnode and it's storage node, turn off hide from editors, remove\nthe singleton tag.\n\\sa CreateFileNode, CreateProceduralFileNode\n"},
  {"GetUserColorFilePaths", PyvtkMRMLColorLogic_GetUserColorFilePaths, METH_VARARGS,
   "GetUserColorFilePaths(self) -> str\nC++: virtual char *GetUserColorFilePaths()\n\nGet/Set the user defined paths where to look for extra color\nfiles\n"},
  {"SetUserColorFilePaths", PyvtkMRMLColorLogic_SetUserColorFilePaths, METH_VARARGS,
   "SetUserColorFilePaths(self, _arg:str) -> None\nC++: virtual void SetUserColorFilePaths(const char *_arg)\n\n"},
  {"CopyNode", PyvtkMRMLColorLogic_CopyNode, METH_VARARGS,
   "CopyNode(colorNode:vtkMRMLColorNode, copyName:str)\n    -> vtkMRMLColorTableNode\nC++: static vtkMRMLColorTableNode *CopyNode(\n    vtkMRMLColorNode *colorNode, const char *copyName)\n\nReturns a vtkMRMLColorTableNode copy (type =\nvtkMRMLColorTableNode::User) of the color node. The node is not\nadded to the scene and you are responsible for deleting it.\n"},
  {"CopyProceduralNode", PyvtkMRMLColorLogic_CopyProceduralNode, METH_VARARGS,
   "CopyProceduralNode(colorNode:vtkMRMLColorNode, copyName:str)\n    -> vtkMRMLProceduralColorNode\nC++: static vtkMRMLProceduralColorNode *CopyProceduralNode(\n    vtkMRMLColorNode *colorNode, const char *copyName)\n\nReturns a vtkMRMLProceduralColorNode copy (type =\nvtkMRMLColorTableNode::User) of the color node. The node is not\nadded to the scene and you are responsible for deleting it. If\nthere is no color transfer function on the input node, for\nexample if it's a color table node, it will return a procedural\nnode with a blank color transfer function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLColorLogic_Doc =
  "vtkMRMLColorLogic - MRML logic class for color manipulation.\n\n"
  "Superclass: vtkMRMLAbstractLogic\n\n"
  "This class manages the logic associated with reading, saving, and\n"
  "changing propertied of the colors.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLColorLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLLogicPython.vtkMRMLColorLogic", // tp_name
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
  PyvtkMRMLColorLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLColorLogic_StaticNew()
{
  return vtkMRMLColorLogic::New();
}

PyObject *PyvtkMRMLColorLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLColorLogic_Type, PyvtkMRMLColorLogic_Methods,
    "vtkMRMLColorLogic",
 &PyvtkMRMLColorLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLAbstractLogic_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLColorLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLColorLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLColorLogic", o) != 0)
  {
    Py_DECREF(o);
  }

}

