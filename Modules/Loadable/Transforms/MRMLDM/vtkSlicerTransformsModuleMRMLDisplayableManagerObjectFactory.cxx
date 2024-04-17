/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkMRMLTransformsDisplayableManager2D.h"
#include "vtkMRMLTransformsDisplayableManager3D.h"
#include "vtkMRMLLinearTransformsDisplayableManager3D.h"


vtkStandardNewMacro(vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory)

// Now create the functions to create overrides with.

      VTK_CREATE_CREATE_FUNCTION(vtkMRMLTransformsDisplayableManager2D)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLTransformsDisplayableManager3D)
      VTK_CREATE_CREATE_FUNCTION(vtkMRMLLinearTransformsDisplayableManager3D)

vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory::vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory()
{

    this->RegisterOverride("vtkMRMLTransformsDisplayableManager2D",
                           "vtkMRMLTransformsDisplayableManager2D",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLTransformsDisplayableManager2D);
    this->RegisterOverride("vtkMRMLTransformsDisplayableManager3D",
                           "vtkMRMLTransformsDisplayableManager3D",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLTransformsDisplayableManager3D);
    this->RegisterOverride("vtkMRMLLinearTransformsDisplayableManager3D",
                           "vtkMRMLLinearTransformsDisplayableManager3D",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLLinearTransformsDisplayableManager3D);
}

const char * vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkSlicerTransformsModuleMRMLDisplayableManagerCount;

#ifdef vtkSlicerTransformsModuleMRMLDisplayableManager_AUTOINIT
# define VTK_SLICER_TRANSFORMS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT
#else
# define VTK_SLICER_TRANSFORMS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT VTK_SLICER_TRANSFORMS_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT
#endif

VTK_SLICER_TRANSFORMS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT void vtkSlicerTransformsModuleMRMLDisplayableManager_AutoInit_Construct()
{
  if(++vtkSlicerTransformsModuleMRMLDisplayableManagerCount == 1)
    {
    
    vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory* factory = vtkSlicerTransformsModuleMRMLDisplayableManagerObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTK_SLICER_TRANSFORMS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT void vtkSlicerTransformsModuleMRMLDisplayableManager_AutoInit_Destruct()
{
  if(--vtkSlicerTransformsModuleMRMLDisplayableManagerCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
