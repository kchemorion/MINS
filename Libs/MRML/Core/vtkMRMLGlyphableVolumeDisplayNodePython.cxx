// python wrapper for vtkMRMLGlyphableVolumeDisplayNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLGlyphableVolumeDisplayNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLGlyphableVolumeDisplayNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLGlyphableVolumeDisplayNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLScalarVolumeDisplayNode_ClassNew
extern "C" { PyObject *PyvtkMRMLScalarVolumeDisplayNode_ClassNew(); }
#define DECLARED_PyvtkMRMLScalarVolumeDisplayNode_ClassNew
#endif

static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLGlyphableVolumeDisplayNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLGlyphableVolumeDisplayNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLGlyphableVolumeDisplayNode *tempr = vtkMRMLGlyphableVolumeDisplayNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLGlyphableVolumeDisplayNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLGlyphableVolumeDisplayNode::NewInstance());

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
PyvtkMRMLGlyphableVolumeDisplayNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLGlyphableVolumeDisplayNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLGlyphableVolumeDisplayNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLGlyphableVolumeDisplayNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

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
      op->vtkMRMLGlyphableVolumeDisplayNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLGlyphableVolumeDisplayNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_UpdateReferenceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferenceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateReferenceID(temp0, temp1);
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::UpdateReferenceID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_GetVisualizationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisualizationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisualizationMode() :
      op->vtkMRMLGlyphableVolumeDisplayNode::GetVisualizationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_SetVisualizationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisualizationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisualizationMode(temp0);
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::SetVisualizationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_SetVisualizationModeToScalarVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisualizationModeToScalarVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVisualizationModeToScalarVolume();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::SetVisualizationModeToScalarVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_SetVisualizationModeToGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisualizationModeToGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVisualizationModeToGlyphs();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::SetVisualizationModeToGlyphs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_SetVisualizationModeToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisualizationModeToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVisualizationModeToBoth();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::SetVisualizationModeToBoth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_SetSceneReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSceneReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSceneReferences();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::SetSceneReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_UpdateReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateReferences();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::UpdateReferences();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  vtkMRMLScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLScene"))
  {
    if (ap.IsBound())
    {
      op->UpdateScene(temp0);
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_SetAndObserveGlyphColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveGlyphColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveGlyphColorNodeID(temp0);
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::SetAndObserveGlyphColorNodeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_GetGlyphColorNodeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphColorNodeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGlyphColorNodeID() :
      op->vtkMRMLGlyphableVolumeDisplayNode::GetGlyphColorNodeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_GetGlyphColorNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphColorNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLColorNode *tempr = (ap.IsBound() ?
      op->GetGlyphColorNode() :
      op->vtkMRMLGlyphableVolumeDisplayNode::GetGlyphColorNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

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
      op->vtkMRMLGlyphableVolumeDisplayNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLGlyphableVolumeDisplayNode_SetDefaultColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultColorMap();
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::SetDefaultColorMap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_AddSliceGlyphDisplayNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSliceGlyphDisplayNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  vtkMRMLVolumeNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMRMLVolumeNode"))
  {
    if (ap.IsBound())
    {
      op->AddSliceGlyphDisplayNodes(temp0);
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::AddSliceGlyphDisplayNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLGlyphableVolumeDisplayNode_GetDisplayScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLGlyphableVolumeDisplayNode *op = static_cast<vtkMRMLGlyphableVolumeDisplayNode *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDisplayScalarRange(temp0);
    }
    else
    {
      op->vtkMRMLGlyphableVolumeDisplayNode::GetDisplayScalarRange(temp0);
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

static PyMethodDef PyvtkMRMLGlyphableVolumeDisplayNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLGlyphableVolumeDisplayNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLGlyphableVolumeDisplayNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLGlyphableVolumeDisplayNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLGlyphableVolumeDisplayNode\nC++: static vtkMRMLGlyphableVolumeDisplayNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLGlyphableVolumeDisplayNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLGlyphableVolumeDisplayNode\nC++: vtkMRMLGlyphableVolumeDisplayNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLGlyphableVolumeDisplayNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLGlyphableVolumeDisplayNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLGlyphableVolumeDisplayNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nCreate instance of the default node. Like New only virtual.\n\note Subclasses should implement this method\n"},
  {"Copy", PyvtkMRMLGlyphableVolumeDisplayNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLGlyphableVolumeDisplayNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"UpdateReferenceID", PyvtkMRMLGlyphableVolumeDisplayNode_UpdateReferenceID, METH_VARARGS,
   "UpdateReferenceID(self, oldID:str, newID:str) -> None\nC++: void UpdateReferenceID(const char *oldID, const char *newID)\n    override;\n\nUpdate the stored reference to another node in the scene\n"},
  {"GetVisualizationMode", PyvtkMRMLGlyphableVolumeDisplayNode_GetVisualizationMode, METH_VARARGS,
   "GetVisualizationMode(self) -> int\nC++: virtual int GetVisualizationMode()\n\n"},
  {"SetVisualizationMode", PyvtkMRMLGlyphableVolumeDisplayNode_SetVisualizationMode, METH_VARARGS,
   "SetVisualizationMode(self, _arg:int) -> None\nC++: virtual void SetVisualizationMode(int _arg)\n\n"},
  {"SetVisualizationModeToScalarVolume", PyvtkMRMLGlyphableVolumeDisplayNode_SetVisualizationModeToScalarVolume, METH_VARARGS,
   "SetVisualizationModeToScalarVolume(self) -> None\nC++: void SetVisualizationModeToScalarVolume()\n\n"},
  {"SetVisualizationModeToGlyphs", PyvtkMRMLGlyphableVolumeDisplayNode_SetVisualizationModeToGlyphs, METH_VARARGS,
   "SetVisualizationModeToGlyphs(self) -> None\nC++: void SetVisualizationModeToGlyphs()\n\n"},
  {"SetVisualizationModeToBoth", PyvtkMRMLGlyphableVolumeDisplayNode_SetVisualizationModeToBoth, METH_VARARGS,
   "SetVisualizationModeToBoth(self) -> None\nC++: void SetVisualizationModeToBoth()\n\n"},
  {"SetSceneReferences", PyvtkMRMLGlyphableVolumeDisplayNode_SetSceneReferences, METH_VARARGS,
   "SetSceneReferences(self) -> None\nC++: void SetSceneReferences() override;\n\nSet Glyph color node ID as reference to the scene\n"},
  {"UpdateReferences", PyvtkMRMLGlyphableVolumeDisplayNode_UpdateReferences, METH_VARARGS,
   "UpdateReferences(self) -> None\nC++: void UpdateReferences() override;\n\nUpdates this node if it depends on other nodes when the node is\ndeleted in the scene\n"},
  {"UpdateScene", PyvtkMRMLGlyphableVolumeDisplayNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\nFinds the storage node and read the data\n"},
  {"SetAndObserveGlyphColorNodeID", PyvtkMRMLGlyphableVolumeDisplayNode_SetAndObserveGlyphColorNodeID, METH_VARARGS,
   "SetAndObserveGlyphColorNodeID(self, GlyphColorNodeID:str) -> None\nC++: void SetAndObserveGlyphColorNodeID(\n    std::string GlyphColorNodeID)\n\n"},
  {"GetGlyphColorNodeID", PyvtkMRMLGlyphableVolumeDisplayNode_GetGlyphColorNodeID, METH_VARARGS,
   "GetGlyphColorNodeID(self) -> str\nC++: virtual char *GetGlyphColorNodeID()\n\n"},
  {"GetGlyphColorNode", PyvtkMRMLGlyphableVolumeDisplayNode_GetGlyphColorNode, METH_VARARGS,
   "GetGlyphColorNode(self) -> vtkMRMLColorNode\nC++: vtkMRMLColorNode *GetGlyphColorNode()\n\nGet associated color MRML node\n"},
  {"ProcessMRMLEvents", PyvtkMRMLGlyphableVolumeDisplayNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, __a:vtkObject, __b:int, __c:Pointer)\n    -> None\nC++: void ProcessMRMLEvents(vtkObject *, unsigned long, void *)\n    override;\n\nalternative method to propagate events generated in Display nodes\n"},
  {"SetDefaultColorMap", PyvtkMRMLGlyphableVolumeDisplayNode_SetDefaultColorMap, METH_VARARGS,
   "SetDefaultColorMap(self) -> None\nC++: void SetDefaultColorMap() override;\n\nset gray colormap\n"},
  {"AddSliceGlyphDisplayNodes", PyvtkMRMLGlyphableVolumeDisplayNode_AddSliceGlyphDisplayNodes, METH_VARARGS,
   "AddSliceGlyphDisplayNodes(self, node:vtkMRMLVolumeNode) -> None\nC++: virtual void AddSliceGlyphDisplayNodes(\n    vtkMRMLVolumeNode *node)\n\nadd slice glyph display nodes if not already present and return\nit\n"},
  {"GetDisplayScalarRange", PyvtkMRMLGlyphableVolumeDisplayNode_GetDisplayScalarRange, METH_VARARGS,
   "GetDisplayScalarRange(self, range:[float, float]) -> None\nC++: void GetDisplayScalarRange(double range[2]) override;\n\nDefines the expected range of the output data for given imageData\nafter having been mapped through the current display options\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLGlyphableVolumeDisplayNode_Doc =
  "vtkMRMLGlyphableVolumeDisplayNode - MRML node for representing a\nvolume display attributes.\n\n"
  "Superclass: vtkMRMLScalarVolumeDisplayNode\n\n"
  "vtkMRMLGlyphableVolumeDisplayNode nodes describe how volume is\n"
  "displayed.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLGlyphableVolumeDisplayNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLGlyphableVolumeDisplayNode", // tp_name
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
  PyvtkMRMLGlyphableVolumeDisplayNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLGlyphableVolumeDisplayNode_StaticNew()
{
  return vtkMRMLGlyphableVolumeDisplayNode::New();
}

PyObject *PyvtkMRMLGlyphableVolumeDisplayNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLGlyphableVolumeDisplayNode_Type, PyvtkMRMLGlyphableVolumeDisplayNode_Methods,
    "vtkMRMLGlyphableVolumeDisplayNode",
 &PyvtkMRMLGlyphableVolumeDisplayNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLScalarVolumeDisplayNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "visModeScalar", vtkMRMLGlyphableVolumeDisplayNode::visModeScalar },
        { "visModeGlyph", vtkMRMLGlyphableVolumeDisplayNode::visModeGlyph },
        { "visModeBoth", vtkMRMLGlyphableVolumeDisplayNode::visModeBoth },
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

void PyVTKAddFile_vtkMRMLGlyphableVolumeDisplayNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLGlyphableVolumeDisplayNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLGlyphableVolumeDisplayNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

