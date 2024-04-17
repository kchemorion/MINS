/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or https://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include "vtkMRMLColorLegendDisplayableManager.h"


vtkStandardNewMacro(vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory)

// Now create the functions to create overrides with.

      VTK_CREATE_CREATE_FUNCTION(vtkMRMLColorLegendDisplayableManager)

vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory::vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory()
{

    this->RegisterOverride("vtkMRMLColorLegendDisplayableManager",
                           "vtkMRMLColorLegendDisplayableManager",
                           "Override for  module", 1,
                           vtkObjectFactoryCreatevtkMRMLColorLegendDisplayableManager);
}

const char * vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkSlicerColorsModuleMRMLDisplayableManagerCount;

#ifdef vtkSlicerColorsModuleMRMLDisplayableManager_AUTOINIT
# define VTK_SLICER_COLORS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT
#else
# define VTK_SLICER_COLORS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT VTK_SLICER_COLORS_MODULE_MRMLDISPLAYABLEMANAGER_EXPORT
#endif

VTK_SLICER_COLORS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT void vtkSlicerColorsModuleMRMLDisplayableManager_AutoInit_Construct()
{
  if(++vtkSlicerColorsModuleMRMLDisplayableManagerCount == 1)
    {
    
    vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory* factory = vtkSlicerColorsModuleMRMLDisplayableManagerObjectFactory::New();
    if (factory)
      {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
      }
    }
}

VTK_SLICER_COLORS_MODULE_MRMLDISPLAYABLEMANAGER_MODULEINIT_EXPORT void vtkSlicerColorsModuleMRMLDisplayableManager_AutoInit_Destruct()
{
  if(--vtkSlicerColorsModuleMRMLDisplayableManagerCount == 0)
    {
    // Do not call vtkObjectFactory::UnRegisterFactory because
    // vtkObjectFactory.cxx statically unregisters all factories.
    }
}
