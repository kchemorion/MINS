/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkMRMLVolumeRenderingDisplayableManager.h"


vtkStandardNewMacro(vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory)

// Now create the functions to create overrides with.

      VTK_CREATE_CREATE_FUNCTION(vtkMRMLVolumeRenderingDisplayableManager)

vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory::vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory()
{

    this->RegisterOverride("vtkMRMLVolumeRenderingDisplayableManager",
                           "vtkMRMLVolumeRenderingDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLVolumeRenderingDisplayableManager);
}

const char * vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerCount;

#ifdef vtkSlicerVolumeRenderingModuleMRMLDisplayableManager_AUTOINIT
# define VTK_SLICER_VOLUMERENDERING_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT
#else
# define VTK_SLICER_VOLUMERENDERING_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT VTK_SLICER_VOLUMERENDERING_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT
#endif

VTK_SLICER_VOLUMERENDERING_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT void vtkSlicerVolumeRenderingModuleMRMLDisplayableManager_AutoInit_Construct()
{
  if(++vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerCount == 1)
    {
    
    vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory* factory = vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTK_SLICER_VOLUMERENDERING_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT void vtkSlicerVolumeRenderingModuleMRMLDisplayableManager_AutoInit_Destruct()
{
  if(--vtkSlicerVolumeRenderingModuleMRMLDisplayableManagerCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
