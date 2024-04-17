// python wrapper for vtkMRMLProceduralColorNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMRMLProceduralColorNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMRMLProceduralColorNode(PyObject *dict); }
extern "C" { PyObject *PyvtkMRMLProceduralColorNode_ClassNew(); }

#ifndef DECLARED_PyvtkMRMLColorNode_ClassNew
extern "C" { PyObject *PyvtkMRMLColorNode_ClassNew(); }
#define DECLARED_PyvtkMRMLColorNode_ClassNew
#endif

static PyObject *
PyvtkMRMLProceduralColorNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMRMLProceduralColorNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMRMLProceduralColorNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMRMLProceduralColorNode *tempr = vtkMRMLProceduralColorNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLProceduralColorNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMRMLProceduralColorNode::NewInstance());

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
PyvtkMRMLProceduralColorNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMRMLProceduralColorNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMRMLProceduralColorNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_CreateNodeInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateNodeInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLNode *tempr = (ap.IsBound() ?
      op->CreateNodeInstance() :
      op->vtkMRMLProceduralColorNode::CreateNodeInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

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
      op->vtkMRMLProceduralColorNode::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_GetNodeTagName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeTagName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeTagName() :
      op->vtkMRMLProceduralColorNode::GetNodeTagName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_UpdateScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

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
      op->vtkMRMLProceduralColorNode::UpdateScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_GetTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTypeAsString() :
      op->vtkMRMLProceduralColorNode::GetTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_ProcessMRMLEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessMRMLEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

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
      op->vtkMRMLProceduralColorNode::ProcessMRMLEvents(temp0, temp1, temp2);
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
PyvtkMRMLProceduralColorNode_GetColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColorTransferFunction *tempr = (ap.IsBound() ?
      op->GetColorTransferFunction() :
      op->vtkMRMLProceduralColorNode::GetColorTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_SetAndObserveColorTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAndObserveColorTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  vtkColorTransferFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction"))
  {
    if (ap.IsBound())
    {
      op->SetAndObserveColorTransferFunction(temp0);
    }
    else
    {
      op->vtkMRMLProceduralColorNode::SetAndObserveColorTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_IsColorMapEqual(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsColorMapEqual");

  vtkColorTransferFunction *temp0 = nullptr;
  vtkColorTransferFunction *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkColorTransferFunction") &&
      ap.GetVTKObject(temp1, "vtkColorTransferFunction"))
  {
    bool tempr = vtkMRMLProceduralColorNode::IsColorMapEqual(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkMRMLProceduralColorNode::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_GetScalarsToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetScalarsToColors() :
      op->vtkMRMLProceduralColorNode::GetScalarsToColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_SetNameFromColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNameFromColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetNameFromColor(temp0) :
      op->vtkMRMLProceduralColorNode::SetNameFromColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkMRMLProceduralColorNode::GetNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

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
      op->vtkMRMLProceduralColorNode::GetColor(temp0, temp1));

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
PyvtkMRMLProceduralColorNode_CreateDefaultStorageNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultStorageNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMRMLStorageNode *tempr = (ap.IsBound() ?
      op->CreateDefaultStorageNode() :
      op->vtkMRMLProceduralColorNode::CreateDefaultStorageNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_GetNumberOfTableValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTableValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfTableValues() :
      op->vtkMRMLProceduralColorNode::GetNumberOfTableValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMRMLProceduralColorNode_SetNumberOfTableValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTableValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMRMLProceduralColorNode *op = static_cast<vtkMRMLProceduralColorNode *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTableValues(temp0);
    }
    else
    {
      op->vtkMRMLProceduralColorNode::SetNumberOfTableValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMRMLProceduralColorNode_Methods[] = {
  {"IsTypeOf", PyvtkMRMLProceduralColorNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMRMLProceduralColorNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMRMLProceduralColorNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMRMLProceduralColorNode\nC++: static vtkMRMLProceduralColorNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMRMLProceduralColorNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMRMLProceduralColorNode\nC++: vtkMRMLProceduralColorNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMRMLProceduralColorNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMRMLProceduralColorNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateNodeInstance", PyvtkMRMLProceduralColorNode_CreateNodeInstance, METH_VARARGS,
   "CreateNodeInstance(self) -> vtkMRMLNode\nC++: vtkMRMLNode *CreateNodeInstance() override;\n\nMRMLNode methods\n"},
  {"Copy", PyvtkMRMLProceduralColorNode_Copy, METH_VARARGS,
   "Copy(self, node:vtkMRMLNode) -> None\nC++: void Copy(vtkMRMLNode *node) override;\n\nCopy the node's attributes to this object\n"},
  {"GetNodeTagName", PyvtkMRMLProceduralColorNode_GetNodeTagName, METH_VARARGS,
   "GetNodeTagName(self) -> str\nC++: const char *GetNodeTagName() override;\n\nGet node XML tag name (like Volume, Model)\n"},
  {"UpdateScene", PyvtkMRMLProceduralColorNode_UpdateScene, METH_VARARGS,
   "UpdateScene(self, scene:vtkMRMLScene) -> None\nC++: void UpdateScene(vtkMRMLScene *scene) override;\n\n\n"},
  {"GetTypeAsString", PyvtkMRMLProceduralColorNode_GetTypeAsString, METH_VARARGS,
   "GetTypeAsString(self) -> str\nC++: const char *GetTypeAsString() override;\n\nreturn a text string describing the color look up table type\n"},
  {"ProcessMRMLEvents", PyvtkMRMLProceduralColorNode_ProcessMRMLEvents, METH_VARARGS,
   "ProcessMRMLEvents(self, caller:vtkObject, event:int,\n    callData:Pointer) -> None\nC++: void ProcessMRMLEvents(vtkObject *caller,\n    unsigned long event, void *callData) override;\n\nalternative method to propagate events generated in Storage nodes\n"},
  {"GetColorTransferFunction", PyvtkMRMLProceduralColorNode_GetColorTransferFunction, METH_VARARGS,
   "GetColorTransferFunction(self) -> vtkColorTransferFunction\nC++: virtual vtkColorTransferFunction *GetColorTransferFunction()\n\nGet the color transfer function for this node\n\\sa ColorTransferFunction, GetScalarsToColors(),\nSetAndObserveColorTransferFunction()\n"},
  {"SetAndObserveColorTransferFunction", PyvtkMRMLProceduralColorNode_SetAndObserveColorTransferFunction, METH_VARARGS,
   "SetAndObserveColorTransferFunction(self,\n    ctf:vtkColorTransferFunction) -> None\nC++: virtual void SetAndObserveColorTransferFunction(\n    vtkColorTransferFunction *ctf)\n\nSet the color transfer function\n\\sa ColorTransferFunction, GetColorTransferFunction()\n"},
  {"IsColorMapEqual", PyvtkMRMLProceduralColorNode_IsColorMapEqual, METH_VARARGS,
   "IsColorMapEqual(tf1:vtkColorTransferFunction,\n    tf2:vtkColorTransferFunction) -> bool\nC++: static bool IsColorMapEqual(vtkColorTransferFunction *tf1,\n    vtkColorTransferFunction *tf2)\n\nCompare two color transfer functions Only compares the color map\n(x->RGB mapping)\n"},
  {"GetLookupTable", PyvtkMRMLProceduralColorNode_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkLookupTable\nC++: vtkLookupTable *GetLookupTable() override;\n\nReimplemented vtkMRMLColorNode::GetLookupTable() to convert the\ncontinuous color transfer function to a look up table with a\nnumber of entries defined by NumberOfTableValues\n\\sa ConvertedCTFtoLUT, SetNumberOfTableValues()\n"},
  {"GetScalarsToColors", PyvtkMRMLProceduralColorNode_GetScalarsToColors, METH_VARARGS,
   "GetScalarsToColors(self) -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetScalarsToColors() override;\n\nReimplemented vtkMRMLColorNode::GetScalarsToColors() to return\nthe transfer function instead of the empty lookup table\n\\sa ColorTransferFunction, GetColorTransferFunction()\n"},
  {"SetNameFromColor", PyvtkMRMLProceduralColorNode_SetNameFromColor, METH_VARARGS,
   "SetNameFromColor(self, index:int) -> bool\nC++: bool SetNameFromColor(int index) override;\n\nset up some names, going from the points defined in the transfer\nfunction\n\\sa vtkMRMLColorNode::SetColorName()\n"},
  {"GetNumberOfColors", PyvtkMRMLProceduralColorNode_GetNumberOfColors, METH_VARARGS,
   "GetNumberOfColors(self) -> int\nC++: int GetNumberOfColors() override;\n\nReturns how many nodes define the color transfer function\n"},
  {"GetColor", PyvtkMRMLProceduralColorNode_GetColor, METH_VARARGS,
   "GetColor(self, entry:int, color:[float, float, float, float])\n    -> bool\nC++: bool GetColor(int entry, double color[4]) override;\n\nRetrieve color transfer function entry value\n"},
  {"CreateDefaultStorageNode", PyvtkMRMLProceduralColorNode_CreateDefaultStorageNode, METH_VARARGS,
   "CreateDefaultStorageNode(self) -> vtkMRMLStorageNode\nC++: vtkMRMLStorageNode *CreateDefaultStorageNode() override;\n\nCreate default storage node or nullptr if does not have one\n"},
  {"GetNumberOfTableValues", PyvtkMRMLProceduralColorNode_GetNumberOfTableValues, METH_VARARGS,
   "GetNumberOfTableValues(self) -> int\nC++: virtual unsigned int GetNumberOfTableValues()\n\nGet number of entries used when discretizing the color transfer\nfunction into a lookup table\n\\sa SetNumberOfTableValues(), GetLookupTable()\n"},
  {"SetNumberOfTableValues", PyvtkMRMLProceduralColorNode_SetNumberOfTableValues, METH_VARARGS,
   "SetNumberOfTableValues(self, _arg:int) -> None\nC++: virtual void SetNumberOfTableValues(unsigned int _arg)\n\nSet number of entries used when discretizing the color transfer\nfunction into a lookup table\n\\sa GetNumberOfTableValues(), GetLookupTable()\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMRMLProceduralColorNode_Doc =
  "vtkMRMLProceduralColorNode - MRML node to represent procedurally\ndefined color information.\n\n"
  "Superclass: vtkMRMLColorNode\n\n"
  "Procedural nodes define methods that are used to map colors to scalar\n"
  "values. Usually they will incorporate a custom subclass of a\n"
  "vtkLookupTable, or a vtkColorTransferFunction.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMRMLProceduralColorNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "MRMLCorePython.vtkMRMLProceduralColorNode", // tp_name
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
  PyvtkMRMLProceduralColorNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMRMLProceduralColorNode_StaticNew()
{
  return vtkMRMLProceduralColorNode::New();
}

PyObject *PyvtkMRMLProceduralColorNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMRMLProceduralColorNode_Type, PyvtkMRMLProceduralColorNode_Methods,
    "vtkMRMLProceduralColorNode",
 &PyvtkMRMLProceduralColorNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMRMLColorNode_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  o = PyLong_FromLong(vtkMRMLProceduralColorNode::DisplayModifiedEvent);
  if (o)
  {
    PyDict_SetItemString(d, "DisplayModifiedEvent", o);
    Py_DECREF(o);
  }
  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMRMLProceduralColorNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMRMLProceduralColorNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMRMLProceduralColorNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

