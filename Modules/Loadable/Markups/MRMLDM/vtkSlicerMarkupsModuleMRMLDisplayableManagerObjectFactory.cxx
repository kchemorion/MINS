/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkMRMLMarkupsDisplayableManager.h"


vtkStandardNewMacro(vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory)

// Now create the functions to create overrides with.

      VTK_CREATE_CREATE_FUNCTION(vtkMRMLMarkupsDisplayableManager)

vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory::vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory()
{

    this->RegisterOverride("vtkMRMLMarkupsDisplayableManager",
                           "vtkMRMLMarkupsDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLMarkupsDisplayableManager);
}

const char * vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkSlicerMarkupsModuleMRMLDisplayableManagerCount;

#ifdef vtkSlicerMarkupsModuleMRMLDisplayableManager_AUTOINIT
# define VTK_SLICER_MARKUPS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT
#else
# define VTK_SLICER_MARKUPS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT VTK_SLICER_MARKUPS_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT
#endif

VTK_SLICER_MARKUPS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT void vtkSlicerMarkupsModuleMRMLDisplayableManager_AutoInit_Construct()
{
  if(++vtkSlicerMarkupsModuleMRMLDisplayableManagerCount == 1)
    {
    
    vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory* factory = vtkSlicerMarkupsModuleMRMLDisplayableManagerObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTK_SLICER_MARKUPS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT void vtkSlicerMarkupsModuleMRMLDisplayableManager_AutoInit_Destruct()
{
  if(--vtkSlicerMarkupsModuleMRMLDisplayableManagerCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
